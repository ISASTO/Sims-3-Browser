package com.flurry.org.codehaus.jackson.annotate;
public final enum class JsonTypeInfo$As extends java.lang.Enum {
    private static final synthetic com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As[] $VALUES;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As EXTERNAL_PROPERTY;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As PROPERTY;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As WRAPPER_ARRAY;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As WRAPPER_OBJECT;

    static JsonTypeInfo$As()
    {
        com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.PROPERTY = new com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As("PROPERTY", 0);
        com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.WRAPPER_OBJECT = new com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As("WRAPPER_OBJECT", 1);
        com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.WRAPPER_ARRAY = new com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As("WRAPPER_ARRAY", 2);
        com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.EXTERNAL_PROPERTY = new com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As("EXTERNAL_PROPERTY", 3);
        com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As[] v0_6 = new com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As[4];
        v0_6[0] = com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.PROPERTY;
        v0_6[1] = com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.WRAPPER_OBJECT;
        v0_6[2] = com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.WRAPPER_ARRAY;
        v0_6[3] = com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.EXTERNAL_PROPERTY;
        com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.$VALUES = v0_6;
        return;
    }

    private JsonTypeInfo$As(String p1, int p2)
    {
        super(p1, p2);
        return;
    }

    public static com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As valueOf(String p1)
    {
        return ((com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As) Enum.valueOf(com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As, p1));
    }

    public static com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As[] values()
    {
        return ((com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As[]) com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.$VALUES.clone());
    }
}
