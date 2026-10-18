package com.flurry.org.codehaus.jackson.map.deser;
public class JsonNodeDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer {
    public static final com.flurry.org.codehaus.jackson.map.deser.JsonNodeDeserializer instance;

    static JsonNodeDeserializer()
    {
        com.flurry.org.codehaus.jackson.map.deser.JsonNodeDeserializer.instance = new com.flurry.org.codehaus.jackson.map.deser.JsonNodeDeserializer();
        return;
    }

    public JsonNodeDeserializer()
    {
        return;
    }

    protected final com.flurry.org.codehaus.jackson.JsonNode deserializeAny(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserializeAny(p2, p3, p3.getNodeFactory());
    }

    protected final com.flurry.org.codehaus.jackson.node.ArrayNode deserializeArray(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserializeArray(p2, p3, p3.getNodeFactory());
    }

    protected final com.flurry.org.codehaus.jackson.node.ObjectNode deserializeObject(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserializeObject(p2, p3, p3.getNodeFactory());
    }
}
