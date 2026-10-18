package com.flurry.org.codehaus.jackson.annotate;
public final enum class JsonTypeInfo$Id extends java.lang.Enum {
    private static final synthetic com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id[] $VALUES;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id CLASS;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id CUSTOM;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id MINIMAL_CLASS;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id NAME;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id NONE;
    private final String _defaultPropertyName;

    static JsonTypeInfo$Id()
    {
        com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.NONE = new com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id("NONE", 0, 0);
        com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.CLASS = new com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id("CLASS", 1, "@class");
        com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.MINIMAL_CLASS = new com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id("MINIMAL_CLASS", 2, "@c");
        com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.NAME = new com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id("NAME", 3, "@type");
        com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.CUSTOM = new com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id("CUSTOM", 4, 0);
        com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id[] v0_9 = new com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id[5];
        v0_9[0] = com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.NONE;
        v0_9[1] = com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.CLASS;
        v0_9[2] = com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.MINIMAL_CLASS;
        v0_9[3] = com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.NAME;
        v0_9[4] = com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.CUSTOM;
        com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.$VALUES = v0_9;
        return;
    }

    private JsonTypeInfo$Id(String p1, int p2, String p3)
    {
        super(p1, p2);
        super._defaultPropertyName = p3;
        return;
    }

    public static com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id valueOf(String p1)
    {
        return ((com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id) Enum.valueOf(com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id, p1));
    }

    public static com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id[] values()
    {
        return ((com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id[]) com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.$VALUES.clone());
    }

    public String getDefaultPropertyName()
    {
        return this._defaultPropertyName;
    }
}
