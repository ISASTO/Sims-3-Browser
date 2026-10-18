package com.flurry.org.codehaus.jackson.util;
public class TokenBuffer extends com.flurry.org.codehaus.jackson.JsonGenerator {
    protected static final int DEFAULT_PARSER_FEATURES;
    protected int _appendOffset;
    protected boolean _closed;
    protected com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment _first;
    protected int _generatorFeatures;
    protected com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment _last;
    protected com.flurry.org.codehaus.jackson.ObjectCodec _objectCodec;
    protected com.flurry.org.codehaus.jackson.impl.JsonWriteContext _writeContext;

    static TokenBuffer()
    {
        com.flurry.org.codehaus.jackson.util.TokenBuffer.DEFAULT_PARSER_FEATURES = com.flurry.org.codehaus.jackson.JsonParser$Feature.collectDefaults();
        return;
    }

    public TokenBuffer(com.flurry.org.codehaus.jackson.ObjectCodec p2)
    {
        this._objectCodec = p2;
        this._generatorFeatures = com.flurry.org.codehaus.jackson.util.TokenBuffer.DEFAULT_PARSER_FEATURES;
        this._writeContext = com.flurry.org.codehaus.jackson.impl.JsonWriteContext.createRootContext();
        int v0_4 = new com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment();
        this._last = v0_4;
        this._first = v0_4;
        this._appendOffset = 0;
        return;
    }

    protected final void _append(com.flurry.org.codehaus.jackson.JsonToken p4)
    {
        com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment v0 = this._last.append(this._appendOffset, p4);
        if (v0 != null) {
            this._last = v0;
            this._appendOffset = 1;
        } else {
            this._appendOffset = (this._appendOffset + 1);
        }
        return;
    }

    protected final void _append(com.flurry.org.codehaus.jackson.JsonToken p4, Object p5)
    {
        com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment v0 = this._last.append(this._appendOffset, p4, p5);
        if (v0 != null) {
            this._last = v0;
            this._appendOffset = 1;
        } else {
            this._appendOffset = (this._appendOffset + 1);
        }
        return;
    }

    protected void _reportUnsupportedOperation()
    {
        throw new UnsupportedOperationException("Called operation not supported for TokenBuffer");
    }

    public com.flurry.org.codehaus.jackson.JsonParser asParser()
    {
        return this.asParser(this._objectCodec);
    }

    public com.flurry.org.codehaus.jackson.JsonParser asParser(com.flurry.org.codehaus.jackson.JsonParser p4)
    {
        com.flurry.org.codehaus.jackson.util.TokenBuffer$Parser v0_1 = new com.flurry.org.codehaus.jackson.util.TokenBuffer$Parser(this._first, p4.getCodec());
        v0_1.setLocation(p4.getTokenLocation());
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.JsonParser asParser(com.flurry.org.codehaus.jackson.ObjectCodec p3)
    {
        return new com.flurry.org.codehaus.jackson.util.TokenBuffer$Parser(this._first, p3);
    }

    public void close()
    {
        this._closed = 1;
        return;
    }

    public void copyCurrentEvent(com.flurry.org.codehaus.jackson.JsonParser p4)
    {
        switch (com.flurry.org.codehaus.jackson.util.TokenBuffer$1.$SwitchMap$org$codehaus$jackson$JsonToken[p4.getCurrentToken().ordinal()]) {
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
                this.writeFieldName(p4.getCurrentName());
                break;
            case 6:
                if (!p4.hasTextCharacters()) {
                    this.writeString(p4.getText());
                } else {
                    this.writeString(p4.getTextCharacters(), p4.getTextOffset(), p4.getTextLength());
                }
                break;
            case 7:
                switch (com.flurry.org.codehaus.jackson.util.TokenBuffer$1.$SwitchMap$org$codehaus$jackson$JsonParser$NumberType[p4.getNumberType().ordinal()]) {
                    case 1:
                        this.writeNumber(p4.getIntValue());
                        break;
                    case 2:
                        this.writeNumber(p4.getBigIntegerValue());
                        break;
                    default:
                        this.writeNumber(p4.getLongValue());
                }
                break;
            case 8:
                switch (com.flurry.org.codehaus.jackson.util.TokenBuffer$1.$SwitchMap$org$codehaus$jackson$JsonParser$NumberType[p4.getNumberType().ordinal()]) {
                    case 3:
                        this.writeNumber(p4.getDecimalValue());
                        break;
                    case 4:
                        this.writeNumber(p4.getFloatValue());
                        break;
                    default:
                        this.writeNumber(p4.getDoubleValue());
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
                this.writeObject(p4.getEmbeddedObject());
                break;
            default:
                throw new RuntimeException("Internal error: should never end up through this code path");
        }
        return;
    }

    public void copyCurrentStructure(com.flurry.org.codehaus.jackson.JsonParser p4)
    {
        com.flurry.org.codehaus.jackson.JsonToken v0 = p4.getCurrentToken();
        if (v0 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
            this.writeFieldName(p4.getCurrentName());
            v0 = p4.nextToken();
        }
        switch (com.flurry.org.codehaus.jackson.util.TokenBuffer$1.$SwitchMap$org$codehaus$jackson$JsonToken[v0.ordinal()]) {
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

    public com.flurry.org.codehaus.jackson.JsonGenerator disable(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p3)
    {
        this._generatorFeatures = (this._generatorFeatures & (p3.getMask() ^ -1));
        return this;
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator enable(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p3)
    {
        this._generatorFeatures = (this._generatorFeatures | p3.getMask());
        return this;
    }

    public void flush()
    {
        return;
    }

    public com.flurry.org.codehaus.jackson.ObjectCodec getCodec()
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

    public boolean isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p3)
    {
        int v0_2;
        if ((this._generatorFeatures & p3.getMask()) == 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public void serialize(com.flurry.org.codehaus.jackson.JsonGenerator p9)
    {
        com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment v3 = this._first;
        int v2 = -1;
        while(true) {
            v2++;
            if (v2 < 16) {
                com.flurry.org.codehaus.jackson.JsonToken v4 = v3.type(v2);
                if (v4 != null) {
                    switch (com.flurry.org.codehaus.jackson.util.TokenBuffer$1.$SwitchMap$org$codehaus$jackson$JsonToken[v4.ordinal()]) {
                        case 1:
                            p9.writeStartObject();
                            break;
                        case 2:
                            p9.writeEndObject();
                            break;
                        case 3:
                            p9.writeStartArray();
                            break;
                        case 4:
                            p9.writeEndArray();
                            break;
                        case 5:
                            String v1_3 = v3.get(v2);
                            if (!(v1_3 instanceof com.flurry.org.codehaus.jackson.SerializableString)) {
                                p9.writeFieldName(((String) v1_3));
                            } else {
                                p9.writeFieldName(((com.flurry.org.codehaus.jackson.SerializableString) v1_3));
                            }
                            break;
                        case 6:
                            String v1_0 = v3.get(v2);
                            if (!(v1_0 instanceof com.flurry.org.codehaus.jackson.SerializableString)) {
                                p9.writeString(((String) v1_0));
                            } else {
                                p9.writeString(((com.flurry.org.codehaus.jackson.SerializableString) v1_0));
                            }
                            break;
                        case 7:
                            String v0_6 = ((Number) v3.get(v2));
                            if (!(v0_6 instanceof java.math.BigInteger)) {
                                if (!(v0_6 instanceof Long)) {
                                    p9.writeNumber(v0_6.intValue());
                                } else {
                                    p9.writeNumber(v0_6.longValue());
                                }
                            } else {
                                p9.writeNumber(((java.math.BigInteger) v0_6));
                            }
                            break;
                        case 8:
                            String v0_0 = v3.get(v2);
                            if (!(v0_0 instanceof java.math.BigDecimal)) {
                                if (!(v0_0 instanceof Float)) {
                                    if (!(v0_0 instanceof Double)) {
                                        if (v0_0 != null) {
                                            if (!(v0_0 instanceof String)) {
                                                break;
                                            }
                                            p9.writeNumber(((String) v0_0));
                                        } else {
                                            p9.writeNull();
                                        }
                                    } else {
                                        p9.writeNumber(((Double) v0_0).doubleValue());
                                    }
                                } else {
                                    p9.writeNumber(((Float) v0_0).floatValue());
                                }
                            } else {
                                p9.writeNumber(((java.math.BigDecimal) v0_0));
                            }
                            break;
                        case 9:
                            p9.writeBoolean(1);
                            break;
                        case 10:
                            p9.writeBoolean(0);
                            break;
                        case 11:
                            p9.writeNull();
                            break;
                        case 12:
                            p9.writeObject(v3.get(v2));
                            break;
                        default:
                            throw new RuntimeException("Internal error: should never end up through this code path");
                    }
                }
            } else {
                v2 = 0;
                v3 = v3.next();
                if (v3 != null) {
                }
            }
            return;
        }
        throw new com.flurry.org.codehaus.jackson.JsonGenerationException(new StringBuilder().append("Unrecognized value type for VALUE_NUMBER_FLOAT: ").append(v0_0.getClass().getName()).append(", can not serialize").toString());
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator setCodec(com.flurry.org.codehaus.jackson.ObjectCodec p1)
    {
        this._objectCodec = p1;
        return this;
    }

    public String toString()
    {
        StringBuilder v4_1 = new StringBuilder();
        v4_1.append("[TokenBuffer: ");
        com.flurry.org.codehaus.jackson.JsonParser v3 = this.asParser();
        int v1 = 0;
        try {
            while(true) {
                com.flurry.org.codehaus.jackson.JsonToken v5 = v3.nextToken();
                v1++;
            }
            if (v1 >= 100) {
                v4_1.append(" ... (truncated ").append((v1 - 100)).append(" entries)");
            }
            v4_1.append(93);
            return v4_1.toString();
        } catch (java.io.IOException v2) {
            throw new IllegalStateException(v2);
        }
        if (v5 != null) {
            if (v1 < 100) {
                if (v1 > 0) {
                    v4_1.append(", ");
                }
                v4_1.append(v5.toString());
            }
        }
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator useDefaultPrettyPrinter()
    {
        return this;
    }

    public void writeBinary(com.flurry.org.codehaus.jackson.Base64Variant p3, byte[] p4, int p5, int p6)
    {
        byte[] v0 = new byte[p6];
        System.arraycopy(p4, p5, v0, 0, p6);
        this.writeObject(v0);
        return;
    }

    public void writeBoolean(boolean p2)
    {
        com.flurry.org.codehaus.jackson.JsonToken v0;
        if (!p2) {
            v0 = com.flurry.org.codehaus.jackson.JsonToken.VALUE_FALSE;
        } else {
            v0 = com.flurry.org.codehaus.jackson.JsonToken.VALUE_TRUE;
        }
        this._append(v0);
        return;
    }

    public final void writeEndArray()
    {
        this._append(com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY);
        com.flurry.org.codehaus.jackson.impl.JsonWriteContext v0 = this._writeContext.getParent();
        if (v0 != null) {
            this._writeContext = v0;
        }
        return;
    }

    public final void writeEndObject()
    {
        this._append(com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT);
        com.flurry.org.codehaus.jackson.impl.JsonWriteContext v0 = this._writeContext.getParent();
        if (v0 != null) {
            this._writeContext = v0;
        }
        return;
    }

    public void writeFieldName(com.flurry.org.codehaus.jackson.SerializableString p3)
    {
        this._append(com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME, p3);
        this._writeContext.writeFieldName(p3.getValue());
        return;
    }

    public void writeFieldName(com.flurry.org.codehaus.jackson.io.SerializedString p3)
    {
        this._append(com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME, p3);
        this._writeContext.writeFieldName(p3.getValue());
        return;
    }

    public final void writeFieldName(String p2)
    {
        this._append(com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME, p2);
        this._writeContext.writeFieldName(p2);
        return;
    }

    public void writeNull()
    {
        this._append(com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL);
        return;
    }

    public void writeNumber(double p3)
    {
        this._append(com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT, Double.valueOf(p3));
        return;
    }

    public void writeNumber(float p3)
    {
        this._append(com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT, Float.valueOf(p3));
        return;
    }

    public void writeNumber(int p3)
    {
        this._append(com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT, Integer.valueOf(p3));
        return;
    }

    public void writeNumber(long p3)
    {
        this._append(com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT, Long.valueOf(p3));
        return;
    }

    public void writeNumber(String p2)
    {
        this._append(com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT, p2);
        return;
    }

    public void writeNumber(java.math.BigDecimal p2)
    {
        if (p2 != null) {
            this._append(com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT, p2);
        } else {
            this.writeNull();
        }
        return;
    }

    public void writeNumber(java.math.BigInteger p2)
    {
        if (p2 != null) {
            this._append(com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT, p2);
        } else {
            this.writeNull();
        }
        return;
    }

    public void writeObject(Object p2)
    {
        this._append(com.flurry.org.codehaus.jackson.JsonToken.VALUE_EMBEDDED_OBJECT, p2);
        return;
    }

    public void writeRaw(char p1)
    {
        this._reportUnsupportedOperation();
        return;
    }

    public void writeRaw(String p1)
    {
        this._reportUnsupportedOperation();
        return;
    }

    public void writeRaw(String p1, int p2, int p3)
    {
        this._reportUnsupportedOperation();
        return;
    }

    public void writeRaw(char[] p1, int p2, int p3)
    {
        this._reportUnsupportedOperation();
        return;
    }

    public void writeRawUTF8String(byte[] p1, int p2, int p3)
    {
        this._reportUnsupportedOperation();
        return;
    }

    public void writeRawValue(String p1)
    {
        this._reportUnsupportedOperation();
        return;
    }

    public void writeRawValue(String p1, int p2, int p3)
    {
        this._reportUnsupportedOperation();
        return;
    }

    public void writeRawValue(char[] p1, int p2, int p3)
    {
        this._reportUnsupportedOperation();
        return;
    }

    public final void writeStartArray()
    {
        this._append(com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY);
        this._writeContext = this._writeContext.createChildArrayContext();
        return;
    }

    public final void writeStartObject()
    {
        this._append(com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT);
        this._writeContext = this._writeContext.createChildObjectContext();
        return;
    }

    public void writeString(com.flurry.org.codehaus.jackson.SerializableString p2)
    {
        if (p2 != null) {
            this._append(com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING, p2);
        } else {
            this.writeNull();
        }
        return;
    }

    public void writeString(String p2)
    {
        if (p2 != null) {
            this._append(com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING, p2);
        } else {
            this.writeNull();
        }
        return;
    }

    public void writeString(char[] p2, int p3, int p4)
    {
        this.writeString(new String(p2, p3, p4));
        return;
    }

    public void writeTree(com.flurry.org.codehaus.jackson.JsonNode p2)
    {
        this._append(com.flurry.org.codehaus.jackson.JsonToken.VALUE_EMBEDDED_OBJECT, p2);
        return;
    }

    public void writeUTF8String(byte[] p1, int p2, int p3)
    {
        this._reportUnsupportedOperation();
        return;
    }
}
