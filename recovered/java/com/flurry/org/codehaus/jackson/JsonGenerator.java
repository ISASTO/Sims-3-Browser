package com.flurry.org.codehaus.jackson;
public abstract class JsonGenerator implements com.flurry.org.codehaus.jackson.Versioned, java.io.Closeable {
    protected com.flurry.org.codehaus.jackson.PrettyPrinter _cfgPrettyPrinter;

    protected JsonGenerator()
    {
        return;
    }

    public boolean canUseSchema(com.flurry.org.codehaus.jackson.FormatSchema p2)
    {
        return 0;
    }

    public abstract void close();

    public com.flurry.org.codehaus.jackson.JsonGenerator configure(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p1, boolean p2)
    {
        if (!p2) {
            this.disable(p1);
        } else {
            this.enable(p1);
        }
        return this;
    }

    public abstract void copyCurrentEvent(com.flurry.org.codehaus.jackson.JsonParser p0);

    public abstract void copyCurrentStructure(com.flurry.org.codehaus.jackson.JsonParser p0);

    public abstract com.flurry.org.codehaus.jackson.JsonGenerator disable(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p0);

    public void disableFeature(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p1)
    {
        this.disable(p1);
        return;
    }

    public abstract com.flurry.org.codehaus.jackson.JsonGenerator enable(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p0);

    public void enableFeature(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p1)
    {
        this.enable(p1);
        return;
    }

    public abstract void flush();

    public com.flurry.org.codehaus.jackson.io.CharacterEscapes getCharacterEscapes()
    {
        return 0;
    }

    public abstract com.flurry.org.codehaus.jackson.ObjectCodec getCodec();

    public int getHighestEscapedChar()
    {
        return 0;
    }

    public abstract com.flurry.org.codehaus.jackson.JsonStreamContext getOutputContext();

    public Object getOutputTarget()
    {
        return 0;
    }

    public abstract boolean isClosed();

    public abstract boolean isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p0);

    public boolean isFeatureEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p2)
    {
        return this.isEnabled(p2);
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator setCharacterEscapes(com.flurry.org.codehaus.jackson.io.CharacterEscapes p1)
    {
        return this;
    }

    public abstract com.flurry.org.codehaus.jackson.JsonGenerator setCodec(com.flurry.org.codehaus.jackson.ObjectCodec p0);

    public void setFeature(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p1, boolean p2)
    {
        this.configure(p1, p2);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator setHighestNonEscapedChar(int p1)
    {
        return this;
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator setPrettyPrinter(com.flurry.org.codehaus.jackson.PrettyPrinter p1)
    {
        this._cfgPrettyPrinter = p1;
        return this;
    }

    public void setSchema(com.flurry.org.codehaus.jackson.FormatSchema p4)
    {
        throw new UnsupportedOperationException(new StringBuilder().append("Generator of type ").append(this.getClass().getName()).append(" does not support schema of type \'").append(p4.getSchemaType()).append("\'").toString());
    }

    public abstract com.flurry.org.codehaus.jackson.JsonGenerator useDefaultPrettyPrinter();

    public com.flurry.org.codehaus.jackson.Version version()
    {
        return com.flurry.org.codehaus.jackson.Version.unknownVersion();
    }

    public final void writeArrayFieldStart(String p1)
    {
        this.writeFieldName(p1);
        this.writeStartArray();
        return;
    }

    public abstract void writeBinary(com.flurry.org.codehaus.jackson.Base64Variant p0, byte[] p1, int p2, int p3);

    public void writeBinary(byte[] p4)
    {
        this.writeBinary(com.flurry.org.codehaus.jackson.Base64Variants.getDefaultVariant(), p4, 0, p4.length);
        return;
    }

    public void writeBinary(byte[] p2, int p3, int p4)
    {
        this.writeBinary(com.flurry.org.codehaus.jackson.Base64Variants.getDefaultVariant(), p2, p3, p4);
        return;
    }

    public final void writeBinaryField(String p1, byte[] p2)
    {
        this.writeFieldName(p1);
        this.writeBinary(p2);
        return;
    }

    public abstract void writeBoolean(boolean p0);

    public final void writeBooleanField(String p1, boolean p2)
    {
        this.writeFieldName(p1);
        this.writeBoolean(p2);
        return;
    }

    public abstract void writeEndArray();

    public abstract void writeEndObject();

    public void writeFieldName(com.flurry.org.codehaus.jackson.SerializableString p2)
    {
        this.writeFieldName(p2.getValue());
        return;
    }

    public void writeFieldName(com.flurry.org.codehaus.jackson.io.SerializedString p2)
    {
        this.writeFieldName(p2.getValue());
        return;
    }

    public abstract void writeFieldName(String p0);

    public abstract void writeNull();

    public final void writeNullField(String p1)
    {
        this.writeFieldName(p1);
        this.writeNull();
        return;
    }

    public abstract void writeNumber(double p0);

    public abstract void writeNumber(float p0);

    public abstract void writeNumber(int p0);

    public abstract void writeNumber(long p0);

    public abstract void writeNumber(String p0);

    public abstract void writeNumber(java.math.BigDecimal p0);

    public abstract void writeNumber(java.math.BigInteger p0);

    public final void writeNumberField(String p1, double p2)
    {
        this.writeFieldName(p1);
        this.writeNumber(p2);
        return;
    }

    public final void writeNumberField(String p1, float p2)
    {
        this.writeFieldName(p1);
        this.writeNumber(p2);
        return;
    }

    public final void writeNumberField(String p1, int p2)
    {
        this.writeFieldName(p1);
        this.writeNumber(p2);
        return;
    }

    public final void writeNumberField(String p1, long p2)
    {
        this.writeFieldName(p1);
        this.writeNumber(p2);
        return;
    }

    public final void writeNumberField(String p1, java.math.BigDecimal p2)
    {
        this.writeFieldName(p1);
        this.writeNumber(p2);
        return;
    }

    public abstract void writeObject(Object p0);

    public final void writeObjectField(String p1, Object p2)
    {
        this.writeFieldName(p1);
        this.writeObject(p2);
        return;
    }

    public final void writeObjectFieldStart(String p1)
    {
        this.writeFieldName(p1);
        this.writeStartObject();
        return;
    }

    public abstract void writeRaw(char p0);

    public abstract void writeRaw(String p0);

    public abstract void writeRaw(String p0, int p1, int p2);

    public abstract void writeRaw(char[] p0, int p1, int p2);

    public abstract void writeRawUTF8String(byte[] p0, int p1, int p2);

    public abstract void writeRawValue(String p0);

    public abstract void writeRawValue(String p0, int p1, int p2);

    public abstract void writeRawValue(char[] p0, int p1, int p2);

    public abstract void writeStartArray();

    public abstract void writeStartObject();

    public void writeString(com.flurry.org.codehaus.jackson.SerializableString p2)
    {
        this.writeString(p2.getValue());
        return;
    }

    public abstract void writeString(String p0);

    public abstract void writeString(char[] p0, int p1, int p2);

    public void writeStringField(String p1, String p2)
    {
        this.writeFieldName(p1);
        this.writeString(p2);
        return;
    }

    public abstract void writeTree(com.flurry.org.codehaus.jackson.JsonNode p0);

    public abstract void writeUTF8String(byte[] p0, int p1, int p2);
}
