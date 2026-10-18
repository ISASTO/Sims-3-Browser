package com.flurry.org.codehaus.jackson.util;
public class JsonGeneratorDelegate extends com.flurry.org.codehaus.jackson.JsonGenerator {
    protected com.flurry.org.codehaus.jackson.JsonGenerator delegate;

    public JsonGeneratorDelegate(com.flurry.org.codehaus.jackson.JsonGenerator p1)
    {
        this.delegate = p1;
        return;
    }

    public boolean canUseSchema(com.flurry.org.codehaus.jackson.FormatSchema p2)
    {
        return this.delegate.canUseSchema(p2);
    }

    public void close()
    {
        this.delegate.close();
        return;
    }

    public void copyCurrentEvent(com.flurry.org.codehaus.jackson.JsonParser p2)
    {
        this.delegate.copyCurrentEvent(p2);
        return;
    }

    public void copyCurrentStructure(com.flurry.org.codehaus.jackson.JsonParser p2)
    {
        this.delegate.copyCurrentStructure(p2);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator disable(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p2)
    {
        return this.delegate.disable(p2);
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator enable(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p2)
    {
        return this.delegate.enable(p2);
    }

    public void flush()
    {
        this.delegate.flush();
        return;
    }

    public com.flurry.org.codehaus.jackson.ObjectCodec getCodec()
    {
        return this.delegate.getCodec();
    }

    public com.flurry.org.codehaus.jackson.JsonStreamContext getOutputContext()
    {
        return this.delegate.getOutputContext();
    }

    public Object getOutputTarget()
    {
        return this.delegate.getOutputTarget();
    }

    public boolean isClosed()
    {
        return this.delegate.isClosed();
    }

    public boolean isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p2)
    {
        return this.delegate.isEnabled(p2);
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator setCodec(com.flurry.org.codehaus.jackson.ObjectCodec p2)
    {
        this.delegate.setCodec(p2);
        return this;
    }

    public void setSchema(com.flurry.org.codehaus.jackson.FormatSchema p2)
    {
        this.delegate.setSchema(p2);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator useDefaultPrettyPrinter()
    {
        this.delegate.useDefaultPrettyPrinter();
        return this;
    }

    public com.flurry.org.codehaus.jackson.Version version()
    {
        return this.delegate.version();
    }

    public void writeBinary(com.flurry.org.codehaus.jackson.Base64Variant p2, byte[] p3, int p4, int p5)
    {
        this.delegate.writeBinary(p2, p3, p4, p5);
        return;
    }

    public void writeBoolean(boolean p2)
    {
        this.delegate.writeBoolean(p2);
        return;
    }

    public void writeEndArray()
    {
        this.delegate.writeEndArray();
        return;
    }

    public void writeEndObject()
    {
        this.delegate.writeEndObject();
        return;
    }

    public void writeFieldName(com.flurry.org.codehaus.jackson.SerializableString p2)
    {
        this.delegate.writeFieldName(p2);
        return;
    }

    public void writeFieldName(com.flurry.org.codehaus.jackson.io.SerializedString p2)
    {
        this.delegate.writeFieldName(p2);
        return;
    }

    public void writeFieldName(String p2)
    {
        this.delegate.writeFieldName(p2);
        return;
    }

    public void writeNull()
    {
        this.delegate.writeNull();
        return;
    }

    public void writeNumber(double p2)
    {
        this.delegate.writeNumber(p2);
        return;
    }

    public void writeNumber(float p2)
    {
        this.delegate.writeNumber(p2);
        return;
    }

    public void writeNumber(int p2)
    {
        this.delegate.writeNumber(p2);
        return;
    }

    public void writeNumber(long p2)
    {
        this.delegate.writeNumber(p2);
        return;
    }

    public void writeNumber(String p2)
    {
        this.delegate.writeNumber(p2);
        return;
    }

    public void writeNumber(java.math.BigDecimal p2)
    {
        this.delegate.writeNumber(p2);
        return;
    }

    public void writeNumber(java.math.BigInteger p2)
    {
        this.delegate.writeNumber(p2);
        return;
    }

    public void writeObject(Object p2)
    {
        this.delegate.writeObject(p2);
        return;
    }

    public void writeRaw(char p2)
    {
        this.delegate.writeRaw(p2);
        return;
    }

    public void writeRaw(String p2)
    {
        this.delegate.writeRaw(p2);
        return;
    }

    public void writeRaw(String p2, int p3, int p4)
    {
        this.delegate.writeRaw(p2, p3, p4);
        return;
    }

    public void writeRaw(char[] p2, int p3, int p4)
    {
        this.delegate.writeRaw(p2, p3, p4);
        return;
    }

    public void writeRawUTF8String(byte[] p2, int p3, int p4)
    {
        this.delegate.writeRawUTF8String(p2, p3, p4);
        return;
    }

    public void writeRawValue(String p2)
    {
        this.delegate.writeRawValue(p2);
        return;
    }

    public void writeRawValue(String p2, int p3, int p4)
    {
        this.delegate.writeRawValue(p2, p3, p4);
        return;
    }

    public void writeRawValue(char[] p2, int p3, int p4)
    {
        this.delegate.writeRawValue(p2, p3, p4);
        return;
    }

    public void writeStartArray()
    {
        this.delegate.writeStartArray();
        return;
    }

    public void writeStartObject()
    {
        this.delegate.writeStartObject();
        return;
    }

    public void writeString(com.flurry.org.codehaus.jackson.SerializableString p2)
    {
        this.delegate.writeString(p2);
        return;
    }

    public void writeString(String p2)
    {
        this.delegate.writeString(p2);
        return;
    }

    public void writeString(char[] p2, int p3, int p4)
    {
        this.delegate.writeString(p2, p3, p4);
        return;
    }

    public void writeTree(com.flurry.org.codehaus.jackson.JsonNode p2)
    {
        this.delegate.writeTree(p2);
        return;
    }

    public void writeUTF8String(byte[] p2, int p3, int p4)
    {
        this.delegate.writeUTF8String(p2, p3, p4);
        return;
    }
}
