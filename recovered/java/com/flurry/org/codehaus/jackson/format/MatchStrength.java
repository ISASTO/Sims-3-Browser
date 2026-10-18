package com.flurry.org.codehaus.jackson.format;
public final enum class MatchStrength extends java.lang.Enum {
    private static final synthetic com.flurry.org.codehaus.jackson.format.MatchStrength[] $VALUES;
    public static final enum com.flurry.org.codehaus.jackson.format.MatchStrength FULL_MATCH;
    public static final enum com.flurry.org.codehaus.jackson.format.MatchStrength INCONCLUSIVE;
    public static final enum com.flurry.org.codehaus.jackson.format.MatchStrength NO_MATCH;
    public static final enum com.flurry.org.codehaus.jackson.format.MatchStrength SOLID_MATCH;
    public static final enum com.flurry.org.codehaus.jackson.format.MatchStrength WEAK_MATCH;

    static MatchStrength()
    {
        com.flurry.org.codehaus.jackson.format.MatchStrength.NO_MATCH = new com.flurry.org.codehaus.jackson.format.MatchStrength("NO_MATCH", 0);
        com.flurry.org.codehaus.jackson.format.MatchStrength.INCONCLUSIVE = new com.flurry.org.codehaus.jackson.format.MatchStrength("INCONCLUSIVE", 1);
        com.flurry.org.codehaus.jackson.format.MatchStrength.WEAK_MATCH = new com.flurry.org.codehaus.jackson.format.MatchStrength("WEAK_MATCH", 2);
        com.flurry.org.codehaus.jackson.format.MatchStrength.SOLID_MATCH = new com.flurry.org.codehaus.jackson.format.MatchStrength("SOLID_MATCH", 3);
        com.flurry.org.codehaus.jackson.format.MatchStrength.FULL_MATCH = new com.flurry.org.codehaus.jackson.format.MatchStrength("FULL_MATCH", 4);
        com.flurry.org.codehaus.jackson.format.MatchStrength[] v0_8 = new com.flurry.org.codehaus.jackson.format.MatchStrength[5];
        v0_8[0] = com.flurry.org.codehaus.jackson.format.MatchStrength.NO_MATCH;
        v0_8[1] = com.flurry.org.codehaus.jackson.format.MatchStrength.INCONCLUSIVE;
        v0_8[2] = com.flurry.org.codehaus.jackson.format.MatchStrength.WEAK_MATCH;
        v0_8[3] = com.flurry.org.codehaus.jackson.format.MatchStrength.SOLID_MATCH;
        v0_8[4] = com.flurry.org.codehaus.jackson.format.MatchStrength.FULL_MATCH;
        com.flurry.org.codehaus.jackson.format.MatchStrength.$VALUES = v0_8;
        return;
    }

    private MatchStrength(String p1, int p2)
    {
        super(p1, p2);
        return;
    }

    public static com.flurry.org.codehaus.jackson.format.MatchStrength valueOf(String p1)
    {
        return ((com.flurry.org.codehaus.jackson.format.MatchStrength) Enum.valueOf(com.flurry.org.codehaus.jackson.format.MatchStrength, p1));
    }

    public static com.flurry.org.codehaus.jackson.format.MatchStrength[] values()
    {
        return ((com.flurry.org.codehaus.jackson.format.MatchStrength[]) com.flurry.org.codehaus.jackson.format.MatchStrength.$VALUES.clone());
    }
}
