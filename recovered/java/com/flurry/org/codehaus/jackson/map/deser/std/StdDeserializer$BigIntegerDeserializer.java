package com.flurry.org.codehaus.jackson.map.deser.std;
public class StdDeserializer$BigIntegerDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer {

    public StdDeserializer$BigIntegerDeserializer()
    {
        super(java.math.BigInteger);
        return;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public java.math.BigInteger deserialize(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7)
    {
        com.flurry.org.codehaus.jackson.map.JsonMappingException v3_2;
        com.flurry.org.codehaus.jackson.JsonToken v1 = p6.getCurrentToken();
        if (v1 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
            if (v1 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT) {
                if (v1 == com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                    String v2 = p6.getText().trim();
                    if (v2.length() != 0) {
                        try {
                            v3_2 = new java.math.BigInteger(v2);
                        } catch (IllegalArgumentException v0) {
                            throw p7.weirdStringException(this._valueClass, "not a valid representation");
                        }
                    } else {
                        v3_2 = 0;
                    }
                } else {
                    throw p7.mappingException(this._valueClass, v1);
                }
            } else {
                v3_2 = p6.getDecimalValue().toBigInteger();
            }
        } else {
            switch (com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$1.$SwitchMap$org$codehaus$jackson$JsonParser$NumberType[p6.getNumberType().ordinal()]) {
                case 1:
                case 2:
                    v3_2 = java.math.BigInteger.valueOf(p6.getLongValue());
                    break;
                default:
            }
        }
        return v3_2;
    }
}
