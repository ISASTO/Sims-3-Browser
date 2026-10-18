package com.flurry.org.apache.avro.data;
final enum class Json$JsonType extends java.lang.Enum {
    private static final synthetic com.flurry.org.apache.avro.data.Json$JsonType[] $VALUES;
    public static final enum com.flurry.org.apache.avro.data.Json$JsonType ARRAY;
    public static final enum com.flurry.org.apache.avro.data.Json$JsonType BOOLEAN;
    public static final enum com.flurry.org.apache.avro.data.Json$JsonType DOUBLE;
    public static final enum com.flurry.org.apache.avro.data.Json$JsonType LONG;
    public static final enum com.flurry.org.apache.avro.data.Json$JsonType NULL;
    public static final enum com.flurry.org.apache.avro.data.Json$JsonType OBJECT;
    public static final enum com.flurry.org.apache.avro.data.Json$JsonType STRING;

    static Json$JsonType()
    {
        com.flurry.org.apache.avro.data.Json$JsonType.LONG = new com.flurry.org.apache.avro.data.Json$JsonType("LONG", 0);
        com.flurry.org.apache.avro.data.Json$JsonType.DOUBLE = new com.flurry.org.apache.avro.data.Json$JsonType("DOUBLE", 1);
        com.flurry.org.apache.avro.data.Json$JsonType.STRING = new com.flurry.org.apache.avro.data.Json$JsonType("STRING", 2);
        com.flurry.org.apache.avro.data.Json$JsonType.BOOLEAN = new com.flurry.org.apache.avro.data.Json$JsonType("BOOLEAN", 3);
        com.flurry.org.apache.avro.data.Json$JsonType.NULL = new com.flurry.org.apache.avro.data.Json$JsonType("NULL", 4);
        com.flurry.org.apache.avro.data.Json$JsonType.ARRAY = new com.flurry.org.apache.avro.data.Json$JsonType("ARRAY", 5);
        com.flurry.org.apache.avro.data.Json$JsonType.OBJECT = new com.flurry.org.apache.avro.data.Json$JsonType("OBJECT", 6);
        com.flurry.org.apache.avro.data.Json$JsonType[] v0_12 = new com.flurry.org.apache.avro.data.Json$JsonType[7];
        v0_12[0] = com.flurry.org.apache.avro.data.Json$JsonType.LONG;
        v0_12[1] = com.flurry.org.apache.avro.data.Json$JsonType.DOUBLE;
        v0_12[2] = com.flurry.org.apache.avro.data.Json$JsonType.STRING;
        v0_12[3] = com.flurry.org.apache.avro.data.Json$JsonType.BOOLEAN;
        v0_12[4] = com.flurry.org.apache.avro.data.Json$JsonType.NULL;
        v0_12[5] = com.flurry.org.apache.avro.data.Json$JsonType.ARRAY;
        v0_12[6] = com.flurry.org.apache.avro.data.Json$JsonType.OBJECT;
        com.flurry.org.apache.avro.data.Json$JsonType.$VALUES = v0_12;
        return;
    }

    private Json$JsonType(String p1, int p2)
    {
        super(p1, p2);
        return;
    }

    public static com.flurry.org.apache.avro.data.Json$JsonType valueOf(String p1)
    {
        return ((com.flurry.org.apache.avro.data.Json$JsonType) Enum.valueOf(com.flurry.org.apache.avro.data.Json$JsonType, p1));
    }

    public static com.flurry.org.apache.avro.data.Json$JsonType[] values()
    {
        return ((com.flurry.org.apache.avro.data.Json$JsonType[]) com.flurry.org.apache.avro.data.Json$JsonType.$VALUES.clone());
    }
}
