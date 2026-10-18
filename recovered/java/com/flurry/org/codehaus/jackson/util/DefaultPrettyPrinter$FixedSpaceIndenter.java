package com.flurry.org.codehaus.jackson.util;
public class DefaultPrettyPrinter$FixedSpaceIndenter implements com.flurry.org.codehaus.jackson.impl.Indenter {

    public DefaultPrettyPrinter$FixedSpaceIndenter()
    {
        return;
    }

    public boolean isInline()
    {
        return 1;
    }

    public void writeIndentation(com.flurry.org.codehaus.jackson.JsonGenerator p2, int p3)
    {
        p2.writeRaw(32);
        return;
    }
}
