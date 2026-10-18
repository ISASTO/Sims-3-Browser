package com.flurry.org.apache.avro.io;
synthetic class BlockingBinaryEncoder$1 {
    static final synthetic int[] $SwitchMap$org$apache$avro$io$BlockingBinaryEncoder$BlockedValue$State;

    static BlockingBinaryEncoder$1()
    {
        NoSuchFieldError v0_4 = new int[com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.values().length];
        com.flurry.org.apache.avro.io.BlockingBinaryEncoder$1.$SwitchMap$org$apache$avro$io$BlockingBinaryEncoder$BlockedValue$State = v0_4;
        try {
            com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.ROOT.ordinal()[int v1_5] = 1;
            try {
                com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.REGULAR.ordinal()[int v1_1] = 2;
                try {
                    com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.OVERFLOW.ordinal()[int v1_3] = 3;
                } catch (NoSuchFieldError v0) {
                }
                return;
            } catch (NoSuchFieldError v0) {
            }
        } catch (NoSuchFieldError v0) {
        }
    }
}
