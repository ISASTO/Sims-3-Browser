package com.flurry.org.codehaus.jackson.map.introspect;
public final class MemberKey {
    static final Class[] NO_CLASSES;
    final Class[] _argTypes;
    final String _name;

    static MemberKey()
    {
        Class[] v0_1 = new Class[0];
        com.flurry.org.codehaus.jackson.map.introspect.MemberKey.NO_CLASSES = v0_1;
        return;
    }

    public MemberKey(String p1, Class[] p2)
    {
        this._name = p1;
        if (p2 == null) {
            p2 = com.flurry.org.codehaus.jackson.map.introspect.MemberKey.NO_CLASSES;
        }
        this._argTypes = p2;
        return;
    }

    public MemberKey(reflect.Constructor p3)
    {
        this("", p3.getParameterTypes());
        return;
    }

    public MemberKey(reflect.Method p3)
    {
        this(p3.getName(), p3.getParameterTypes());
        return;
    }

    public boolean equals(Object p11)
    {
        int v6 = 1;
        if (p11 != this) {
            if (p11 != null) {
                if (p11.getClass() == this.getClass()) {
                    if (this._name.equals(((com.flurry.org.codehaus.jackson.map.introspect.MemberKey) p11)._name)) {
                        Class[] v3 = ((com.flurry.org.codehaus.jackson.map.introspect.MemberKey) p11)._argTypes;
                        int v1 = this._argTypes.length;
                        if (v3.length == v1) {
                            int v0 = 0;
                            while (v0 < v1) {
                                Class v4 = v3[v0];
                                Class v5 = this._argTypes[v0];
                                if ((v4 == v5) || ((v4.isAssignableFrom(v5)) || (v5.isAssignableFrom(v4)))) {
                                    v0++;
                                } else {
                                    v6 = 0;
                                    break;
                                }
                            }
                        } else {
                            v6 = 0;
                        }
                    } else {
                        v6 = 0;
                    }
                } else {
                    v6 = 0;
                }
            } else {
                v6 = 0;
            }
        }
        return v6;
    }

    public int hashCode()
    {
        return (this._name.hashCode() + this._argTypes.length);
    }

    public String toString()
    {
        return new StringBuilder().append(this._name).append("(").append(this._argTypes.length).append("-args)").toString();
    }
}
