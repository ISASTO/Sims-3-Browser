package com.flurry.org.codehaus.jackson.util;
public class JsonParserDelegate extends com.flurry.org.codehaus.jackson.JsonParser {
    protected com.flurry.org.codehaus.jackson.JsonParser delegate;

    public JsonParserDelegate(com.flurry.org.codehaus.jackson.JsonParser p1)
    {
        this.delegate = p1;
        return;
    }

    public boolean canUseSchema(com.flurry.org.codehaus.jackson.FormatSchema p2)
    {
        return this.delegate.canUseSchema(p2);
    }

    public void clearCurrentToken()
    {
        this.delegate.clearCurrentToken();
        return;
    }

    public void close()
    {
        this.delegate.close();
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonParser disable(com.flurry.org.codehaus.jackson.JsonParser$Feature p2)
    {
        this.delegate.disable(p2);
        return this;
    }

    public com.flurry.org.codehaus.jackson.JsonParser enable(com.flurry.org.codehaus.jackson.JsonParser$Feature p2)
    {
        this.delegate.enable(p2);
        return this;
    }

    public java.math.BigInteger getBigIntegerValue()
    {
        return this.delegate.getBigIntegerValue();
    }

    public byte[] getBinaryValue(com.flurry.org.codehaus.jackson.Base64Variant p2)
    {
        return this.delegate.getBinaryValue(p2);
    }

    public boolean getBooleanValue()
    {
        return this.delegate.getBooleanValue();
    }

    public byte getByteValue()
    {
        return this.delegate.getByteValue();
    }

    public com.flurry.org.codehaus.jackson.ObjectCodec getCodec()
    {
        return this.delegate.getCodec();
    }

    public com.flurry.org.codehaus.jackson.JsonLocation getCurrentLocation()
    {
        return this.delegate.getCurrentLocation();
    }

    public String getCurrentName()
    {
        return this.delegate.getCurrentName();
    }

    public com.flurry.org.codehaus.jackson.JsonToken getCurrentToken()
    {
        return this.delegate.getCurrentToken();
    }

    public java.math.BigDecimal getDecimalValue()
    {
        return this.delegate.getDecimalValue();
    }

    public double getDoubleValue()
    {
        return this.delegate.getDoubleValue();
    }

    public Object getEmbeddedObject()
    {
        return this.delegate.getEmbeddedObject();
    }

    public float getFloatValue()
    {
        return this.delegate.getFloatValue();
    }

    public Object getInputSource()
    {
        return this.delegate.getInputSource();
    }

    public int getIntValue()
    {
        return this.delegate.getIntValue();
    }

    public com.flurry.org.codehaus.jackson.JsonToken getLastClearedToken()
    {
        return this.delegate.getLastClearedToken();
    }

    public long getLongValue()
    {
        return this.delegate.getLongValue();
    }

    public com.flurry.org.codehaus.jackson.JsonParser$NumberType getNumberType()
    {
        return this.delegate.getNumberType();
    }

    public Number getNumberValue()
    {
        return this.delegate.getNumberValue();
    }

    public com.flurry.org.codehaus.jackson.JsonStreamContext getParsingContext()
    {
        return this.delegate.getParsingContext();
    }

    public short getShortValue()
    {
        return this.delegate.getShortValue();
    }

    public String getText()
    {
        return this.delegate.getText();
    }

    public char[] getTextCharacters()
    {
        return this.delegate.getTextCharacters();
    }

    public int getTextLength()
    {
        return this.delegate.getTextLength();
    }

    public int getTextOffset()
    {
        return this.delegate.getTextOffset();
    }

    public com.flurry.org.codehaus.jackson.JsonLocation getTokenLocation()
    {
        return this.delegate.getTokenLocation();
    }

    public boolean hasCurrentToken()
    {
        return this.delegate.hasCurrentToken();
    }

    public boolean isClosed()
    {
        return this.delegate.isClosed();
    }

    public boolean isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature p2)
    {
        return this.delegate.isEnabled(p2);
    }

    public com.flurry.org.codehaus.jackson.JsonToken nextToken()
    {
        return this.delegate.nextToken();
    }

    public void setCodec(com.flurry.org.codehaus.jackson.ObjectCodec p2)
    {
        this.delegate.setCodec(p2);
        return;
    }

    public void setSchema(com.flurry.org.codehaus.jackson.FormatSchema p2)
    {
        this.delegate.setSchema(p2);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonParser skipChildren()
    {
        this.delegate.skipChildren();
        return this;
    }

    public com.flurry.org.codehaus.jackson.Version version()
    {
        return this.delegate.version();
    }
}
