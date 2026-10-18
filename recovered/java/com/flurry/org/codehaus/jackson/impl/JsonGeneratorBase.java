package com.flurry.org.codehaus.jackson.impl;
public abstract class JsonGeneratorBase extends com.flurry.org.codehaus.jackson.JsonGenerator {
    protected boolean _cfgNumbersAsStrings;
    protected boolean _closed;
    protected int _features;
    protected com.flurry.org.codehaus.jackson.ObjectCodec _objectCodec;
    protected com.flurry.org.codehaus.jackson.impl.JsonWriteContext _writeContext;

    protected JsonGeneratorBase(int p2, com.flurry.org.codehaus.jackson.ObjectCodec p3)
    {
        this._features = p2;
        this._writeContext = com.flurry.org.codehaus.jackson.impl.JsonWriteContext.createRootContext();
        this._objectCodec = p3;
        this._cfgNumbersAsStrings = this.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.WRITE_NUMBERS_AS_STRINGS);
        return;
    }

    protected void _cantHappen()
    {
        throw new RuntimeException("Internal error: should never end up through this code path");
    }

    protected abstract void _releaseBuffers();

    protected void _reportError(String p2)
    {
        throw new com.flurry.org.codehaus.jackson.JsonGenerationException(p2);
    }

    protected void _reportUnsupportedOperation()
    {
        throw new UnsupportedOperationException(new StringBuilder().append("Operation not supported by generator of type ").append(this.getClass().getName()).toString());
    }

    protected final void _throwInternal()
    {
        throw new RuntimeException("Internal error: this code path should never get executed");
    }

    protected abstract void _verifyValueWrite(String p0);

    protected void _writeEndArray()
    {
        return;
    }

    protected void _writeEndObject()
    {
        return;
    }

    protected void _writeSimpleObject(Object p5)
    {
        if (p5 != null) {
            if (!(p5 instanceof String)) {
                if (!(p5 instanceof Number)) {
                    if (!(p5 instanceof byte[])) {
                        if (!(p5 instanceof Boolean)) {
                            if ((p5 instanceof java.util.concurrent.atomic.AtomicBoolean)) {
                                this.writeBoolean(((java.util.concurrent.atomic.AtomicBoolean) p5).get());
                                return;
                            }
                        } else {
                            this.writeBoolean(((Boolean) p5).booleanValue());
                            return;
                        }
                    } else {
                        this.writeBinary(((byte[]) ((byte[]) p5)));
                        return;
                    }
                } else {
                    if (!(((Number) p5) instanceof Integer)) {
                        if (!(((Number) p5) instanceof Long)) {
                            if (!(((Number) p5) instanceof Double)) {
                                if (!(((Number) p5) instanceof Float)) {
                                    if (!(((Number) p5) instanceof Short)) {
                                        if (!(((Number) p5) instanceof Byte)) {
                                            if (!(((Number) p5) instanceof java.math.BigInteger)) {
                                                if (!(((Number) p5) instanceof java.math.BigDecimal)) {
                                                    if (!(((Number) p5) instanceof java.util.concurrent.atomic.AtomicInteger)) {
                                                        if ((((Number) p5) instanceof java.util.concurrent.atomic.AtomicLong)) {
                                                            this.writeNumber(((java.util.concurrent.atomic.AtomicLong) ((Number) p5)).get());
                                                            return;
                                                        }
                                                    } else {
                                                        this.writeNumber(((java.util.concurrent.atomic.AtomicInteger) ((Number) p5)).get());
                                                        return;
                                                    }
                                                } else {
                                                    this.writeNumber(((java.math.BigDecimal) ((Number) p5)));
                                                    return;
                                                }
                                            } else {
                                                this.writeNumber(((java.math.BigInteger) ((Number) p5)));
                                                return;
                                            }
                                        } else {
                                            this.writeNumber(((Number) p5).byteValue());
                                            return;
                                        }
                                    } else {
                                        this.writeNumber(((Number) p5).shortValue());
                                        return;
                                    }
                                } else {
                                    this.writeNumber(((Number) p5).floatValue());
                                    return;
                                }
                            } else {
                                this.writeNumber(((Number) p5).doubleValue());
                                return;
                            }
                        } else {
                            this.writeNumber(((Number) p5).longValue());
                            return;
                        }
                    } else {
                        this.writeNumber(((Number) p5).intValue());
                        return;
                    }
                }
                throw new IllegalStateException(new StringBuilder().append("No ObjectCodec defined for the generator, can only serialize simple wrapper types (type passed ").append(p5.getClass().getName()).append(")").toString());
            } else {
                this.writeString(((String) p5));
            }
        } else {
            this.writeNull();
        }
        return;
    }

    protected void _writeStartArray()
    {
        return;
    }

    protected void _writeStartObject()
    {
        return;
    }

    public void close()
    {
        this._closed = 1;
        return;
    }

    public final void copyCurrentEvent(com.flurry.org.codehaus.jackson.JsonParser p5)
    {
        com.flurry.org.codehaus.jackson.JsonToken v0 = p5.getCurrentToken();
        if (v0 == null) {
            this._reportError("No current event to copy");
        }
        switch (com.flurry.org.codehaus.jackson.impl.JsonGeneratorBase$1.$SwitchMap$org$codehaus$jackson$JsonToken[v0.ordinal()]) {
            case 1:
                this.writeStartObject();
                break;
            case 2:
                this.writeEndObject();
                break;
            case 3:
                this.writeStartArray();
                break;
            case 4:
                this.writeEndArray();
                break;
            case 5:
                this.writeFieldName(p5.getCurrentName());
                break;
            case 6:
                if (!p5.hasTextCharacters()) {
                    this.writeString(p5.getText());
                } else {
                    this.writeString(p5.getTextCharacters(), p5.getTextOffset(), p5.getTextLength());
                }
                break;
            case 7:
                switch (com.flurry.org.codehaus.jackson.impl.JsonGeneratorBase$1.$SwitchMap$org$codehaus$jackson$JsonParser$NumberType[p5.getNumberType().ordinal()]) {
                    case 1:
                        this.writeNumber(p5.getIntValue());
                        break;
                    case 2:
                        this.writeNumber(p5.getBigIntegerValue());
                        break;
                    default:
                        this.writeNumber(p5.getLongValue());
                }
                break;
            case 8:
                switch (com.flurry.org.codehaus.jackson.impl.JsonGeneratorBase$1.$SwitchMap$org$codehaus$jackson$JsonParser$NumberType[p5.getNumberType().ordinal()]) {
                    case 3:
                        this.writeNumber(p5.getDecimalValue());
                        break;
                    case 4:
                        this.writeNumber(p5.getFloatValue());
                        break;
                    default:
                        this.writeNumber(p5.getDoubleValue());
                }
                break;
            case 9:
                this.writeBoolean(1);
                break;
            case 10:
                this.writeBoolean(0);
                break;
            case 11:
                this.writeNull();
                break;
            case 12:
                this.writeObject(p5.getEmbeddedObject());
                break;
            default:
                this._cantHappen();
        }
        return;
    }

    public final void copyCurrentStructure(com.flurry.org.codehaus.jackson.JsonParser p4)
    {
        com.flurry.org.codehaus.jackson.JsonToken v0 = p4.getCurrentToken();
        if (v0 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
            this.writeFieldName(p4.getCurrentName());
            v0 = p4.nextToken();
        }
        switch (com.flurry.org.codehaus.jackson.impl.JsonGeneratorBase$1.$SwitchMap$org$codehaus$jackson$JsonToken[v0.ordinal()]) {
            case 1:
                this.writeStartObject();
                while (p4.nextToken() != com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT) {
                    this.copyCurrentStructure(p4);
                }
                this.writeEndObject();
                break;
            case 2:
            default:
                this.copyCurrentEvent(p4);
                break;
            case 3:
                this.writeStartArray();
                while (p4.nextToken() != com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
                    this.copyCurrentStructure(p4);
                }
                this.writeEndArray();
                break;
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator disable(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p4)
    {
        this._features = (this._features & (p4.getMask() ^ -1));
        if (p4 != com.flurry.org.codehaus.jackson.JsonGenerator$Feature.WRITE_NUMBERS_AS_STRINGS) {
            if (p4 == com.flurry.org.codehaus.jackson.JsonGenerator$Feature.ESCAPE_NON_ASCII) {
                this.setHighestNonEscapedChar(0);
            }
        } else {
            this._cfgNumbersAsStrings = 0;
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator enable(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p3)
    {
        this._features = (this._features | p3.getMask());
        if (p3 != com.flurry.org.codehaus.jackson.JsonGenerator$Feature.WRITE_NUMBERS_AS_STRINGS) {
            if (p3 == com.flurry.org.codehaus.jackson.JsonGenerator$Feature.ESCAPE_NON_ASCII) {
                this.setHighestNonEscapedChar(127);
            }
        } else {
            this._cfgNumbersAsStrings = 1;
        }
        return this;
    }

    public abstract void flush();

    public final com.flurry.org.codehaus.jackson.ObjectCodec getCodec()
    {
        return this._objectCodec;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.JsonStreamContext getOutputContext()
    {
        return this.getOutputContext();
    }

    public final com.flurry.org.codehaus.jackson.impl.JsonWriteContext getOutputContext()
    {
        return this._writeContext;
    }

    public boolean isClosed()
    {
        return this._closed;
    }

    public final boolean isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p3)
    {
        int v0_2;
        if ((this._features & p3.getMask()) == 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator setCodec(com.flurry.org.codehaus.jackson.ObjectCodec p1)
    {
        this._objectCodec = p1;
        return this;
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator useDefaultPrettyPrinter()
    {
        return this.setPrettyPrinter(new com.flurry.org.codehaus.jackson.util.DefaultPrettyPrinter());
    }

    public com.flurry.org.codehaus.jackson.Version version()
    {
        return com.flurry.org.codehaus.jackson.util.VersionUtil.versionFor(this.getClass());
    }

    public void writeEndArray()
    {
        if (!this._writeContext.inArray()) {
            this._reportError(new StringBuilder().append("Current context not an ARRAY but ").append(this._writeContext.getTypeDesc()).toString());
        }
        if (this._cfgPrettyPrinter == null) {
            this._writeEndArray();
        } else {
            this._cfgPrettyPrinter.writeEndArray(this, this._writeContext.getEntryCount());
        }
        this._writeContext = this._writeContext.getParent();
        return;
    }

    public void writeEndObject()
    {
        if (!this._writeContext.inObject()) {
            this._reportError(new StringBuilder().append("Current context not an object but ").append(this._writeContext.getTypeDesc()).toString());
        }
        this._writeContext = this._writeContext.getParent();
        if (this._cfgPrettyPrinter == null) {
            this._writeEndObject();
        } else {
            this._cfgPrettyPrinter.writeEndObject(this, this._writeContext.getEntryCount());
        }
        return;
    }

    public void writeObject(Object p2)
    {
        if (p2 != null) {
            if (this._objectCodec == null) {
                this._writeSimpleObject(p2);
            } else {
                this._objectCodec.writeValue(this, p2);
            }
        } else {
            this.writeNull();
        }
        return;
    }

    public void writeRawValue(String p2)
    {
        this._verifyValueWrite("write raw value");
        this.writeRaw(p2);
        return;
    }

    public void writeRawValue(String p2, int p3, int p4)
    {
        this._verifyValueWrite("write raw value");
        this.writeRaw(p2, p3, p4);
        return;
    }

    public void writeRawValue(char[] p2, int p3, int p4)
    {
        this._verifyValueWrite("write raw value");
        this.writeRaw(p2, p3, p4);
        return;
    }

    public void writeStartArray()
    {
        this._verifyValueWrite("start an array");
        this._writeContext = this._writeContext.createChildArrayContext();
        if (this._cfgPrettyPrinter == null) {
            this._writeStartArray();
        } else {
            this._cfgPrettyPrinter.writeStartArray(this);
        }
        return;
    }

    public void writeStartObject()
    {
        this._verifyValueWrite("start an object");
        this._writeContext = this._writeContext.createChildObjectContext();
        if (this._cfgPrettyPrinter == null) {
            this._writeStartObject();
        } else {
            this._cfgPrettyPrinter.writeStartObject(this);
        }
        return;
    }

    public void writeTree(com.flurry.org.codehaus.jackson.JsonNode p3)
    {
        if (p3 != null) {
            if (this._objectCodec != null) {
                this._objectCodec.writeTree(this, p3);
            } else {
                throw new IllegalStateException("No ObjectCodec defined for the generator, can not serialize JsonNode-based trees");
            }
        } else {
            this.writeNull();
        }
        return;
    }
}
