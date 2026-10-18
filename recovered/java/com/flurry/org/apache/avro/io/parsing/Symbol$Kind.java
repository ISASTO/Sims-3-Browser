package com.flurry.org.apache.avro.io.parsing;
public final enum class Symbol$Kind extends java.lang.Enum {
    private static final synthetic com.flurry.org.apache.avro.io.parsing.Symbol$Kind[] $VALUES;
    public static final enum com.flurry.org.apache.avro.io.parsing.Symbol$Kind ALTERNATIVE;
    public static final enum com.flurry.org.apache.avro.io.parsing.Symbol$Kind EXPLICIT_ACTION;
    public static final enum com.flurry.org.apache.avro.io.parsing.Symbol$Kind IMPLICIT_ACTION;
    public static final enum com.flurry.org.apache.avro.io.parsing.Symbol$Kind REPEATER;
    public static final enum com.flurry.org.apache.avro.io.parsing.Symbol$Kind ROOT;
    public static final enum com.flurry.org.apache.avro.io.parsing.Symbol$Kind SEQUENCE;
    public static final enum com.flurry.org.apache.avro.io.parsing.Symbol$Kind TERMINAL;

    static Symbol$Kind()
    {
        com.flurry.org.apache.avro.io.parsing.Symbol$Kind.TERMINAL = new com.flurry.org.apache.avro.io.parsing.Symbol$Kind("TERMINAL", 0);
        com.flurry.org.apache.avro.io.parsing.Symbol$Kind.ROOT = new com.flurry.org.apache.avro.io.parsing.Symbol$Kind("ROOT", 1);
        com.flurry.org.apache.avro.io.parsing.Symbol$Kind.SEQUENCE = new com.flurry.org.apache.avro.io.parsing.Symbol$Kind("SEQUENCE", 2);
        com.flurry.org.apache.avro.io.parsing.Symbol$Kind.REPEATER = new com.flurry.org.apache.avro.io.parsing.Symbol$Kind("REPEATER", 3);
        com.flurry.org.apache.avro.io.parsing.Symbol$Kind.ALTERNATIVE = new com.flurry.org.apache.avro.io.parsing.Symbol$Kind("ALTERNATIVE", 4);
        com.flurry.org.apache.avro.io.parsing.Symbol$Kind.IMPLICIT_ACTION = new com.flurry.org.apache.avro.io.parsing.Symbol$Kind("IMPLICIT_ACTION", 5);
        com.flurry.org.apache.avro.io.parsing.Symbol$Kind.EXPLICIT_ACTION = new com.flurry.org.apache.avro.io.parsing.Symbol$Kind("EXPLICIT_ACTION", 6);
        com.flurry.org.apache.avro.io.parsing.Symbol$Kind[] v0_12 = new com.flurry.org.apache.avro.io.parsing.Symbol$Kind[7];
        v0_12[0] = com.flurry.org.apache.avro.io.parsing.Symbol$Kind.TERMINAL;
        v0_12[1] = com.flurry.org.apache.avro.io.parsing.Symbol$Kind.ROOT;
        v0_12[2] = com.flurry.org.apache.avro.io.parsing.Symbol$Kind.SEQUENCE;
        v0_12[3] = com.flurry.org.apache.avro.io.parsing.Symbol$Kind.REPEATER;
        v0_12[4] = com.flurry.org.apache.avro.io.parsing.Symbol$Kind.ALTERNATIVE;
        v0_12[5] = com.flurry.org.apache.avro.io.parsing.Symbol$Kind.IMPLICIT_ACTION;
        v0_12[6] = com.flurry.org.apache.avro.io.parsing.Symbol$Kind.EXPLICIT_ACTION;
        com.flurry.org.apache.avro.io.parsing.Symbol$Kind.$VALUES = v0_12;
        return;
    }

    private Symbol$Kind(String p1, int p2)
    {
        super(p1, p2);
        return;
    }

    public static com.flurry.org.apache.avro.io.parsing.Symbol$Kind valueOf(String p1)
    {
        return ((com.flurry.org.apache.avro.io.parsing.Symbol$Kind) Enum.valueOf(com.flurry.org.apache.avro.io.parsing.Symbol$Kind, p1));
    }

    public static com.flurry.org.apache.avro.io.parsing.Symbol$Kind[] values()
    {
        return ((com.flurry.org.apache.avro.io.parsing.Symbol$Kind[]) com.flurry.org.apache.avro.io.parsing.Symbol$Kind.$VALUES.clone());
    }
}
