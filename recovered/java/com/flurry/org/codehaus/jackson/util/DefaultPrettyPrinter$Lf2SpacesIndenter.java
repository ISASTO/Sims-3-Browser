package com.flurry.org.codehaus.jackson.util;
public class DefaultPrettyPrinter$Lf2SpacesIndenter implements com.flurry.org.codehaus.jackson.impl.Indenter {
    static final char[] SPACES = None;
    static final int SPACE_COUNT = 64;
    static final String SYSTEM_LINE_SEPARATOR;

    static DefaultPrettyPrinter$Lf2SpacesIndenter()
    {
        try {
            String v0 = System.getProperty("line.separator");
        } catch (char[] v1) {
        }
        if (v0 == null) {
            v0 = "\n";
        }
        com.flurry.org.codehaus.jackson.util.DefaultPrettyPrinter$Lf2SpacesIndenter.SYSTEM_LINE_SEPARATOR = v0;
        char[] v1_3 = new char[64];
        com.flurry.org.codehaus.jackson.util.DefaultPrettyPrinter$Lf2SpacesIndenter.SPACES = v1_3;
        java.util.Arrays.fill(com.flurry.org.codehaus.jackson.util.DefaultPrettyPrinter$Lf2SpacesIndenter.SPACES, 32);
        return;
    }

    public DefaultPrettyPrinter$Lf2SpacesIndenter()
    {
        return;
    }

    public boolean isInline()
    {
        return 0;
    }

    public void writeIndentation(com.flurry.org.codehaus.jackson.JsonGenerator p4, int p5)
    {
        p4.writeRaw(com.flurry.org.codehaus.jackson.util.DefaultPrettyPrinter$Lf2SpacesIndenter.SYSTEM_LINE_SEPARATOR);
        int v5_1 = (p5 + p5);
        while (v5_1 > 64) {
            p4.writeRaw(com.flurry.org.codehaus.jackson.util.DefaultPrettyPrinter$Lf2SpacesIndenter.SPACES, 0, 64);
            v5_1 -= com.flurry.org.codehaus.jackson.util.DefaultPrettyPrinter$Lf2SpacesIndenter.SPACES.length;
        }
        p4.writeRaw(com.flurry.org.codehaus.jackson.util.DefaultPrettyPrinter$Lf2SpacesIndenter.SPACES, 0, v5_1);
        return;
    }
}
