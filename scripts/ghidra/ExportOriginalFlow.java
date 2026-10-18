// A separate, explicitly hypothetical initial-image analysis. Never patches bytes.
// @category ESignRecovery
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.JumpTable;
import ghidra.program.model.symbol.SourceType;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

public class ExportOriginalFlow extends GhidraScript {
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 4) throw new IllegalArgumentException("flow.tsv entry output.c name");
        Address entry = toAddr(args[1]);
        AddressSet body = new AddressSet();
        Map<Address, ArrayList<Address>> jumps = new LinkedHashMap<>();
        for (String line : Files.readAllLines(Path.of(args[0]), StandardCharsets.UTF_8)) {
            if (line.startsWith("address\t") || line.isBlank()) continue;
            String[] fields = line.split("\t", -1);
            Address address = toAddr(fields[0]);
            if (getInstructionAt(address) == null) disassemble(address);
            if (getInstructionAt(address) == null) throw new IllegalStateException("Undecoded " + address);
            body.addRange(address, address.add(3));
            if (fields.length > 1 && !fields[1].isBlank()) {
                ArrayList<Address> targets = new ArrayList<>();
                for (String target : fields[1].split(",")) targets.add(toAddr(target));
                jumps.put(address, targets);
            }
        }
        FunctionManager manager = currentProgram.getFunctionManager();
        List<Address> remove = new ArrayList<>();
        FunctionIterator functions = manager.getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (function.getBody().intersects(body)) remove.add(function.getEntryPoint());
        }
        for (Address address : remove) manager.removeFunction(address);
        Function function = manager.createFunction(args[3], entry, body, SourceType.ANALYSIS);
        for (Map.Entry<Address, ArrayList<Address>> item : jumps.entrySet()) {
            JumpTable table = new JumpTable(item.getKey(), item.getValue(), true, 0);
            table.writeOverride(function);
        }
        DecompInterface decompiler = new DecompInterface();
        try {
            if (!decompiler.openProgram(currentProgram)) throw new IllegalStateException("Cannot open decompiler");
            DecompileResults result = decompiler.decompileFunction(function, 120, monitor);
            if (!result.decompileCompleted() || result.getDecompiledFunction() == null)
                throw new IllegalStateException(result.getErrorMessage());
            String header = "/* ORIGINAL-BYTE INITIAL-POINTER ANALYSIS — NOT ORIGINAL SOURCE OR VERIFIED BEHAVIOR.\n"
                + " * No executable bytes were changed. Jump overrides belong only to this analysis database.\n"
                + " * Initial table values, ABI preservation and call-return behavior are assumptions.\n"
                + " * Function body derived from recover_method_flow.py; original source boundaries unknown.\n */\n";
            Files.writeString(Path.of(args[2]), header + result.getDecompiledFunction().getC(), StandardCharsets.UTF_8);
            println("Exported " + function.getName() + " from " + body.getNumAddresses() + " original byte addresses, with " + jumps.size() + " jump hypotheses.");
        } finally { decompiler.dispose(); }
    }
}
