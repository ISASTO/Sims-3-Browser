package com.flurry.org.codehaus.jackson.map.ser.std;
public class NullSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {
    public static final com.flurry.org.codehaus.jackson.map.ser.std.NullSerializer instance;

    static NullSerializer()
    {
        com.flurry.org.codehaus.jackson.map.ser.std.NullSerializer.instance = new com.flurry.org.codehaus.jackson.map.ser.std.NullSerializer();
        return;
    }

    private NullSerializer()
    {
        super(Object);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p2, reflect.Type p3)
    {
        return this.createSchemaNode("null");
    }

    public void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        p2.writeNull();
        return;
    }
}
