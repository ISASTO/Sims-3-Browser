package com.flurry.org.codehaus.jackson.map.ser;
public final class StdSerializers$LongSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.ScalarSerializerBase {
    static final com.flurry.org.codehaus.jackson.map.ser.StdSerializers$LongSerializer instance;

    static StdSerializers$LongSerializer()
    {
        com.flurry.org.codehaus.jackson.map.ser.StdSerializers$LongSerializer.instance = new com.flurry.org.codehaus.jackson.map.ser.StdSerializers$LongSerializer();
        return;
    }

    public StdSerializers$LongSerializer()
    {
        super(Long);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        return this.createSchemaNode("number", 1);
    }

    public void serialize(Long p3, com.flurry.org.codehaus.jackson.JsonGenerator p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5)
    {
        p4.writeNumber(p3.longValue());
        return;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((Long) p1), p2, p3);
        return;
    }
}
