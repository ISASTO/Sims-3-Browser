package com.flurry.org.codehaus.jackson.map.ser;
public final class StdSerializers$FloatSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.ScalarSerializerBase {
    static final com.flurry.org.codehaus.jackson.map.ser.StdSerializers$FloatSerializer instance;

    static StdSerializers$FloatSerializer()
    {
        com.flurry.org.codehaus.jackson.map.ser.StdSerializers$FloatSerializer.instance = new com.flurry.org.codehaus.jackson.map.ser.StdSerializers$FloatSerializer();
        return;
    }

    public StdSerializers$FloatSerializer()
    {
        super(Float);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        return this.createSchemaNode("number", 1);
    }

    public void serialize(Float p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        p3.writeNumber(p2.floatValue());
        return;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((Float) p1), p2, p3);
        return;
    }
}
