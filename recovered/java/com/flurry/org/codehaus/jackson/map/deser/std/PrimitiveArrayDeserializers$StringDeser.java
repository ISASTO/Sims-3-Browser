package com.flurry.org.codehaus.jackson.map.deser.std;
final class PrimitiveArrayDeserializers$StringDeser extends com.flurry.org.codehaus.jackson.map.deser.std.PrimitiveArrayDeserializers$Base {

    public PrimitiveArrayDeserializers$StringDeser()
    {
        super(String[]);
        return;
    }

    private final String[] handleNonArray(com.flurry.org.codehaus.jackson.JsonParser p7, com.flurry.org.codehaus.jackson.map.DeserializationContext p8)
    {
        String v1_0 = 0;
        if (p8.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.ACCEPT_SINGLE_VALUE_AS_ARRAY)) {
            int v2_7 = new String[1];
            if (p7.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                v1_0 = p7.getText();
            }
            v2_7[0] = v1_0;
            v1_0 = v2_7;
        } else {
            if ((p7.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) || ((!p8.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.ACCEPT_EMPTY_STRING_AS_NULL_OBJECT)) || (p7.getText().length() != 0))) {
                throw p8.mappingException(this._valueClass);
            }
        }
        return v1_0;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public String[] deserialize(com.flurry.org.codehaus.jackson.JsonParser p9, com.flurry.org.codehaus.jackson.map.DeserializationContext p10)
    {
        String[] v4_1;
        if (p9.isExpectedStartArrayToken()) {
            com.flurry.org.codehaus.jackson.map.util.ObjectBuffer v0 = p10.leaseObjectBuffer();
            Object[] v1 = v0.resetAndStart();
            int v2 = 0;
            while(true) {
                com.flurry.org.codehaus.jackson.JsonToken v5 = p9.nextToken();
                if (v5 == com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
                    break;
                }
                String v6;
                if (v5 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                    v6 = p9.getText();
                } else {
                    v6 = 0;
                }
                if (v2 >= v1.length) {
                    v1 = v0.appendCompletedChunk(v1);
                    v2 = 0;
                }
                int v3 = (v2 + 1);
                v1[v2] = v6;
                v2 = v3;
            }
            v4_1 = ((String[]) v0.completeAndClearBuffer(v1, v2, String));
            p10.returnObjectBuffer(v0);
        } else {
            v4_1 = this.handleNonArray(p9, p10);
        }
        return v4_1;
    }
}
