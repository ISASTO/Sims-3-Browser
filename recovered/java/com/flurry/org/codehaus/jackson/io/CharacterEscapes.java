package com.flurry.org.codehaus.jackson.io;
public abstract class CharacterEscapes {
    public static final int ESCAPE_CUSTOM = 254;
    public static final int ESCAPE_NONE = 0;
    public static final int ESCAPE_STANDARD = 255;

    public CharacterEscapes()
    {
        return;
    }

    public static int[] standardAsciiEscapesForJSON()
    {
        int[] v0 = com.flurry.org.codehaus.jackson.util.CharTypes.get7BitOutputEscapes();
        int[] v2 = new int[v0.length];
        System.arraycopy(v0, 0, v2, 0, v0.length);
        return v2;
    }

    public abstract int[] getEscapeCodesForAscii();

    public abstract com.flurry.org.codehaus.jackson.SerializableString getEscapeSequence(int p0);
}
