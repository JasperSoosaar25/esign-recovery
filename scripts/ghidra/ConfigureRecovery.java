// Optional workaround for a Ghidra 12.1.4 Objective-C message-analyzer exception.
// @category ESignRecovery
import ghidra.app.script.GhidraScript;
public class ConfigureRecovery extends GhidraScript {
    public void run() throws Exception {
        setAnalysisOption(currentProgram,"Objective-C Message Analyzer","false");
        println("Objective-C Message Analyzer disabled; runtime names are applied independently by ExportRecovery.java.");
    }
}
