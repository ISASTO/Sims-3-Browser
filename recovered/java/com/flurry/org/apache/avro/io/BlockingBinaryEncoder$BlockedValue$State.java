package com.flurry.org.apache.avro.io;
public final enum class BlockingBinaryEncoder$BlockedValue$State extends java.lang.Enum {
    private static final synthetic com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State[] $VALUES;
    public static final enum com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State OVERFLOW;
    public static final enum com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State REGULAR;
    public static final enum com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State ROOT;

    static BlockingBinaryEncoder$BlockedValue$State()
    {
        com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.ROOT = new com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State("ROOT", 0);
        com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.REGULAR = new com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State("REGULAR", 1);
        com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.OVERFLOW = new com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State("OVERFLOW", 2);
        com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State[] v0_3 = new com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State[3];
        v0_3[0] = com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.ROOT;
        v0_3[1] = com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.REGULAR;
        v0_3[2] = com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.OVERFLOW;
        com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.$VALUES = v0_3;
        return;
    }

    private BlockingBinaryEncoder$BlockedValue$State(String p1, int p2)
    {
        super(p1, p2);
        return;
    }

    public static com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State valueOf(String p1)
    {
        return ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State) Enum.valueOf(com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State, p1));
    }

    public static com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State[] values()
    {
        return ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State[]) com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.$VALUES.clone());
    }
}
