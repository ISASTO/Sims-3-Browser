package com.flurry.org.codehaus.jackson.map.ser;
public final class StdSerializers$IntegerSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.NonTypedScalarSerializerBase {

    public StdSerializers$IntegerSerializer()
    {
        super(Integer);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        return this.createSchemaNode("integer", 1);
    }

    public void serialize(Integer p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        p3.writeNumber(p2.intValue());
        return;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((Integer) p1), p2, p3);
        return;
    }
}
