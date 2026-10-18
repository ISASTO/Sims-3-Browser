package com.flurry.org.codehaus.jackson.impl;
synthetic class ByteSourceBootstrapper$1 {
    static final synthetic int[] $SwitchMap$org$codehaus$jackson$JsonEncoding;

    static ByteSourceBootstrapper$1()
    {
        NoSuchFieldError v0_5 = new int[com.flurry.org.codehaus.jackson.JsonEncoding.values().length];
        com.flurry.org.codehaus.jackson.impl.ByteSourceBootstrapper$1.$SwitchMap$org$codehaus$jackson$JsonEncoding = v0_5;
        try {
            com.flurry.org.codehaus.jackson.JsonEncoding.UTF32_BE.ordinal()[int v1_9] = 1;
            try {
                com.flurry.org.codehaus.jackson.JsonEncoding.UTF32_LE.ordinal()[int v1_1] = 2;
                try {
                    com.flurry.org.codehaus.jackson.JsonEncoding.UTF16_BE.ordinal()[int v1_3] = 3;
                    try {
                        com.flurry.org.codehaus.jackson.JsonEncoding.UTF16_LE.ordinal()[int v1_5] = 4;
                        try {
                            com.flurry.org.codehaus.jackson.JsonEncoding.UTF8.ordinal()[int v1_7] = 5;
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
    }
}
