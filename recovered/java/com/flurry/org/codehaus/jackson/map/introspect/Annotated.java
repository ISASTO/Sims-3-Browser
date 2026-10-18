package com.flurry.org.codehaus.jackson.map.introspect;
public abstract class Annotated {

    protected Annotated()
    {
        return;
    }

    protected abstract com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap getAllAnnotations();

    public abstract reflect.AnnotatedElement getAnnotated();

    public abstract otation.Annotation getAnnotation(Class p0);

    public abstract reflect.Type getGenericType();

    protected abstract int getModifiers();

    public abstract String getName();

    public abstract Class getRawType();

    public com.flurry.org.codehaus.jackson.type.JavaType getType(com.flurry.org.codehaus.jackson.map.type.TypeBindings p2)
    {
        return p2.resolveType(this.getGenericType());
    }

    public final boolean hasAnnotation(Class p2)
    {
        int v0_1;
        if (this.getAnnotation(p2) == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public final boolean isPublic()
    {
        return reflect.Modifier.isPublic(this.getModifiers());
    }

    public abstract com.flurry.org.codehaus.jackson.map.introspect.Annotated withAnnotations(com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p0);

    public final com.flurry.org.codehaus.jackson.map.introspect.Annotated withFallBackAnnotationsFrom(com.flurry.org.codehaus.jackson.map.introspect.Annotated p3)
    {
        return this.withAnnotations(com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap.merge(this.getAllAnnotations(), p3.getAllAnnotations()));
    }
}
