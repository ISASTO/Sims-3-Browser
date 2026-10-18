package com.flurry.org.codehaus.jackson.map.introspect;
public final class AnnotatedField extends com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember {
    protected final reflect.Field _field;

    public AnnotatedField(reflect.Field p1, com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p2)
    {
        super(p2);
        super._field = p1;
        return;
    }

    public void addOrOverride(otation.Annotation p2)
    {
        this._annotations.add(p2);
        return;
    }

    public bridge synthetic reflect.AnnotatedElement getAnnotated()
    {
        return this.getAnnotated();
    }

    public reflect.Field getAnnotated()
    {
        return this._field;
    }

    public otation.Annotation getAnnotation(Class p2)
    {
        return this._annotations.get(p2);
    }

    public int getAnnotationCount()
    {
        return this._annotations.size();
    }

    public Class getDeclaringClass()
    {
        return this._field.getDeclaringClass();
    }

    public String getFullName()
    {
        return new StringBuilder().append(this.getDeclaringClass().getName()).append("#").append(this.getName()).toString();
    }

    public reflect.Type getGenericType()
    {
        return this._field.getGenericType();
    }

    public reflect.Member getMember()
    {
        return this._field;
    }

    public int getModifiers()
    {
        return this._field.getModifiers();
    }

    public String getName()
    {
        return this._field.getName();
    }

    public Class getRawType()
    {
        return this._field.getType();
    }

    public void setValue(Object p5, Object p6)
    {
        try {
            this._field.set(p5, p6);
            return;
        } catch (IllegalAccessException v0) {
            throw new IllegalArgumentException(new StringBuilder().append("Failed to setValue() for field ").append(this.getFullName()).append(": ").append(v0.getMessage()).toString(), v0);
        }
    }

    public String toString()
    {
        return new StringBuilder().append("[field ").append(this.getName()).append(", annotations: ").append(this._annotations).append("]").toString();
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.introspect.Annotated withAnnotations(com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p2)
    {
        return this.withAnnotations(p2);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField withAnnotations(com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p3)
    {
        return new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField(this._field, p3);
    }
}
