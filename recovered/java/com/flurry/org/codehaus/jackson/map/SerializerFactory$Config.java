package com.flurry.org.codehaus.jackson.map;
public abstract class SerializerFactory$Config {

    public SerializerFactory$Config()
    {
        return;
    }

    public abstract boolean hasKeySerializers();

    public abstract boolean hasSerializerModifiers();

    public abstract boolean hasSerializers();

    public abstract Iterable keySerializers();

    public abstract Iterable serializerModifiers();

    public abstract Iterable serializers();

    public abstract com.flurry.org.codehaus.jackson.map.SerializerFactory$Config withAdditionalKeySerializers(com.flurry.org.codehaus.jackson.map.Serializers p0);

    public abstract com.flurry.org.codehaus.jackson.map.SerializerFactory$Config withAdditionalSerializers(com.flurry.org.codehaus.jackson.map.Serializers p0);

    public abstract com.flurry.org.codehaus.jackson.map.SerializerFactory$Config withSerializerModifier(com.flurry.org.codehaus.jackson.map.ser.BeanSerializerModifier p0);
}
