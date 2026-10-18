package com.flurry.org.codehaus.jackson.map.jsontype.impl;
public class AsWrapperTypeDeserializer extends com.flurry.org.codehaus.jackson.map.jsontype.impl.TypeDeserializerBase {

    public AsWrapperTypeDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4)
    {
        this(p2, p3, p4, 0);
        return;
    }

    public AsWrapperTypeDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4, Class p5)
    {
        super(p2, p3, p4, 0);
        return;
    }

    private final Object _deserialize(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7)
    {
        if (p6.getCurrentToken() == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
            if (p6.nextToken() == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
                com.flurry.org.codehaus.jackson.map.JsonDeserializer v0 = this._findDeserializer(p7, p6.getText());
                p6.nextToken();
                Object v1 = v0.deserialize(p6, p7);
                if (p6.nextToken() == com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT) {
                    return v1;
                } else {
                    throw p7.wrongTokenException(p6, com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT, "expected closing END_OBJECT after type information and deserialized value");
                }
            } else {
                throw p7.wrongTokenException(p6, com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME, new StringBuilder().append("need JSON String that contains type id (for subtype of ").append(this.baseTypeName()).append(")").toString());
            }
        } else {
            throw p7.wrongTokenException(p6, com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT, new StringBuilder().append("need JSON Object to contain As.WRAPPER_OBJECT type information for class ").append(this.baseTypeName()).toString());
        }
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
        return com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.WRAPPER_OBJECT;
    }
}
