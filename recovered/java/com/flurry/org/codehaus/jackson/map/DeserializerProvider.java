package com.flurry.org.codehaus.jackson.map;
public abstract class DeserializerProvider {

    protected DeserializerProvider()
    {
        return;
    }

    public abstract int cachedDeserializersCount();

    public abstract com.flurry.org.codehaus.jackson.io.SerializedString findExpectedRootName(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1);

    public abstract com.flurry.org.codehaus.jackson.map.KeyDeserializer findKeyDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.BeanProperty p2);

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer findTypedValueDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.BeanProperty p2);

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer findValueDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.BeanProperty p2);

    public abstract void flushCachedDeserializers();

    public abstract boolean hasValueDeserializerFor(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1);

    public abstract com.flurry.org.codehaus.jackson.type.JavaType mapAbstractType(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1);

    public abstract com.flurry.org.codehaus.jackson.map.DeserializerProvider withAbstractTypeResolver(com.flurry.org.codehaus.jackson.map.AbstractTypeResolver p0);

    public abstract com.flurry.org.codehaus.jackson.map.DeserializerProvider withAdditionalDeserializers(com.flurry.org.codehaus.jackson.map.Deserializers p0);

    public abstract com.flurry.org.codehaus.jackson.map.DeserializerProvider withAdditionalKeyDeserializers(com.flurry.org.codehaus.jackson.map.KeyDeserializers p0);

    public abstract com.flurry.org.codehaus.jackson.map.DeserializerProvider withDeserializerModifier(com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerModifier p0);

    public abstract com.flurry.org.codehaus.jackson.map.DeserializerProvider withFactory(com.flurry.org.codehaus.jackson.map.DeserializerFactory p0);

    public abstract com.flurry.org.codehaus.jackson.map.DeserializerProvider withValueInstantiators(com.flurry.org.codehaus.jackson.map.deser.ValueInstantiators p0);
}
