package com.flurry.org.codehaus.jackson.map.jsontype;
public abstract class SubtypeResolver {

    public SubtypeResolver()
    {
        return;
    }

    public abstract java.util.Collection collectAndResolveSubtypes(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p0, com.flurry.org.codehaus.jackson.map.MapperConfig p1, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p2);

    public abstract java.util.Collection collectAndResolveSubtypes(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p0, com.flurry.org.codehaus.jackson.map.MapperConfig p1, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p2);

    public abstract varargs void registerSubtypes(com.flurry.org.codehaus.jackson.map.jsontype.NamedType[] p0);

    public abstract varargs void registerSubtypes(Class[] p0);
}
