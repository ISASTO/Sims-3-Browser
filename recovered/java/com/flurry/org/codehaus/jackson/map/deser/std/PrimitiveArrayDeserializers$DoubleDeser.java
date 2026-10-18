package com.flurry.org.codehaus.jackson.map.deser.std;
final class PrimitiveArrayDeserializers$DoubleDeser extends com.flurry.org.codehaus.jackson.map.deser.std.PrimitiveArrayDeserializers$Base {

    public PrimitiveArrayDeserializers$DoubleDeser()
    {
        super(double[]);
        return;
    }

    private final double[] handleNonArray(com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        if ((p5.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) || ((!p6.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.ACCEPT_EMPTY_STRING_AS_NULL_OBJECT)) || (p5.getText().length() != 0))) {
            if (p6.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.ACCEPT_SINGLE_VALUE_AS_ARRAY)) {
                int v0_5 = new double[1];
                v0_5[0] = this._parseDoublePrimitive(p5, p6);
            } else {
                throw p6.mappingException(this._valueClass);
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

    public double[] deserialize(com.flurry.org.codehaus.jackson.JsonParser p9, com.flurry.org.codehaus.jackson.map.DeserializationContext p10)
    {
        double[] v6_3;
        if (p9.isExpectedStartArrayToken()) {
            com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$DoubleBuilder v0 = p10.getArrayBuilders().getDoubleBuilder();
            double[] v1_1 = ((double[]) v0.resetAndStart());
            int v2 = 0;
            while (p9.nextToken() != com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
                double v4 = this._parseDoublePrimitive(p9, p10);
                if (v2 >= v1_1.length) {
                    v1_1 = ((double[]) v0.appendCompletedChunk(v1_1, v2));
                    v2 = 0;
                }
                int v3 = (v2 + 1);
                v1_1[v2] = v4;
                v2 = v3;
            }
            v6_3 = ((double[]) v0.completeAndClearBuffer(v1_1, v2));
        } else {
            v6_3 = this.handleNonArray(p9, p10);
        }
        return v6_3;
    }
}
