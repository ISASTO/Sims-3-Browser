// Export discovered native functions and explicit analysis/coverage limitations.
//@category Sims3
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.*;
import com.google.gson.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.app.util.exporter.GzfExporter;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.*;

public class NativeExport extends GhidraScript {
    private static final String WARNING = "/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.\n" +
        " * Function boundaries, types, indirect calls, and data still require validation. */\n\n";
    @Override
    public void run() throws Exception {
        Path output = Path.of(getScriptArgs()[0]);
        Files.createDirectories(output.resolve("decompiled"));
        Gson gson = new GsonBuilder().setPrettyPrinting().disableHtmlEscaping().create();
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram)) throw new IllegalStateException(decompiler.getLastMessage());
        JsonArray functions = new JsonArray();
        JsonArray failures = new JsonArray();
        AddressSet covered = new AddressSet();
        int total = 0, complete = 0, thunks = 0, warnings = 0, indirectCalls = 0, part = 0;
        StringBuilder chunk = new StringBuilder(WARNING);
        long started = System.nanoTime();
        try {
            FunctionIterator iterator = currentProgram.getFunctionManager().getFunctions(true);
            while (iterator.hasNext() && !monitor.isCancelled()) {
                Function function = iterator.next();
                if (function.isExternal()) continue;
                total++;
                JsonObject item = new JsonObject();
                item.addProperty("name", function.getName());
                item.addProperty("address", function.getEntryPoint().toString());
                java.math.BigInteger mode = currentProgram.getProgramContext().getValue(
                    currentProgram.getLanguage().getRegister("TMode"), function.getEntryPoint(), false);
                item.addProperty("thumb", mode != null && mode.signum() != 0);
                item.addProperty("bodyBytes", function.getBody().getNumAddresses());
                item.addProperty("signature", function.getSignature().getPrototypeString());
                item.addProperty("thunk", function.isThunk());
                covered.add(function.getBody());
                if (function.isThunk()) { thunks++; functions.add(item); continue; }
                DecompileResults result = decompiler.decompileFunction(function, 45, monitor);
                item.addProperty("decompiled", result.decompileCompleted());
                item.addProperty("message", result.getErrorMessage());
                String filename = String.format("decompiled/part-%03d.c", part);
                item.addProperty("file", filename);
                if (result.decompileCompleted() && result.getDecompiledFunction() != null) {
                    complete++;
                    String code = result.getDecompiledFunction().getC();
                    item.addProperty("decompiledSignature", result.getDecompiledFunction().getSignature());
                    int count = code.split("WARNING:", -1).length - 1;
                    warnings += count;
                    item.addProperty("warnings", count);
                    int indirect = 0;
                    HighFunction high = result.getHighFunction();
                    if (high != null) {
                        Iterator<PcodeOpAST> ops = high.getPcodeOps();
                        while (ops.hasNext()) if (ops.next().getOpcode() == PcodeOp.CALLIND) indirect++;
                    }
                    item.addProperty("indirectCalls", indirect);
                    indirectCalls += indirect;
                    JsonArray callees = new JsonArray();
                    for (Function callee : function.getCalledFunctions(monitor)) {
                        JsonObject call = new JsonObject();
                        call.addProperty("name", callee.getName());
                        call.addProperty("address", callee.getEntryPoint().toString());
                        callees.add(call);
                    }
                    item.add("callees", callees);
                    chunk.append("// Address: ").append(function.getEntryPoint()).append("\n").append(code).append("\n\n");
                } else {
                    JsonObject failure = new JsonObject();
                    failure.addProperty("address", function.getEntryPoint().toString());
                    failure.addProperty("name", function.getName());
                    failure.addProperty("error", result.getErrorMessage());
                    failures.add(failure);
                }
                functions.add(item);
                if (chunk.length() > 350000) {
                    Files.writeString(output.resolve(filename), chunk, StandardCharsets.UTF_8);
                    chunk = new StringBuilder(WARNING);
                    part++;
                }
                if (total % 200 == 0) println("Native export: " + total + " functions, " + complete + " decompiled.");
            }
        } finally { decompiler.dispose(); }
        Files.writeString(output.resolve(String.format("decompiled/part-%03d.c", part)), chunk, StandardCharsets.UTF_8);
        JsonArray strings = new JsonArray();
        DataIterator data = currentProgram.getListing().getDefinedData(true);
        while (data.hasNext()) {
            Data value = data.next();
            if (!(value.getValue() instanceof String)) continue;
            JsonObject entry = new JsonObject();
            entry.addProperty("address", value.getAddress().toString());
            entry.addProperty("value", value.getValue().toString());
            strings.add(entry);
        }
        JsonObject report = new JsonObject();
        report.addProperty("status", "Automated native decompilation only. No native browser game has been built.");
        report.addProperty("ghidraVersion", ghidra.framework.Application.getApplicationVersion());
        report.addProperty("language", currentProgram.getLanguageID().toString());
        report.addProperty("compiler", currentProgram.getCompilerSpec().getCompilerSpecID().toString());
        report.addProperty("functionsDiscovered", total);
        report.addProperty("importThunks", thunks);
        report.addProperty("functionsDecompiled", complete);
        report.addProperty("failedFunctions", failures.size());
        report.addProperty("warningComments", warnings);
        report.addProperty("indirectCallSites", indirectCalls);
        report.addProperty("functionBodyBytes", covered.getNumAddresses());
        report.addProperty("instructionCount", currentProgram.getListing().getNumInstructions());
        report.addProperty("strings", strings.size());
        report.addProperty("elapsedSeconds", (System.nanoTime() - started) / 1e9);
        // Packed databases cannot be written during the script's transaction.
        end(true);
        GzfExporter archive = new GzfExporter();
        boolean packed;
        try {
            packed = archive.export(output.resolve("game-analysis.gzf").toFile(), currentProgram, null, monitor);
        } finally { start(); }
        report.addProperty("analysisArchiveExported", packed);
        if (!packed) printerr("GZF export did not complete: " + archive.getMessageLog());
        report.add("failures", failures);
        Files.writeString(output.resolve("functions.json"), gson.toJson(functions) + "\n");
        Files.writeString(output.resolve("strings.json"), gson.toJson(strings) + "\n");
        Files.writeString(output.resolve("decompilation-report.json"), gson.toJson(report) + "\n");
        println(gson.toJson(report));
    }
}
