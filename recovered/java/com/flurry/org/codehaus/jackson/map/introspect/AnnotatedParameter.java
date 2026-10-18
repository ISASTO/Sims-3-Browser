package com.flurry.org.codehaus.jackson.map.introspect;
public final class AnnotatedParameter extends com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember {
    protected final int _index;
    protected final com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams _owner;
    protected final reflect.Type _type;

    public AnnotatedParameter(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams p1, reflect.Type p2, com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p3, int p4)
    {
        super(p3);
        super._owner = p1;
        super._type = p2;
        super._index = p4;
        return;
    }

    public void addOrOverride(otation.Annotation p2)
    {
        this._annotations.add(p2);
        return;
    }

    public reflect.AnnotatedElement getAnnotated()
    {
        return 0;
    }

    public otation.Annotation getAnnotation(Class p2)
    {
        return this._annotations.get(p2);
    }

    public Class getDeclaringClass()
    {
        return this._owner.getDeclaringClass();
    }

    public reflect.Type getGenericType()
    {
        return this._type;
    }

    public int getIndex()
    {
        return this._index;
    }

    public reflect.Member getMember()
    {
        return this._owner.getMember();
    }

    public int getModifiers()
    {
        return this._owner.getModifiers();
    }

    public String getName()
    {
        return "";
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams getOwner()
    {
        return this._owner;
    }

    public reflect.Type getParameterType()
    {
        return this._type;
    }

    public Class getRawType()
    {
        Class v1_3;
        if (!(this._type instanceof Class)) {
            v1_3 = com.flurry.org.codehaus.jackson.map.type.TypeFactory.defaultInstance().constructType(this._type).getRawClass();
        } else {
            v1_3 = ((Class) this._type);
        }
        return v1_3;
    }

    public void setValue(Object p4, Object p5)
    {
        throw new UnsupportedOperationException(new StringBuilder().append("Cannot call setValue() on constructor parameter of ").append(this.getDeclaringClass().getName()).toString());
    }

    public String toString()
    {
        return new StringBuilder().append("[parameter #").append(this.getIndex()).append(", annotations: ").append(this._annotations).append("]").toString();
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.introspect.Annotated withAnnotations(com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p2)
    {
        return this.withAnnotations(p2);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter withAnnotations(com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p3)
    {
        if (p3 != this._annotations) {
            this = this._owner.replaceParameterAnnotations(this._index, p3);
        }
        return this;
    }
}
