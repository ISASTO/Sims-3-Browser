package com.flurry.org.codehaus.jackson.map.ser.std;
public final class StdJdkSerializers$FileSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.ScalarSerializerBase {

    public StdJdkSerializers$FileSerializer()
    {
        super(java.io.File);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        return this.createSchemaNode("string", 1);
    }

    public void serialize(java.io.File p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        p3.writeString(p2.getAbsolutePath());
        return;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((java.io.File) p1), p2, p3);
        return;
    }
}
