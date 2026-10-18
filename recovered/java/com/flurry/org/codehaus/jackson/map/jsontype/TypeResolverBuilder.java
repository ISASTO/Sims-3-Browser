package com.flurry.org.codehaus.jackson.map.jsontype;
public interface TypeResolverBuilder {

    public abstract com.flurry.org.codehaus.jackson.map.TypeDeserializer buildTypeDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1, java.util.Collection p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3);

    public abstract com.flurry.org.codehaus.jackson.map.TypeSerializer buildTypeSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1, java.util.Collection p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3);

    public abstract com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder defaultImpl(Class p0);

    public abstract Class getDefaultImpl();

    public abstract com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder inclusion(com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As p0);

    public abstract com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder init(com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id p0, com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver p1);

    public abstract com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder typeProperty(String p0);
}
