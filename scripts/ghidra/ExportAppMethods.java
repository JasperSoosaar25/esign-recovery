// Export original-byte method bodies using separately recorded static jump hypotheses.
// @category ESignRecovery
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.JumpTable;
import ghidra.program.model.symbol.SourceType;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.io.*;
import java.util.*;

public class ExportAppMethods extends GhidraScript {
    private String clean(String value) { return value.replace('\t',' ').replace('\n',' ').replace('\r',' '); }
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2 || args.length > 3) throw new IllegalArgumentException("jobs.tsv output-directory [retry]");
        boolean retry = args.length == 3 && args[2].equals("retry");
        Path output = Path.of(args[1]);
        Files.createDirectories(output.resolve("methods"));
        Files.createDirectories(output.resolve("status"));
        List<String> jobs = Files.readAllLines(Path.of(args[0]), StandardCharsets.UTF_8);
        DecompInterface decompiler = new DecompInterface();
        if (!decompiler.openProgram(currentProgram)) throw new IllegalStateException("Cannot open decompiler");
        int completed = 0, failed = 0;
        try (BufferedWriter index = Files.newBufferedWriter(output.resolve("results.tsv"),StandardCharsets.UTF_8)) {
            index.write("index\tclass\tkind\tselector\tabi\tentry\tinstructions\tunresolved_jumps\tstatus\toutput\terror\n");
            for (int i=1;i<jobs.size();i++) {
                monitor.checkCancelled();
                String[] job = jobs.get(i).split("\t",-1);
                String relative = "methods/method-"+job[0]+".pseudo.c";
                if(retry && Files.exists(output.resolve(relative)) &&
                    !Files.readString(output.resolve(relative)).startsWith("/* DECOMPILATION FAILED:"))continue;
                String status = "failed", error = "";
                try {
                    Address entry = toAddr(job[5]);
                    AddressSet body = new AddressSet();
                    Map<Address, ArrayList<Address>> jumps = new LinkedHashMap<>();
                    for (String row: Files.readAllLines(Path.of(job[6]),StandardCharsets.UTF_8)) {
                        if (row.startsWith("address\t") || row.isBlank()) continue;
                        String[] fields=row.split("\t",-1);
                        Address address=toAddr(fields[0]);
                        body.addRange(address,address.add(3));
                        if (fields.length>1 && !fields[1].isBlank()) {
                            ArrayList<Address> targets=new ArrayList<>();
                            for(String target:fields[1].split(",")) targets.add(toAddr(target));
                            jumps.put(address,targets);
                        }
                    }
                    AddressRangeIterator ranges=body.getAddressRanges();
                    while(ranges.hasNext()) {
                        Address start=ranges.next().getMinAddress();
                        if(getInstructionAt(start)==null)
                            new DisassembleCommand(start,body,true).applyTo(currentProgram,monitor);
                    }
                    AddressIterator addresses=body.getAddresses(true);
                    while(addresses.hasNext()) {
                        Address address=addresses.next();
                        if(address.getOffset()%4==0 && getInstructionAt(address)==null) {
                            new DisassembleCommand(address,body,true).applyTo(currentProgram,monitor);
                            if(getInstructionAt(address)==null)throw new IllegalStateException("Undecoded original word at "+address);
                        }
                    }
                    FunctionManager manager=currentProgram.getFunctionManager();
                    Set<Address> remove=new LinkedHashSet<>();
                    AddressRangeIterator overlap=body.getAddressRanges();
                    while(overlap.hasNext()) {
                        AddressRange range=overlap.next();
                        Function at=manager.getFunctionContaining(range.getMinAddress());
                        if(at!=null)remove.add(at.getEntryPoint());
                        FunctionIterator functions=manager.getFunctions(new AddressSet(range),true);
                        while(functions.hasNext())remove.add(functions.next().getEntryPoint());
                    }
                    for(Address address:remove)manager.removeFunction(address);
                    Function function=manager.createFunction("Recovered_"+job[1]+"_m"+job[0],entry,body,SourceType.ANALYSIS);
                    for(Map.Entry<Address,ArrayList<Address>> item:jumps.entrySet())
                        new JumpTable(item.getKey(),item.getValue(),true,0).writeOverride(function);
                    decompiler.flushCache();
                    DecompileResults result=decompiler.decompileFunction(function,retry ? 120 : 45,monitor);
                    if(!result.decompileCompleted() || result.getDecompiledFunction()==null)
                        throw new IllegalStateException(result.getErrorMessage());
                    String header="/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.\n"
                        +" * Method: "+job[2]+"["+job[1]+" "+job[3]+"]\n"
                        +" * Entry: "+job[5]+"; original ABI: "+job[4]+"\n"
                        +" * Original instructions in modeled body: "+job[7]+"; unresolved jumps: "+job[8]+"\n"
                        +" * Initial pointer-table values and call returns are assumptions. No original bytes patched.\n"
                        +" * Decompiler-inferred C types and function signature are not verified source declarations.\n */\n";
                    Files.writeString(output.resolve(relative),header+result.getDecompiledFunction().getC(),StandardCharsets.UTF_8);
                    status="exported"; completed++;
                } catch(Exception exception) {
                    error=clean(exception.toString()); failed++;
                    Files.writeString(output.resolve(relative),"/* DECOMPILATION FAILED: "+error.replace("*/","* /")+" */\n",StandardCharsets.UTF_8);
                    decompiler.dispose();
                    decompiler=new DecompInterface();
                    if(!decompiler.openProgram(currentProgram))throw new IllegalStateException("Cannot restart decompiler");
                }
                String statusRow=String.join("\t",job[0],job[1],job[2],job[3],job[4],job[5],job[7],job[8],status,relative,error)+"\n";
                Files.writeString(output.resolve("status").resolve(job[0]+".tsv"),statusRow,StandardCharsets.UTF_8);
                index.write(statusRow);
                index.flush();
                if(i%50==0 || i==jobs.size()-1)println("ESign method export "+i+"/"+(jobs.size()-1)+"; exported="+completed+"; failed="+failed);
            }
        } finally { decompiler.dispose(); }
        println("ESign complete method pass: exported="+completed+" failed="+failed);
    }
}
