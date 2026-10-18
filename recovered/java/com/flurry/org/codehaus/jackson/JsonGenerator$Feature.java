package com.flurry.org.codehaus.jackson;
public final enum class JsonGenerator$Feature extends java.lang.Enum {
    private static final synthetic com.flurry.org.codehaus.jackson.JsonGenerator$Feature[] $VALUES;
    public static final enum com.flurry.org.codehaus.jackson.JsonGenerator$Feature AUTO_CLOSE_JSON_CONTENT;
    public static final enum com.flurry.org.codehaus.jackson.JsonGenerator$Feature AUTO_CLOSE_TARGET;
    public static final enum com.flurry.org.codehaus.jackson.JsonGenerator$Feature ESCAPE_NON_ASCII;
    public static final enum com.flurry.org.codehaus.jackson.JsonGenerator$Feature FLUSH_PASSED_TO_STREAM;
    public static final enum com.flurry.org.codehaus.jackson.JsonGenerator$Feature QUOTE_FIELD_NAMES;
    public static final enum com.flurry.org.codehaus.jackson.JsonGenerator$Feature QUOTE_NON_NUMERIC_NUMBERS;
    public static final enum com.flurry.org.codehaus.jackson.JsonGenerator$Feature WRITE_NUMBERS_AS_STRINGS;
    final boolean _defaultState;
    final int _mask;

    static JsonGenerator$Feature()
    {
        com.flurry.org.codehaus.jackson.JsonGenerator$Feature.AUTO_CLOSE_TARGET = new com.flurry.org.codehaus.jackson.JsonGenerator$Feature("AUTO_CLOSE_TARGET", 0, 1);
        com.flurry.org.codehaus.jackson.JsonGenerator$Feature.AUTO_CLOSE_JSON_CONTENT = new com.flurry.org.codehaus.jackson.JsonGenerator$Feature("AUTO_CLOSE_JSON_CONTENT", 1, 1);
        com.flurry.org.codehaus.jackson.JsonGenerator$Feature.QUOTE_FIELD_NAMES = new com.flurry.org.codehaus.jackson.JsonGenerator$Feature("QUOTE_FIELD_NAMES", 2, 1);
        com.flurry.org.codehaus.jackson.JsonGenerator$Feature.QUOTE_NON_NUMERIC_NUMBERS = new com.flurry.org.codehaus.jackson.JsonGenerator$Feature("QUOTE_NON_NUMERIC_NUMBERS", 3, 1);
        com.flurry.org.codehaus.jackson.JsonGenerator$Feature.WRITE_NUMBERS_AS_STRINGS = new com.flurry.org.codehaus.jackson.JsonGenerator$Feature("WRITE_NUMBERS_AS_STRINGS", 4, 0);
        com.flurry.org.codehaus.jackson.JsonGenerator$Feature.FLUSH_PASSED_TO_STREAM = new com.flurry.org.codehaus.jackson.JsonGenerator$Feature("FLUSH_PASSED_TO_STREAM", 5, 1);
        com.flurry.org.codehaus.jackson.JsonGenerator$Feature.ESCAPE_NON_ASCII = new com.flurry.org.codehaus.jackson.JsonGenerator$Feature("ESCAPE_NON_ASCII", 6, 0);
        com.flurry.org.codehaus.jackson.JsonGenerator$Feature[] v0_12 = new com.flurry.org.codehaus.jackson.JsonGenerator$Feature[7];
        v0_12[0] = com.flurry.org.codehaus.jackson.JsonGenerator$Feature.AUTO_CLOSE_TARGET;
        v0_12[1] = com.flurry.org.codehaus.jackson.JsonGenerator$Feature.AUTO_CLOSE_JSON_CONTENT;
        v0_12[2] = com.flurry.org.codehaus.jackson.JsonGenerator$Feature.QUOTE_FIELD_NAMES;
        v0_12[3] = com.flurry.org.codehaus.jackson.JsonGenerator$Feature.QUOTE_NON_NUMERIC_NUMBERS;
        v0_12[4] = com.flurry.org.codehaus.jackson.JsonGenerator$Feature.WRITE_NUMBERS_AS_STRINGS;
        v0_12[5] = com.flurry.org.codehaus.jackson.JsonGenerator$Feature.FLUSH_PASSED_TO_STREAM;
        v0_12[6] = com.flurry.org.codehaus.jackson.JsonGenerator$Feature.ESCAPE_NON_ASCII;
        com.flurry.org.codehaus.jackson.JsonGenerator$Feature.$VALUES = v0_12;
        return;
    }

    private JsonGenerator$Feature(String p3, int p4, boolean p5)
    {
        super(p3, p4);
        super._defaultState = p5;
        super._mask = (1 << super.ordinal());
        return;
    }

    public static int collectDefaults()
    {
        int v2 = 0;
        com.flurry.org.codehaus.jackson.JsonGenerator$Feature[] v0 = com.flurry.org.codehaus.jackson.JsonGenerator$Feature.values();
        int v4 = v0.length;
        int v3 = 0;
        while (v3 < v4) {
            com.flurry.org.codehaus.jackson.JsonGenerator$Feature v1 = v0[v3];
            if (v1.enabledByDefault()) {
                v2 |= v1.getMask();
            }
            v3++;
        }
        return v2;
    }

    public static com.flurry.org.codehaus.jackson.JsonGenerator$Feature valueOf(String p1)
    {
        return ((com.flurry.org.codehaus.jackson.JsonGenerator$Feature) Enum.valueOf(com.flurry.org.codehaus.jackson.JsonGenerator$Feature, p1));
    }

    public static com.flurry.org.codehaus.jackson.JsonGenerator$Feature[] values()
    {
        return ((com.flurry.org.codehaus.jackson.JsonGenerator$Feature[]) com.flurry.org.codehaus.jackson.JsonGenerator$Feature.$VALUES.clone());
    }

    public boolean enabledByDefault()
    {
        return this._defaultState;
    }

    public int getMask()
    {
        return this._mask;
    }
}
