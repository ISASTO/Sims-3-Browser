package com.flurry.org.codehaus.jackson.map.ser.std;
public final class StdJdkSerializers$AtomicLongSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.ScalarSerializerBase {

    public StdJdkSerializers$AtomicLongSerializer()
    {
        super(java.util.concurrent.atomic.AtomicLong, 0);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        return this.createSchemaNode("integer", 1);
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((java.util.concurrent.atomic.AtomicLong) p1), p2, p3);
        return;
    }

    public void serialize(java.util.concurrent.atomic.AtomicLong p3, com.flurry.org.codehaus.jackson.JsonGenerator p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5)
    {
        p4.writeNumber(p3.get());
        return;
    }
}
