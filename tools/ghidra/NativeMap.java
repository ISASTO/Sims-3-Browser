// Export analysis structure needed to continue recovery, including thunk targets.
//@category Sims3
import java.nio.file.*;
import java.util.*;
import com.google.gson.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.*;

public class NativeMap extends GhidraScript {
    @Override
    public void run() throws Exception {
        Path output = Path.of(getScriptArgs()[0]);
        Gson gson = new GsonBuilder().setPrettyPrinting().disableHtmlEscaping().create();
        JsonObject result = new JsonObject();
        JsonArray blocks = new JsonArray();
        for (MemoryBlock block : currentProgram.getMemory().getBlocks()) {
            JsonObject item = new JsonObject();
            item.addProperty("name", block.getName());
            item.addProperty("start", block.getStart().toString());
            item.addProperty("size", block.getSize());
            item.addProperty("initialized", block.isInitialized());
            item.addProperty("read", block.isRead());
            item.addProperty("write", block.isWrite());
            item.addProperty("execute", block.isExecute());
            blocks.add(item);
        }
        result.add("memoryBlocks", blocks);
        JsonArray functions = new JsonArray();
        FunctionIterator iterator = currentProgram.getFunctionManager().getFunctions(true);
        while (iterator.hasNext()) {
            Function function = iterator.next();
            JsonObject item = new JsonObject();
            item.addProperty("name", function.getName());
            item.addProperty("address", function.getEntryPoint().toString());
            item.addProperty("thunk", function.isThunk());
            if (function.isThunk()) {
                Function target = function.getThunkedFunction(false);
                item.addProperty("targetName", target.getName());
                item.addProperty("targetAddress", target.getEntryPoint().toString());
                item.addProperty("targetExternal", target.isExternal());
            }
            JsonArray ranges = new JsonArray();
            AddressRangeIterator body = function.getBody().getAddressRanges();
            while (body.hasNext()) {
                AddressRange range = body.next();
                JsonArray pair = new JsonArray();
                pair.add(range.getMinAddress().toString()); pair.add(range.getMaxAddress().toString());
                ranges.add(pair);
            }
            item.add("bodyRanges", ranges);
            functions.add(item);
        }
        result.add("functions", functions);
        JsonArray symbols = new JsonArray();
        SymbolIterator symbolIterator = currentProgram.getSymbolTable().getAllSymbols(true);
        while (symbolIterator.hasNext()) {
            Symbol symbol = symbolIterator.next();
            JsonObject item = new JsonObject();
            item.addProperty("name", symbol.getName());
            item.addProperty("address", symbol.getAddress().toString());
            item.addProperty("type", symbol.getSymbolType().toString());
            item.addProperty("source", symbol.getSource().toString());
            symbols.add(item);
        }
        result.add("symbols", symbols);
        Files.writeString(output.resolve("analysis-map.json"), gson.toJson(result) + "\n");
        println("Exported " + functions.size() + " function ranges and " + symbols.size() + " symbols.");
    }
}
