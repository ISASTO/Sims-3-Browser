package com.flurry.org.codehaus.jackson.map.jsontype.impl;
public abstract class TypeDeserializerBase extends com.flurry.org.codehaus.jackson.map.TypeDeserializer {
    protected final com.flurry.org.codehaus.jackson.type.JavaType _baseType;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _defaultImpl;
    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _defaultImplDeserializer;
    protected final java.util.HashMap _deserializers;
    protected final com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver _idResolver;
    protected final com.flurry.org.codehaus.jackson.map.BeanProperty _property;

    protected TypeDeserializerBase(com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4)
    {
        this(p2, p3, p4, 0);
        return;
    }

    protected TypeDeserializerBase(com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4, Class p5)
    {
        this._baseType = p2;
        this._idResolver = p3;
        this._property = p4;
        this._deserializers = new java.util.HashMap();
        if (p5 != null) {
            this._defaultImpl = p2.forcedNarrowBy(p5);
        } else {
            this._defaultImpl = 0;
        }
        return;
    }

    protected final com.flurry.org.codehaus.jackson.map.JsonDeserializer _findDefaultImplDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v0_2;
        if (this._defaultImpl != null) {
            try {
                if (this._defaultImplDeserializer == null) {
                    this._defaultImplDeserializer = p6.getDeserializerProvider().findValueDeserializer(p6.getConfig(), this._defaultImpl, this._property);
                }
            } catch (com.flurry.org.codehaus.jackson.map.JsonDeserializer v0_3) {
                throw v0_3;
            }
            v0_2 = this._defaultImplDeserializer;
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    protected final com.flurry.org.codehaus.jackson.map.JsonDeserializer _findDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationContext p7, String p8)
    {
        try {
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v0_0 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) this._deserializers.get(p8));
        } catch (com.flurry.org.codehaus.jackson.type.JavaType v2_10) {
            throw v2_10;
        }
        if (v0_0 == null) {
            com.flurry.org.codehaus.jackson.type.JavaType v1 = this._idResolver.typeFromId(p8);
            if (v1 != null) {
                if ((this._baseType != null) && (this._baseType.getClass() == v1.getClass())) {
                    v1 = this._baseType.narrowBy(v1.getRawClass());
                }
                v0_0 = p7.getDeserializerProvider().findValueDeserializer(p7.getConfig(), v1, this._property);
            } else {
                if (this._defaultImpl != null) {
                    v0_0 = this._findDefaultImplDeserializer(p7);
                } else {
                    throw p7.unknownTypeException(this._baseType, p8);
                }
            }
            this._deserializers.put(p8, v0_0);
        }
        return v0_0;
    }

    public String baseTypeName()
    {
        return this._baseType.getRawClass().getName();
    }

    public Class getDefaultImpl()
    {
        Class v0_2;
        if (this._defaultImpl != null) {
            v0_2 = this._defaultImpl.getRawClass();
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    public String getPropertyName()
    {
        return 0;
    }

    public com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver getTypeIdResolver()
    {
        return this._idResolver;
    }

    public abstract com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As getTypeInclusion();

    public String toString()
    {
        StringBuilder v0_1 = new StringBuilder();
        v0_1.append(91).append(this.getClass().getName());
        v0_1.append("; base-type:").append(this._baseType);
        v0_1.append("; id-resolver: ").append(this._idResolver);
        v0_1.append(93);
        return v0_1.toString();
    }
}
