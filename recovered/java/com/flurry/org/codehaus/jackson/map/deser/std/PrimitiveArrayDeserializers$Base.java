package com.flurry.org.codehaus.jackson.map.deser.std;
abstract class PrimitiveArrayDeserializers$Base extends com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer {

    protected PrimitiveArrayDeserializers$Base(Class p1)
    {
        super(p1);
        return;
    }

    public Object deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4)
    {
        return p4.deserializeTypedFromArray(p2, p3);
    }
}
