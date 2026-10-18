package com.flurry.org.codehaus.jackson.map.type;
public final class SimpleType extends com.flurry.org.codehaus.jackson.map.type.TypeBase {
    protected final String[] _typeNames;
    protected final com.flurry.org.codehaus.jackson.type.JavaType[] _typeParameters;

    protected SimpleType(Class p7)
    {
        this(p7, 0, 0, 0, 0);
        return;
    }

    protected SimpleType(Class p7, String[] p8, com.flurry.org.codehaus.jackson.type.JavaType[] p9)
    {
        this(p7, p8, p9, 0, 0);
        return;
    }

    protected SimpleType(Class p3, String[] p4, com.flurry.org.codehaus.jackson.type.JavaType[] p5, Object p6, Object p7)
    {
        super(p3, 0, p6, p7);
        if ((p4 != null) && (p4.length != 0)) {
            super._typeNames = p4;
            super._typeParameters = p5;
        } else {
            super._typeNames = 0;
            super._typeParameters = 0;
        }
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.type.SimpleType construct(Class p3)
    {
        if (!java.util.Map.isAssignableFrom(p3)) {
            if (!java.util.Collection.isAssignableFrom(p3)) {
                if (!p3.isArray()) {
                    return new com.flurry.org.codehaus.jackson.map.type.SimpleType(p3);
                } else {
                    throw new IllegalArgumentException(new StringBuilder().append("Can not construct SimpleType for an array (class: ").append(p3.getName()).append(")").toString());
                }
            } else {
                throw new IllegalArgumentException(new StringBuilder().append("Can not construct SimpleType for a Collection (class: ").append(p3.getName()).append(")").toString());
            }
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("Can not construct SimpleType for a Map (class: ").append(p3.getName()).append(")").toString());
        }
    }

    public static com.flurry.org.codehaus.jackson.map.type.SimpleType constructUnsafe(Class p6)
    {
        return new com.flurry.org.codehaus.jackson.map.type.SimpleType(p6, 0, 0, 0, 0);
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType _narrow(Class p7)
    {
        return new com.flurry.org.codehaus.jackson.map.type.SimpleType(p7, this._typeNames, this._typeParameters, this._valueHandler, this._typeHandler);
    }

    protected String buildCanonicalName()
    {
        StringBuilder v4_1 = new StringBuilder();
        v4_1.append(this._class.getName());
        if ((this._typeParameters != null) && (this._typeParameters.length > 0)) {
            v4_1.append(60);
            int v1 = 1;
            com.flurry.org.codehaus.jackson.type.JavaType[] v0 = this._typeParameters;
            int v3 = v0.length;
            int v2 = 0;
            while (v2 < v3) {
                com.flurry.org.codehaus.jackson.type.JavaType v5 = v0[v2];
                if (v1 == 0) {
                    v4_1.append(44);
                } else {
                    v1 = 0;
                }
                v4_1.append(v5.toCanonical());
                v2++;
            }
            v4_1.append(62);
        }
        return v4_1.toString();
    }

    public com.flurry.org.codehaus.jackson.type.JavaType containedType(int p2)
    {
        if ((p2 >= 0) && ((this._typeParameters != null) && (p2 < this._typeParameters.length))) {
            com.flurry.org.codehaus.jackson.type.JavaType v0_4 = this._typeParameters[p2];
        } else {
            v0_4 = 0;
        }
        return v0_4;
    }

    public int containedTypeCount()
    {
        int v0_2;
        if (this._typeParameters != null) {
            v0_2 = this._typeParameters.length;
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    public String containedTypeName(int p2)
    {
        if ((p2 >= 0) && ((this._typeNames != null) && (p2 < this._typeNames.length))) {
            String v0_4 = this._typeNames[p2];
        } else {
            v0_4 = 0;
        }
        return v0_4;
    }

    public boolean equals(Object p10)
    {
        int v5 = 0;
        if (p10 != this) {
            if ((p10 != null) && ((p10.getClass() == this.getClass()) && (((com.flurry.org.codehaus.jackson.map.type.SimpleType) p10)._class == this._class))) {
                com.flurry.org.codehaus.jackson.type.JavaType[] v3 = this._typeParameters;
                com.flurry.org.codehaus.jackson.type.JavaType[] v4 = ((com.flurry.org.codehaus.jackson.map.type.SimpleType) p10)._typeParameters;
                if (v3 != null) {
                    if ((v4 != null) && (v3.length == v4.length)) {
                        int v0 = 0;
                        while (v0 < v3.length) {
                            if (v3[v0].equals(v4[v0])) {
                                v0++;
                            }
                        }
                        v5 = 1;
                    }
                } else {
                    if ((v4 == null) || (v4.length == 0)) {
                        v5 = 1;
                    }
                }
            }
        } else {
            v5 = 1;
        }
        return v5;
    }

    public StringBuilder getErasedSignature(StringBuilder p3)
    {
        return com.flurry.org.codehaus.jackson.map.type.SimpleType._classSignature(this._class, p3, 1);
    }

    public StringBuilder getGenericSignature(StringBuilder p7)
    {
        com.flurry.org.codehaus.jackson.map.type.SimpleType._classSignature(this._class, p7, 0);
        if (this._typeParameters != null) {
            p7.append(60);
            com.flurry.org.codehaus.jackson.type.JavaType[] v0 = this._typeParameters;
            int v2 = v0.length;
            int v1 = 0;
            while (v1 < v2) {
                p7 = v0[v1].getGenericSignature(p7);
                v1++;
            }
            p7.append(62);
        }
        p7.append(59);
        return p7;
    }

    public boolean isContainerType()
    {
        return 0;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType narrowContentsBy(Class p3)
    {
        throw new IllegalArgumentException("Internal error: SimpleType.narrowContentsBy() should never be called");
    }

    public String toString()
    {
        StringBuilder v0_1 = new StringBuilder(40);
        v0_1.append("[simple type, class ").append(this.buildCanonicalName()).append(93);
        return v0_1.toString();
    }

    public com.flurry.org.codehaus.jackson.type.JavaType widenContentsBy(Class p3)
    {
        throw new IllegalArgumentException("Internal error: SimpleType.widenContentsBy() should never be called");
    }

    public com.flurry.org.codehaus.jackson.type.JavaType withContentTypeHandler(Object p3)
    {
        throw new IllegalArgumentException("Simple types have no content types; can not call withContenTypeHandler()");
    }

    public com.flurry.org.codehaus.jackson.map.type.SimpleType withContentValueHandler(Object p3)
    {
        throw new IllegalArgumentException("Simple types have no content types; can not call withContenValueHandler()");
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withContentValueHandler(Object p2)
    {
        return this.withContentValueHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.SimpleType withTypeHandler(Object p7)
    {
        return new com.flurry.org.codehaus.jackson.map.type.SimpleType(this._class, this._typeNames, this._typeParameters, this._valueHandler, p7);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withTypeHandler(Object p2)
    {
        return this.withTypeHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.SimpleType withValueHandler(Object p7)
    {
        if (p7 != this._valueHandler) {
            this = new com.flurry.org.codehaus.jackson.map.type.SimpleType(this._class, this._typeNames, this._typeParameters, p7, this._typeHandler);
        }
        return this;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withValueHandler(Object p2)
    {
        return this.withValueHandler(p2);
    }
}
