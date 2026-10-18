package com.flurry.org.codehaus.jackson.map.deser.std;
public class AtomicBooleanDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer {

    public AtomicBooleanDeserializer()
    {
        super(java.util.concurrent.atomic.AtomicBoolean);
        return;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public java.util.concurrent.atomic.AtomicBoolean deserialize(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        return new java.util.concurrent.atomic.AtomicBoolean(this._parseBooleanPrimitive(p3, p4));
    }
}
