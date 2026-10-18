package com.flurry.org.codehaus.jackson.map.ser.std;
public abstract class ScalarSerializerBase extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {

    protected ScalarSerializerBase(Class p1)
    {
        super(p1);
        return;
    }

    protected ScalarSerializerBase(Class p1, boolean p2)
    {
        super(p1);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        return this.createSchemaNode("string", 1);
    }

    public void serializeWithType(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4)
    {
        p4.writeTypePrefixForScalar(p1, p2);
        this.serialize(p1, p2, p3);
        p4.writeTypeSuffixForScalar(p1, p2);
        return;
    }
}
