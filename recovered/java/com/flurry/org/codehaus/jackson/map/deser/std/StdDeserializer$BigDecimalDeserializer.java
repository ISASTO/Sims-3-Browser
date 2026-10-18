package com.flurry.org.codehaus.jackson.map.deser.std;
public class StdDeserializer$BigDecimalDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer {

    public StdDeserializer$BigDecimalDeserializer()
    {
        super(java.math.BigDecimal);
        return;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public java.math.BigDecimal deserialize(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7)
    {
        com.flurry.org.codehaus.jackson.map.JsonMappingException v3_5;
        com.flurry.org.codehaus.jackson.JsonToken v1 = p6.getCurrentToken();
        if ((v1 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) && (v1 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT)) {
            if (v1 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                throw p7.mappingException(this._valueClass, v1);
            } else {
                String v2 = p6.getText().trim();
                if (v2.length() != 0) {
                    try {
                        v3_5 = new java.math.BigDecimal(v2);
                    } catch (IllegalArgumentException v0) {
                        throw p7.weirdStringException(this._valueClass, "not a valid representation");
                    }
                } else {
                    v3_5 = 0;
                }
            }
        } else {
            v3_5 = p6.getDecimalValue();
        }
        return v3_5;
    }
}
