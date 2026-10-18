package com.flurry.org.codehaus.jackson.map.ser.std;
public final class StdArraySerializers$ByteArraySerializer extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {

    public StdArraySerializers$ByteArraySerializer()
    {
        super(byte[]);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p5, reflect.Type p6)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v1 = this.createSchemaNode("array", 1);
        v1.put("items", this.createSchemaNode("string"));
        return v1;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((byte[]) p1), p2, p3);
        return;
    }

    public void serialize(byte[] p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        p2.writeBinary(p1);
        return;
    }

    public bridge synthetic void serializeWithType(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4)
    {
        this.serializeWithType(((byte[]) p1), p2, p3, p4);
        return;
    }

    public void serializeWithType(byte[] p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4)
    {
        p4.writeTypePrefixForScalar(p1, p2);
        p2.writeBinary(p1);
        p4.writeTypeSuffixForScalar(p1, p2);
        return;
    }
}
