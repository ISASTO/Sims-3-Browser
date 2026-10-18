package com.flurry.org.codehaus.jackson.map;
public abstract class ClassIntrospector {

    protected ClassIntrospector()
    {
        return;
    }

    public abstract com.flurry.org.codehaus.jackson.map.BeanDescription forClassAnnotations(com.flurry.org.codehaus.jackson.map.MapperConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p2);

    public com.flurry.org.codehaus.jackson.map.BeanDescription forClassAnnotations(com.flurry.org.codehaus.jackson.map.MapperConfig p2, Class p3, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p4)
    {
        return this.forClassAnnotations(p2, p2.constructType(p3), p4);
    }

    public abstract com.flurry.org.codehaus.jackson.map.BeanDescription forCreation(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p2);

    public abstract com.flurry.org.codehaus.jackson.map.BeanDescription forDeserialization(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p2);

    public abstract com.flurry.org.codehaus.jackson.map.BeanDescription forDirectClassAnnotations(com.flurry.org.codehaus.jackson.map.MapperConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p2);

    public com.flurry.org.codehaus.jackson.map.BeanDescription forDirectClassAnnotations(com.flurry.org.codehaus.jackson.map.MapperConfig p2, Class p3, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p4)
    {
        return this.forDirectClassAnnotations(p2, p2.constructType(p3), p4);
    }

    public abstract com.flurry.org.codehaus.jackson.map.BeanDescription forSerialization(com.flurry.org.codehaus.jackson.map.SerializationConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p2);
}
