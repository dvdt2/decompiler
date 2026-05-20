//@category Decompile
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.util.task.ConsoleTaskMonitor;
import java.io.*;
import java.nio.file.*;
import java.util.*;
import java.util.concurrent.*;

public class DecompileAll extends GhidraScript {
    @Override
    public void run() throws Exception {
        String outPath = new String(Files.readAllBytes(Paths.get("/tmp/ghidra_out_path"))).trim();
        println("Output path: " + outPath);

        FunctionManager fm = currentProgram.getFunctionManager();
        List<Function> funcs = new ArrayList<>();
        for (Function f : fm.getFunctions(true)) {
            if (f.isExternal() || f.isThunk()) continue;
            funcs.add(f);
        }
        int total = funcs.size();
        println("Decompiling " + total + " exported functions...");

        int threads = Math.max(2, Runtime.getRuntime().availableProcessors());
        ExecutorService pool = Executors.newFixedThreadPool(threads);
        ThreadLocal<DecompInterface> tlDecomp = ThreadLocal.withInitial(() -> {
            DecompInterface d = new DecompInterface();
            d.openProgram(currentProgram);
            return d;
        });

        String[] results = new String[total];
        List<Future<?>> futures = new ArrayList<>(total);
        for (int i = 0; i < total; i++) {
            final int idx = i;
            final Function f = funcs.get(i);
            futures.add(pool.submit(() -> {
                DecompInterface d = tlDecomp.get();
                DecompileResults res = d.decompileFunction(f, 60, new ConsoleTaskMonitor());
                if (res != null && res.decompileCompleted()) {
                    results[idx] = "// === " + f.getName() + " @ " + f.getEntryPoint() + " ===\n"
                                 + res.getDecompiledFunction().getC() + "\n";
                }
            }));
        }
        for (Future<?> fut : futures) fut.get();
        pool.shutdown();

        int count = 0;
        try (PrintWriter pw = new PrintWriter(new FileWriter(outPath))) {
            pw.println("// Decompiled by Ghidra: " + currentProgram.getName());
            pw.println();
            for (String r : results) {
                if (r != null) { pw.println(r); count++; }
            }
        }
        println("Decompiled " + count + "/" + total + " functions to " + outPath);
    }
}
