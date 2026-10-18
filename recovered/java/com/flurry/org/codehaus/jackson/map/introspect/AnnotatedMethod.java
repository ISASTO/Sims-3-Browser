package com.flurry.org.codehaus.jackson.map.introspect;
public final class AnnotatedMethod extends com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams {
    protected final reflect.Method _method;
    protected Class[] _paramTypes;

    public AnnotatedMethod(reflect.Method p1, com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p2, com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap[] p3)
    {
        super(p2, p3);
        super._method = p1;
        return;
    }

    public final Object call()
    {
        Object[] v2_1 = new Object[0];
        return 億.invokeHook(this._method, 0, v2_1);
    }

    public final Object call(Object[] p3)
    {
        return 億.invokeHook(this._method, 0, p3);
    }

    public final Object call1(Object p5)
    {
        Object v0_0 = this._method;
        Object[] v2_1 = new Object[1];
        v2_1[0] = p5;
        return 億.invokeHook(v0_0, 0, v2_1);
    }

    public bridge synthetic reflect.AnnotatedElement getAnnotated()
    {
        return this.getAnnotated();
    }

    public reflect.Method getAnnotated()
    {
        return this._method;
    }

    public Class getDeclaringClass()
    {
        return this._method.getDeclaringClass();
    }

    public String getFullName()
    {
        return new StringBuilder().append(this.getDeclaringClass().getName()).append("#").append(this.getName()).append("(").append(this.getParameterCount()).append(" params)").toString();
    }

    public reflect.Type getGenericType()
    {
        return this._method.getGenericReturnType();
    }

    public reflect.Member getMember()
    {
        return this._method;
    }

    public int getModifiers()
    {
        return this._method.getModifiers();
    }

    public String getName()
    {
        return this._method.getName();
    }

    public Class getParameterClass(int p3)
    {
        Class v1_2;
        Class[] v0 = this._method.getParameterTypes();
        if (p3 < v0.length) {
            v1_2 = v0[p3];
        } else {
            v1_2 = 0;
        }
        return v1_2;
    }

    public Class[] getParameterClasses()
    {
        if (this._paramTypes == null) {
            this._paramTypes = this._method.getParameterTypes();
        }
        return this._paramTypes;
    }

    public int getParameterCount()
    {
        return this.getParameterTypes().length;
    }

    public reflect.Type getParameterType(int p3)
    {
        reflect.Type v1_2;
        reflect.Type[] v0 = this._method.getGenericParameterTypes();
        if (p3 < v0.length) {
            v1_2 = v0[p3];
        } else {
            v1_2 = 0;
        }
        return v1_2;
    }

    public reflect.Type[] getParameterTypes()
    {
        return this._method.getGenericParameterTypes();
    }

    public Class getRawType()
    {
        return this._method.getReturnType();
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getType(com.flurry.org.codehaus.jackson.map.type.TypeBindings p2)
    {
        return this.getType(p2, this._method.getTypeParameters());
    }

    public void setValue(Object p5, Object p6)
    {
        try {
            IllegalArgumentException v1_0 = this._method;
            String v2_4 = new Object[1];
            v2_4[0] = p6;
            億.invokeHook(v1_0, p5, v2_4);
            return;
        } catch (reflect.InvocationTargetException v0_0) {
            throw new IllegalArgumentException(new StringBuilder().append("Failed to setValue() with method ").append(this.getFullName()).append(": ").append(v0_0.getMessage()).toString(), v0_0);
        } catch (reflect.InvocationTargetException v0_1) {
            throw new IllegalArgumentException(new StringBuilder().append("Failed to setValue() with method ").append(this.getFullName()).append(": ").append(v0_1.getMessage()).toString(), v0_1);
        }
    }

    public String toString()
    {
        return new StringBuilder().append("[method ").append(this.getName()).append(", annotations: ").append(this._annotations).append("]").toString();
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.introspect.Annotated withAnnotations(com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p2)
    {
        return this.withAnnotations(p2);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod withAnnotations(com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p4)
    {
        return new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod(this._method, p4, this._paramAnnotations);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod withMethod(reflect.Method p4)
    {
        return new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod(p4, this._annotations, this._paramAnnotations);
    }
}
