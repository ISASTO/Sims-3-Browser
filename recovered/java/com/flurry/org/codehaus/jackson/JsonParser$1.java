package com.flurry.org.codehaus.jackson;
synthetic class JsonParser$1 {
    static final synthetic int[] $SwitchMap$org$codehaus$jackson$JsonToken;

    static JsonParser$1()
    {
        NoSuchFieldError v0_3 = new int[com.flurry.org.codehaus.jackson.JsonToken.values().length];
        com.flurry.org.codehaus.jackson.JsonParser$1.$SwitchMap$org$codehaus$jackson$JsonToken = v0_3;
        try {
            com.flurry.org.codehaus.jackson.JsonToken.VALUE_TRUE.ordinal()[int v1_3] = 1;
            try {
                com.flurry.org.codehaus.jackson.JsonToken.VALUE_FALSE.ordinal()[int v1_1] = 2;
            } catch (NoSuchFieldError v0) {
            }
            return;
        } catch (NoSuchFieldError v0) {
        }
    }
}
