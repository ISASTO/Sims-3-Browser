package com.flurry.org.codehaus.jackson.map.deser.std;
synthetic class StdDeserializer$1 {
    static final synthetic int[] $SwitchMap$org$codehaus$jackson$JsonParser$NumberType;
    static final synthetic int[] $SwitchMap$org$codehaus$jackson$JsonToken;

    static StdDeserializer$1()
    {
        NoSuchFieldError v0_7 = new int[com.flurry.org.codehaus.jackson.JsonParser$NumberType.values().length];
        com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$1.$SwitchMap$org$codehaus$jackson$JsonParser$NumberType = v0_7;
        try {
            com.flurry.org.codehaus.jackson.JsonParser$NumberType.INT.ordinal()[int v1_9] = 1;
            try {
                com.flurry.org.codehaus.jackson.JsonParser$NumberType.LONG.ordinal()[int v1_1] = 2;
            } catch (NoSuchFieldError v0) {
            }
            NoSuchFieldError v0_5 = new int[com.flurry.org.codehaus.jackson.JsonToken.values().length];
            com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$1.$SwitchMap$org$codehaus$jackson$JsonToken = v0_5;
            try {
                com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT.ordinal()[int v1_3] = 1;
                try {
                    com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT.ordinal()[int v1_5] = 2;
                    try {
                        com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING.ordinal()[int v1_7] = 3;
                    } catch (NoSuchFieldError v0) {
                    }
                    return;
                } catch (NoSuchFieldError v0) {
                }
            } catch (NoSuchFieldError v0) {
            }
        } catch (NoSuchFieldError v0) {
        }
    }
}
