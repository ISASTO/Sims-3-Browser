package com.flurry.org.codehaus.jackson.map.ser;
public final class StdSerializers$DoubleSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.NonTypedScalarSerializerBase {
    static final com.flurry.org.codehaus.jackson.map.ser.StdSerializers$DoubleSerializer instance;

    static StdSerializers$DoubleSerializer()
    {
        com.flurry.org.codehaus.jackson.map.ser.StdSerializers$DoubleSerializer.instance = new com.flurry.org.codehaus.jackson.map.ser.StdSerializers$DoubleSerializer();
        return;
    }

    public StdSerializers$DoubleSerializer()
    {
        super(Double);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        return this.createSchemaNode("number", 1);
    }

    public void serialize(Double p3, com.flurry.org.codehaus.jackson.JsonGenerator p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5)
    {
        p4.writeNumber(p3.doubleValue());
        return;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((Double) p1), p2, p3);
        return;
    }
}
