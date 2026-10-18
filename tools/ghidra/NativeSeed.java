// Seed ARM/Thumb imports and strong relocated function pointers before analysis.
//@category Sims3
import java.io.Reader;
import java.math.BigInteger;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.HashMap;
import java.util.Map;
import java.util.ArrayList;
import java.util.List;
import com.google.gson.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;

public class NativeSeed extends GhidraScript {
    private Register thumb;
    private void mode(long value, boolean isThumb) throws Exception {
        Address address = toAddr(value);
        BigInteger expected = isThumb ? BigInteger.ONE : BigInteger.ZERO;
        BigInteger existing = currentProgram.getProgramContext().getValue(thumb, address, false);
        if (!expected.equals(existing)) {
            currentProgram.getProgramContext().setValue(thumb, address, address, expected);
        }
    }
    private Function function(long value, boolean isThumb, String name) throws Exception {
        mode(value, isThumb);
        Address address = toAddr(value);
        disassemble(address);
        Function existing = getFunctionAt(address);
        if (existing == null) existing = createFunction(address, name);
        return existing;
    }
    @Override
    public void run() throws Exception {
        JsonObject input;
        try (Reader reader = Files.newBufferedReader(Path.of(getScriptArgs()[0]))) {
            input = JsonParser.parseReader(reader).getAsJsonObject();
        }
        thumb = currentProgram.getRegister("TMode");
        long base = input.get("base").getAsLong();
        long lastImport = base;
        for (JsonElement value : input.getAsJsonArray("imports")) {
            lastImport = Math.max(lastImport, value.getAsJsonObject().get("arm").getAsLong() + 3);
        }
        // The ELF loader may pre-disassemble symbols before this script runs.
        // Remove those provisional import bodies before assigning interworking modes.
        List<Function> provisional = new ArrayList<>();
        for (Function existing : currentProgram.getFunctionManager().getFunctions(toAddr(base), true)) {
            if (existing.getEntryPoint().getOffset() > lastImport) break;
            provisional.add(existing);
        }
        for (Function existing : provisional) removeFunction(existing);
        clearListing(toAddr(base), toAddr(lastImport));
        for (JsonElement value : input.getAsJsonArray("imports")) {
            JsonObject item = value.getAsJsonObject();
            mode(item.get("arm").getAsLong(), false);
            if (!item.get("thumb").isJsonNull()) mode(item.get("thumb").getAsLong(), true);
        }
        for (JsonElement value : input.getAsJsonArray("functionPointerSeeds")) {
            JsonObject item = value.getAsJsonObject();
            mode(item.get("address").getAsLong(), item.get("thumb").getAsBoolean());
        }
        for (JsonElement value : input.getAsJsonArray("internalRelocations")) {
            Address address = toAddr(base + value.getAsLong());
            if (getInstructionAt(address) == null && getDataAt(address) == null) {
                createData(address, new PointerDataType());
            }
        }
        Map<String, Function> externals = new HashMap<>();
        int modeled = 0;
        for (JsonElement value : input.getAsJsonArray("imports")) {
            monitor.checkCancelled();
            JsonObject item = value.getAsJsonObject();
            String name = item.get("name").getAsString();
            Function external = externals.get(name);
            if (external == null) {
                external = currentProgram.getExternalManager().addExtFunction(
                    "Marmalade", name, null, SourceType.USER_DEFINED).getFunction();
                external.setNoReturn(false);
                externals.put(name, external);
            }
            for (String variant : new String[]{"arm", "thumb"}) {
                if (item.get(variant).isJsonNull()) continue;
                Address address = toAddr(item.get(variant).getAsLong());
                // Keep each opaque import body explicit. Following the Thumb
                // interworking veneer here can overwrite adjacent entry contexts.
                Function stub = currentProgram.getFunctionManager().createFunction(
                    "host_" + name + "_" + variant, address,
                    new AddressSet(address, address.add(3)), SourceType.USER_DEFINED);
                stub.setThunkedFunction(external);
                modeled++;
            }
        }
        function(input.get("entry").getAsLong(), false, "s3e_game_entry");
        int seeded = 0;
        for (JsonElement value : input.getAsJsonArray("functionPointerSeeds")) {
            monitor.checkCancelled();
            JsonObject item = value.getAsJsonObject();
            try {
                if (function(item.get("address").getAsLong(), item.get("thumb").getAsBoolean(), null) != null) seeded++;
            } catch (Exception error) {
                printerr("Skipped seed " + item + ": " + error.getMessage());
            }
        }
        println("Native seed pass: " + externals.size() + " named imports, " + modeled +
            " import entry points, " + seeded + " relocated function-pointer seeds.");
        JsonObject report = new JsonObject();
        report.addProperty("namedImports", externals.size());
        report.addProperty("importEntryPoints", modeled);
        report.addProperty("functionPointerSeeds", seeded);
        Files.writeString(Path.of(getScriptArgs()[0]).getParent().resolve("seed-report.json"),
            new GsonBuilder().setPrettyPrinting().create().toJson(report) + "\n");
    }
}
