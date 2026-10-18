package com.flurry.org.codehaus.jackson.map.ser.std;
public final class StdJdkSerializers$AtomicReferenceSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {

    public StdJdkSerializers$AtomicReferenceSerializer()
    {
        super(java.util.concurrent.atomic.AtomicReference, 0);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        return this.createSchemaNode("any", 1);
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((java.util.concurrent.atomic.AtomicReference) p1), p2, p3);
        return;
    }

    public void serialize(java.util.concurrent.atomic.AtomicReference p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        p4.defaultSerializeValue(p2.get(), p3);
        return;
    }
}
