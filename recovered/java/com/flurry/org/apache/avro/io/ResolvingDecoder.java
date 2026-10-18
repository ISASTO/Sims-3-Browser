package com.flurry.org.apache.avro.io;
public class ResolvingDecoder extends com.flurry.org.apache.avro.io.ValidatingDecoder {
    static final synthetic boolean $assertionsDisabled;
    private com.flurry.org.apache.avro.io.Decoder backup;

    static ResolvingDecoder()
    {
        int v0_2;
        if (com.flurry.org.apache.avro.io.ResolvingDecoder.desiredAssertionStatus()) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        com.flurry.org.apache.avro.io.ResolvingDecoder.$assertionsDisabled = v0_2;
        return;
    }

    ResolvingDecoder(com.flurry.org.apache.avro.Schema p2, com.flurry.org.apache.avro.Schema p3, com.flurry.org.apache.avro.io.Decoder p4)
    {
        this(com.flurry.org.apache.avro.io.ResolvingDecoder.resolve(p2, p3), p4);
        return;
    }

    private ResolvingDecoder(Object p1, com.flurry.org.apache.avro.io.Decoder p2)
    {
        super(((com.flurry.org.apache.avro.io.parsing.Symbol) p1), p2);
        return;
    }

    public static Object resolve(com.flurry.org.apache.avro.Schema p2, com.flurry.org.apache.avro.Schema p3)
    {
        if (p2 != null) {
            if (p3 != null) {
                return new com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator().generate(p2, p3);
            } else {
                throw new NullPointerException("reader cannot be null!");
            }
        } else {
            throw new NullPointerException("writer cannot be null!");
        }
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol doAction(com.flurry.org.apache.avro.io.parsing.Symbol p8, com.flurry.org.apache.avro.io.parsing.Symbol p9)
    {
        if (!(p9 instanceof com.flurry.org.apache.avro.io.parsing.Symbol$FieldOrderAction)) {
            if (!(p9 instanceof com.flurry.org.apache.avro.io.parsing.Symbol$ResolvingAction)) {
                if (!(p9 instanceof com.flurry.org.apache.avro.io.parsing.Symbol$SkipAction)) {
                    if (!(p9 instanceof com.flurry.org.apache.avro.io.parsing.Symbol$WriterUnionAction)) {
                        if (!(p9 instanceof com.flurry.org.apache.avro.io.parsing.Symbol$ErrorAction)) {
                            if (!(p9 instanceof com.flurry.org.apache.avro.io.parsing.Symbol$DefaultStartAction)) {
                                if (p9 != com.flurry.org.apache.avro.io.parsing.Symbol.DEFAULT_END_ACTION) {
                                    throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Unknown action: ").append(p9).toString());
                                } else {
                                    this.in = this.backup;
                                }
                            } else {
                                this.backup = this.in;
                                this.in = com.flurry.org.apache.avro.io.DecoderFactory.get().binaryDecoder(((com.flurry.org.apache.avro.io.parsing.Symbol$DefaultStartAction) p9).contents, 0);
                            }
                        } else {
                            throw new com.flurry.org.apache.avro.AvroTypeException(((com.flurry.org.apache.avro.io.parsing.Symbol$ErrorAction) p9).msg);
                        }
                    } else {
                        this.parser.pushSymbol(((com.flurry.org.apache.avro.io.parsing.Symbol$Alternative) this.parser.popSymbol()).getSymbol(this.in.readIndex()));
                    }
                } else {
                    this.parser.skipSymbol(((com.flurry.org.apache.avro.io.parsing.Symbol$SkipAction) p9).symToSkip);
                }
                p9 = 0;
            } else {
                if (((com.flurry.org.apache.avro.io.parsing.Symbol$ResolvingAction) p9).reader == p8) {
                    p9 = ((com.flurry.org.apache.avro.io.parsing.Symbol$ResolvingAction) p9).writer;
                } else {
                    throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Found ").append(((com.flurry.org.apache.avro.io.parsing.Symbol$ResolvingAction) p9).reader).append(" while looking for ").append(p8).toString());
                }
            }
        } else {
            if (p8 != com.flurry.org.apache.avro.io.parsing.Symbol.FIELD_ACTION) {
                p9 = 0;
            }
        }
        return p9;
    }

    public final void drain()
    {
        this.parser.processImplicitActions();
        return;
    }

    public double readDouble()
    {
        AssertionError v1_4;
        com.flurry.org.apache.avro.io.parsing.Symbol v0 = this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.DOUBLE);
        if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol.INT) {
            if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol.LONG) {
                if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol.FLOAT) {
                    if ((com.flurry.org.apache.avro.io.ResolvingDecoder.$assertionsDisabled) || (v0 == com.flurry.org.apache.avro.io.parsing.Symbol.DOUBLE)) {
                        v1_4 = this.in.readDouble();
                    } else {
                        throw new AssertionError();
                    }
                } else {
                    v1_4 = ((double) this.in.readFloat());
                }
            } else {
                v1_4 = ((double) this.in.readLong());
            }
        } else {
            v1_4 = ((double) this.in.readInt());
        }
        return v1_4;
    }

    public int readEnum()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.ENUM);
        String v1_0 = ((com.flurry.org.apache.avro.io.parsing.Symbol$EnumAdjustAction) this.parser.popSymbol()).adjustments[this.in.readEnum()];
        if (!(v1_0 instanceof Integer)) {
            throw new com.flurry.org.apache.avro.AvroTypeException(((String) v1_0));
        } else {
            return ((Integer) v1_0).intValue();
        }
    }

    public final com.flurry.org.apache.avro.Schema$Field[] readFieldOrder()
    {
        return ((com.flurry.org.apache.avro.io.parsing.Symbol$FieldOrderAction) this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.FIELD_ACTION)).fields;
    }

    public float readFloat()
    {
        AssertionError v1_3;
        com.flurry.org.apache.avro.io.parsing.Symbol v0 = this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.FLOAT);
        if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol.INT) {
            if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol.LONG) {
                if ((com.flurry.org.apache.avro.io.ResolvingDecoder.$assertionsDisabled) || (v0 == com.flurry.org.apache.avro.io.parsing.Symbol.FLOAT)) {
                    v1_3 = this.in.readFloat();
                } else {
                    throw new AssertionError();
                }
            } else {
                v1_3 = ((float) this.in.readLong());
            }
        } else {
            v1_3 = ((float) this.in.readInt());
        }
        return v1_3;
    }

    public int readIndex()
    {
        this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.UNION);
        com.flurry.org.apache.avro.io.parsing.Symbol$UnionAdjustAction v0_1 = ((com.flurry.org.apache.avro.io.parsing.Symbol$UnionAdjustAction) this.parser.popSymbol());
        this.parser.pushSymbol(v0_1.symToParse);
        return v0_1.rindex;
    }

    public long readLong()
    {
        AssertionError v1_3;
        com.flurry.org.apache.avro.io.parsing.Symbol v0 = this.parser.advance(com.flurry.org.apache.avro.io.parsing.Symbol.LONG);
        if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol.INT) {
            if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol.DOUBLE) {
                if ((com.flurry.org.apache.avro.io.ResolvingDecoder.$assertionsDisabled) || (v0 == com.flurry.org.apache.avro.io.parsing.Symbol.LONG)) {
                    v1_3 = this.in.readLong();
                } else {
                    throw new AssertionError();
                }
            } else {
                v1_3 = ((long) this.in.readDouble());
            }
        } else {
            v1_3 = ((long) this.in.readInt());
        }
        return v1_3;
    }

    public void skipAction()
    {
        com.flurry.org.apache.avro.io.parsing.Symbol$ErrorAction v2_0 = this.parser.popSymbol();
        if (!(v2_0 instanceof com.flurry.org.apache.avro.io.parsing.Symbol$ResolvingAction)) {
            if (!(v2_0 instanceof com.flurry.org.apache.avro.io.parsing.Symbol$SkipAction)) {
                if (!(v2_0 instanceof com.flurry.org.apache.avro.io.parsing.Symbol$WriterUnionAction)) {
                    if (!(v2_0 instanceof com.flurry.org.apache.avro.io.parsing.Symbol$ErrorAction)) {
                        if (!(v2_0 instanceof com.flurry.org.apache.avro.io.parsing.Symbol$DefaultStartAction)) {
                            if (v2_0 == com.flurry.org.apache.avro.io.parsing.Symbol.DEFAULT_END_ACTION) {
                                this.in = this.backup;
                            }
                        } else {
                            com.flurry.org.apache.avro.io.parsing.Symbol$DefaultStartAction v1_1 = ((com.flurry.org.apache.avro.io.parsing.Symbol$DefaultStartAction) v2_0);
                            this.backup = this.in;
                            this.in = com.flurry.org.apache.avro.io.DecoderFactory.get().binaryDecoder(v1_1.contents, 0);
                        }
                    } else {
                        throw new com.flurry.org.apache.avro.AvroTypeException(((com.flurry.org.apache.avro.io.parsing.Symbol$ErrorAction) v2_0).msg);
                    }
                } else {
                    this.parser.pushSymbol(((com.flurry.org.apache.avro.io.parsing.Symbol$Alternative) this.parser.popSymbol()).getSymbol(this.in.readIndex()));
                }
            } else {
                this.parser.pushSymbol(((com.flurry.org.apache.avro.io.parsing.Symbol$SkipAction) v2_0).symToSkip);
            }
        } else {
            this.parser.pushSymbol(((com.flurry.org.apache.avro.io.parsing.Symbol$ResolvingAction) v2_0).writer);
        }
        return;
    }
}
