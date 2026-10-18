package com.flurry.org.codehaus.jackson.map.deser.std;
final class JsonNodeDeserializer$ObjectDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.BaseNodeDeserializer {
    protected static final com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer$ObjectDeserializer _instance;

    static JsonNodeDeserializer$ObjectDeserializer()
    {
        com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer$ObjectDeserializer._instance = new com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer$ObjectDeserializer();
        return;
    }

    protected JsonNodeDeserializer$ObjectDeserializer()
    {
        super(com.flurry.org.codehaus.jackson.node.ObjectNode);
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer$ObjectDeserializer getInstance()
    {
        return com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer$ObjectDeserializer._instance;
    }

    public com.flurry.org.codehaus.jackson.node.ObjectNode deserialize(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        com.flurry.org.codehaus.jackson.map.JsonMappingException v0_3;
        if (p3.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
            if (p3.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
                throw p4.mappingException(com.flurry.org.codehaus.jackson.node.ObjectNode);
            } else {
                v0_3 = this.deserializeObject(p3, p4, p4.getNodeFactory());
            }
        } else {
            p3.nextToken();
            v0_3 = this.deserializeObject(p3, p4, p4.getNodeFactory());
        }
        return v0_3;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }
}
