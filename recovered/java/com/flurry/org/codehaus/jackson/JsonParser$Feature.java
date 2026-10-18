package com.flurry.org.codehaus.jackson;
public final enum class JsonParser$Feature extends java.lang.Enum {
    private static final synthetic com.flurry.org.codehaus.jackson.JsonParser$Feature[] $VALUES;
    public static final enum com.flurry.org.codehaus.jackson.JsonParser$Feature ALLOW_BACKSLASH_ESCAPING_ANY_CHARACTER;
    public static final enum com.flurry.org.codehaus.jackson.JsonParser$Feature ALLOW_COMMENTS;
    public static final enum com.flurry.org.codehaus.jackson.JsonParser$Feature ALLOW_NON_NUMERIC_NUMBERS;
    public static final enum com.flurry.org.codehaus.jackson.JsonParser$Feature ALLOW_NUMERIC_LEADING_ZEROS;
    public static final enum com.flurry.org.codehaus.jackson.JsonParser$Feature ALLOW_SINGLE_QUOTES;
    public static final enum com.flurry.org.codehaus.jackson.JsonParser$Feature ALLOW_UNQUOTED_CONTROL_CHARS;
    public static final enum com.flurry.org.codehaus.jackson.JsonParser$Feature ALLOW_UNQUOTED_FIELD_NAMES;
    public static final enum com.flurry.org.codehaus.jackson.JsonParser$Feature AUTO_CLOSE_SOURCE;
    public static final enum com.flurry.org.codehaus.jackson.JsonParser$Feature CANONICALIZE_FIELD_NAMES;
    public static final enum com.flurry.org.codehaus.jackson.JsonParser$Feature INTERN_FIELD_NAMES;
    final boolean _defaultState;

    static JsonParser$Feature()
    {
        com.flurry.org.codehaus.jackson.JsonParser$Feature.AUTO_CLOSE_SOURCE = new com.flurry.org.codehaus.jackson.JsonParser$Feature("AUTO_CLOSE_SOURCE", 0, 1);
        com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_COMMENTS = new com.flurry.org.codehaus.jackson.JsonParser$Feature("ALLOW_COMMENTS", 1, 0);
        com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_UNQUOTED_FIELD_NAMES = new com.flurry.org.codehaus.jackson.JsonParser$Feature("ALLOW_UNQUOTED_FIELD_NAMES", 2, 0);
        com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_SINGLE_QUOTES = new com.flurry.org.codehaus.jackson.JsonParser$Feature("ALLOW_SINGLE_QUOTES", 3, 0);
        com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_UNQUOTED_CONTROL_CHARS = new com.flurry.org.codehaus.jackson.JsonParser$Feature("ALLOW_UNQUOTED_CONTROL_CHARS", 4, 0);
        com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_BACKSLASH_ESCAPING_ANY_CHARACTER = new com.flurry.org.codehaus.jackson.JsonParser$Feature("ALLOW_BACKSLASH_ESCAPING_ANY_CHARACTER", 5, 0);
        com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_NUMERIC_LEADING_ZEROS = new com.flurry.org.codehaus.jackson.JsonParser$Feature("ALLOW_NUMERIC_LEADING_ZEROS", 6, 0);
        com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_NON_NUMERIC_NUMBERS = new com.flurry.org.codehaus.jackson.JsonParser$Feature("ALLOW_NON_NUMERIC_NUMBERS", 7, 0);
        com.flurry.org.codehaus.jackson.JsonParser$Feature.INTERN_FIELD_NAMES = new com.flurry.org.codehaus.jackson.JsonParser$Feature("INTERN_FIELD_NAMES", 8, 1);
        com.flurry.org.codehaus.jackson.JsonParser$Feature.CANONICALIZE_FIELD_NAMES = new com.flurry.org.codehaus.jackson.JsonParser$Feature("CANONICALIZE_FIELD_NAMES", 9, 1);
        com.flurry.org.codehaus.jackson.JsonParser$Feature[] v0_19 = new com.flurry.org.codehaus.jackson.JsonParser$Feature[10];
        v0_19[0] = com.flurry.org.codehaus.jackson.JsonParser$Feature.AUTO_CLOSE_SOURCE;
        v0_19[1] = com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_COMMENTS;
        v0_19[2] = com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_UNQUOTED_FIELD_NAMES;
        v0_19[3] = com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_SINGLE_QUOTES;
        v0_19[4] = com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_UNQUOTED_CONTROL_CHARS;
        v0_19[5] = com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_BACKSLASH_ESCAPING_ANY_CHARACTER;
        v0_19[6] = com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_NUMERIC_LEADING_ZEROS;
        v0_19[7] = com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_NON_NUMERIC_NUMBERS;
        v0_19[8] = com.flurry.org.codehaus.jackson.JsonParser$Feature.INTERN_FIELD_NAMES;
        v0_19[9] = com.flurry.org.codehaus.jackson.JsonParser$Feature.CANONICALIZE_FIELD_NAMES;
        com.flurry.org.codehaus.jackson.JsonParser$Feature.$VALUES = v0_19;
        return;
    }

    private JsonParser$Feature(String p1, int p2, boolean p3)
    {
        super(p1, p2);
        super._defaultState = p3;
        return;
    }

    public static int collectDefaults()
    {
        int v2 = 0;
        com.flurry.org.codehaus.jackson.JsonParser$Feature[] v0 = com.flurry.org.codehaus.jackson.JsonParser$Feature.values();
        int v4 = v0.length;
        int v3 = 0;
        while (v3 < v4) {
            com.flurry.org.codehaus.jackson.JsonParser$Feature v1 = v0[v3];
            if (v1.enabledByDefault()) {
                v2 |= v1.getMask();
            }
            v3++;
        }
        return v2;
    }

    public static com.flurry.org.codehaus.jackson.JsonParser$Feature valueOf(String p1)
    {
        return ((com.flurry.org.codehaus.jackson.JsonParser$Feature) Enum.valueOf(com.flurry.org.codehaus.jackson.JsonParser$Feature, p1));
    }

    public static com.flurry.org.codehaus.jackson.JsonParser$Feature[] values()
    {
        return ((com.flurry.org.codehaus.jackson.JsonParser$Feature[]) com.flurry.org.codehaus.jackson.JsonParser$Feature.$VALUES.clone());
    }

    public boolean enabledByDefault()
    {
        return this._defaultState;
    }

    public boolean enabledIn(int p2)
    {
        int v0_2;
        if ((this.getMask() & p2) == 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public int getMask()
    {
        return (1 << this.ordinal());
    }
}
