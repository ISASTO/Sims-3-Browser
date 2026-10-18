package com.flurry.org.codehaus.jackson.map.deser.std;
final class JsonNodeDeserializer$ArrayDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.BaseNodeDeserializer {
    protected static final com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer$ArrayDeserializer _instance;

    static JsonNodeDeserializer$ArrayDeserializer()
    {
        com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer$ArrayDeserializer._instance = new com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer$ArrayDeserializer();
        return;
    }

    protected JsonNodeDeserializer$ArrayDeserializer()
    {
        super(com.flurry.org.codehaus.jackson.node.ArrayNode);
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer$ArrayDeserializer getInstance()
    {
        return com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer$ArrayDeserializer._instance;
    }

    public com.flurry.org.codehaus.jackson.node.ArrayNode deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        if (!p2.isExpectedStartArrayToken()) {
            throw p3.mappingException(com.flurry.org.codehaus.jackson.node.ArrayNode);
        } else {
            return this.deserializeArray(p2, p3, p3.getNodeFactory());
        }
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }
}
