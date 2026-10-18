package com.flurry.org.codehaus.jackson.map.type;
public final class ArrayType extends com.flurry.org.codehaus.jackson.map.type.TypeBase {
    protected final com.flurry.org.codehaus.jackson.type.JavaType _componentType;
    protected final Object _emptyArray;

    private ArrayType(com.flurry.org.codehaus.jackson.type.JavaType p3, Object p4, Object p5, Object p6)
    {
        super(p4.getClass(), p3.hashCode(), p5, p6);
        super._componentType = p3;
        super._emptyArray = p4;
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.type.ArrayType construct(com.flurry.org.codehaus.jackson.type.JavaType p1)
    {
        return com.flurry.org.codehaus.jackson.map.type.ArrayType.construct(p1, 0, 0);
    }

    public static com.flurry.org.codehaus.jackson.map.type.ArrayType construct(com.flurry.org.codehaus.jackson.type.JavaType p4, Object p5, Object p6)
    {
        return new com.flurry.org.codehaus.jackson.map.type.ArrayType(p4, reflect.Array.newInstance(p4.getRawClass(), 0), 0, 0);
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType _narrow(Class p6)
    {
        if (p6.isArray()) {
            return com.flurry.org.codehaus.jackson.map.type.ArrayType.construct(com.flurry.org.codehaus.jackson.map.type.TypeFactory.defaultInstance().constructType(p6.getComponentType()), this._valueHandler, this._typeHandler);
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("Incompatible narrowing operation: trying to narrow ").append(this.toString()).append(" to class ").append(p6.getName()).toString());
        }
    }

    protected String buildCanonicalName()
    {
        return this._class.getName();
    }

    public com.flurry.org.codehaus.jackson.type.JavaType containedType(int p2)
    {
        int v0;
        if (p2 != 0) {
            v0 = 0;
        } else {
            v0 = this._componentType;
        }
        return v0;
    }

    public int containedTypeCount()
    {
        return 1;
    }

    public String containedTypeName(int p2)
    {
        int v0;
        if (p2 != 0) {
            v0 = 0;
        } else {
            v0 = "E";
        }
        return v0;
    }

    public boolean equals(Object p5)
    {
        boolean v1_0 = 0;
        if (p5 != this) {
            if ((p5 != null) && (p5.getClass() == this.getClass())) {
                v1_0 = this._componentType.equals(((com.flurry.org.codehaus.jackson.map.type.ArrayType) p5)._componentType);
            }
        } else {
            v1_0 = 1;
        }
        return v1_0;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getContentType()
    {
        return this._componentType;
    }

    public StringBuilder getErasedSignature(StringBuilder p2)
    {
        p2.append(91);
        return this._componentType.getErasedSignature(p2);
    }

    public StringBuilder getGenericSignature(StringBuilder p2)
    {
        p2.append(91);
        return this._componentType.getGenericSignature(p2);
    }

    public boolean hasGenericTypes()
    {
        return this._componentType.hasGenericTypes();
    }

    public boolean isAbstract()
    {
        return 0;
    }

    public boolean isArrayType()
    {
        return 1;
    }

    public boolean isConcrete()
    {
        return 1;
    }

    public boolean isContainerType()
    {
        return 1;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType narrowContentsBy(Class p4)
    {
        if (p4 != this._componentType.getRawClass()) {
            this = com.flurry.org.codehaus.jackson.map.type.ArrayType.construct(this._componentType.narrowBy(p4), this._valueHandler, this._typeHandler);
        }
        return this;
    }

    public String toString()
    {
        return new StringBuilder().append("[array type, component type: ").append(this._componentType).append("]").toString();
    }

    public com.flurry.org.codehaus.jackson.type.JavaType widenContentsBy(Class p4)
    {
        if (p4 != this._componentType.getRawClass()) {
            this = com.flurry.org.codehaus.jackson.map.type.ArrayType.construct(this._componentType.widenBy(p4), this._valueHandler, this._typeHandler);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.type.ArrayType withContentTypeHandler(Object p6)
    {
        if (p6 != this._componentType.getTypeHandler()) {
            this = new com.flurry.org.codehaus.jackson.map.type.ArrayType(this._componentType.withTypeHandler(p6), this._emptyArray, this._valueHandler, this._typeHandler);
        }
        return this;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withContentTypeHandler(Object p2)
    {
        return this.withContentTypeHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.ArrayType withContentValueHandler(Object p6)
    {
        if (p6 != this._componentType.getValueHandler()) {
            this = new com.flurry.org.codehaus.jackson.map.type.ArrayType(this._componentType.withValueHandler(p6), this._emptyArray, this._valueHandler, this._typeHandler);
        }
        return this;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withContentValueHandler(Object p2)
    {
        return this.withContentValueHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.ArrayType withTypeHandler(Object p5)
    {
        if (p5 != this._typeHandler) {
            this = new com.flurry.org.codehaus.jackson.map.type.ArrayType(this._componentType, this._emptyArray, this._valueHandler, p5);
        }
        return this;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withTypeHandler(Object p2)
    {
        return this.withTypeHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.ArrayType withValueHandler(Object p5)
    {
        if (p5 != this._valueHandler) {
            this = new com.flurry.org.codehaus.jackson.map.type.ArrayType(this._componentType, this._emptyArray, p5, this._typeHandler);
        }
        return this;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withValueHandler(Object p2)
    {
        return this.withValueHandler(p2);
    }
}
