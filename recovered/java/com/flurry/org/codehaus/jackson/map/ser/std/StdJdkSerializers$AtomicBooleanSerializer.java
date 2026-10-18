package com.flurry.org.codehaus.jackson.map.ser.std;
public final class StdJdkSerializers$AtomicBooleanSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.ScalarSerializerBase {

    public StdJdkSerializers$AtomicBooleanSerializer()
    {
        super(java.util.concurrent.atomic.AtomicBoolean, 0);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        return this.createSchemaNode("boolean", 1);
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((java.util.concurrent.atomic.AtomicBoolean) p1), p2, p3);
        return;
    }

    public void serialize(java.util.concurrent.atomic.AtomicBoolean p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        p3.writeBoolean(p2.get());
        return;
    }
}
