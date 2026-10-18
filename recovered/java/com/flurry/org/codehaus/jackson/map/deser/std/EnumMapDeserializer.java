package com.flurry.org.codehaus.jackson.map.deser.std;
public class EnumMapDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer {
    protected final Class _enumClass;
    protected final com.flurry.org.codehaus.jackson.map.JsonDeserializer _keyDeserializer;
    protected final com.flurry.org.codehaus.jackson.map.JsonDeserializer _valueDeserializer;

    public EnumMapDeserializer(com.flurry.org.codehaus.jackson.map.util.EnumResolver p3, com.flurry.org.codehaus.jackson.map.JsonDeserializer p4)
    {
        this(p3.getEnumClass(), new com.flurry.org.codehaus.jackson.map.deser.std.EnumDeserializer(p3), p4);
        return;
    }

    public EnumMapDeserializer(Class p2, com.flurry.org.codehaus.jackson.map.JsonDeserializer p3, com.flurry.org.codehaus.jackson.map.JsonDeserializer p4)
    {
        super(java.util.EnumMap);
        super._enumClass = p2;
        super._keyDeserializer = p3;
        super._valueDeserializer = p4;
        return;
    }

    private java.util.EnumMap constructMap()
    {
        return new java.util.EnumMap(this._enumClass);
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public java.util.EnumMap deserialize(com.flurry.org.codehaus.jackson.JsonParser p7, com.flurry.org.codehaus.jackson.map.DeserializationContext p8)
    {
        if (p7.getCurrentToken() == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
            java.util.EnumMap v1 = this.constructMap();
            while (p7.nextToken() != com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT) {
                Enum v0_1 = ((Enum) this._keyDeserializer.deserialize(p7, p8));
                if (v0_1 != null) {
                    Object v3;
                    if (p7.nextToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                        v3 = this._valueDeserializer.deserialize(p7, p8);
                    } else {
                        v3 = 0;
                    }
                    v1.put(v0_1, v3);
                } else {
                    throw p8.weirdStringException(this._enumClass, "value not one of declared Enum instance names");
                }
            }
            return v1;
        } else {
            throw p8.mappingException(java.util.EnumMap);
        }
    }

    public Object deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4)
    {
        return p4.deserializeTypedFromObject(p2, p3);
    }
}
