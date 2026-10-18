package com.flurry.org.codehaus.jackson;
public abstract class JsonParser implements com.flurry.org.codehaus.jackson.Versioned, java.io.Closeable {
    private static final int MAX_BYTE_I = 127;
    private static final int MAX_SHORT_I = 32767;
    private static final int MIN_BYTE_I = 128;
    private static final int MIN_SHORT_I = 32768;
    protected com.flurry.org.codehaus.jackson.JsonToken _currToken;
    protected int _features;
    protected com.flurry.org.codehaus.jackson.JsonToken _lastClearedToken;

    protected JsonParser()
    {
        return;
    }

    protected JsonParser(int p1)
    {
        this._features = p1;
        return;
    }

    protected com.flurry.org.codehaus.jackson.JsonParseException _constructError(String p3)
    {
        return new com.flurry.org.codehaus.jackson.JsonParseException(p3, this.getCurrentLocation());
    }

    public boolean canUseSchema(com.flurry.org.codehaus.jackson.FormatSchema p2)
    {
        return 0;
    }

    public void clearCurrentToken()
    {
        if (this._currToken != null) {
            this._lastClearedToken = this._currToken;
            this._currToken = 0;
        }
        return;
    }

    public abstract void close();

    public com.flurry.org.codehaus.jackson.JsonParser configure(com.flurry.org.codehaus.jackson.JsonParser$Feature p1, boolean p2)
    {
        if (!p2) {
            this.disableFeature(p1);
        } else {
            this.enableFeature(p1);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.JsonParser disable(com.flurry.org.codehaus.jackson.JsonParser$Feature p3)
    {
        this._features = (this._features & (p3.getMask() ^ -1));
        return this;
    }

    public void disableFeature(com.flurry.org.codehaus.jackson.JsonParser$Feature p1)
    {
        this.disable(p1);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonParser enable(com.flurry.org.codehaus.jackson.JsonParser$Feature p3)
    {
        this._features = (this._features | p3.getMask());
        return this;
    }

    public void enableFeature(com.flurry.org.codehaus.jackson.JsonParser$Feature p1)
    {
        this.enable(p1);
        return;
    }

    public abstract java.math.BigInteger getBigIntegerValue();

    public byte[] getBinaryValue()
    {
        return this.getBinaryValue(com.flurry.org.codehaus.jackson.Base64Variants.getDefaultVariant());
    }

    public abstract byte[] getBinaryValue(com.flurry.org.codehaus.jackson.Base64Variant p0);

    public boolean getBooleanValue()
    {
        com.flurry.org.codehaus.jackson.JsonParseException v0_2;
        if (this.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_TRUE) {
            if (this.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_FALSE) {
                throw new com.flurry.org.codehaus.jackson.JsonParseException(new StringBuilder().append("Current token (").append(this._currToken).append(") not of boolean type").toString(), this.getCurrentLocation());
            } else {
                v0_2 = 0;
            }
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public byte getByteValue()
    {
        int v0 = this.getIntValue();
        if ((v0 >= -128) && (v0 <= 127)) {
            return ((byte) v0);
        } else {
            throw this._constructError(new StringBuilder().append("Numeric value (").append(this.getText()).append(") out of range of Java byte").toString());
        }
    }

    public abstract com.flurry.org.codehaus.jackson.ObjectCodec getCodec();

    public abstract com.flurry.org.codehaus.jackson.JsonLocation getCurrentLocation();

    public abstract String getCurrentName();

    public com.flurry.org.codehaus.jackson.JsonToken getCurrentToken()
    {
        return this._currToken;
    }

    public abstract java.math.BigDecimal getDecimalValue();

    public abstract double getDoubleValue();

    public Object getEmbeddedObject()
    {
        return 0;
    }

    public abstract float getFloatValue();

    public Object getInputSource()
    {
        return 0;
    }

    public abstract int getIntValue();

    public com.flurry.org.codehaus.jackson.JsonToken getLastClearedToken()
    {
        return this._lastClearedToken;
    }

    public abstract long getLongValue();

    public abstract com.flurry.org.codehaus.jackson.JsonParser$NumberType getNumberType();

    public abstract Number getNumberValue();

    public abstract com.flurry.org.codehaus.jackson.JsonStreamContext getParsingContext();

    public short getShortValue()
    {
        int v0 = this.getIntValue();
        if ((v0 >= -32768) && (v0 <= 32767)) {
            return ((short) v0);
        } else {
            throw this._constructError(new StringBuilder().append("Numeric value (").append(this.getText()).append(") out of range of Java short").toString());
        }
    }

    public abstract String getText();

    public abstract char[] getTextCharacters();

    public abstract int getTextLength();

    public abstract int getTextOffset();

    public abstract com.flurry.org.codehaus.jackson.JsonLocation getTokenLocation();

    public boolean getValueAsBoolean()
    {
        return this.getValueAsBoolean(0);
    }

    public boolean getValueAsBoolean(boolean p1)
    {
        return p1;
    }

    public double getValueAsDouble()
    {
        return this.getValueAsDouble(0);
    }

    public double getValueAsDouble(double p1)
    {
        return p1;
    }

    public int getValueAsInt()
    {
        return this.getValueAsInt(0);
    }

    public int getValueAsInt(int p1)
    {
        return p1;
    }

    public long getValueAsLong()
    {
        return ((long) this.getValueAsInt(0));
    }

    public long getValueAsLong(long p1)
    {
        return p1;
    }

    public boolean hasCurrentToken()
    {
        int v0_1;
        if (this._currToken == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean hasTextCharacters()
    {
        return 0;
    }

    public abstract boolean isClosed();

    public boolean isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature p3)
    {
        int v0_2;
        if ((this._features & p3.getMask()) == 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public boolean isExpectedStartArrayToken()
    {
        int v0_1;
        if (this.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public final boolean isFeatureEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature p2)
    {
        return this.isEnabled(p2);
    }

    public Boolean nextBooleanValue()
    {
        Boolean v0_2;
        switch (com.flurry.org.codehaus.jackson.JsonParser$1.$SwitchMap$org$codehaus$jackson$JsonToken[this.nextToken().ordinal()]) {
            case 1:
                v0_2 = Boolean.TRUE;
                break;
            case 2:
                v0_2 = Boolean.FALSE;
                break;
            default:
                v0_2 = 0;
        }
        return v0_2;
    }

    public boolean nextFieldName(com.flurry.org.codehaus.jackson.SerializableString p3)
    {
        if ((this.nextToken() != com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) || (!p3.getValue().equals(this.getCurrentName()))) {
            int v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public int nextIntValue(int p3)
    {
        if (this.nextToken() == com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
            p3 = this.getIntValue();
        }
        return p3;
    }

    public long nextLongValue(long p3)
    {
        if (this.nextToken() == com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
            p3 = this.getLongValue();
        }
        return p3;
    }

    public String nextTextValue()
    {
        int v0_1;
        if (this.nextToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
            v0_1 = 0;
        } else {
            v0_1 = this.getText();
        }
        return v0_1;
    }

    public abstract com.flurry.org.codehaus.jackson.JsonToken nextToken();

    public com.flurry.org.codehaus.jackson.JsonToken nextValue()
    {
        com.flurry.org.codehaus.jackson.JsonToken v0 = this.nextToken();
        if (v0 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
            v0 = this.nextToken();
        }
        return v0;
    }

    public Object readValueAs(com.flurry.org.codehaus.jackson.type.TypeReference p4)
    {
        com.flurry.org.codehaus.jackson.ObjectCodec v0 = this.getCodec();
        if (v0 != null) {
            return v0.readValue(this, p4);
        } else {
            throw new IllegalStateException("No ObjectCodec defined for the parser, can not deserialize JSON into Java objects");
        }
    }

    public Object readValueAs(Class p4)
    {
        com.flurry.org.codehaus.jackson.ObjectCodec v0 = this.getCodec();
        if (v0 != null) {
            return v0.readValue(this, p4);
        } else {
            throw new IllegalStateException("No ObjectCodec defined for the parser, can not deserialize JSON into Java objects");
        }
    }

    public com.flurry.org.codehaus.jackson.JsonNode readValueAsTree()
    {
        com.flurry.org.codehaus.jackson.ObjectCodec v0 = this.getCodec();
        if (v0 != null) {
            return v0.readTree(this);
        } else {
            throw new IllegalStateException("No ObjectCodec defined for the parser, can not deserialize JSON into JsonNode tree");
        }
    }

    public java.util.Iterator readValuesAs(com.flurry.org.codehaus.jackson.type.TypeReference p4)
    {
        com.flurry.org.codehaus.jackson.ObjectCodec v0 = this.getCodec();
        if (v0 != null) {
            return v0.readValues(this, p4);
        } else {
            throw new IllegalStateException("No ObjectCodec defined for the parser, can not deserialize JSON into Java objects");
        }
    }

    public java.util.Iterator readValuesAs(Class p4)
    {
        com.flurry.org.codehaus.jackson.ObjectCodec v0 = this.getCodec();
        if (v0 != null) {
            return v0.readValues(this, p4);
        } else {
            throw new IllegalStateException("No ObjectCodec defined for the parser, can not deserialize JSON into Java objects");
        }
    }

    public int releaseBuffered(java.io.OutputStream p2)
    {
        return -1;
    }

    public int releaseBuffered(java.io.Writer p2)
    {
        return -1;
    }

    public abstract void setCodec(com.flurry.org.codehaus.jackson.ObjectCodec p0);

    public void setFeature(com.flurry.org.codehaus.jackson.JsonParser$Feature p1, boolean p2)
    {
        this.configure(p1, p2);
        return;
    }

    public void setSchema(com.flurry.org.codehaus.jackson.FormatSchema p4)
    {
        throw new UnsupportedOperationException(new StringBuilder().append("Parser of type ").append(this.getClass().getName()).append(" does not support schema of type \'").append(p4.getSchemaType()).append("\'").toString());
    }

    public abstract com.flurry.org.codehaus.jackson.JsonParser skipChildren();

    public com.flurry.org.codehaus.jackson.Version version()
    {
        return com.flurry.org.codehaus.jackson.Version.unknownVersion();
    }
}
