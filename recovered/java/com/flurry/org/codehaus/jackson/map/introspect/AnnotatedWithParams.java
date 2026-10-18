package com.flurry.org.codehaus.jackson.map.introspect;
public abstract class AnnotatedWithParams extends com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember {
    protected final com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap[] _paramAnnotations;

    protected AnnotatedWithParams(com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p1, com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap[] p2)
    {
        super(p1);
        super._paramAnnotations = p2;
        return;
    }

    public final void addIfNotPresent(otation.Annotation p2)
    {
        this._annotations.addIfNotPresent(p2);
        return;
    }

    public final void addOrOverride(otation.Annotation p2)
    {
        this._annotations.add(p2);
        return;
    }

    public final void addOrOverrideParam(int p3, otation.Annotation p4)
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap v0_0 = this._paramAnnotations[p3];
        if (v0_0 == null) {
            v0_0 = new com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap();
            this._paramAnnotations[p3] = v0_0;
        }
        v0_0.add(p4);
        return;
    }

    public abstract Object call();

    public abstract Object call(Object[] p0);

    public abstract Object call1(Object p0);

    public final otation.Annotation getAnnotation(Class p2)
    {
        return this._annotations.get(p2);
    }

    public final int getAnnotationCount()
    {
        return this._annotations.size();
    }

    public final com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter getParameter(int p4)
    {
        return new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter(this, this.getParameterType(p4), this._paramAnnotations[p4], p4);
    }

    public final com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap getParameterAnnotations(int p2)
    {
        if ((this._paramAnnotations == null) || ((p2 < 0) || (p2 > this._paramAnnotations.length))) {
            com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap v0_3 = 0;
        } else {
            v0_3 = this._paramAnnotations[p2];
        }
        return v0_3;
    }

    public abstract Class getParameterClass(int p0);

    public abstract int getParameterCount();

    public abstract reflect.Type getParameterType(int p0);

    protected com.flurry.org.codehaus.jackson.type.JavaType getType(com.flurry.org.codehaus.jackson.map.type.TypeBindings p10, reflect.TypeVariable[] p11)
    {
        if ((p11 != null) && (p11.length > 0)) {
            p10 = p10.childInstance();
            int v2 = p11.length;
            int v1 = 0;
            while (v1 < v2) {
                com.flurry.org.codehaus.jackson.type.JavaType v5;
                reflect.TypeVariable v6 = p11[v1];
                p10._addPlaceholder(v6.getName());
                reflect.Type v3 = v6.getBounds()[0];
                if (v3 != null) {
                    v5 = p10.resolveType(v3);
                } else {
                    v5 = com.flurry.org.codehaus.jackson.map.type.TypeFactory.unknownType();
                }
                p10.addBinding(v6.getName(), v5);
                v1++;
            }
        }
        return p10.resolveType(this.getGenericType());
    }

    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter replaceParameterAnnotations(int p2, com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p3)
    {
        this._paramAnnotations[p2] = p3;
        return this.getParameter(p2);
    }

    public final com.flurry.org.codehaus.jackson.type.JavaType resolveParameterType(int p2, com.flurry.org.codehaus.jackson.map.type.TypeBindings p3)
    {
        return p3.resolveType(this.getParameterType(p2));
    }
}
