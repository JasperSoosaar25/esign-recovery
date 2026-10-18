// Export automatically decompiled pseudocode and explicit per-function outcomes.
// @category ESignRecovery
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.SourceType;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;
import java.util.concurrent.*;

public class ExportRecovery extends GhidraScript {
    private static class Item {
        Function f; int number;
        Item(Function f, int n) { this.f=f; this.number=n; }
    }
    private static class Output {
        String code, index, failure;
        boolean ok;
    }
    private String safe(String s) { return s.replace("\t", " ").replace("\n", " ").replace("\r", " "); }
    public void run() throws Exception {
        String[] args=getScriptArgs();
        Path root=Paths.get(args[0]); Files.createDirectories(root);
        Path methodMap=args.length>1?Paths.get(args[1]):root.getParent().resolve("objc/methods.tsv");
        int named=0,missing=0;
        if(Files.isRegularFile(methodMap)) {
            List<String> rows=Files.readAllLines(methodMap,StandardCharsets.UTF_8);
            // First-party-prefix candidates get the stable primary name if
            // several selectors share the same implementation address.
            rows.sort((a,b)->Boolean.compare(!(a.contains("\tYYY")||a.contains("\tAppDelegate\t")),!(b.contains("\tYYY")||b.contains("\tAppDelegate\t"))));
            HashSet<String> seen=new HashSet<>();
            for(String row:rows) {
                String[] fields=row.split("\t",-1); if(fields.length<5||!fields[0].startsWith("0x")||!seen.add(fields[0]))continue;
                var address=toAddr(Long.parseUnsignedLong(fields[0].substring(2),16));
                Function function=getFunctionAt(address);
                String name=(fields[1]+(fields[2].equals("+")?"__class__":"__instance__")+fields[3]).replaceAll("[^A-Za-z0-9_]","_");
                if(function==null) { disassemble(address); function=createFunction(address,name); }
                if(function==null) {missing++;continue;}
                try {function.setName(name,SourceType.USER_DEFINED);function.setComment("Recovered runtime selector: "+fields[2]+"["+fields[1]+" "+fields[3]+"]\nOriginal ABI encoding: "+fields[4]+"\nMetadata-derived name; original source file and argument names are unavailable.");named++;}
                catch(Exception error){println("RECOVERY metadata naming warning "+fields[0]+": "+error);}
            }
        }
        println("RECOVERY: metadata method implementations named="+named+" not-created="+missing);
        Path chunks=root.resolve("native"); Files.createDirectories(chunks);
        Path failed=root.resolve("failed-disassembly"); Files.createDirectories(failed);
        ArrayList<Item> list=new ArrayList<>();
        FunctionIterator it=currentProgram.getFunctionManager().getFunctions(true);
        while(it.hasNext()) { Function f=it.next(); if(!f.isExternal()) list.add(new Item(f,list.size())); }
        println("RECOVERY: exporting "+list.size()+" functions (including thunks) with 4 decompiler workers");
        ExecutorService workers=Executors.newFixedThreadPool(4);
        ThreadLocal<DecompInterface> decomp=ThreadLocal.withInitial(()->{
            DecompInterface d=new DecompInterface();
            DecompileOptions opts=new DecompileOptions(); opts.grabFromProgram(currentProgram);
            d.setOptions(opts); d.toggleCCode(true); d.toggleSyntaxTree(false);
            d.openProgram(currentProgram); return d;
        });
        ArrayList<DecompInterface> interfaces=new ArrayList<>();
        ArrayDeque<Future<Output>> pending=new ArrayDeque<>();
        int good=0,bad=0,processed=0;
        try(PrintWriter index=new PrintWriter(Files.newBufferedWriter(root.resolve("functions.tsv"),StandardCharsets.UTF_8));
            PrintWriter failures=new PrintWriter(Files.newBufferedWriter(root.resolve("failures.tsv"),StandardCharsets.UTF_8))) {
            index.println("address\tname\tstatus\tfile\tbytes"); failures.println("address\tname\terror");
            PrintWriter code=null; int part=-1;
            try {
                for(int submit=0; submit<list.size() || !pending.isEmpty();) {
                    while(submit<list.size() && pending.size()<16) {
                        Item item=list.get(submit++);
                        pending.add(workers.submit(()->{
                            Output out=new Output(); Function f=item.f;
                            DecompInterface d=decomp.get();
                            synchronized(interfaces) { if(!interfaces.contains(d)) interfaces.add(d); }
                            String path=String.format("native/part-%04d.c",item.number/250);
                            String label=safe(f.getName(true));
                            String header="\n/* Address: 0x"+f.getEntryPoint()+" | "+label.replace("*/","* /")+" | bytes: "+f.getBody().getNumAddresses()+" */\n";
                            try {
                                DecompileResults result=d.decompileFunction(f,45,monitor);
                                if(result.decompileCompleted() && result.getDecompiledFunction()!=null) {
                                    out.ok=true; out.code=header+result.getDecompiledFunction().getC()+"\n";
                                } else out.failure=safe(result.getErrorMessage());
                            } catch(Exception e) { out.failure=safe(e.toString()); }
                            if(!out.ok) out.code=header+"/* DECOMPILATION FAILED: "+String.valueOf(out.failure).replace("*/","* /")+" */\n";
                            out.index="0x"+f.getEntryPoint()+"\t"+label+"\t"+(out.ok?"decompiled":"failed")+"\t"+path+"\t"+f.getBody().getNumAddresses();
                            if(!out.ok) {
                                StringBuilder a=new StringBuilder();
                                InstructionIterator ii=currentProgram.getListing().getInstructions(f.getBody(),true);
                                while(ii.hasNext()) { Instruction in=ii.next(); a.append(in.getAddress()).append("  ").append(in.toString()).append("\n"); }
                                Files.writeString(failed.resolve(f.getEntryPoint().toString()+".asm"),a.toString());
                            }
                            return out;
                        }));
                    }
                    monitor.checkCancelled();
                    Output out=pending.remove().get();
                    int nextPart=processed/250;
                    if(nextPart!=part) {
                        if(code!=null) { code.close(); if(code.checkError())throw new IOException("Incomplete native chunk write"); } part=nextPart;
                        code=new PrintWriter(Files.newBufferedWriter(chunks.resolve(String.format("part-%04d.c",part)),StandardCharsets.UTF_8));
                        code.println("/* MACHINE-GENERATED GHIDRA PSEUDOCODE — NOT ORIGINAL OR BUILDABLE SOURCE.\n * ESign 5.0.2 executable SHA256 809ce5d189ac6e5e4479eda7a2fdfab886a03363fce7c40e06d2a80bb7306154\n * Address/name provenance is recorded in ../functions.tsv. Unknown types and inaccurate calls remain.\n */");
                    }
                    code.print(out.code); index.println(out.index);
                    if(out.ok)good++;else {bad++;failures.println(out.index.split("\t")[0]+"\t"+out.index.split("\t")[1]+"\t"+out.failure);}
                    processed++;
                    if(processed%250==0) { code.flush();index.flush();failures.flush();if(code.checkError()||index.checkError()||failures.checkError())throw new IOException("Incomplete recovery output write");println("RECOVERY: "+processed+"/"+list.size()+" functions; success="+good+" failed="+bad); }
                }
            } finally {if(code!=null) { code.close(); if(code.checkError())throw new IOException("Incomplete final chunk write"); }}
        } finally { workers.shutdownNow(); for(DecompInterface d:interfaces)d.dispose(); }
        String summary="{\"ghidra_version\":\"12.1.4\",\"total_functions\":"+list.size()+",\"decompiled\":"+good+",\"failed\":"+bad+",\"original_source\":false,\"buildable_source\":false}\n";
        Files.writeString(root.resolve("summary.json"),summary); println("RECOVERY COMPLETE: "+summary);
    }
}
