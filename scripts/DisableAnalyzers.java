//@category Decompile
import ghidra.app.script.GhidraScript;

public class DisableAnalyzers extends GhidraScript {
    @Override
    public void run() throws Exception {
        setAnalysisOption(currentProgram, "Decompiler Parameter ID", "false");
    }
}
