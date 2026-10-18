package com.flurry.org.apache.avro.io;
public class JsonEncoder extends com.flurry.org.apache.avro.io.ParsingEncoder implements com.flurry.org.apache.avro.io.parsing.Parser$ActionHandler {
    protected java.util.BitSet isEmpty;
    private com.flurry.org.codehaus.jackson.JsonGenerator out;
    final com.flurry.org.apache.avro.io.parsing.Parser parser;

    JsonEncoder(com.flurry.org.apache.avro.Schema p3, com.flurry.org.codehaus.jackson.JsonGenerator p4)
    {
        this.isEmpty = new java.util.BitSet();
        this.configure(p4);
        this.parser = new com.flurry.org.apache.avro.io.parsing.Parser(new com.flurry.org.apache.avro.io.parsing.JsonGrammarGenerator().generate(p3), this);
        return;
    }

    JsonEncoder(com.flurry.org.apache.avro.Schema p2, java.io.OutputStream p3)
    {
        this(p2, com.flurry.org.apache.avro.io.JsonEncoder.getJsonGenerator(p3));
        return;
    }

    private static com.flurry.org.codehaus.jackson.JsonGenerator getJsonGenerator(java.io.OutputStream p4)
    {
        if (p4 != null) {
            com.flurry.org.codehaus.jackson.JsonGenerator v0 = new com.flurry.org.codehaus.jackson.JsonFactory().createJsonGenerator(p4, com.flurry.org.codehaus.jackson.JsonEncoding.UTF8);
            com.flurry.org.codehaus.jackson.util.MinimalPrettyPrinter v1_1 = new com.flurry.org.codehaus.jackson.util.MinimalPrettyPrinter();
            v1_1.setRootValueSeparator(System.getProperty("line.separator"));
            v0.setPrettyPrinter(v1_1);
            return v0;
        } else {
            throw new NullPointerException("OutputStream cannot be null");
        }
    }

    private void writeByteArray(byte[] p4, int p5, int p6)
    {
        this.out.writeString(new String(p4, p5, p6, "ISO-8859-1"));
        return;
    }

    public com.flurry.org.apache.avro.io.JsonEncoder configure(com.flurry.org.codehaus.jackson.JsonGenerator p3)
    {
        if (p3 != null) {
            if (this.parser != null) {
                this.flush();
            }
            this.out = p3;
            return this;
        } else {
            throw new NullPointerException("JsonGenerator cannot be null");
        }
    }

    public com.flurry.org.apache.avro.io.JsonEncoder configure(java.io.OutputStream p2)
    {
        this.configure(com.flurry.org.apache.avro.io.JsonEncoder.getJsonGenerator(p2));
        return this;
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol doAction(com.flurry.org.apache.avro.io.parsing.Symbol p5, com.flurry.org.apache.avro.io.parsing.Symbol p6)
    {
        if (!(p6 instanceof com.flurry.org.apache.avro.io.parsing.Symbol$FieldAdjustAction)) {
            if (p6 != com.flurry.org.apache.avro.io.parsing.Symbol.RECORD_START) {
                if ((p6 != com.flurry.org.apache.avro.io.parsing.Symbol.RECORD_END) && (p6 != com.flurry.org.apache.avro.io.parsing.Symbol.UNION_END)) {
                    if (p6 != com.flurry.org.apache.avro.io.parsing.Symbol.FIELD_END) {
                        throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Unknown action symbol ").append(p6).toString());
                    }
                } else {
                    this.out.writeEndObject();
                }
            } else {
                this.out.writeStartObject();
            }
        } else {
            this.out.writeFieldName(((com.flurry.org.apache.avro.io.parsing.Symbol$FieldAdjustAction) p6).fname);
        }
        return 0;
    }

    public void flush()
    {
        this.parser.processImplicitActions();
        if (this.out != null) {
            this.out.flush();
        }
        return;
    }

    public void startItem()
    {
        if (!this.isEmpty.get(this.pos)) {
            this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ITEM_END);
        }
        super.startItem();
        this.isEmpty.clear(this.depth());
        return;
    }

    public void writeArrayEnd()
    {
        if (!this.isEmpty.get(this.pos)) {
            this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ITEM_END);
        }
        this.pop();
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_END);
        this.out.writeEndArray();
        return;
    }

    public void writeArrayStart()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_START);
        this.out.writeStartArray();
        this.push();
        this.isEmpty.set(this.depth());
        return;
    }

    public void writeBoolean(boolean p3)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.BOOLEAN);
        this.out.writeBoolean(p3);
        return;
    }

    public void writeBytes(java.nio.ByteBuffer p6)
    {
        if (!p6.hasArray()) {
            byte[] v0 = new byte[p6.remaining()];
            int v1 = 0;
            while (v1 < v0.length) {
                v0[v1] = p6.get();
                v1++;
            }
            this.writeBytes(v0);
        } else {
            this.writeBytes(p6.array(), p6.position(), p6.remaining());
        }
        return;
    }

    public void writeBytes(byte[] p3, int p4, int p5)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.BYTES);
        this.writeByteArray(p3, p4, p5);
        return;
    }

    public void writeDouble(double p3)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.DOUBLE);
        this.out.writeNumber(p3);
        return;
    }

    public void writeEnum(int p5)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ENUM);
        com.flurry.org.apache.avro.io.parsing.Symbol$EnumLabelsAction v0_1 = ((com.flurry.org.apache.avro.io.parsing.Symbol$EnumLabelsAction) this.parser.popSymbol());
        if ((p5 >= 0) && (p5 < v0_1.size)) {
            this.out.writeString(v0_1.getLabel(p5));
            return;
        } else {
            throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Enumeration out of range: max is ").append(v0_1.size).append(" but received ").append(p5).toString());
        }
    }

    public void writeFixed(byte[] p5, int p6, int p7)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.FIXED);
        com.flurry.org.apache.avro.io.parsing.Symbol$IntCheckAction v0_1 = ((com.flurry.org.apache.avro.io.parsing.Symbol$IntCheckAction) this.parser.popSymbol());
        if (p7 == v0_1.size) {
            this.writeByteArray(p5, p6, p7);
            return;
        } else {
            throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Incorrect length for fixed binary: expected ").append(v0_1.size).append(" but received ").append(p7).append(" bytes.").toString());
        }
    }

    public void writeFloat(float p3)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.FLOAT);
        this.out.writeNumber(p3);
        return;
    }

    public void writeIndex(int p5)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.UNION);
        com.flurry.org.apache.avro.io.parsing.Symbol$Alternative v1_1 = ((com.flurry.org.apache.avro.io.parsing.Symbol$Alternative) this.parser.popSymbol());
        com.flurry.org.apache.avro.io.parsing.Symbol v0 = v1_1.getSymbol(p5);
        if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol.NULL) {
            this.out.writeStartObject();
            this.out.writeFieldName(v1_1.getLabel(p5));
            this.parser.pushSymbol(com.flurry.org.apache.avro.io.parsing.Symbol.UNION_END);
        }
        this.parser.pushSymbol(v0);
        return;
    }

    public void writeInt(int p3)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.INT);
        this.out.writeNumber(p3);
        return;
    }

    public void writeLong(long p3)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.LONG);
        this.out.writeNumber(p3);
        return;
    }

    public void writeMapEnd()
    {
        if (!this.isEmpty.get(this.pos)) {
            this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ITEM_END);
        }
        this.pop();
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.MAP_END);
        this.out.writeEndObject();
        return;
    }

    public void writeMapStart()
    {
        this.push();
        this.isEmpty.set(this.depth());
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.MAP_START);
        this.out.writeStartObject();
        return;
    }

    public void writeNull()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.NULL);
        this.out.writeNull();
        return;
    }

    public void writeString(com.flurry.org.apache.avro.util.Utf8 p2)
    {
        this.writeString(p2.toString());
        return;
    }

    public void writeString(String p3)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.STRING);
        if (this.parser.topSymbol() != com.flurry.org.apache.avro.io.parsing.Symbol.MAP_KEY_MARKER) {
            this.out.writeString(p3);
        } else {
            this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.MAP_KEY_MARKER);
            this.out.writeFieldName(p3);
        }
        return;
    }
}
