package com.flurry.org.codehaus.jackson.map;
public abstract class TypeDeserializer {

    public TypeDeserializer()
    {
        return;
    }

    public abstract Object deserializeTypedFromAny(com.flurry.org.codehaus.jackson.JsonParser p0, com.flurry.org.codehaus.jackson.map.DeserializationContext p1);

    public abstract Object deserializeTypedFromArray(com.flurry.org.codehaus.jackson.JsonParser p0, com.flurry.org.codehaus.jackson.map.DeserializationContext p1);

    public abstract Object deserializeTypedFromObject(com.flurry.org.codehaus.jackson.JsonParser p0, com.flurry.org.codehaus.jackson.map.DeserializationContext p1);

    public abstract Object deserializeTypedFromScalar(com.flurry.org.codehaus.jackson.JsonParser p0, com.flurry.org.codehaus.jackson.map.DeserializationContext p1);

    public abstract Class getDefaultImpl();

    public abstract String getPropertyName();

    public abstract com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver getTypeIdResolver();

    public abstract com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As getTypeInclusion();
}
