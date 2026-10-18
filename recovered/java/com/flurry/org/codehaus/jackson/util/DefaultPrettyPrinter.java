package com.flurry.org.codehaus.jackson.util;
public class DefaultPrettyPrinter implements com.flurry.org.codehaus.jackson.PrettyPrinter {
    protected com.flurry.org.codehaus.jackson.impl.Indenter _arrayIndenter;
    protected int _nesting;
    protected com.flurry.org.codehaus.jackson.impl.Indenter _objectIndenter;
    protected boolean _spacesInObjectEntries;

    public DefaultPrettyPrinter()
    {
        this._arrayIndenter = new com.flurry.org.codehaus.jackson.util.DefaultPrettyPrinter$FixedSpaceIndenter();
        this._objectIndenter = new com.flurry.org.codehaus.jackson.util.DefaultPrettyPrinter$Lf2SpacesIndenter();
        this._spacesInObjectEntries = 1;
        this._nesting = 0;
        return;
    }

    public void beforeArrayValues(com.flurry.org.codehaus.jackson.JsonGenerator p3)
    {
        this._arrayIndenter.writeIndentation(p3, this._nesting);
        return;
    }

    public void beforeObjectEntries(com.flurry.org.codehaus.jackson.JsonGenerator p3)
    {
        this._objectIndenter.writeIndentation(p3, this._nesting);
        return;
    }

    public void indentArraysWith(com.flurry.org.codehaus.jackson.impl.Indenter p1)
    {
        if (p1 == null) {
            p1 = new com.flurry.org.codehaus.jackson.util.DefaultPrettyPrinter$NopIndenter();
        }
        this._arrayIndenter = p1;
        return;
    }

    public void indentObjectsWith(com.flurry.org.codehaus.jackson.impl.Indenter p1)
    {
        if (p1 == null) {
            p1 = new com.flurry.org.codehaus.jackson.util.DefaultPrettyPrinter$NopIndenter();
        }
        this._objectIndenter = p1;
        return;
    }

    public void spacesInObjectEntries(boolean p1)
    {
        this._spacesInObjectEntries = p1;
        return;
    }

    public void writeArrayValueSeparator(com.flurry.org.codehaus.jackson.JsonGenerator p3)
    {
        p3.writeRaw(44);
        this._arrayIndenter.writeIndentation(p3, this._nesting);
        return;
    }

    public void writeEndArray(com.flurry.org.codehaus.jackson.JsonGenerator p3, int p4)
    {
        if (!this._arrayIndenter.isInline()) {
            this._nesting = (this._nesting - 1);
        }
        if (p4 <= 0) {
            p3.writeRaw(32);
        } else {
            this._arrayIndenter.writeIndentation(p3, this._nesting);
        }
        p3.writeRaw(93);
        return;
    }

    public void writeEndObject(com.flurry.org.codehaus.jackson.JsonGenerator p3, int p4)
    {
        if (!this._objectIndenter.isInline()) {
            this._nesting = (this._nesting - 1);
        }
        if (p4 <= 0) {
            p3.writeRaw(32);
        } else {
            this._objectIndenter.writeIndentation(p3, this._nesting);
        }
        p3.writeRaw(125);
        return;
    }

    public void writeObjectEntrySeparator(com.flurry.org.codehaus.jackson.JsonGenerator p3)
    {
        p3.writeRaw(44);
        this._objectIndenter.writeIndentation(p3, this._nesting);
        return;
    }

    public void writeObjectFieldValueSeparator(com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        if (!this._spacesInObjectEntries) {
            p2.writeRaw(58);
        } else {
            p2.writeRaw(" : ");
        }
        return;
    }

    public void writeRootValueSeparator(com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        p2.writeRaw(32);
        return;
    }

    public void writeStartArray(com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        if (!this._arrayIndenter.isInline()) {
            this._nesting = (this._nesting + 1);
        }
        p2.writeRaw(91);
        return;
    }

    public void writeStartObject(com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        p2.writeRaw(123);
        if (!this._objectIndenter.isInline()) {
            this._nesting = (this._nesting + 1);
        }
        return;
    }
}
