//@category Decompile
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.util.task.ConsoleTaskMonitor;
import java.io.*;
import java.nio.file.*;

public class DecompileAll extends GhidraScript {
    @Override
    public void run() throws Exception {
        String outPath = new String(Files.readAllBytes(Paths.get("/tmp/ghidra_out_path"))).trim();
        println("Output path: " + outPath);
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);
        FunctionManager fm = currentProgram.getFunctionManager();
        int count = 0;
        try (PrintWriter pw = new PrintWriter(new FileWriter(outPath))) {
            pw.println("// Decompiled by Ghidra: " + currentProgram.getName());
            pw.println();
            for (Function f : fm.getFunctions(true)) {
                if (f.isExternal() || f.isThunk()) continue;
                DecompileResults res = decomp.decompileFunction(f, 60, new ConsoleTaskMonitor());
                if (res != null && res.decompileCompleted()) {
                    pw.println("// === " + f.getName() + " @ " + f.getEntryPoint() + " ===");
                    pw.println(res.getDecompiledFunction().getC());
                    pw.println();
                    count++;
                }
            }
        }
        decomp.dispose();
        println("Decompiled " + count + " functions to " + outPath);
    }
}
