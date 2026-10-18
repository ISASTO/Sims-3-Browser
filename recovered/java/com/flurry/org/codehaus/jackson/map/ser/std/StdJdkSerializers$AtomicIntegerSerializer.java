package com.flurry.org.codehaus.jackson.map.ser.std;
public final class StdJdkSerializers$AtomicIntegerSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.ScalarSerializerBase {

    public StdJdkSerializers$AtomicIntegerSerializer()
    {
        super(java.util.concurrent.atomic.AtomicInteger, 0);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        return this.createSchemaNode("integer", 1);
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((java.util.concurrent.atomic.AtomicInteger) p1), p2, p3);
        return;
    }

    public void serialize(java.util.concurrent.atomic.AtomicInteger p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        p3.writeNumber(p2.get());
        return;
    }
}
