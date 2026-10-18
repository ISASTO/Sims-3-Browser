package com.flurry.org.codehaus.jackson.annotate;
synthetic class JsonAutoDetect$1 {
    static final synthetic int[] $SwitchMap$org$codehaus$jackson$annotate$JsonAutoDetect$Visibility;

    static JsonAutoDetect$1()
    {
        NoSuchFieldError v0_5 = new int[com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.values().length];
        com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$1.$SwitchMap$org$codehaus$jackson$annotate$JsonAutoDetect$Visibility = v0_5;
        try {
            com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.ANY.ordinal()[int v1_9] = 1;
            try {
                com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NONE.ordinal()[int v1_1] = 2;
                try {
                    com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NON_PRIVATE.ordinal()[int v1_3] = 3;
                    try {
                        com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.PROTECTED_AND_PUBLIC.ordinal()[int v1_5] = 4;
                        try {
                            com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.PUBLIC_ONLY.ordinal()[int v1_7] = 5;
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
