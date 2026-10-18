package com.flurry.org.codehaus.jackson.map.ser.std;
public class ToStringSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {
    public static final com.flurry.org.codehaus.jackson.map.ser.std.ToStringSerializer instance;

    static ToStringSerializer()
    {
        com.flurry.org.codehaus.jackson.map.ser.std.ToStringSerializer.instance = new com.flurry.org.codehaus.jackson.map.ser.std.ToStringSerializer();
        return;
    }

    public ToStringSerializer()
    {
        super(Object);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        return this.createSchemaNode("string", 1);
    }

    public void serialize(Object p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        p3.writeString(p2.toString());
        return;
    }

    public void serializeWithType(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4)
    {
        p4.writeTypePrefixForScalar(p1, p2);
        this.serialize(p1, p2, p3);
        p4.writeTypeSuffixForScalar(p1, p2);
        return;
    }
}
