package com.flurry.org.codehaus.jackson.map;
public abstract class JsonDeserializer {

    public JsonDeserializer()
    {
        return;
    }

    public abstract Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p0, com.flurry.org.codehaus.jackson.map.DeserializationContext p1);

    public Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, Object p4)
    {
        throw new UnsupportedOperationException();
    }

    public Object deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4)
    {
        return p4.deserializeTypedFromAny(p2, p3);
    }

    public Object getEmptyValue()
    {
        return this.getNullValue();
    }

    public Object getNullValue()
    {
        return 0;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer unwrappingDeserializer()
    {
        return this;
    }
}
