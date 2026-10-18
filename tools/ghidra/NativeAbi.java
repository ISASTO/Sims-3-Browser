// Apply only signatures backed by the Khronos headers, not guessed s3e APIs.
//@category Sims3
import java.nio.file.*;
import java.util.*;
import com.google.gson.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.SourceType;

public class NativeAbi extends GhidraScript {
    private DataType type(String declaration) {
        String value = declaration.replaceAll("\\bconst\\b", "").trim().replaceAll("\\s+", " ");
        if (value.contains("*") || value.contains("[") || value.equals("__eglMustCastToProperFunctionPointerType") ||
            Set.of("EGLConfig", "EGLContext", "EGLDisplay", "EGLSurface", "EGLNativeDisplayType", "EGLNativeWindowType").contains(value)) {
            return new PointerDataType(VoidDataType.dataType, currentProgram.getDataTypeManager());
        }
        if (value.equals("void")) return VoidDataType.dataType;
        if (value.equals("GLboolean") || value.equals("GLubyte")) return UnsignedCharDataType.dataType;
        if (value.equals("GLfloat")) return FloatDataType.dataType;
        if (Set.of("GLenum", "GLbitfield", "GLuint", "EGLenum", "EGLBoolean").contains(value)) return UnsignedIntegerDataType.dataType;
        if (Set.of("GLfixed", "GLint", "GLsizei", "GLintptr", "GLsizeiptr", "EGLint").contains(value)) return IntegerDataType.dataType;
        throw new IllegalArgumentException("Unreviewed Khronos type: " + declaration);
    }
    @Override
    public void run() throws Exception {
        Path output = Path.of(getScriptArgs()[0]);
        JsonObject signatures = JsonParser.parseString(Files.readString(output.resolve("host-prototypes.json"))).getAsJsonObject();
        int applied = 0;
        Set<String> names = new HashSet<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getExternalFunctions();
        while (functions.hasNext()) {
            Function function = functions.next();
            String name = function.getName();
            if (!signatures.has(name)) continue;
            JsonObject signature = signatures.getAsJsonObject(name);
            if (!signature.get("verifiedHeader").getAsBoolean()) continue;
            List<Variable> parameters = new ArrayList<>();
            String args = signature.get("args").getAsString().trim();
            if (!args.equals("void") && !args.isEmpty()) {
                for (String arg : args.split(",")) {
                    String parameterName = arg.trim().replaceAll(".*?([A-Za-z_][A-Za-z0-9_]*)\\s*$", "$1");
                    String parameterType = arg.trim().substring(0, arg.trim().length() - parameterName.length()).trim();
                    parameters.add(new ParameterImpl(parameterName, type(parameterType), currentProgram));
                }
            }
            function.setReturnType(type(signature.get("return").getAsString()), SourceType.USER_DEFINED);
            function.replaceParameters(parameters, Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS, true, SourceType.USER_DEFINED);
            function.setNoReturn(false);
            names.add(name);
            applied++;
        }
        long expected = signatures.entrySet().stream().filter(e -> e.getValue().getAsJsonObject().get("verifiedHeader").getAsBoolean()).count();
        if (names.size() != expected) throw new IllegalStateException("Only applied " + names.size() + " of " + expected + " verified signatures");
        JsonObject report = new JsonObject();
        report.addProperty("khronosSignaturesApplied", names.size());
        report.addProperty("externalFunctionsUpdated", applied);
        report.addProperty("unverifiedS3eSignaturesNotApplied", signatures.size() - names.size());
        Files.writeString(output.resolve("abi-report.json"), new GsonBuilder().setPrettyPrinting().create().toJson(report) + "\n");
        println(report.toString());
    }
}
