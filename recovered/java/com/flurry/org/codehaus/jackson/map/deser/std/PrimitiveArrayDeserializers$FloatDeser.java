package com.flurry.org.codehaus.jackson.map.deser.std;
final class PrimitiveArrayDeserializers$FloatDeser extends com.flurry.org.codehaus.jackson.map.deser.std.PrimitiveArrayDeserializers$Base {

    public PrimitiveArrayDeserializers$FloatDeser()
    {
        super(float[]);
        return;
    }

    private final float[] handleNonArray(com.flurry.org.codehaus.jackson.JsonParser p4, com.flurry.org.codehaus.jackson.map.DeserializationContext p5)
    {
        if ((p4.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) || ((!p5.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.ACCEPT_EMPTY_STRING_AS_NULL_OBJECT)) || (p4.getText().length() != 0))) {
            if (p5.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.ACCEPT_SINGLE_VALUE_AS_ARRAY)) {
                int v0_5 = new float[1];
                v0_5[0] = this._parseFloatPrimitive(p4, p5);
            } else {
                throw p5.mappingException(this._valueClass);
            }
        } else {
            v0_5 = 0;
        }
        return v0_5;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public float[] deserialize(com.flurry.org.codehaus.jackson.JsonParser p8, com.flurry.org.codehaus.jackson.map.DeserializationContext p9)
    {
        float[] v5_3;
        if (p8.isExpectedStartArrayToken()) {
            com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$FloatBuilder v0 = p9.getArrayBuilders().getFloatBuilder();
            float[] v1_1 = ((float[]) v0.resetAndStart());
            int v2 = 0;
            while (p8.nextToken() != com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
                float v4 = this._parseFloatPrimitive(p8, p9);
                if (v2 >= v1_1.length) {
                    v1_1 = ((float[]) v0.appendCompletedChunk(v1_1, v2));
                    v2 = 0;
                }
                int v3 = (v2 + 1);
                v1_1[v2] = v4;
                v2 = v3;
            }
            v5_3 = ((float[]) v0.completeAndClearBuffer(v1_1, v2));
        } else {
            v5_3 = this.handleNonArray(p8, p9);
        }
        return v5_3;
    }
}
