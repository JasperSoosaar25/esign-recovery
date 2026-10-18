// Re-export complete chunks when an output/index integrity audit finds truncation.
// @category ESignRecovery
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.Function;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;

public class RepairExports extends GhidraScript {
    public void run() throws Exception {
        String[] args = getScriptArgs();
        Path root = Paths.get(args[0]);
        Set<String> selected = new HashSet<>(Files.readAllLines(Paths.get(args[1])));
        LinkedHashMap<String, List<String[]>> chunks = new LinkedHashMap<>();
        for (String row : Files.readAllLines(root.resolve("functions.tsv"))) {
            String[] cells = row.split("\t", -1);
            if (cells.length >= 5 && selected.contains(cells[3]))
                chunks.computeIfAbsent(cells[3], k -> new ArrayList<>()).add(cells);
        }
        DecompInterface decomp = new DecompInterface();
        DecompileOptions options = new DecompileOptions();
        options.grabFromProgram(currentProgram);
        decomp.setOptions(options);
        decomp.toggleCCode(true);
        decomp.openProgram(currentProgram);
        int completed = 0;
        try {
            for (var entry : chunks.entrySet()) {
                StringBuilder output = new StringBuilder("/* MACHINE-GENERATED GHIDRA PSEUDOCODE — NOT ORIGINAL OR BUILDABLE SOURCE.\n * ESign 5.0.2 executable SHA256 809ce5d189ac6e5e4479eda7a2fdfab886a03363fce7c40e06d2a80bb7306154\n * Complete chunk re-export after an output/index integrity audit.\n */\n");
                for (String[] cells : entry.getValue()) {
                    monitor.checkCancelled();
                    Function function = getFunctionAt(toAddr(Long.parseUnsignedLong(cells[0].substring(2), 16)));
                    if (function == null) {
                        var address = toAddr(Long.parseUnsignedLong(cells[0].substring(2), 16));
                        disassemble(address);
                        function = createFunction(address, cells[1].replaceAll("[^A-Za-z0-9_]", "_"));
                    }
                    if (function == null) throw new IllegalStateException("Function missing: " + cells[0]);
                    DecompileResults result = decomp.decompileFunction(function, 90, monitor);
                    if (!result.decompileCompleted() || result.getDecompiledFunction() == null)
                        throw new IllegalStateException("Re-export failed: " + cells[0] + " " + result.getErrorMessage());
                    output.append("\n/* Address: ").append(cells[0]).append(" | ").append(cells[1].replace("*/", "* /"))
                        .append(" | bytes: ").append(cells[4]).append(" */\n")
                        .append(result.getDecompiledFunction().getC()).append("\n");
                    completed++;
                    if (completed % 100 == 0) println("REPAIR exported " + completed + " functions");
                }
                Path destination = root.resolve(entry.getKey());
                Path temporary = destination.resolveSibling(destination.getFileName() + ".repair");
                Files.writeString(temporary, output.toString(), StandardCharsets.UTF_8);
                if (Files.size(temporary) != output.toString().getBytes(StandardCharsets.UTF_8).length)
                    throw new IllegalStateException("Incomplete output write");
                Files.move(temporary, destination, StandardCopyOption.REPLACE_EXISTING);
                println("REPAIR wrote " + entry.getKey() + " completely");
            }
        } finally {
            decomp.dispose();
        }
        println("REPAIR COMPLETE: " + completed + " functions in " + chunks.size() + " chunks");
    }
}
