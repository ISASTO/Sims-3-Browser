package com.flurry.org.codehaus.jackson.map.ser.std;
public class RawSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {

    public RawSerializer(Class p2)
    {
        super(p2, 0);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        return this.createSchemaNode("string", 1);
    }

    public void serialize(Object p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        p3.writeRawValue(p2.toString());
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
