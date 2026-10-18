package com.flurry.org.codehaus.jackson.map.deser.std;
public class EnumSetDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer {
    protected final Class _enumClass;
    protected final com.flurry.org.codehaus.jackson.map.JsonDeserializer _enumDeserializer;

    public EnumSetDeserializer(com.flurry.org.codehaus.jackson.map.util.EnumResolver p3)
    {
        this(p3.getEnumClass(), new com.flurry.org.codehaus.jackson.map.deser.std.EnumDeserializer(p3));
        return;
    }

    public EnumSetDeserializer(Class p2, com.flurry.org.codehaus.jackson.map.JsonDeserializer p3)
    {
        super(java.util.EnumSet);
        super._enumClass = p2;
        super._enumDeserializer = p3;
        return;
    }

    private java.util.EnumSet constructSet()
    {
        return java.util.EnumSet.noneOf(this._enumClass);
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public java.util.EnumSet deserialize(com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        if (p5.isExpectedStartArrayToken()) {
            java.util.EnumSet v0 = this.constructSet();
            while(true) {
                com.flurry.org.codehaus.jackson.JsonToken v1 = p5.nextToken();
                if (v1 == com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
                    break;
                }
                if (v1 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                    v0.add(((Enum) this._enumDeserializer.deserialize(p5, p6)));
                } else {
                    throw p6.mappingException(this._enumClass);
                }
            }
            return v0;
        } else {
            throw p6.mappingException(java.util.EnumSet);
        }
    }

    public Object deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4)
    {
        return p4.deserializeTypedFromArray(p2, p3);
    }
}
