package com.flurry.org.codehaus.jackson.map.annotate;
public final enum class JsonSerialize$Inclusion extends java.lang.Enum {
    private static final synthetic com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion[] $VALUES;
    public static final enum com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion ALWAYS;
    public static final enum com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion NON_DEFAULT;
    public static final enum com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion NON_EMPTY;
    public static final enum com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion NON_NULL;

    static JsonSerialize$Inclusion()
    {
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion.ALWAYS = new com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion("ALWAYS", 0);
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion.NON_NULL = new com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion("NON_NULL", 1);
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion.NON_DEFAULT = new com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion("NON_DEFAULT", 2);
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion.NON_EMPTY = new com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion("NON_EMPTY", 3);
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion[] v0_6 = new com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion[4];
        v0_6[0] = com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion.ALWAYS;
        v0_6[1] = com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion.NON_NULL;
        v0_6[2] = com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion.NON_DEFAULT;
        v0_6[3] = com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion.NON_EMPTY;
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion.$VALUES = v0_6;
        return;
    }

    private JsonSerialize$Inclusion(String p1, int p2)
    {
        super(p1, p2);
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion valueOf(String p1)
    {
        return ((com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion) Enum.valueOf(com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion, p1));
    }

    public static com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion[] values()
    {
        return ((com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion[]) com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion.$VALUES.clone());
    }
}
