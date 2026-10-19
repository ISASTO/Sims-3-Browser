// Apply experimentally validated ABI contracts, then re-export affected code.
//@category Sims3
import java.nio.file.*;
import java.util.*;
import com.google.gson.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.*;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.SourceType;

public class NativeCoreContracts extends GhidraScript {
    private DataType div64;
    private DataType type(String name) {
        if (name.equals("div64")) return div64;
        if (name.equals("u64")) return UnsignedLongLongDataType.dataType;
        if (name.equals("u32")) return UnsignedIntegerDataType.dataType;
        if (name.equals("i32")) return IntegerDataType.dataType;
        if (name.equals("u8")) return UnsignedCharDataType.dataType;
        if (name.startsWith("p_")) {
            DataType target = name.equals("p_u32") ? UnsignedIntegerDataType.dataType :
                name.equals("p_u16") ? UnsignedShortDataType.dataType :
                name.equals("p_i16") ? ShortDataType.dataType : UnsignedCharDataType.dataType;
            return new PointerDataType(target, currentProgram.getDataTypeManager());
        }
        throw new IllegalArgumentException(name);
    }
    @Override
    public void run() throws Exception {
        Path project = Path.of(getScriptArgs()[0]);
        Path output = project.resolve("recovered/native/core-analysis");
        Files.createDirectories(output);
        JsonObject input=JsonParser.parseString(Files.readString(project.resolve("recovered/native/analysis-input.json"))).getAsJsonObject();
        byte[] elf=Files.readAllBytes(project.resolve("recovered/native/game-analysis.elf"));
        byte[] expectedImage=Arrays.copyOfRange(elf,4096,4096+input.get("codeFileSize").getAsInt());
        byte[] actualImage=new byte[expectedImage.length];
        currentProgram.getMemory().getBytes(toAddr(input.get("base").getAsLong()),actualImage);
        if (!Arrays.equals(expectedImage,actualImage)) throw new IllegalStateException("Database does not match the pinned analysis image");
        JsonObject contracts = JsonParser.parseString(Files.readString(project.resolve("native/core/contracts.json"))).getAsJsonObject();
        Gson gson = new GsonBuilder().setPrettyPrinting().disableHtmlEscaping().create();
        StructureDataType resultType = new StructureDataType(new CategoryPath("/Sims3Recovered"), "CoreDiv64", 0);
        resultType.add(UnsignedLongLongDataType.dataType, "quotient", "r0 low word, r1 high word");
        resultType.add(UnsignedLongLongDataType.dataType, "remainder", "r2 low word, r3 high word");
        div64 = currentProgram.getDataTypeManager().resolve(resultType, DataTypeConflictHandler.REPLACE_HANDLER);
        if (div64.getLength()!=16) throw new IllegalStateException("Division result must occupy four words");
        Register[] registers = new Register[4];
        for (int i=0; i<4; i++) registers[i]=currentProgram.getRegister("r"+i);
        String convention=currentProgram.getCompilerSpec().getDefaultCallingConvention().getName();
        Set<Function> core = new LinkedHashSet<>();
        Set<Function> callers = new LinkedHashSet<>();
        JsonArray changes = new JsonArray();
        int customReturns = 0;
        for (JsonElement element : contracts.getAsJsonArray("functions")) {
            JsonObject contract = element.getAsJsonObject();
            Address address = toAddr(Long.parseLong(contract.get("address").getAsString(),16));
            Function function = currentProgram.getFunctionManager().getFunctionAt(address);
            if (function==null || function.isThunk()) throw new IllegalStateException("Missing ordinary function at "+address);
            JsonObject change = new JsonObject();
            change.addProperty("address", address.toString());
            change.addProperty("previousPrototype", function.getSignature().getPrototypeString());
            function.setName("s3c_"+contract.get("label").getAsString(), SourceType.USER_DEFINED);
            boolean fourWords = contract.get("returnType").getAsString().equals("div64");
            List<Variable> params = new ArrayList<>();
            int index=0;
            for (JsonElement value : contract.getAsJsonArray("parameters")) {
                JsonObject parameter = value.getAsJsonObject();
                DataType dataType = type(parameter.get("type").getAsString());
                params.add(fourWords ? new ParameterImpl(parameter.get("name").getAsString(),dataType,registers[index],currentProgram) :
                    new ParameterImpl(parameter.get("name").getAsString(),dataType,currentProgram));
                index++;
            }
            DataType returnType = type(contract.get("returnType").getAsString());
            if (fourWords) {
                // Match the ARM compiler spec's observed R1:R0 64-bit join.
                // Ghidra's joined-register representation is high word first;
                // the aggregate's quotient occupies R1:R0, remainder R3:R2.
                Register[] joined = {registers[3],registers[2],registers[1],registers[0]};
                ReturnParameterImpl ret = new ReturnParameterImpl(returnType,new VariableStorage(currentProgram,joined),currentProgram);
                function.updateFunction(convention,ret,params,Function.FunctionUpdateType.CUSTOM_STORAGE,true,SourceType.USER_DEFINED);
                if (function.getReturn().getVariableStorage().size()!=16) throw new IllegalStateException("Incorrect register result width");
                if (!function.getReturn().getVariableStorage().toString().equals("r3:4,r2:4,r1:4,r0:4")) throw new IllegalStateException("Incorrect aggregate word order");
                customReturns++;
            } else {
                ReturnParameterImpl ret = new ReturnParameterImpl(returnType,currentProgram);
                function.updateFunction(convention,ret,params,Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,true,SourceType.USER_DEFINED);
                if (contract.get("returnType").getAsString().equals("u64") &&
                    !function.getReturn().getVariableStorage().toString().equals("r1:4,r0:4")) throw new IllegalStateException("Unexpected ARM 64-bit result join");
            }
            function.setNoReturn(false);
            function.setComment("Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. " +
                contract.get("recoveryNotes").getAsString());
            change.addProperty("prototype", function.getSignature().getPrototypeString());
            change.addProperty("returnStorage", function.getReturn().getVariableStorage().toString());
            JsonArray parameterStorage = new JsonArray();
            for (Parameter parameter : function.getParameters()) parameterStorage.add(parameter.getName()+": "+parameter.getVariableStorage());
            change.add("parameterStorage", parameterStorage);
            changes.add(change);core.add(function);
        }
        // Follow thunk references to count real consumers, not just entry veneers.
        Set<Function> visited = new HashSet<>();
        Deque<Function> queue = new ArrayDeque<>(core);
        while (!queue.isEmpty()) {
            Function function=queue.removeFirst();
            if (!visited.add(function)) continue;
            for (Function caller:function.getCallingFunctions(monitor)) {
                if (caller.isThunk()) queue.addLast(caller);
                else if (!core.contains(caller)) callers.add(caller);
            }
        }
        List<Function> selected = new ArrayList<>(core);
        List<Function> ranked = new ArrayList<>(callers);
        ranked.sort(Comparator.comparingLong((Function f)->f.getBody().getNumAddresses()).thenComparing(f->f.getEntryPoint()));
        int added=0;
        for (Function caller:ranked) {
            if (caller.getBody().getNumAddresses()>4096) continue;
            selected.add(caller);if (++added>=128) break;
        }
        DecompInterface decompiler=new DecompInterface();
        decompiler.toggleCCode(true);decompiler.toggleSyntaxTree(false);
        if (!decompiler.openProgram(currentProgram)) throw new IllegalStateException(decompiler.getLastMessage());
        JsonArray exports=new JsonArray();
        StringBuilder source=new StringBuilder("/* Annotated decompiler diagnostics. Not the compiled native core or a full game. */\n\n");
        int completed=0;
        try {
            for (Function function:selected) {
                DecompileResults value=decompiler.decompileFunction(function,45,monitor);
                JsonObject item=new JsonObject();
                item.addProperty("address",function.getEntryPoint().toString());item.addProperty("name",function.getName());
                item.addProperty("core",core.contains(function));item.addProperty("completed",value.decompileCompleted());
                item.addProperty("message",value.getErrorMessage());
                if (value.decompileCompleted() && value.getDecompiledFunction()!=null) {
                    completed++;
                    String code=value.getDecompiledFunction().getC();
                    item.addProperty("warningComments",code.split("WARNING:",-1).length-1);
                    source.append("// Address: ").append(function.getEntryPoint()).append("\n").append(code).append("\n\n");
                }
                exports.add(item);
            }
        } finally { decompiler.dispose(); }
        Files.writeString(output.resolve("annotated.c"),source);
        Files.writeString(output.resolve("functions.json"),gson.toJson(exports)+"\n");
        Files.writeString(output.resolve("abi-changes.json"),gson.toJson(changes)+"\n");
        JsonObject report=new JsonObject();
        report.addProperty("status","Recovered ABI annotations and targeted decompiler output. Diagnostic C remains approximate.");
        report.addProperty("runToken",getScriptArgs().length>1?getScriptArgs()[1]:"manual");
        report.addProperty("contractsSha256",HexFormat.of().formatHex(java.security.MessageDigest.getInstance("SHA-256").digest(
            Files.readAllBytes(project.resolve("native/core/contracts.json")))));
        report.addProperty("contractsApplied",core.size());report.addProperty("fourRegisterReturns",customReturns);
        report.addProperty("callingConvention",convention);
        report.addProperty("fourRegisterReturnStorage","r3:4,r2:4,r1:4,r0:4");
        currentProgram.getMemory().getBytes(toAddr(input.get("base").getAsLong()),actualImage);
        if (!Arrays.equals(expectedImage,actualImage)) throw new IllegalStateException("ABI annotations modified executable bytes");
        report.addProperty("analysisImageUnchanged",true);
        report.addProperty("affectedCallingFunctions",callers.size());report.addProperty("callingFunctionsReexported",added);
        report.addProperty("functionsReexported",completed);
        Files.writeString(output.resolve("report.json"),gson.toJson(report)+"\n");
        println(gson.toJson(report));
    }
}
