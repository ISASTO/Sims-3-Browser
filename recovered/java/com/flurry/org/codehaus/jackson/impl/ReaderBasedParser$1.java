package com.flurry.org.codehaus.jackson.impl;
synthetic class ReaderBasedParser$1 {
    static final synthetic int[] $SwitchMap$org$codehaus$jackson$JsonToken;

    static ReaderBasedParser$1()
    {
        NoSuchFieldError v0_5 = new int[com.flurry.org.codehaus.jackson.JsonToken.values().length];
        com.flurry.org.codehaus.jackson.impl.ReaderBasedParser$1.$SwitchMap$org$codehaus$jackson$JsonToken = v0_5;
        try {
            com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME.ordinal()[int v1_11] = 1;
            try {
                com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING.ordinal()[int v1_1] = 2;
                try {
                    com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT.ordinal()[int v1_3] = 3;
                    try {
                        com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT.ordinal()[int v1_5] = 4;
                        try {
                            com.flurry.org.codehaus.jackson.JsonToken.VALUE_TRUE.ordinal()[int v1_7] = 5;
                            try {
                                com.flurry.org.codehaus.jackson.JsonToken.VALUE_FALSE.ordinal()[int v1_9] = 6;
                            } catch (NoSuchFieldError v0) {
                            }
                            return;
                        } catch (NoSuchFieldError v0) {
                        }
                    } catch (NoSuchFieldError v0) {
                    }
                } catch (NoSuchFieldError v0) {
                }
            } catch (NoSuchFieldError v0) {
            }
        } catch (NoSuchFieldError v0) {
        }
    }
}
