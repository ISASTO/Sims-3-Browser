package com.flurry.org.apache.avro.reflect;
synthetic class ReflectData$1 {
    static final synthetic int[] $SwitchMap$org$apache$avro$Schema$Type;

    static ReflectData$1()
    {
        NoSuchFieldError v0_5 = new int[com.flurry.org.apache.avro.Schema$Type.values().length];
        com.flurry.org.apache.avro.reflect.ReflectData$1.$SwitchMap$org$apache$avro$Schema$Type = v0_5;
        try {
            com.flurry.org.apache.avro.Schema$Type.ARRAY.ordinal()[int v1_7] = 1;
            try {
                com.flurry.org.apache.avro.Schema$Type.STRING.ordinal()[int v1_1] = 2;
                try {
                    com.flurry.org.apache.avro.Schema$Type.BYTES.ordinal()[int v1_3] = 3;
                    try {
                        com.flurry.org.apache.avro.Schema$Type.INT.ordinal()[int v1_5] = 4;
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
