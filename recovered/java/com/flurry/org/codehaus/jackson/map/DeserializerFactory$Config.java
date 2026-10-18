package com.flurry.org.codehaus.jackson.map;
public abstract class DeserializerFactory$Config {

    public DeserializerFactory$Config()
    {
        return;
    }

    public abstract Iterable abstractTypeResolvers();

    public abstract Iterable deserializerModifiers();

    public abstract Iterable deserializers();

    public abstract boolean hasAbstractTypeResolvers();

    public abstract boolean hasDeserializerModifiers();

    public abstract boolean hasDeserializers();

    public abstract boolean hasKeyDeserializers();

    public abstract boolean hasValueInstantiators();

    public abstract Iterable keyDeserializers();

    public abstract Iterable valueInstantiators();

    public abstract com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config withAbstractTypeResolver(com.flurry.org.codehaus.jackson.map.AbstractTypeResolver p0);

    public abstract com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config withAdditionalDeserializers(com.flurry.org.codehaus.jackson.map.Deserializers p0);

    public abstract com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config withAdditionalKeyDeserializers(com.flurry.org.codehaus.jackson.map.KeyDeserializers p0);

    public abstract com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config withDeserializerModifier(com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerModifier p0);

    public abstract com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config withValueInstantiators(com.flurry.org.codehaus.jackson.map.deser.ValueInstantiators p0);
}
