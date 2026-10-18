package com.flurry.org.codehaus.jackson.map.type;
public final class MapType extends com.flurry.org.codehaus.jackson.map.type.MapLikeType {

    private MapType(Class p7, com.flurry.org.codehaus.jackson.type.JavaType p8, com.flurry.org.codehaus.jackson.type.JavaType p9)
    {
        this(p7, p8, p9, 0, 0);
        return;
    }

    private MapType(Class p1, com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.type.JavaType p3, Object p4, Object p5)
    {
        super(p1, p2, p3, p4, p5);
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.type.MapType construct(Class p6, com.flurry.org.codehaus.jackson.type.JavaType p7, com.flurry.org.codehaus.jackson.type.JavaType p8)
    {
        return new com.flurry.org.codehaus.jackson.map.type.MapType(p6, p7, p8, 0, 0);
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType _narrow(Class p7)
    {
        return new com.flurry.org.codehaus.jackson.map.type.MapType(p7, this._keyType, this._valueType, this._valueHandler, this._typeHandler);
    }

    public com.flurry.org.codehaus.jackson.type.JavaType narrowContentsBy(Class p7)
    {
        if (p7 != this._valueType.getRawClass()) {
            this = new com.flurry.org.codehaus.jackson.map.type.MapType(this._class, this._keyType, this._valueType.narrowBy(p7), this._valueHandler, this._typeHandler);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType narrowKey(Class p7)
    {
        if (p7 != this._keyType.getRawClass()) {
            this = new com.flurry.org.codehaus.jackson.map.type.MapType(this._class, this._keyType.narrowBy(p7), this._valueType, this._valueHandler, this._typeHandler);
        }
        return this;
    }

    public String toString()
    {
        return new StringBuilder().append("[map type; class ").append(this._class.getName()).append(", ").append(this._keyType).append(" -> ").append(this._valueType).append("]").toString();
    }

    public com.flurry.org.codehaus.jackson.type.JavaType widenContentsBy(Class p7)
    {
        if (p7 != this._valueType.getRawClass()) {
            this = new com.flurry.org.codehaus.jackson.map.type.MapType(this._class, this._keyType, this._valueType.widenBy(p7), this._valueHandler, this._typeHandler);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType widenKey(Class p7)
    {
        if (p7 != this._keyType.getRawClass()) {
            this = new com.flurry.org.codehaus.jackson.map.type.MapType(this._class, this._keyType.widenBy(p7), this._valueType, this._valueHandler, this._typeHandler);
        }
        return this;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.type.MapLikeType withContentTypeHandler(Object p2)
    {
        return this.withContentTypeHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.MapType withContentTypeHandler(Object p7)
    {
        return new com.flurry.org.codehaus.jackson.map.type.MapType(this._class, this._keyType, this._valueType.withTypeHandler(p7), this._valueHandler, this._typeHandler);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withContentTypeHandler(Object p2)
    {
        return this.withContentTypeHandler(p2);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.type.MapLikeType withContentValueHandler(Object p2)
    {
        return this.withContentValueHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.MapType withContentValueHandler(Object p7)
    {
        return new com.flurry.org.codehaus.jackson.map.type.MapType(this._class, this._keyType, this._valueType.withValueHandler(p7), this._valueHandler, this._typeHandler);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withContentValueHandler(Object p2)
    {
        return this.withContentValueHandler(p2);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.type.MapLikeType withKeyTypeHandler(Object p2)
    {
        return this.withKeyTypeHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.MapType withKeyTypeHandler(Object p7)
    {
        return new com.flurry.org.codehaus.jackson.map.type.MapType(this._class, this._keyType.withTypeHandler(p7), this._valueType, this._valueHandler, this._typeHandler);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.type.MapLikeType withKeyValueHandler(Object p2)
    {
        return this.withKeyValueHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.MapType withKeyValueHandler(Object p7)
    {
        return new com.flurry.org.codehaus.jackson.map.type.MapType(this._class, this._keyType.withValueHandler(p7), this._valueType, this._valueHandler, this._typeHandler);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.type.MapLikeType withTypeHandler(Object p2)
    {
        return this.withTypeHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.MapType withTypeHandler(Object p7)
    {
        return new com.flurry.org.codehaus.jackson.map.type.MapType(this._class, this._keyType, this._valueType, this._valueHandler, p7);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withTypeHandler(Object p2)
    {
        return this.withTypeHandler(p2);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.type.MapLikeType withValueHandler(Object p2)
    {
        return this.withValueHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.MapType withValueHandler(Object p7)
    {
        return new com.flurry.org.codehaus.jackson.map.type.MapType(this._class, this._keyType, this._valueType, p7, this._typeHandler);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withValueHandler(Object p2)
    {
        return this.withValueHandler(p2);
    }
}
