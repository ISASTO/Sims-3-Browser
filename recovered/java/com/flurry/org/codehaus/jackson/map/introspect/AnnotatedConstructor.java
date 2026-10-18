package com.flurry.org.codehaus.jackson.map.introspect;
public final class AnnotatedConstructor extends com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams {
    protected final reflect.Constructor _constructor;

    public AnnotatedConstructor(reflect.Constructor p3, com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p4, com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap[] p5)
    {
        super(p4, p5);
        if (p3 != null) {
            super._constructor = p3;
            return;
        } else {
            throw new IllegalArgumentException("Null constructor not allowed");
        }
    }

    public final Object call()
    {
        Object[] v1_1 = new Object[0];
        return this._constructor.newInstance(v1_1);
    }

    public final Object call(Object[] p2)
    {
        return this._constructor.newInstance(p2);
    }

    public final Object call1(Object p4)
    {
        Object v0_0 = this._constructor;
        Object[] v1_1 = new Object[1];
        v1_1[0] = p4;
        return v0_0.newInstance(v1_1);
    }

    public bridge synthetic reflect.AnnotatedElement getAnnotated()
    {
        return this.getAnnotated();
    }

    public reflect.Constructor getAnnotated()
    {
        return this._constructor;
    }

    public Class getDeclaringClass()
    {
        return this._constructor.getDeclaringClass();
    }

    public reflect.Type getGenericType()
    {
        return this.getRawType();
    }

    public reflect.Member getMember()
    {
        return this._constructor;
    }

    public int getModifiers()
    {
        return this._constructor.getModifiers();
    }

    public String getName()
    {
        return this._constructor.getName();
    }

    public Class getParameterClass(int p3)
    {
        Class v1_2;
        Class[] v0 = this._constructor.getParameterTypes();
        if (p3 < v0.length) {
            v1_2 = v0[p3];
        } else {
            v1_2 = 0;
        }
        return v1_2;
    }

    public int getParameterCount()
    {
        return this._constructor.getParameterTypes().length;
    }

    public reflect.Type getParameterType(int p3)
    {
        reflect.Type v1_2;
        reflect.Type[] v0 = this._constructor.getGenericParameterTypes();
        if (p3 < v0.length) {
            v1_2 = v0[p3];
        } else {
            v1_2 = 0;
        }
        return v1_2;
    }

    public Class getRawType()
    {
        return this._constructor.getDeclaringClass();
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getType(com.flurry.org.codehaus.jackson.map.type.TypeBindings p2)
    {
        return this.getType(p2, this._constructor.getTypeParameters());
    }

    public void setValue(Object p4, Object p5)
    {
        throw new UnsupportedOperationException(new StringBuilder().append("Cannot call setValue() on constructor of ").append(this.getDeclaringClass().getName()).toString());
    }

    public String toString()
    {
        return new StringBuilder().append("[constructor for ").append(this.getName()).append(", annotations: ").append(this._annotations).append("]").toString();
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.introspect.Annotated withAnnotations(com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p2)
    {
        return this.withAnnotations(p2);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor withAnnotations(com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p4)
    {
        return new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor(this._constructor, p4, this._paramAnnotations);
    }
}
