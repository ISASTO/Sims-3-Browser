package com.flurry.org.codehaus.jackson.map.deser.std;
public class JsonNodeDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.BaseNodeDeserializer {
    private static final com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer instance;

    static JsonNodeDeserializer()
    {
        com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer.instance = new com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer();
        return;
    }

    protected JsonNodeDeserializer()
    {
        super(com.flurry.org.codehaus.jackson.JsonNode);
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.JsonDeserializer getDeserializer(Class p1)
    {
        com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer v0_2;
        if (p1 != com.flurry.org.codehaus.jackson.node.ObjectNode) {
            if (p1 != com.flurry.org.codehaus.jackson.node.ArrayNode) {
                v0_2 = com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer.instance;
            } else {
                v0_2 = com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer$ArrayDeserializer.getInstance();
            }
        } else {
            v0_2 = com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer$ObjectDeserializer.getInstance();
        }
        return v0_2;
    }

    public com.flurry.org.codehaus.jackson.JsonNode deserialize(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        com.flurry.org.codehaus.jackson.node.ArrayNode v0_1;
        switch (com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer$1.$SwitchMap$org$codehaus$jackson$JsonToken[p3.getCurrentToken().ordinal()]) {
            case 1:
                v0_1 = this.deserializeObject(p3, p4, p4.getNodeFactory());
                break;
            case 2:
                v0_1 = this.deserializeArray(p3, p4, p4.getNodeFactory());
                break;
            default:
                v0_1 = this.deserializeAny(p3, p4, p4.getNodeFactory());
        }
        return v0_1;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public bridge synthetic Object deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4)
    {
        return super.deserializeWithType(p2, p3, p4);
    }
}
