package com.flurry.org.codehaus.jackson;
public final enum class JsonEncoding extends java.lang.Enum {
    private static final synthetic com.flurry.org.codehaus.jackson.JsonEncoding[] $VALUES;
    public static final enum com.flurry.org.codehaus.jackson.JsonEncoding UTF16_BE;
    public static final enum com.flurry.org.codehaus.jackson.JsonEncoding UTF16_LE;
    public static final enum com.flurry.org.codehaus.jackson.JsonEncoding UTF32_BE;
    public static final enum com.flurry.org.codehaus.jackson.JsonEncoding UTF32_LE;
    public static final enum com.flurry.org.codehaus.jackson.JsonEncoding UTF8;
    protected final boolean _bigEndian;
    protected final String _javaName;

    static JsonEncoding()
    {
        com.flurry.org.codehaus.jackson.JsonEncoding.UTF8 = new com.flurry.org.codehaus.jackson.JsonEncoding("UTF8", 0, "UTF-8", 0);
        com.flurry.org.codehaus.jackson.JsonEncoding.UTF16_BE = new com.flurry.org.codehaus.jackson.JsonEncoding("UTF16_BE", 1, "UTF-16BE", 1);
        com.flurry.org.codehaus.jackson.JsonEncoding.UTF16_LE = new com.flurry.org.codehaus.jackson.JsonEncoding("UTF16_LE", 2, "UTF-16LE", 0);
        com.flurry.org.codehaus.jackson.JsonEncoding.UTF32_BE = new com.flurry.org.codehaus.jackson.JsonEncoding("UTF32_BE", 3, "UTF-32BE", 1);
        com.flurry.org.codehaus.jackson.JsonEncoding.UTF32_LE = new com.flurry.org.codehaus.jackson.JsonEncoding("UTF32_LE", 4, "UTF-32LE", 0);
        com.flurry.org.codehaus.jackson.JsonEncoding[] v0_9 = new com.flurry.org.codehaus.jackson.JsonEncoding[5];
        v0_9[0] = com.flurry.org.codehaus.jackson.JsonEncoding.UTF8;
        v0_9[1] = com.flurry.org.codehaus.jackson.JsonEncoding.UTF16_BE;
        v0_9[2] = com.flurry.org.codehaus.jackson.JsonEncoding.UTF16_LE;
        v0_9[3] = com.flurry.org.codehaus.jackson.JsonEncoding.UTF32_BE;
        v0_9[4] = com.flurry.org.codehaus.jackson.JsonEncoding.UTF32_LE;
        com.flurry.org.codehaus.jackson.JsonEncoding.$VALUES = v0_9;
        return;
    }

    private JsonEncoding(String p1, int p2, String p3, boolean p4)
    {
        super(p1, p2);
        super._javaName = p3;
        super._bigEndian = p4;
        return;
    }

    public static com.flurry.org.codehaus.jackson.JsonEncoding valueOf(String p1)
    {
        return ((com.flurry.org.codehaus.jackson.JsonEncoding) Enum.valueOf(com.flurry.org.codehaus.jackson.JsonEncoding, p1));
    }

    public static com.flurry.org.codehaus.jackson.JsonEncoding[] values()
    {
        return ((com.flurry.org.codehaus.jackson.JsonEncoding[]) com.flurry.org.codehaus.jackson.JsonEncoding.$VALUES.clone());
    }

    public String getJavaName()
    {
        return this._javaName;
    }

    public boolean isBigEndian()
    {
        return this._bigEndian;
    }
}
