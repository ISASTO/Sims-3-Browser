package com.flurry.org.codehaus.jackson.map.deser.std;
public final class StdDeserializer$NumberDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer {

    public StdDeserializer$NumberDeserializer()
    {
        super(Number);
        return;
    }

    public Number deserialize(com.flurry.org.codehaus.jackson.JsonParser p8, com.flurry.org.codehaus.jackson.map.DeserializationContext p9)
    {
        Integer v5_11;
        com.flurry.org.codehaus.jackson.JsonToken v1 = p8.getCurrentToken();
        if (v1 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
            if (v1 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT) {
                if (v1 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                    throw p9.mappingException(this._valueClass, v1);
                } else {
                    String v2 = p8.getText().trim();
                    try {
                        if (v2.indexOf(46) < 0) {
                            if (!p9.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_BIG_INTEGER_FOR_INTS)) {
                                long v3 = Long.parseLong(v2);
                                if ((v3 > 2147483647) || (v3 < -2147483648)) {
                                    v5_11 = Long.valueOf(v3);
                                } else {
                                    v5_11 = Integer.valueOf(((int) v3));
                                }
                            } else {
                                v5_11 = new java.math.BigInteger(v2);
                            }
                        } else {
                            if (!p9.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_BIG_DECIMAL_FOR_FLOATS)) {
                                v5_11 = new Double(v2);
                            } else {
                                v5_11 = new java.math.BigDecimal(v2);
                            }
                        }
                    } catch (IllegalArgumentException v0) {
                        throw p9.weirdStringException(this._valueClass, "not a valid number");
                    }
                }
            } else {
                if (!p9.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_BIG_DECIMAL_FOR_FLOATS)) {
                    v5_11 = Double.valueOf(p8.getDoubleValue());
                } else {
                    v5_11 = p8.getDecimalValue();
                }
            }
        } else {
            if (!p9.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_BIG_INTEGER_FOR_INTS)) {
                v5_11 = p8.getNumberValue();
            } else {
                v5_11 = p8.getBigIntegerValue();
            }
        }
        return v5_11;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public Object deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4, com.flurry.org.codehaus.jackson.map.TypeDeserializer p5)
    {
        Number v0_1;
        switch (com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$1.$SwitchMap$org$codehaus$jackson$JsonToken[p3.getCurrentToken().ordinal()]) {
            case 1:
            case 2:
            case 3:
                v0_1 = this.deserialize(p3, p4);
                break;
            default:
                v0_1 = p5.deserializeTypedFromScalar(p3, p4);
        }
        return v0_1;
    }
}
