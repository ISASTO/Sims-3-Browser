package com.flurry.org.codehaus.jackson.map.deser.std;
final class PrimitiveArrayDeserializers$ByteDeser extends com.flurry.org.codehaus.jackson.map.deser.std.PrimitiveArrayDeserializers$Base {

    public PrimitiveArrayDeserializers$ByteDeser()
    {
        super(byte[]);
        return;
    }

    private final byte[] handleNonArray(com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        if ((p5.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) || ((!p6.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.ACCEPT_EMPTY_STRING_AS_NULL_OBJECT)) || (p5.getText().length() != 0))) {
            if (p6.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.ACCEPT_SINGLE_VALUE_AS_ARRAY)) {
                int v1;
                com.flurry.org.codehaus.jackson.JsonToken v0 = p5.getCurrentToken();
                if ((v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) && (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT)) {
                    if (v0 == com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                        v1 = 0;
                    } else {
                        throw p6.mappingException(this._valueClass.getComponentType());
                    }
                } else {
                    v1 = p5.getByteValue();
                }
                com.flurry.org.codehaus.jackson.map.JsonMappingException v2_11 = new byte[1];
                v2_11[0] = v1;
            } else {
                throw p6.mappingException(this._valueClass);
            }
        } else {
            v2_11 = 0;
        }
        return v2_11;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public byte[] deserialize(com.flurry.org.codehaus.jackson.JsonParser p9, com.flurry.org.codehaus.jackson.map.DeserializationContext p10)
    {
        byte[] v4_0;
        com.flurry.org.codehaus.jackson.JsonToken v5_0 = p9.getCurrentToken();
        if (v5_0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
            if (v5_0 == com.flurry.org.codehaus.jackson.JsonToken.VALUE_EMBEDDED_OBJECT) {
                byte[] v4_2 = p9.getEmbeddedObject();
                if (v4_2 != null) {
                    if ((v4_2 instanceof byte[])) {
                        v4_0 = ((byte[]) ((byte[]) v4_2));
                        return v4_0;
                    }
                } else {
                    v4_0 = 0;
                    return v4_0;
                }
            }
            if (p9.isExpectedStartArrayToken()) {
                com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$ByteBuilder v0 = p10.getArrayBuilders().getByteBuilder();
                byte[] v1_1 = ((byte[]) v0.resetAndStart());
                int v2 = 0;
                while(true) {
                    com.flurry.org.codehaus.jackson.JsonToken v5_1 = p9.nextToken();
                    if (v5_1 == com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
                        v4_0 = ((byte[]) v0.completeAndClearBuffer(v1_1, v2));
                    } else {
                        if ((v5_1 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) && (v5_1 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT)) {
                            if (v5_1 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                                break;
                            }
                            int v6 = 0;
                        } else {
                            v6 = p9.getByteValue();
                        }
                        if (v2 >= v1_1.length) {
                            v1_1 = ((byte[]) v0.appendCompletedChunk(v1_1, v2));
                            v2 = 0;
                        }
                        int v3 = (v2 + 1);
                        v1_1[v2] = v6;
                        v2 = v3;
                    }
                }
                throw p10.mappingException(this._valueClass.getComponentType());
            } else {
                v4_0 = this.handleNonArray(p9, p10);
            }
        } else {
            v4_0 = p9.getBinaryValue(p10.getBase64Variant());
        }
        return v4_0;
    }
}
