package com.flurry.org.codehaus.jackson.map.deser.std;
public abstract class StdScalarDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer {

    protected StdScalarDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p1)
    {
        super(p1);
        return;
    }

    protected StdScalarDeserializer(Class p1)
    {
        super(p1);
        return;
    }

    public Object deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4)
    {
        return p4.deserializeTypedFromScalar(p2, p3);
    }
}
