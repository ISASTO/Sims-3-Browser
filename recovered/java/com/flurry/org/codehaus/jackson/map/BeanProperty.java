package com.flurry.org.codehaus.jackson.map;
public interface BeanProperty implements com.flurry.org.codehaus.jackson.map.util.Named {

    public abstract otation.Annotation getAnnotation(Class p0);

    public abstract otation.Annotation getContextAnnotation(Class p0);

    public abstract com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember getMember();

    public abstract String getName();

    public abstract com.flurry.org.codehaus.jackson.type.JavaType getType();
}
