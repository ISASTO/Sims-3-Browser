package com.flurry.org.apache.avro.io;
public abstract class ParsingDecoder extends com.flurry.org.apache.avro.io.Decoder implements com.flurry.org.apache.avro.io.parsing.Parser$ActionHandler, com.flurry.org.apache.avro.io.parsing.SkipParser$SkipHandler {
    protected final com.flurry.org.apache.avro.io.parsing.SkipParser parser;

    protected ParsingDecoder(com.flurry.org.apache.avro.io.parsing.Symbol p2)
    {
        this.parser = new com.flurry.org.apache.avro.io.parsing.SkipParser(p2, this, this);
        return;
    }

    public void skipAction()
    {
        this.parser.popSymbol();
        return;
    }

    protected abstract void skipFixed();

    public void skipTopSymbol()
    {
        com.flurry.org.apache.avro.io.parsing.Symbol v0 = this.parser.topSymbol();
        if (v0 == com.flurry.org.apache.avro.io.parsing.Symbol.NULL) {
            this.readNull();
        }
        if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol.BOOLEAN) {
            if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol.INT) {
                if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol.LONG) {
                    if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol.FLOAT) {
                        if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol.DOUBLE) {
                            if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol.STRING) {
                                if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol.BYTES) {
                                    if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol.ENUM) {
                                        if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol.FIXED) {
                                            if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol.UNION) {
                                                if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_START) {
                                                    if (v0 == com.flurry.org.apache.avro.io.parsing.Symbol.MAP_START) {
                                                        this.skipMap();
                                                    }
                                                } else {
                                                    this.skipArray();
                                                }
                                            } else {
                                                this.readIndex();
                                            }
                                        } else {
                                            this.skipFixed();
                                        }
                                    } else {
                                        this.readEnum();
                                    }
                                } else {
                                    this.skipBytes();
                                }
                            } else {
                                this.skipString();
                            }
                        } else {
                            this.readDouble();
                        }
                    } else {
                        this.readFloat();
                    }
                } else {
                    this.readLong();
                }
            } else {
                this.readInt();
            }
        } else {
            this.readBoolean();
        }
        return;
    }
}
