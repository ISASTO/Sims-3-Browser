package com.flurry.org.codehaus.jackson.util;
public class MinimalPrettyPrinter implements com.flurry.org.codehaus.jackson.PrettyPrinter {
    public static final String DEFAULT_ROOT_VALUE_SEPARATOR = " ";
    protected String _rootValueSeparator;

    public MinimalPrettyPrinter()
    {
        this(" ");
        return;
    }

    public MinimalPrettyPrinter(String p2)
    {
        this._rootValueSeparator = " ";
        this._rootValueSeparator = p2;
        return;
    }

    public void beforeArrayValues(com.flurry.org.codehaus.jackson.JsonGenerator p1)
    {
        return;
    }

    public void beforeObjectEntries(com.flurry.org.codehaus.jackson.JsonGenerator p1)
    {
        return;
    }

    public void setRootValueSeparator(String p1)
    {
        this._rootValueSeparator = p1;
        return;
    }

    public void writeArrayValueSeparator(com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        p2.writeRaw(44);
        return;
    }

    public void writeEndArray(com.flurry.org.codehaus.jackson.JsonGenerator p2, int p3)
    {
        p2.writeRaw(93);
        return;
    }

    public void writeEndObject(com.flurry.org.codehaus.jackson.JsonGenerator p2, int p3)
    {
        p2.writeRaw(125);
        return;
    }

    public void writeObjectEntrySeparator(com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        p2.writeRaw(44);
        return;
    }

    public void writeObjectFieldValueSeparator(com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        p2.writeRaw(58);
        return;
    }

    public void writeRootValueSeparator(com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        if (this._rootValueSeparator != null) {
            p2.writeRaw(this._rootValueSeparator);
        }
        return;
    }

    public void writeStartArray(com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        p2.writeRaw(91);
        return;
    }

    public void writeStartObject(com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        p2.writeRaw(123);
        return;
    }
}
