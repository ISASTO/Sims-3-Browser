package com.flurry.org.codehaus.jackson.map.ser;
public final class StdSerializers$StringSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.NonTypedScalarSerializerBase {

    public StdSerializers$StringSerializer()
    {
        super(String);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        return this.createSchemaNode("string", 1);
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((String) p1), p2, p3);
        return;
    }

    public void serialize(String p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        p2.writeString(p1);
        return;
    }
}
