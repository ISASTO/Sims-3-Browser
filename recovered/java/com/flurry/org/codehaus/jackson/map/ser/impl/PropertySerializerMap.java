package com.flurry.org.codehaus.jackson.map.ser.impl;
public abstract class PropertySerializerMap {

    public PropertySerializerMap()
    {
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap emptyMap()
    {
        return com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$Empty.instance;
    }

    public final com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$SerializerAndMapResult findAndAddSerializer(com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5, com.flurry.org.codehaus.jackson.map.BeanProperty p6)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v0 = p5.findValueSerializer(p4, p6);
        return new com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$SerializerAndMapResult(v0, this.newWith(p4.getRawClass(), v0));
    }

    public final com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$SerializerAndMapResult findAndAddSerializer(Class p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5, com.flurry.org.codehaus.jackson.map.BeanProperty p6)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v0 = p5.findValueSerializer(p4, p6);
        return new com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$SerializerAndMapResult(v0, this.newWith(p4, v0));
    }

    public abstract com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap newWith(Class p0, com.flurry.org.codehaus.jackson.map.JsonSerializer p1);

    public abstract com.flurry.org.codehaus.jackson.map.JsonSerializer serializerFor(Class p0);
}
