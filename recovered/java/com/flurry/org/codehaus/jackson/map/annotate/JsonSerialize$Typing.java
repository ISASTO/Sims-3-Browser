package com.flurry.org.codehaus.jackson.map.annotate;
public final enum class JsonSerialize$Typing extends java.lang.Enum {
    private static final synthetic com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing[] $VALUES;
    public static final enum com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing DYNAMIC;
    public static final enum com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing STATIC;

    static JsonSerialize$Typing()
    {
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing.DYNAMIC = new com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing("DYNAMIC", 0);
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing.STATIC = new com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing("STATIC", 1);
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing[] v0_1 = new com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing[2];
        v0_1[0] = com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing.DYNAMIC;
        v0_1[1] = com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing.STATIC;
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing.$VALUES = v0_1;
        return;
    }

    private JsonSerialize$Typing(String p1, int p2)
    {
        super(p1, p2);
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing valueOf(String p1)
    {
        return ((com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing) Enum.valueOf(com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing, p1));
    }

    public static com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing[] values()
    {
        return ((com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing[]) com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing.$VALUES.clone());
    }
}
