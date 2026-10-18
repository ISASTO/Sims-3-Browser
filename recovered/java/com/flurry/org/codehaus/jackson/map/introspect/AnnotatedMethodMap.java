package com.flurry.org.codehaus.jackson.map.introspect;
public final class AnnotatedMethodMap implements java.lang.Iterable {
    protected java.util.LinkedHashMap _methods;

    public AnnotatedMethodMap()
    {
        return;
    }

    public void add(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p4)
    {
        if (this._methods == null) {
            this._methods = new java.util.LinkedHashMap();
        }
        this._methods.put(new com.flurry.org.codehaus.jackson.map.introspect.MemberKey(p4.getAnnotated()), p4);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod find(String p3, Class[] p4)
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v0_3;
        if (this._methods != null) {
            v0_3 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) this._methods.get(new com.flurry.org.codehaus.jackson.map.introspect.MemberKey(p3, p4)));
        } else {
            v0_3 = 0;
        }
        return v0_3;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod find(reflect.Method p3)
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v0_3;
        if (this._methods != null) {
            v0_3 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) this._methods.get(new com.flurry.org.codehaus.jackson.map.introspect.MemberKey(p3)));
        } else {
            v0_3 = 0;
        }
        return v0_3;
    }

    public boolean isEmpty()
    {
        if ((this._methods != null) && (this._methods.size() != 0)) {
            int v0_3 = 0;
        } else {
            v0_3 = 1;
        }
        return v0_3;
    }

    public java.util.Iterator iterator()
    {
        java.util.Iterator v1_1;
        if (this._methods == null) {
            v1_1 = java.util.Collections.emptyList().iterator();
        } else {
            v1_1 = this._methods.values().iterator();
        }
        return v1_1;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod remove(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2)
    {
        return this.remove(p2.getAnnotated());
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod remove(reflect.Method p3)
    {
        int v0_1;
        if (this._methods == null) {
            v0_1 = 0;
        } else {
            v0_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) this._methods.remove(new com.flurry.org.codehaus.jackson.map.introspect.MemberKey(p3)));
        }
        return v0_1;
    }

    public int size()
    {
        int v0_2;
        if (this._methods != null) {
            v0_2 = this._methods.size();
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }
}
