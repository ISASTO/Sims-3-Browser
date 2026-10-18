package com.flurry.org.apache.avro.io;
public class JsonDecoder extends com.flurry.org.apache.avro.io.ParsingDecoder implements com.flurry.org.apache.avro.io.parsing.Parser$ActionHandler {
    static final String CHARSET = "ISO-8859-1";
    private static com.flurry.org.codehaus.jackson.JsonFactory jsonFactory;
    com.flurry.org.apache.avro.io.JsonDecoder$ReorderBuffer currentReorderBuffer;
    private com.flurry.org.codehaus.jackson.JsonParser in;
    java.util.Stack reorderBuffers;

    static JsonDecoder()
    {
        com.flurry.org.apache.avro.io.JsonDecoder.jsonFactory = new com.flurry.org.codehaus.jackson.JsonFactory();
        return;
    }

    JsonDecoder(com.flurry.org.apache.avro.Schema p2, java.io.InputStream p3)
    {
        this(com.flurry.org.apache.avro.io.JsonDecoder.getSymbol(p2), p3);
        return;
    }

    JsonDecoder(com.flurry.org.apache.avro.Schema p2, String p3)
    {
        this(com.flurry.org.apache.avro.io.JsonDecoder.getSymbol(p2), p3);
        return;
    }

    private JsonDecoder(com.flurry.org.apache.avro.io.parsing.Symbol p2, java.io.InputStream p3)
    {
        super(p2);
        super.reorderBuffers = new java.util.Stack();
        super.configure(p3);
        return;
    }

    private JsonDecoder(com.flurry.org.apache.avro.io.parsing.Symbol p2, String p3)
    {
        super(p2);
        super.reorderBuffers = new java.util.Stack();
        super.configure(p3);
        return;
    }

    private void advance(com.flurry.org.apache.avro.io.parsing.Symbol p3)
    {
        this.parser.processTrailingImplicitActions();
        if ((this.in.getCurrentToken() != null) || (this.parser.depth() != 1)) {
            this.parser.advance(p3);
            return;
        } else {
            throw new java.io.EOFException();
        }
    }

    private void checkFixed(int p5)
    {
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.FIXED);
        com.flurry.org.apache.avro.io.parsing.Symbol$IntCheckAction v0_1 = ((com.flurry.org.apache.avro.io.parsing.Symbol$IntCheckAction) this.parser.popSymbol());
        if (p5 == v0_1.size) {
            return;
        } else {
            throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Incorrect length for fixed binary: expected ").append(v0_1.size).append(" but received ").append(p5).append(" bytes.").toString());
        }
    }

    private long doArrayNext()
    {
        long v0_1;
        if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
            v0_1 = 1;
        } else {
            this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_END);
            this.in.nextToken();
            v0_1 = 0;
        }
        return v0_1;
    }

    private long doMapNext()
    {
        long v0_1;
        if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT) {
            v0_1 = 1;
        } else {
            this.in.nextToken();
            this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.MAP_END);
            v0_1 = 0;
        }
        return v0_1;
    }

    private void doSkipFixed(int p5)
    {
        if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
            throw this.error("fixed");
        } else {
            byte[] v0 = this.readByteArray();
            this.in.nextToken();
            if (v0.length == p5) {
                return;
            } else {
                throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Expected fixed length ").append(p5).append(", but got").append(v0.length).toString());
            }
        }
    }

    private com.flurry.org.apache.avro.AvroTypeException error(String p4)
    {
        return new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Expected ").append(p4).append(". Got ").append(this.in.getCurrentToken()).toString());
    }

    private static com.flurry.org.apache.avro.io.parsing.Symbol getSymbol(com.flurry.org.apache.avro.Schema p2)
    {
        if (p2 != null) {
            return new com.flurry.org.apache.avro.io.parsing.JsonGrammarGenerator().generate(p2);
        } else {
            throw new NullPointerException("Schema cannot be null!");
        }
    }

    private static java.util.List getVaueAsTree(com.flurry.org.codehaus.jackson.JsonParser p5)
    {
        int v0 = 0;
        java.util.ArrayList v1_1 = new java.util.ArrayList();
        do {
            com.flurry.org.codehaus.jackson.JsonToken v2 = p5.getCurrentToken();
            switch (com.flurry.org.apache.avro.io.JsonDecoder$2.$SwitchMap$org$codehaus$jackson$JsonToken[v2.ordinal()]) {
                case 1:
                case 2:
                    v0++;
                    v1_1.add(new com.flurry.org.apache.avro.io.JsonDecoder$JsonElement(v2));
                    break;
                case 3:
                case 4:
                    v0--;
                    v1_1.add(new com.flurry.org.apache.avro.io.JsonDecoder$JsonElement(v2));
                    break;
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                    v1_1.add(new com.flurry.org.apache.avro.io.JsonDecoder$JsonElement(v2, p5.getText()));
                    break;
            }
            p5.nextToken();
        } while(v0 != 0);
        v1_1.add(new com.flurry.org.apache.avro.io.JsonDecoder$JsonElement(0));
        return v1_1;
    }

    private com.flurry.org.codehaus.jackson.JsonParser makeParser(java.util.List p2)
    {
        return new com.flurry.org.apache.avro.io.JsonDecoder$1(this, p2);
    }

    private byte[] readByteArray()
    {
        return this.in.getText().getBytes("ISO-8859-1");
    }

    public long arrayNext()
    {
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ITEM_END);
        return this.doArrayNext();
    }

    public com.flurry.org.apache.avro.io.JsonDecoder configure(java.io.InputStream p3)
    {
        if (p3 != null) {
            this.parser.reset();
            this.in = com.flurry.org.apache.avro.io.JsonDecoder.jsonFactory.createJsonParser(p3);
            this.in.nextToken();
            return this;
        } else {
            throw new NullPointerException("InputStream to read from cannot be null!");
        }
    }

    public com.flurry.org.apache.avro.io.JsonDecoder configure(String p3)
    {
        if (p3 != null) {
            this.parser.reset();
            this.in = new com.flurry.org.codehaus.jackson.JsonFactory().createJsonParser(p3);
            this.in.nextToken();
            return this;
        } else {
            throw new NullPointerException("String to read from cannot be null!");
        }
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol doAction(com.flurry.org.apache.avro.io.parsing.Symbol p8, com.flurry.org.apache.avro.io.parsing.Symbol p9)
    {
        if (!(p9 instanceof com.flurry.org.apache.avro.io.parsing.Symbol$FieldAdjustAction)) {
            if (p9 != com.flurry.org.apache.avro.io.parsing.Symbol.FIELD_END) {
                if (p9 != com.flurry.org.apache.avro.io.parsing.Symbol.RECORD_START) {
                    if ((p9 != com.flurry.org.apache.avro.io.parsing.Symbol.RECORD_END) && (p9 != com.flurry.org.apache.avro.io.parsing.Symbol.UNION_END)) {
                        throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Unknown action symbol ").append(p9).toString());
                    } else {
                        if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT) {
                            com.flurry.org.apache.avro.AvroTypeException v4_25;
                            if (p9 != com.flurry.org.apache.avro.io.parsing.Symbol.RECORD_END) {
                                v4_25 = "union-end";
                            } else {
                                v4_25 = "record-end";
                            }
                            throw this.error(v4_25);
                        } else {
                            this.in.nextToken();
                            if (p9 == com.flurry.org.apache.avro.io.parsing.Symbol.RECORD_END) {
                                if ((this.currentReorderBuffer == null) || (this.currentReorderBuffer.savedFields.isEmpty())) {
                                    this.currentReorderBuffer = ((com.flurry.org.apache.avro.io.JsonDecoder$ReorderBuffer) this.reorderBuffers.pop());
                                } else {
                                    throw this.error(new StringBuilder().append("Unknown fields: ").append(this.currentReorderBuffer.savedFields.keySet()).toString());
                                }
                            }
                        }
                    }
                } else {
                    if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
                        throw this.error("record-start");
                    } else {
                        this.in.nextToken();
                        this.reorderBuffers.push(this.currentReorderBuffer);
                        this.currentReorderBuffer = 0;
                    }
                }
            } else {
                if ((this.currentReorderBuffer != null) && (this.currentReorderBuffer.origParser != null)) {
                    this.in = this.currentReorderBuffer.origParser;
                    this.currentReorderBuffer.origParser = 0;
                }
            }
        } else {
            String v2 = ((com.flurry.org.apache.avro.io.parsing.Symbol$FieldAdjustAction) p9).fname;
            if (this.currentReorderBuffer != null) {
                java.util.List v3_1 = ((java.util.List) this.currentReorderBuffer.savedFields.get(v2));
                if (v3_1 != null) {
                    this.currentReorderBuffer.savedFields.remove(v2);
                    this.currentReorderBuffer.origParser = this.in;
                    this.in = this.makeParser(v3_1);
                    return 0;
                }
            }
            if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
                return 0;
            }
            do {
                String v1 = this.in.getText();
                this.in.nextToken();
                if (!v2.equals(v1)) {
                    if (this.currentReorderBuffer == null) {
                        this.currentReorderBuffer = new com.flurry.org.apache.avro.io.JsonDecoder$ReorderBuffer(0);
                    }
                    this.currentReorderBuffer.savedFields.put(v1, com.flurry.org.apache.avro.io.JsonDecoder.getVaueAsTree(this.in));
                }
            } while(this.in.getCurrentToken() == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME);
            throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Expected field name not found: ").append(((com.flurry.org.apache.avro.io.parsing.Symbol$FieldAdjustAction) p9).fname).toString());
        }
        return 0;
    }

    public long mapNext()
    {
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ITEM_END);
        return this.doMapNext();
    }

    public long readArrayStart()
    {
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_START);
        if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY) {
            throw this.error("array-start");
        } else {
            this.in.nextToken();
            return this.doArrayNext();
        }
    }

    public boolean readBoolean()
    {
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.BOOLEAN);
        com.flurry.org.codehaus.jackson.JsonToken v0 = this.in.getCurrentToken();
        if ((v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_TRUE) && (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_FALSE)) {
            throw this.error("boolean");
        } else {
            int v1_4;
            this.in.nextToken();
            if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_TRUE) {
                v1_4 = 0;
            } else {
                v1_4 = 1;
            }
            return v1_4;
        }
    }

    public java.nio.ByteBuffer readBytes(java.nio.ByteBuffer p4)
    {
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.BYTES);
        if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
            throw this.error("bytes");
        } else {
            byte[] v0 = this.readByteArray();
            this.in.nextToken();
            return java.nio.ByteBuffer.wrap(v0);
        }
    }

    public double readDouble()
    {
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.DOUBLE);
        if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT) {
            throw this.error("double");
        } else {
            double v0 = this.in.getDoubleValue();
            this.in.nextToken();
            return v0;
        }
    }

    public int readEnum()
    {
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ENUM);
        com.flurry.org.apache.avro.io.parsing.Symbol$EnumLabelsAction v1_1 = ((com.flurry.org.apache.avro.io.parsing.Symbol$EnumLabelsAction) this.parser.popSymbol());
        if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
            throw this.error("fixed");
        } else {
            this.in.getText();
            int v0 = v1_1.findLabel(this.in.getText());
            if (v0 < 0) {
                throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Unknown symbol in enum ").append(this.in.getText()).toString());
            } else {
                this.in.nextToken();
                return v0;
            }
        }
    }

    public void readFixed(byte[] p5, int p6, int p7)
    {
        this.checkFixed(p7);
        if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
            throw this.error("fixed");
        } else {
            byte[] v0 = this.readByteArray();
            this.in.nextToken();
            if (v0.length == p7) {
                System.arraycopy(v0, 0, p5, p6, p7);
                return;
            } else {
                throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Expected fixed length ").append(p7).append(", but got").append(v0.length).toString());
            }
        }
    }

    public float readFloat()
    {
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.FLOAT);
        if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT) {
            throw this.error("float");
        } else {
            float v0 = this.in.getFloatValue();
            this.in.nextToken();
            return v0;
        }
    }

    public int readIndex()
    {
        String v1;
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.UNION);
        com.flurry.org.apache.avro.io.parsing.Symbol$Alternative v0_1 = ((com.flurry.org.apache.avro.io.parsing.Symbol$Alternative) this.parser.popSymbol());
        if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
            if ((this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) || (this.in.nextToken() != com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME)) {
                throw this.error("start-union");
            } else {
                v1 = this.in.getText();
                this.in.nextToken();
                this.parser.pushSymbol(com.flurry.org.apache.avro.io.parsing.Symbol.UNION_END);
            }
        } else {
            v1 = "null";
        }
        int v2 = v0_1.findLabel(v1);
        if (v2 >= 0) {
            this.parser.pushSymbol(v0_1.getSymbol(v2));
            return v2;
        } else {
            throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Unknown union branch ").append(v1).toString());
        }
    }

    public int readInt()
    {
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.INT);
        if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
            throw this.error("int");
        } else {
            int v0 = this.in.getIntValue();
            this.in.nextToken();
            return v0;
        }
    }

    public long readLong()
    {
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.LONG);
        if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
            throw this.error("long");
        } else {
            long v0 = this.in.getLongValue();
            this.in.nextToken();
            return v0;
        }
    }

    public long readMapStart()
    {
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.MAP_START);
        if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
            throw this.error("map-start");
        } else {
            this.in.nextToken();
            return this.doMapNext();
        }
    }

    public void readNull()
    {
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.NULL);
        if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
            throw this.error("null");
        } else {
            this.in.nextToken();
            return;
        }
    }

    public com.flurry.org.apache.avro.util.Utf8 readString(com.flurry.org.apache.avro.util.Utf8 p3)
    {
        return new com.flurry.org.apache.avro.util.Utf8(this.readString());
    }

    public String readString()
    {
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.STRING);
        if (this.parser.topSymbol() != com.flurry.org.apache.avro.io.parsing.Symbol.MAP_KEY_MARKER) {
            if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                throw this.error("string");
            }
        } else {
            this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.MAP_KEY_MARKER);
            if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
                throw this.error("map-key");
            }
        }
        String v0 = this.in.getText();
        this.in.nextToken();
        return v0;
    }

    public long skipArray()
    {
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_START);
        if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY) {
            throw this.error("array-start");
        } else {
            this.in.skipChildren();
            this.in.nextToken();
            this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_END);
            return 0;
        }
    }

    public void skipBytes()
    {
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.BYTES);
        if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
            throw this.error("bytes");
        } else {
            this.in.nextToken();
            return;
        }
    }

    protected void skipFixed()
    {
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.FIXED);
        this.doSkipFixed(((com.flurry.org.apache.avro.io.parsing.Symbol$IntCheckAction) this.parser.popSymbol()).size);
        return;
    }

    public void skipFixed(int p1)
    {
        this.checkFixed(p1);
        this.doSkipFixed(p1);
        return;
    }

    public long skipMap()
    {
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.MAP_START);
        if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
            throw this.error("map-start");
        } else {
            this.in.skipChildren();
            this.in.nextToken();
            this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.MAP_END);
            return 0;
        }
    }

    public void skipString()
    {
        this.advance(com.flurry.org.apache.avro.io.parsing.Symbol.STRING);
        if (this.parser.topSymbol() != com.flurry.org.apache.avro.io.parsing.Symbol.MAP_KEY_MARKER) {
            if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                throw this.error("string");
            }
        } else {
            this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.MAP_KEY_MARKER);
            if (this.in.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
                throw this.error("map-key");
            }
        }
        this.in.nextToken();
        return;
    }
}
