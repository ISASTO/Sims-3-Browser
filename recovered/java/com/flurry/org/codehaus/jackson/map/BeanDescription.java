package com.flurry.org.codehaus.jackson.map;
public abstract class BeanDescription {
    protected final com.flurry.org.codehaus.jackson.type.JavaType _type;

    protected BeanDescription(com.flurry.org.codehaus.jackson.type.JavaType p1)
    {
        this._type = p1;
        return;
    }

    public abstract com.flurry.org.codehaus.jackson.map.type.TypeBindings bindingsForBeanType();

    public abstract com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod findAnyGetter();

    public abstract com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod findAnySetter();

    public abstract com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor findDefaultConstructor();

    public abstract java.util.LinkedHashMap findDeserializableFields(com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p0, java.util.Collection p1);

    public abstract java.util.LinkedHashMap findGetters(com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p0, java.util.Collection p1);

    public abstract java.util.Map findInjectables();

    public abstract com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod findJsonValueMethod();

    public abstract java.util.List findProperties();

    public abstract java.util.Map findSerializableFields(com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p0, java.util.Collection p1);

    public abstract java.util.LinkedHashMap findSetters(com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p0);

    public Class getBeanClass()
    {
        return this._type.getRawClass();
    }

    public abstract com.flurry.org.codehaus.jackson.map.util.Annotations getClassAnnotations();

    public abstract com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass getClassInfo();

    public abstract java.util.Set getIgnoredPropertyNames();

    public com.flurry.org.codehaus.jackson.type.JavaType getType()
    {
        return this._type;
    }

    public abstract boolean hasKnownClassAnnotations();

    public abstract com.flurry.org.codehaus.jackson.type.JavaType resolveType(reflect.Type p0);
}
