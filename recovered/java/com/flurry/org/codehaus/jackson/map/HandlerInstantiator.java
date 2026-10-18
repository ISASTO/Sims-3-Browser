package com.flurry.org.codehaus.jackson.map;
public abstract class HandlerInstantiator {

    public HandlerInstantiator()
    {
        return;
    }

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer deserializerInstance(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.map.introspect.Annotated p1, Class p2);

    public abstract com.flurry.org.codehaus.jackson.map.KeyDeserializer keyDeserializerInstance(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.map.introspect.Annotated p1, Class p2);

    public abstract com.flurry.org.codehaus.jackson.map.JsonSerializer serializerInstance(com.flurry.org.codehaus.jackson.map.SerializationConfig p0, com.flurry.org.codehaus.jackson.map.introspect.Annotated p1, Class p2);

    public abstract com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver typeIdResolverInstance(com.flurry.org.codehaus.jackson.map.MapperConfig p0, com.flurry.org.codehaus.jackson.map.introspect.Annotated p1, Class p2);

    public abstract com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder typeResolverBuilderInstance(com.flurry.org.codehaus.jackson.map.MapperConfig p0, com.flurry.org.codehaus.jackson.map.introspect.Annotated p1, Class p2);

    public com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator valueInstantiatorInstance(com.flurry.org.codehaus.jackson.map.MapperConfig p2, com.flurry.org.codehaus.jackson.map.introspect.Annotated p3, Class p4)
    {
        return 0;
    }
}
