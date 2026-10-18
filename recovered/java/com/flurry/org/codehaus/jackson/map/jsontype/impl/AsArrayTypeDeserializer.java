package com.flurry.org.codehaus.jackson.map.jsontype.impl;
public class AsArrayTypeDeserializer extends com.flurry.org.codehaus.jackson.map.jsontype.impl.TypeDeserializerBase {

    public AsArrayTypeDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4)
    {
        this(p2, p3, p4, 0);
        return;
    }

    public AsArrayTypeDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3, Class p4)
    {
        super(p1, p2, p3, p4);
        return;
    }

    private final Object _deserialize(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7)
    {
        boolean v1 = p6.isExpectedStartArrayToken();
        Object v2 = this._findDeserializer(p7, this._locateTypeId(p6, p7)).deserialize(p6, p7);
        if ((!v1) || (p6.nextToken() == com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY)) {
            return v2;
        } else {
            throw p7.wrongTokenException(p6, com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY, "expected closing END_ARRAY after type information and deserialized value");
        }
    }

    protected final String _locateTypeId(com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        String v0;
        if (p5.isExpectedStartArrayToken()) {
            if (p5.nextToken() == com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                v0 = p5.getText();
                p5.nextToken();
            } else {
                if ((!(this._idResolver instanceof com.flurry.org.codehaus.jackson.map.jsontype.impl.TypeIdResolverBase)) || (this._defaultImpl == null)) {
                    throw p6.wrongTokenException(p5, com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING, new StringBuilder().append("need JSON String that contains type id (for subtype of ").append(this.baseTypeName()).append(")").toString());
                } else {
                    v0 = ((com.flurry.org.codehaus.jackson.map.jsontype.impl.TypeIdResolverBase) this._idResolver).idFromBaseType();
                }
            }
        } else {
            if ((!(this._idResolver instanceof com.flurry.org.codehaus.jackson.map.jsontype.impl.TypeIdResolverBase)) || (this._defaultImpl == null)) {
                throw p6.wrongTokenException(p5, com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY, new StringBuilder().append("need JSON Array to contain As.WRAPPER_ARRAY type information for class ").append(this.baseTypeName()).toString());
            } else {
                v0 = ((com.flurry.org.codehaus.jackson.map.jsontype.impl.TypeIdResolverBase) this._idResolver).idFromBaseType();
            }
        }
        return v0;
    }

    public Object deserializeTypedFromAny(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._deserialize(p2, p3);
    }

    public Object deserializeTypedFromArray(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._deserialize(p2, p3);
    }

    public Object deserializeTypedFromObject(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._deserialize(p2, p3);
    }

    public Object deserializeTypedFromScalar(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._deserialize(p2, p3);
    }

    public com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As getTypeInclusion()
    {
        return com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.WRAPPER_ARRAY;
    }
}
