package com.flurry.org.codehaus.jackson;
public final enum class JsonParser$NumberType extends java.lang.Enum {
    private static final synthetic com.flurry.org.codehaus.jackson.JsonParser$NumberType[] $VALUES;
    public static final enum com.flurry.org.codehaus.jackson.JsonParser$NumberType BIG_DECIMAL;
    public static final enum com.flurry.org.codehaus.jackson.JsonParser$NumberType BIG_INTEGER;
    public static final enum com.flurry.org.codehaus.jackson.JsonParser$NumberType DOUBLE;
    public static final enum com.flurry.org.codehaus.jackson.JsonParser$NumberType FLOAT;
    public static final enum com.flurry.org.codehaus.jackson.JsonParser$NumberType INT;
    public static final enum com.flurry.org.codehaus.jackson.JsonParser$NumberType LONG;

    static JsonParser$NumberType()
    {
        com.flurry.org.codehaus.jackson.JsonParser$NumberType.INT = new com.flurry.org.codehaus.jackson.JsonParser$NumberType("INT", 0);
        com.flurry.org.codehaus.jackson.JsonParser$NumberType.LONG = new com.flurry.org.codehaus.jackson.JsonParser$NumberType("LONG", 1);
        com.flurry.org.codehaus.jackson.JsonParser$NumberType.BIG_INTEGER = new com.flurry.org.codehaus.jackson.JsonParser$NumberType("BIG_INTEGER", 2);
        com.flurry.org.codehaus.jackson.JsonParser$NumberType.FLOAT = new com.flurry.org.codehaus.jackson.JsonParser$NumberType("FLOAT", 3);
        com.flurry.org.codehaus.jackson.JsonParser$NumberType.DOUBLE = new com.flurry.org.codehaus.jackson.JsonParser$NumberType("DOUBLE", 4);
        com.flurry.org.codehaus.jackson.JsonParser$NumberType.BIG_DECIMAL = new com.flurry.org.codehaus.jackson.JsonParser$NumberType("BIG_DECIMAL", 5);
        com.flurry.org.codehaus.jackson.JsonParser$NumberType[] v0_10 = new com.flurry.org.codehaus.jackson.JsonParser$NumberType[6];
        v0_10[0] = com.flurry.org.codehaus.jackson.JsonParser$NumberType.INT;
        v0_10[1] = com.flurry.org.codehaus.jackson.JsonParser$NumberType.LONG;
        v0_10[2] = com.flurry.org.codehaus.jackson.JsonParser$NumberType.BIG_INTEGER;
        v0_10[3] = com.flurry.org.codehaus.jackson.JsonParser$NumberType.FLOAT;
        v0_10[4] = com.flurry.org.codehaus.jackson.JsonParser$NumberType.DOUBLE;
        v0_10[5] = com.flurry.org.codehaus.jackson.JsonParser$NumberType.BIG_DECIMAL;
        com.flurry.org.codehaus.jackson.JsonParser$NumberType.$VALUES = v0_10;
        return;
    }

    private JsonParser$NumberType(String p1, int p2)
    {
        super(p1, p2);
        return;
    }

    public static com.flurry.org.codehaus.jackson.JsonParser$NumberType valueOf(String p1)
    {
        return ((com.flurry.org.codehaus.jackson.JsonParser$NumberType) Enum.valueOf(com.flurry.org.codehaus.jackson.JsonParser$NumberType, p1));
    }

    public static com.flurry.org.codehaus.jackson.JsonParser$NumberType[] values()
    {
        return ((com.flurry.org.codehaus.jackson.JsonParser$NumberType[]) com.flurry.org.codehaus.jackson.JsonParser$NumberType.$VALUES.clone());
    }
}
