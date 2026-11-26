// Ghidra headless post-script for tools/gen_layout.py.
//
// 1. Optionally reads a candidate list (KH2_CANDIDATES env var: one hex address per line)
//    and, for every candidate that is not already inside a function body, disassembles at
//    that address and asks Ghidra to create a function there (CFG follow gives the body).
// 2. Exports every function in the program to KH2_BODIES_OUT (TSV):
//       entry  name  thunk  ranges
//    where ranges is a comma-separated list of start-end (end exclusive, hex) covering
//    the whole function body (all address ranges, not just entry..max).
//
// Run (see docs/layout-regen.md):
//   analyzeHeadless <projdir> <proj> -process SLPM_666.75 -noanalysis \
//     -scriptPath tools/ghidra -postScript ExportFunctionBodies.java
//@category KH2
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import java.io.*;
import java.nio.file.*;
import java.util.*;

public class ExportFunctionBodies extends GhidraScript {
    @Override
    public void run() throws Exception {
        FunctionManager fm = currentProgram.getFunctionManager();
        Listing listing = currentProgram.getListing();
        println("KH2_FUNCTION_COUNT_BEFORE " + fm.getFunctionCount());

        String candPath = System.getenv("KH2_CANDIDATES");
        int created = 0, skipped = 0, failed = 0;
        if (candPath != null && !candPath.isEmpty()) {
            List<String> lines = Files.readAllLines(Paths.get(candPath));
            AddressSpace sp = currentProgram.getAddressFactory().getDefaultAddressSpace();
            for (String ln : lines) {
                ln = ln.trim();
                if (ln.isEmpty() || ln.startsWith("#")) continue;
                long v = Long.parseLong(ln.replace("0x", ""), 16);
                Address a = sp.getAddress(v);
                if (fm.getFunctionContaining(a) != null) { skipped++; continue; }
                if (listing.getInstructionAt(a) == null) {
                    // clear any data that was defined here (jump-table guesses etc.)
                    Data d = listing.getDefinedDataContaining(a);
                    if (d != null) listing.clearCodeUnits(d.getMinAddress(), d.getMaxAddress(), false);
                    DisassembleCommand dc = new DisassembleCommand(a, null, true);
                    dc.applyTo(currentProgram, monitor);
                }
                if (listing.getInstructionAt(a) == null) { failed++; println("KH2_NOCODE " + a); continue; }
                CreateFunctionCmd cmd = new CreateFunctionCmd(a);
                if (cmd.applyTo(currentProgram, monitor)) created++;
                else { failed++; println("KH2_CREATE_FAILED " + a + " " + cmd.getStatusMsg()); }
            }
            println("KH2_CANDIDATES created=" + created + " skipped(inside body)=" + skipped + " failed=" + failed);
        }

        String out = System.getenv("KH2_BODIES_OUT");
        if (out == null || out.isEmpty()) out = "ghidra_bodies.tsv";
        int n = 0;
        try (PrintWriter pw = new PrintWriter(new FileWriter(out))) {
            pw.println("entry\tname\tthunk\tranges");
            for (Function f : fm.getFunctions(true)) {
                StringBuilder sb = new StringBuilder();
                for (AddressRange r : f.getBody()) {
                    if (sb.length() > 0) sb.append(',');
                    sb.append(String.format("%08x-%08x", r.getMinAddress().getOffset(), r.getMaxAddress().getOffset() + 1));
                }
                pw.println(String.format("%08x\t%s\t%d\t%s", f.getEntryPoint().getOffset(), f.getName(), f.isThunk() ? 1 : 0, sb));
                n++;
            }
        }
        println("KH2_FUNCTION_COUNT_AFTER " + n);
        println("KH2_BODIES_WRITTEN " + out);
    }
}
