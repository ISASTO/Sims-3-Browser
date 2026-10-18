package com.flurry.org.codehaus.jackson.map.type;
public class MapLikeType extends com.flurry.org.codehaus.jackson.map.type.TypeBase {
    protected final com.flurry.org.codehaus.jackson.type.JavaType _keyType;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _valueType;

    protected MapLikeType(Class p4, com.flurry.org.codehaus.jackson.type.JavaType p5, com.flurry.org.codehaus.jackson.type.JavaType p6)
    {
        super(p4, (p5.hashCode() ^ p6.hashCode()), 0, 0);
        super._keyType = p5;
        super._valueType = p6;
        return;
    }

    protected MapLikeType(Class p3, com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.type.JavaType p5, Object p6, Object p7)
    {
        super(p3, (p4.hashCode() ^ p5.hashCode()), p6, p7);
        super._keyType = p4;
        super._valueType = p5;
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.type.MapLikeType construct(Class p6, com.flurry.org.codehaus.jackson.type.JavaType p7, com.flurry.org.codehaus.jackson.type.JavaType p8)
    {
        return new com.flurry.org.codehaus.jackson.map.type.MapLikeType(p6, p7, p8, 0, 0);
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType _narrow(Class p7)
    {
        return new com.flurry.org.codehaus.jackson.map.type.MapLikeType(p7, this._keyType, this._valueType, this._valueHandler, this._typeHandler);
    }

    protected String buildCanonicalName()
    {
        StringBuilder v0_1 = new StringBuilder();
        v0_1.append(this._class.getName());
        if (this._keyType != null) {
            v0_1.append(60);
            v0_1.append(this._keyType.toCanonical());
            v0_1.append(44);
            v0_1.append(this._valueType.toCanonical());
            v0_1.append(62);
        }
        return v0_1.toString();
    }

    public com.flurry.org.codehaus.jackson.type.JavaType containedType(int p2)
    {
        int v0_1;
        if (p2 != 0) {
            if (p2 != 1) {
                v0_1 = 0;
            } else {
                v0_1 = this._valueType;
            }
        } else {
            v0_1 = this._keyType;
        }
        return v0_1;
    }

    public int containedTypeCount()
    {
        return 2;
    }

    public String containedTypeName(int p2)
    {
        int v0_1;
        if (p2 != 0) {
            if (p2 != 1) {
                v0_1 = 0;
            } else {
                v0_1 = "V";
            }
        } else {
            v0_1 = "K";
        }
        return v0_1;
    }

    public boolean equals(Object p6)
    {
        int v1 = 1;
        if (p6 != this) {
            if (p6 != null) {
                if (p6.getClass() == this.getClass()) {
                    if ((this._class != ((com.flurry.org.codehaus.jackson.map.type.MapLikeType) p6)._class) || ((!this._keyType.equals(((com.flurry.org.codehaus.jackson.map.type.MapLikeType) p6)._keyType)) || (!this._valueType.equals(((com.flurry.org.codehaus.jackson.map.type.MapLikeType) p6)._valueType)))) {
                        v1 = 0;
                    }
                } else {
                    v1 = 0;
                }
            } else {
                v1 = 0;
            }
        }
        return v1;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getContentType()
    {
        return this._valueType;
    }

    public StringBuilder getErasedSignature(StringBuilder p3)
    {
        return com.flurry.org.codehaus.jackson.map.type.MapLikeType._classSignature(this._class, p3, 1);
    }

    public StringBuilder getGenericSignature(StringBuilder p3)
    {
        com.flurry.org.codehaus.jackson.map.type.MapLikeType._classSignature(this._class, p3, 0);
        p3.append(60);
        this._keyType.getGenericSignature(p3);
        this._valueType.getGenericSignature(p3);
        p3.append(">;");
        return p3;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getKeyType()
    {
        return this._keyType;
    }

    public boolean isContainerType()
    {
        return 1;
    }

    public boolean isMapLikeType()
    {
        return 1;
    }

    public boolean isTrueMapType()
    {
        return java.util.Map.isAssignableFrom(this._class);
    }

    public com.flurry.org.codehaus.jackson.type.JavaType narrowContentsBy(Class p7)
    {
        if (p7 != this._valueType.getRawClass()) {
            this = new com.flurry.org.codehaus.jackson.map.type.MapLikeType(this._class, this._keyType, this._valueType.narrowBy(p7), this._valueHandler, this._typeHandler);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType narrowKey(Class p7)
    {
        if (p7 != this._keyType.getRawClass()) {
            this = new com.flurry.org.codehaus.jackson.map.type.MapLikeType(this._class, this._keyType.narrowBy(p7), this._valueType, this._valueHandler, this._typeHandler);
        }
        return this;
    }

    public String toString()
    {
        return new StringBuilder().append("[map-like type; class ").append(this._class.getName()).append(", ").append(this._keyType).append(" -> ").append(this._valueType).append("]").toString();
    }

    public com.flurry.org.codehaus.jackson.type.JavaType widenContentsBy(Class p7)
    {
        if (p7 != this._valueType.getRawClass()) {
            this = new com.flurry.org.codehaus.jackson.map.type.MapLikeType(this._class, this._keyType, this._valueType.widenBy(p7), this._valueHandler, this._typeHandler);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType widenKey(Class p7)
    {
        if (p7 != this._keyType.getRawClass()) {
            this = new com.flurry.org.codehaus.jackson.map.type.MapLikeType(this._class, this._keyType.widenBy(p7), this._valueType, this._valueHandler, this._typeHandler);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.type.MapLikeType withContentTypeHandler(Object p7)
    {
        return new com.flurry.org.codehaus.jackson.map.type.MapLikeType(this._class, this._keyType, this._valueType.withTypeHandler(p7), this._valueHandler, this._typeHandler);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withContentTypeHandler(Object p2)
    {
        return this.withContentTypeHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.MapLikeType withContentValueHandler(Object p7)
    {
        return new com.flurry.org.codehaus.jackson.map.type.MapLikeType(this._class, this._keyType, this._valueType.withValueHandler(p7), this._valueHandler, this._typeHandler);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withContentValueHandler(Object p2)
    {
        return this.withContentValueHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.MapLikeType withKeyTypeHandler(Object p7)
    {
        return new com.flurry.org.codehaus.jackson.map.type.MapLikeType(this._class, this._keyType.withTypeHandler(p7), this._valueType, this._valueHandler, this._typeHandler);
    }

    public com.flurry.org.codehaus.jackson.map.type.MapLikeType withKeyValueHandler(Object p7)
    {
        return new com.flurry.org.codehaus.jackson.map.type.MapLikeType(this._class, this._keyType.withValueHandler(p7), this._valueType, this._valueHandler, this._typeHandler);
    }

    public com.flurry.org.codehaus.jackson.map.type.MapLikeType withTypeHandler(Object p7)
    {
        return new com.flurry.org.codehaus.jackson.map.type.MapLikeType(this._class, this._keyType, this._valueType, this._valueHandler, p7);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withTypeHandler(Object p2)
    {
        return this.withTypeHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.MapLikeType withValueHandler(Object p7)
    {
        return new com.flurry.org.codehaus.jackson.map.type.MapLikeType(this._class, this._keyType, this._valueType, p7, this._typeHandler);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withValueHandler(Object p2)
    {
        return this.withValueHandler(p2);
    }
}
