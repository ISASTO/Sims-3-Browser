package com.flurry.org.apache.avro.io;
public class ValidatingEncoder extends com.flurry.org.apache.avro.io.ParsingEncoder implements com.flurry.org.apache.avro.io.parsing.Parser$ActionHandler {
    protected com.flurry.org.apache.avro.io.Encoder out;
    protected final com.flurry.org.apache.avro.io.parsing.Parser parser;

    ValidatingEncoder(com.flurry.org.apache.avro.Schema p2, com.flurry.org.apache.avro.io.Encoder p3)
    {
        this(new com.flurry.org.apache.avro.io.parsing.ValidatingGrammarGenerator().generate(p2), p3);
        return;
    }

    ValidatingEncoder(com.flurry.org.apache.avro.io.parsing.Symbol p2, com.flurry.org.apache.avro.io.Encoder p3)
    {
        this.out = p3;
        this.parser = new com.flurry.org.apache.avro.io.parsing.Parser(p2, this);
        return;
    }

    public com.flurry.org.apache.avro.io.ValidatingEncoder configure(com.flurry.org.apache.avro.io.Encoder p2)
    {
        this.parser.reset();
        this.out = p2;
        return this;
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol doAction(com.flurry.org.apache.avro.io.parsing.Symbol p2, com.flurry.org.apache.avro.io.parsing.Symbol p3)
    {
        return 0;
    }

    public void flush()
    {
        this.out.flush();
        return;
    }

    public void setItemCount(long p2)
    {
        super.setItemCount(p2);
        this.out.setItemCount(p2);
        return;
    }

    public void startItem()
    {
        super.startItem();
        this.out.startItem();
        return;
    }

    public void writeArrayEnd()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_END);
        this.out.writeArrayEnd();
        this.pop();
        return;
    }

    public void writeArrayStart()
    {
        this.push();
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_START);
        this.out.writeArrayStart();
        return;
    }

    public void writeBoolean(boolean p3)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.BOOLEAN);
        this.out.writeBoolean(p3);
        return;
    }

    public void writeBytes(java.nio.ByteBuffer p3)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.BYTES);
        this.out.writeBytes(p3);
        return;
    }

    public void writeBytes(byte[] p3, int p4, int p5)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.BYTES);
        this.out.writeBytes(p3, p4, p5);
        return;
    }

    public void writeDouble(double p3)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.DOUBLE);
        this.out.writeDouble(p3);
        return;
    }

    public void writeEnum(int p5)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ENUM);
        com.flurry.org.apache.avro.io.parsing.Symbol$IntCheckAction v0_1 = ((com.flurry.org.apache.avro.io.parsing.Symbol$IntCheckAction) this.parser.popSymbol());
        if ((p5 >= 0) && (p5 < v0_1.size)) {
            this.out.writeEnum(p5);
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
            this.out.writeFixed(p5, p6, p7);
            return;
        } else {
            throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Incorrect length for fixed binary: expected ").append(v0_1.size).append(" but received ").append(p7).append(" bytes.").toString());
        }
    }

    public void writeFloat(float p3)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.FLOAT);
        this.out.writeFloat(p3);
        return;
    }

    public void writeIndex(int p4)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.UNION);
        this.parser.pushSymbol(((com.flurry.org.apache.avro.io.parsing.Symbol$Alternative) this.parser.popSymbol()).getSymbol(p4));
        this.out.writeIndex(p4);
        return;
    }

    public void writeInt(int p3)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.INT);
        this.out.writeInt(p3);
        return;
    }

    public void writeLong(long p3)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.LONG);
        this.out.writeLong(p3);
        return;
    }

    public void writeMapEnd()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.MAP_END);
        this.out.writeMapEnd();
        this.pop();
        return;
    }

    public void writeMapStart()
    {
        this.push();
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.MAP_START);
        this.out.writeMapStart();
        return;
    }

    public void writeNull()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.NULL);
        this.out.writeNull();
        return;
    }

    public void writeString(com.flurry.org.apache.avro.util.Utf8 p3)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.STRING);
        this.out.writeString(p3);
        return;
    }

    public void writeString(CharSequence p3)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.STRING);
        this.out.writeString(p3);
        return;
    }

    public void writeString(String p3)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.STRING);
        this.out.writeString(p3);
        return;
    }
}
