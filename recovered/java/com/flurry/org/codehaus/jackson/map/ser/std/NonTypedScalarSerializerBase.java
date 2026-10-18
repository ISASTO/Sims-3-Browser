package com.flurry.org.codehaus.jackson.map.ser.std;
public abstract class NonTypedScalarSerializerBase extends com.flurry.org.codehaus.jackson.map.ser.std.ScalarSerializerBase {

    protected NonTypedScalarSerializerBase(Class p1)
    {
        super(p1);
        return;
    }

    public final void serializeWithType(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4)
    {
        this.serialize(p1, p2, p3);
        return;
    }
}
