package com.flurry.org.codehaus.jackson.map.deser.std;
final class PrimitiveArrayDeserializers$CharDeser extends com.flurry.org.codehaus.jackson.map.deser.std.PrimitiveArrayDeserializers$Base {

    public PrimitiveArrayDeserializers$CharDeser()
    {
        super(char[]);
        return;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public char[] deserialize(com.flurry.org.codehaus.jackson.JsonParser p12, com.flurry.org.codehaus.jackson.map.DeserializationContext p13)
    {
        char[] v4;
        com.flurry.org.codehaus.jackson.JsonToken v7_0 = p12.getCurrentToken();
        if (v7_0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
            if (!p12.isExpectedStartArrayToken()) {
                if (v7_0 == com.flurry.org.codehaus.jackson.JsonToken.VALUE_EMBEDDED_OBJECT) {
                    byte[] v2_0 = p12.getEmbeddedObject();
                    if (v2_0 != null) {
                        if (!(v2_0 instanceof char[])) {
                            if (!(v2_0 instanceof String)) {
                                if ((v2_0 instanceof byte[])) {
                                    v4 = com.flurry.org.codehaus.jackson.Base64Variants.getDefaultVariant().encode(((byte[]) ((byte[]) v2_0)), 0).toCharArray();
                                    return v4;
                                }
                            } else {
                                v4 = ((String) v2_0).toCharArray();
                                return v4;
                            }
                        } else {
                            v4 = ((char[]) ((char[]) v2_0));
                            return v4;
                        }
                    } else {
                        v4 = 0;
                        return v4;
                    }
                }
                throw p13.mappingException(this._valueClass);
            } else {
                StringBuilder v5_1 = new StringBuilder(64);
                while(true) {
                    com.flurry.org.codehaus.jackson.JsonToken v7_1 = p12.nextToken();
                    if (v7_1 == com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
                        break;
                    }
                    if (v7_1 == com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                        String v6 = p12.getText();
                        if (v6.length() == 1) {
                            v5_1.append(v6.charAt(0));
                        } else {
                            throw com.flurry.org.codehaus.jackson.map.JsonMappingException.from(p12, new StringBuilder().append("Can not convert a JSON String of length ").append(v6.length()).append(" into a char element of char array").toString());
                        }
                    } else {
                        throw p13.mappingException(Character.TYPE);
                    }
                }
                v4 = v5_1.toString().toCharArray();
            }
        } else {
            char[] v0 = p12.getTextCharacters();
            int v3 = p12.getTextOffset();
            int v1 = p12.getTextLength();
            v4 = new char[v1];
            System.arraycopy(v0, v3, v4, 0, v1);
        }
        return v4;
    }
}
