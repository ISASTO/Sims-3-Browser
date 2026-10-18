package com.flurry.org.codehaus.jackson;
public abstract class ObjectCodec {

    protected ObjectCodec()
    {
        return;
    }

    public abstract com.flurry.org.codehaus.jackson.JsonNode createArrayNode();

    public abstract com.flurry.org.codehaus.jackson.JsonNode createObjectNode();

    public abstract com.flurry.org.codehaus.jackson.JsonNode readTree(com.flurry.org.codehaus.jackson.JsonParser p0);

    public abstract Object readValue(com.flurry.org.codehaus.jackson.JsonParser p0, com.flurry.org.codehaus.jackson.type.JavaType p1);

    public abstract Object readValue(com.flurry.org.codehaus.jackson.JsonParser p0, com.flurry.org.codehaus.jackson.type.TypeReference p1);

    public abstract Object readValue(com.flurry.org.codehaus.jackson.JsonParser p0, Class p1);

    public abstract java.util.Iterator readValues(com.flurry.org.codehaus.jackson.JsonParser p0, com.flurry.org.codehaus.jackson.type.JavaType p1);

    public abstract java.util.Iterator readValues(com.flurry.org.codehaus.jackson.JsonParser p0, com.flurry.org.codehaus.jackson.type.TypeReference p1);

    public abstract java.util.Iterator readValues(com.flurry.org.codehaus.jackson.JsonParser p0, Class p1);

    public abstract com.flurry.org.codehaus.jackson.JsonParser treeAsTokens(com.flurry.org.codehaus.jackson.JsonNode p0);

    public abstract Object treeToValue(com.flurry.org.codehaus.jackson.JsonNode p0, Class p1);

    public abstract void writeTree(com.flurry.org.codehaus.jackson.JsonGenerator p0, com.flurry.org.codehaus.jackson.JsonNode p1);

    public abstract void writeValue(com.flurry.org.codehaus.jackson.JsonGenerator p0, Object p1);
}
