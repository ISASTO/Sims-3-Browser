package com.flurry.org.codehaus.jackson.map.type;
public final class CollectionType extends com.flurry.org.codehaus.jackson.map.type.CollectionLikeType {

    private CollectionType(Class p1, com.flurry.org.codehaus.jackson.type.JavaType p2, Object p3, Object p4)
    {
        super(p1, p2, p3, p4);
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.type.CollectionType construct(Class p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return new com.flurry.org.codehaus.jackson.map.type.CollectionType(p2, p3, 0, 0);
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType _narrow(Class p4)
    {
        return new com.flurry.org.codehaus.jackson.map.type.CollectionType(p4, this._elementType, 0, 0);
    }

    public com.flurry.org.codehaus.jackson.type.JavaType narrowContentsBy(Class p6)
    {
        if (p6 != this._elementType.getRawClass()) {
            this = new com.flurry.org.codehaus.jackson.map.type.CollectionType(this._class, this._elementType.narrowBy(p6), this._valueHandler, this._typeHandler);
        }
        return this;
    }

    public String toString()
    {
        return new StringBuilder().append("[collection type; class ").append(this._class.getName()).append(", contains ").append(this._elementType).append("]").toString();
    }

    public com.flurry.org.codehaus.jackson.type.JavaType widenContentsBy(Class p6)
    {
        if (p6 != this._elementType.getRawClass()) {
            this = new com.flurry.org.codehaus.jackson.map.type.CollectionType(this._class, this._elementType.widenBy(p6), this._valueHandler, this._typeHandler);
        }
        return this;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.type.CollectionLikeType withContentTypeHandler(Object p2)
    {
        return this.withContentTypeHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.CollectionType withContentTypeHandler(Object p6)
    {
        return new com.flurry.org.codehaus.jackson.map.type.CollectionType(this._class, this._elementType.withTypeHandler(p6), this._valueHandler, this._typeHandler);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withContentTypeHandler(Object p2)
    {
        return this.withContentTypeHandler(p2);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.type.CollectionLikeType withContentValueHandler(Object p2)
    {
        return this.withContentValueHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.CollectionType withContentValueHandler(Object p6)
    {
        return new com.flurry.org.codehaus.jackson.map.type.CollectionType(this._class, this._elementType.withValueHandler(p6), this._valueHandler, this._typeHandler);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withContentValueHandler(Object p2)
    {
        return this.withContentValueHandler(p2);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.type.CollectionLikeType withTypeHandler(Object p2)
    {
        return this.withTypeHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.CollectionType withTypeHandler(Object p5)
    {
        return new com.flurry.org.codehaus.jackson.map.type.CollectionType(this._class, this._elementType, this._valueHandler, p5);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withTypeHandler(Object p2)
    {
        return this.withTypeHandler(p2);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.type.CollectionLikeType withValueHandler(Object p2)
    {
        return this.withValueHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.CollectionType withValueHandler(Object p5)
    {
        return new com.flurry.org.codehaus.jackson.map.type.CollectionType(this._class, this._elementType, p5, this._typeHandler);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withValueHandler(Object p2)
    {
        return this.withValueHandler(p2);
    }
}
