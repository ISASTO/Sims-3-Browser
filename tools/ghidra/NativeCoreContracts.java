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
    private void collectContracts(Path project,Path path,JsonArray entries,Map<String,Path> origins,
                                  Set<Path> visited,JsonArray sources) throws Exception {
        path=path.toAbsolutePath().normalize();
        if(!visited.add(path))throw new IllegalStateException("Repeated/cyclic contract source: "+path);
        byte[] bytes=Files.readAllBytes(path);
        JsonObject config=JsonParser.parseString(new String(bytes,java.nio.charset.StandardCharsets.UTF_8)).getAsJsonObject();
        if(config.has("analysisBaseContracts"))collectContracts(project,project.resolve(config.get("analysisBaseContracts").getAsString()),entries,origins,visited,sources);
        JsonArray functions=config.getAsJsonArray("functions");
        for(JsonElement entry:functions) {
            String address=entry.getAsJsonObject().get("address").getAsString();
            if(origins.putIfAbsent(address,path)!=null)throw new IllegalStateException("Duplicate contract address: "+address);
            entries.add(entry);
        }
        JsonObject source=new JsonObject();source.addProperty("path",project.relativize(path).toString().replace(java.io.File.separatorChar,'/'));
        source.addProperty("sha256",HexFormat.of().formatHex(java.security.MessageDigest.getInstance("SHA-256").digest(bytes)));
        source.addProperty("functions",functions.size());sources.add(source);
    }
    private DataType type(String name) {
        if (name.equals("void")) return VoidDataType.dataType;
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
        Path contractPath = project.resolve(getScriptArgs().length>2?getScriptArgs()[2]:"native/core/contracts.json");
        Path output = project.resolve(getScriptArgs().length>3?getScriptArgs()[3]:"recovered/native/core-analysis");
        Files.createDirectories(output);
        JsonObject input=JsonParser.parseString(Files.readString(project.resolve("recovered/native/analysis-input.json"))).getAsJsonObject();
        byte[] elf=Files.readAllBytes(project.resolve("recovered/native/game-analysis.elf"));
        byte[] expectedImage=Arrays.copyOfRange(elf,4096,4096+input.get("codeFileSize").getAsInt());
        byte[] actualImage=new byte[expectedImage.length];
        currentProgram.getMemory().getBytes(toAddr(input.get("base").getAsLong()),actualImage);
        if (!Arrays.equals(expectedImage,actualImage)) throw new IllegalStateException("Database does not match the pinned analysis image");
        JsonObject contracts = JsonParser.parseString(Files.readString(contractPath)).getAsJsonObject();
        JsonArray allContracts = new JsonArray();
        Map<String,Path> contractOrigins = new LinkedHashMap<>();
        JsonArray contractSources = new JsonArray();
        Path baseContractPath = contracts.has("analysisBaseContracts") ? project.resolve(contracts.get("analysisBaseContracts").getAsString()) : null;
        collectContracts(project,contractPath,allContracts,contractOrigins,new HashSet<>(),contractSources);
        Gson gson = new GsonBuilder().setPrettyPrinting().disableHtmlEscaping().create();
        StructureDataType resultType = new StructureDataType(new CategoryPath("/Sims3Recovered"), "CoreDiv64", 0);
        resultType.add(UnsignedLongLongDataType.dataType, "quotient", "r0 low word, r1 high word");
        resultType.add(UnsignedLongLongDataType.dataType, "remainder", "r2 low word, r3 high word");
        div64 = currentProgram.getDataTypeManager().resolve(resultType, DataTypeConflictHandler.REPLACE_HANDLER);
        if (div64.getLength()!=16) throw new IllegalStateException("Division result must occupy four words");
        Register[] registers = new Register[4];
        for (int i=0; i<4; i++) registers[i]=currentProgram.getRegister("r"+i);
        String convention=currentProgram.getCompilerSpec().getDefaultCallingConvention().getName();
        int observedHostSignatures=0;
        if (contracts.has("hostContracts")) {
            FunctionIterator external=currentProgram.getFunctionManager().getExternalFunctions();
            while(external.hasNext()) {
                Function function=external.next();
                for(JsonElement element:contracts.getAsJsonArray("hostContracts")) {
                    JsonObject signature=element.getAsJsonObject();
                    if(!function.getName().equals(signature.get("name").getAsString()))continue;
                    List<Variable> parameters=new ArrayList<>();
                    for(JsonElement p:signature.getAsJsonArray("parameters")) {
                        JsonObject parameter=p.getAsJsonObject();
                        parameters.add(new ParameterImpl(parameter.get("name").getAsString(),type(parameter.get("type").getAsString()),currentProgram));
                    }
                    function.setReturnType(type(signature.get("returnType").getAsString()),SourceType.USER_DEFINED);
                    function.replaceParameters(parameters,Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,true,SourceType.USER_DEFINED);
                    function.setComment("Observed call-site ABI for controlled serializer-host validation; not an original SDK header or complete host implementation.");
                    observedHostSignatures++;
                }
            }
            if(observedHostSignatures!=contracts.getAsJsonArray("hostContracts").size())throw new IllegalStateException("Missing observed host signature");
        }
        Set<Function> core = new LinkedHashSet<>();
        Set<Function> callers = new LinkedHashSet<>();
        JsonArray changes = new JsonArray();
        int customReturns = 0;
        for (JsonElement element : allContracts) {
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
            Path provenance=contractOrigins.get(contract.get("address").getAsString());
            function.setComment("Analyst-recovered ABI. See " + project.relativize(provenance) + " and ARM/Wasm validation. " +
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
                    String code=value.getDecompiledFunction().getC().replaceAll("(?m)[\\t ]+$", "");
                    item.addProperty("warningComments",code.split("WARNING:",-1).length-1);
                    source.append("// Address: ").append(function.getEntryPoint()).append("\n").append(code).append("\n\n");
                }
                exports.add(item);
            }
        } finally { decompiler.dispose(); }
        Files.writeString(output.resolve("annotated.c"),source.toString().stripTrailing()+"\n");
        Files.writeString(output.resolve("functions.json"),gson.toJson(exports)+"\n");
        Files.writeString(output.resolve("abi-changes.json"),gson.toJson(changes)+"\n");
        JsonObject report=new JsonObject();
        report.addProperty("status","Recovered ABI annotations and targeted decompiler output. Diagnostic C remains approximate.");
        report.addProperty("runToken",getScriptArgs().length>1?getScriptArgs()[1]:"manual");
        report.addProperty("contractsSha256",HexFormat.of().formatHex(java.security.MessageDigest.getInstance("SHA-256").digest(
            Files.readAllBytes(contractPath))));
        if(baseContractPath!=null)report.addProperty("baseContractsSha256",HexFormat.of().formatHex(java.security.MessageDigest.getInstance("SHA-256").digest(Files.readAllBytes(baseContractPath))));
        report.add("contractSources",contractSources);
        if(contracts.has("hostContracts"))report.addProperty("observedHostSignaturesApplied",observedHostSignatures);
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
