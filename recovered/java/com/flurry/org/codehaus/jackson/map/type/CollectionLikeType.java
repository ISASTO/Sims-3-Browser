package com.flurry.org.codehaus.jackson.map.type;
public class CollectionLikeType extends com.flurry.org.codehaus.jackson.map.type.TypeBase {
    protected final com.flurry.org.codehaus.jackson.type.JavaType _elementType;

    protected CollectionLikeType(Class p3, com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        super(p3, p4.hashCode(), 0, 0);
        super._elementType = p4;
        return;
    }

    protected CollectionLikeType(Class p2, com.flurry.org.codehaus.jackson.type.JavaType p3, Object p4, Object p5)
    {
        super(p2, p3.hashCode(), p4, p5);
        super._elementType = p3;
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.type.CollectionLikeType construct(Class p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return new com.flurry.org.codehaus.jackson.map.type.CollectionLikeType(p2, p3, 0, 0);
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType _narrow(Class p5)
    {
        return new com.flurry.org.codehaus.jackson.map.type.CollectionLikeType(p5, this._elementType, this._valueHandler, this._typeHandler);
    }

    protected String buildCanonicalName()
    {
        StringBuilder v0_1 = new StringBuilder();
        v0_1.append(this._class.getName());
        if (this._elementType != null) {
            v0_1.append(60);
            v0_1.append(this._elementType.toCanonical());
            v0_1.append(62);
        }
        return v0_1.toString();
    }

    public com.flurry.org.codehaus.jackson.type.JavaType containedType(int p2)
    {
        int v0;
        if (p2 != 0) {
            v0 = 0;
        } else {
            v0 = this._elementType;
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

    public boolean equals(Object p6)
    {
        int v1 = 1;
        if (p6 != this) {
            if (p6 != null) {
                if (p6.getClass() == this.getClass()) {
                    if ((this._class != ((com.flurry.org.codehaus.jackson.map.type.CollectionLikeType) p6)._class) || (!this._elementType.equals(((com.flurry.org.codehaus.jackson.map.type.CollectionLikeType) p6)._elementType))) {
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
        return this._elementType;
    }

    public StringBuilder getErasedSignature(StringBuilder p3)
    {
        return com.flurry.org.codehaus.jackson.map.type.CollectionLikeType._classSignature(this._class, p3, 1);
    }

    public StringBuilder getGenericSignature(StringBuilder p3)
    {
        com.flurry.org.codehaus.jackson.map.type.CollectionLikeType._classSignature(this._class, p3, 0);
        p3.append(60);
        this._elementType.getGenericSignature(p3);
        p3.append(">;");
        return p3;
    }

    public boolean isCollectionLikeType()
    {
        return 1;
    }

    public boolean isContainerType()
    {
        return 1;
    }

    public boolean isTrueCollectionType()
    {
        return java.util.Collection.isAssignableFrom(this._class);
    }

    public com.flurry.org.codehaus.jackson.type.JavaType narrowContentsBy(Class p6)
    {
        if (p6 != this._elementType.getRawClass()) {
            this = new com.flurry.org.codehaus.jackson.map.type.CollectionLikeType(this._class, this._elementType.narrowBy(p6), this._valueHandler, this._typeHandler);
        }
        return this;
    }

    public String toString()
    {
        return new StringBuilder().append("[collection-like type; class ").append(this._class.getName()).append(", contains ").append(this._elementType).append("]").toString();
    }

    public com.flurry.org.codehaus.jackson.type.JavaType widenContentsBy(Class p6)
    {
        if (p6 != this._elementType.getRawClass()) {
            this = new com.flurry.org.codehaus.jackson.map.type.CollectionLikeType(this._class, this._elementType.widenBy(p6), this._valueHandler, this._typeHandler);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.type.CollectionLikeType withContentTypeHandler(Object p6)
    {
        return new com.flurry.org.codehaus.jackson.map.type.CollectionLikeType(this._class, this._elementType.withTypeHandler(p6), this._valueHandler, this._typeHandler);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withContentTypeHandler(Object p2)
    {
        return this.withContentTypeHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.CollectionLikeType withContentValueHandler(Object p6)
    {
        return new com.flurry.org.codehaus.jackson.map.type.CollectionLikeType(this._class, this._elementType.withValueHandler(p6), this._valueHandler, this._typeHandler);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withContentValueHandler(Object p2)
    {
        return this.withContentValueHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.CollectionLikeType withTypeHandler(Object p5)
    {
        return new com.flurry.org.codehaus.jackson.map.type.CollectionLikeType(this._class, this._elementType, this._valueHandler, p5);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withTypeHandler(Object p2)
    {
        return this.withTypeHandler(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.CollectionLikeType withValueHandler(Object p5)
    {
        return new com.flurry.org.codehaus.jackson.map.type.CollectionLikeType(this._class, this._elementType, p5, this._typeHandler);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.type.JavaType withValueHandler(Object p2)
    {
        return this.withValueHandler(p2);
    }
}
