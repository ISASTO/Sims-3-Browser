package com.flurry.org.apache.avro.io;
public class ValidatingDecoder extends com.flurry.org.apache.avro.io.ParsingDecoder implements com.flurry.org.apache.avro.io.parsing.Parser$ActionHandler {
    protected com.flurry.org.apache.avro.io.Decoder in;

    ValidatingDecoder(com.flurry.org.apache.avro.Schema p2, com.flurry.org.apache.avro.io.Decoder p3)
    {
        this(com.flurry.org.apache.avro.io.ValidatingDecoder.getSymbol(p2), p3);
        return;
    }

    ValidatingDecoder(com.flurry.org.apache.avro.io.parsing.Symbol p1, com.flurry.org.apache.avro.io.Decoder p2)
    {
        super(p1);
        super.configure(p2);
        return;
    }

    private void checkFixed(int p5)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.FIXED);
        com.flurry.org.apache.avro.io.parsing.Symbol$IntCheckAction v0_1 = ((com.flurry.org.apache.avro.io.parsing.Symbol$IntCheckAction) this.parser.popSymbol());
        if (p5 == v0_1.size) {
            return;
        } else {
            throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Incorrect length for fixed binary: expected ").append(v0_1.size).append(" but received ").append(p5).append(" bytes.").toString());
        }
    }

    private static com.flurry.org.apache.avro.io.parsing.Symbol getSymbol(com.flurry.org.apache.avro.Schema p2)
    {
        if (p2 != null) {
            return new com.flurry.org.apache.avro.io.parsing.ValidatingGrammarGenerator().generate(p2);
        } else {
            throw new NullPointerException("Schema cannot be null");
        }
    }

    public long arrayNext()
    {
        this.parser.processTrailingImplicitActions();
        long v0 = this.in.arrayNext();
        if (v0 == 0) {
            this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_END);
        }
        return v0;
    }

    public com.flurry.org.apache.avro.io.ValidatingDecoder configure(com.flurry.org.apache.avro.io.Decoder p2)
    {
        this.parser.reset();
        this.in = p2;
        return this;
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol doAction(com.flurry.org.apache.avro.io.parsing.Symbol p2, com.flurry.org.apache.avro.io.parsing.Symbol p3)
    {
        return 0;
    }

    public long mapNext()
    {
        this.parser.processTrailingImplicitActions();
        long v0 = this.in.mapNext();
        if (v0 == 0) {
            this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.MAP_END);
        }
        return v0;
    }

    public long readArrayStart()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_START);
        long v0 = this.in.readArrayStart();
        if (v0 == 0) {
            this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_END);
        }
        return v0;
    }

    public boolean readBoolean()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.BOOLEAN);
        return this.in.readBoolean();
    }

    public java.nio.ByteBuffer readBytes(java.nio.ByteBuffer p3)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.BYTES);
        return this.in.readBytes(p3);
    }

    public double readDouble()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.DOUBLE);
        return this.in.readDouble();
    }

    public int readEnum()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ENUM);
        com.flurry.org.apache.avro.io.parsing.Symbol$IntCheckAction v1_1 = ((com.flurry.org.apache.avro.io.parsing.Symbol$IntCheckAction) this.parser.popSymbol());
        int v0 = this.in.readEnum();
        if ((v0 >= 0) && (v0 < v1_1.size)) {
            return v0;
        } else {
            throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Enumeration out of range: max is ").append(v1_1.size).append(" but received ").append(v0).toString());
        }
    }

    public void readFixed(byte[] p2, int p3, int p4)
    {
        this.checkFixed(p4);
        this.in.readFixed(p2, p3, p4);
        return;
    }

    public float readFloat()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.FLOAT);
        return this.in.readFloat();
    }

    public int readIndex()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.UNION);
        com.flurry.org.apache.avro.io.parsing.Symbol$Alternative v1_1 = ((com.flurry.org.apache.avro.io.parsing.Symbol$Alternative) this.parser.popSymbol());
        int v0 = this.in.readIndex();
        this.parser.pushSymbol(v1_1.getSymbol(v0));
        return v0;
    }

    public int readInt()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.INT);
        return this.in.readInt();
    }

    public long readLong()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.LONG);
        return this.in.readLong();
    }

    public long readMapStart()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.MAP_START);
        long v0 = this.in.readMapStart();
        if (v0 == 0) {
            this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.MAP_END);
        }
        return v0;
    }

    public void readNull()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.NULL);
        this.in.readNull();
        return;
    }

    public com.flurry.org.apache.avro.util.Utf8 readString(com.flurry.org.apache.avro.util.Utf8 p3)
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.STRING);
        return this.in.readString(p3);
    }

    public String readString()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.STRING);
        return this.in.readString();
    }

    public long skipArray()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_START);
        long v0_1 = this.in.skipArray();
        while (v0_1 != 0) {
            long v2 = v0_1;
            while(true) {
                long v0_0 = (v2 - 1);
                if (v2 <= 0) {
                    break;
                }
                this.parser.skipRepeater();
                v2 = v0_0;
            }
            v0_1 = this.in.skipArray();
        }
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_END);
        return 0;
    }

    public void skipBytes()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.BYTES);
        this.in.skipBytes();
        return;
    }

    protected void skipFixed()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.FIXED);
        this.in.skipFixed(((com.flurry.org.apache.avro.io.parsing.Symbol$IntCheckAction) this.parser.popSymbol()).size);
        return;
    }

    public void skipFixed(int p2)
    {
        this.checkFixed(p2);
        this.in.skipFixed(p2);
        return;
    }

    public long skipMap()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.MAP_START);
        long v0_1 = this.in.skipMap();
        while (v0_1 != 0) {
            long v2 = v0_1;
            while(true) {
                long v0_0 = (v2 - 1);
                if (v2 <= 0) {
                    break;
                }
                this.parser.skipRepeater();
                v2 = v0_0;
            }
            v0_1 = this.in.skipMap();
        }
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.MAP_END);
        return 0;
    }

    public void skipString()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.STRING);
        this.in.skipString();
        return;
    }
}
