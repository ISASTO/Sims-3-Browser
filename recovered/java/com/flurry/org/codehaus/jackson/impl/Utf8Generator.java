package com.flurry.org.codehaus.jackson.impl;
public class Utf8Generator extends com.flurry.org.codehaus.jackson.impl.JsonGeneratorBase {
    private static final byte BYTE_0 = 0x30;
    private static final byte BYTE_BACKSLASH = 0x5c;
    private static final byte BYTE_COLON = 0x3a;
    private static final byte BYTE_COMMA = 0x2c;
    private static final byte BYTE_LBRACKET = 0x5b;
    private static final byte BYTE_LCURLY = 0x7b;
    private static final byte BYTE_QUOTE = 0x22;
    private static final byte BYTE_RBRACKET = 0x5d;
    private static final byte BYTE_RCURLY = 0x7d;
    private static final byte BYTE_SPACE = 0x20;
    private static final byte BYTE_u = 0x75;
    private static final byte[] FALSE_BYTES = None;
    static final byte[] HEX_CHARS = None;
    private static final int MAX_BYTES_TO_BUFFER = 512;
    private static final byte[] NULL_BYTES = None;
    protected static final int SURR1_FIRST = 55296;
    protected static final int SURR1_LAST = 56319;
    protected static final int SURR2_FIRST = 56320;
    protected static final int SURR2_LAST = 57343;
    private static final byte[] TRUE_BYTES;
    protected static final int[] sOutputEscapes;
    protected boolean _bufferRecyclable;
    protected char[] _charBuffer;
    protected final int _charBufferLength;
    protected com.flurry.org.codehaus.jackson.io.CharacterEscapes _characterEscapes;
    protected byte[] _entityBuffer;
    protected final com.flurry.org.codehaus.jackson.io.IOContext _ioContext;
    protected int _maximumNonEscapedChar;
    protected byte[] _outputBuffer;
    protected final int _outputEnd;
    protected int[] _outputEscapes;
    protected final int _outputMaxContiguous;
    protected final java.io.OutputStream _outputStream;
    protected int _outputTail;

    static Utf8Generator()
    {
        com.flurry.org.codehaus.jackson.impl.Utf8Generator.HEX_CHARS = com.flurry.org.codehaus.jackson.util.CharTypes.copyHexBytes();
        int[] v0_4 = new byte[4];
        v0_4 = {110, 117, 108, 108};
        com.flurry.org.codehaus.jackson.impl.Utf8Generator.NULL_BYTES = v0_4;
        int[] v0_5 = new byte[4];
        v0_5 = {116, 114, 117, 101};
        com.flurry.org.codehaus.jackson.impl.Utf8Generator.TRUE_BYTES = v0_5;
        int[] v0_1 = new byte[5];
        v0_1 = {102, 97, 108, 115, 101};
        com.flurry.org.codehaus.jackson.impl.Utf8Generator.FALSE_BYTES = v0_1;
        com.flurry.org.codehaus.jackson.impl.Utf8Generator.sOutputEscapes = com.flurry.org.codehaus.jackson.util.CharTypes.get7BitOutputEscapes();
        return;
    }

    public Utf8Generator(com.flurry.org.codehaus.jackson.io.IOContext p2, int p3, com.flurry.org.codehaus.jackson.ObjectCodec p4, java.io.OutputStream p5)
    {
        super(p3, p4);
        super._outputEscapes = com.flurry.org.codehaus.jackson.impl.Utf8Generator.sOutputEscapes;
        super._outputTail = 0;
        super._ioContext = p2;
        super._outputStream = p5;
        super._bufferRecyclable = 1;
        super._outputBuffer = p2.allocWriteEncodingBuffer();
        super._outputEnd = super._outputBuffer.length;
        super._outputMaxContiguous = (super._outputEnd >> 3);
        super._charBuffer = p2.allocConcatBuffer();
        super._charBufferLength = super._charBuffer.length;
        if (super.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.ESCAPE_NON_ASCII)) {
            super.setHighestNonEscapedChar(127);
        }
        return;
    }

    public Utf8Generator(com.flurry.org.codehaus.jackson.io.IOContext p2, int p3, com.flurry.org.codehaus.jackson.ObjectCodec p4, java.io.OutputStream p5, byte[] p6, int p7, boolean p8)
    {
        super(p3, p4);
        super._outputEscapes = com.flurry.org.codehaus.jackson.impl.Utf8Generator.sOutputEscapes;
        super._outputTail = 0;
        super._ioContext = p2;
        super._outputStream = p5;
        super._bufferRecyclable = p8;
        super._outputTail = p7;
        super._outputBuffer = p6;
        super._outputEnd = super._outputBuffer.length;
        super._outputMaxContiguous = (super._outputEnd >> 3);
        super._charBuffer = p2.allocConcatBuffer();
        super._charBufferLength = super._charBuffer.length;
        if (super.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.ESCAPE_NON_ASCII)) {
            super.setHighestNonEscapedChar(127);
        }
        return;
    }

    private int _handleLongCustomEscape(byte[] p4, int p5, int p6, byte[] p7, int p8)
    {
        int v1_2;
        int v0 = p7.length;
        if ((p5 + v0) <= p6) {
            if (((p8 * 6) + p5) <= p6) {
                v1_2 = p5;
            } else {
                this._flushBuffer();
                v1_2 = this._outputTail;
            }
        } else {
            this._outputTail = p5;
            this._flushBuffer();
            int v5_1 = this._outputTail;
            if (v0 <= p4.length) {
                System.arraycopy(p7, 0, p4, v5_1, v0);
                p5 = (v5_1 + v0);
            } else {
                this._outputStream.write(p7, 0, v0);
                v1_2 = v5_1;
            }
        }
        return v1_2;
    }

    private final int _outputMultiByteChar(int p5, int p6)
    {
        int v6_2;
        byte[] v0 = this._outputBuffer;
        if ((p5 < 55296) || (p5 > 57343)) {
            int v1_4 = (p6 + 1);
            v0[p6] = ((byte) ((p5 >> 12) | 224));
            int v6_1 = (v1_4 + 1);
            v0[v1_4] = ((byte) (((p5 >> 6) & 63) | 128));
            int v1_0 = (v6_1 + 1);
            v0[v6_1] = ((byte) ((p5 & 63) | 128));
            v6_2 = v1_0;
        } else {
            int v1_1 = (p6 + 1);
            v0[p6] = 92;
            int v6_3 = (v1_1 + 1);
            v0[v1_1] = 117;
            int v1_2 = (v6_3 + 1);
            v0[v6_3] = com.flurry.org.codehaus.jackson.impl.Utf8Generator.HEX_CHARS[((p5 >> 12) & 15)];
            int v6_4 = (v1_2 + 1);
            v0[v1_2] = com.flurry.org.codehaus.jackson.impl.Utf8Generator.HEX_CHARS[((p5 >> 8) & 15)];
            int v1_3 = (v6_4 + 1);
            v0[v6_4] = com.flurry.org.codehaus.jackson.impl.Utf8Generator.HEX_CHARS[((p5 >> 4) & 15)];
            v6_2 = (v1_3 + 1);
            v0[v1_3] = com.flurry.org.codehaus.jackson.impl.Utf8Generator.HEX_CHARS[(p5 & 15)];
        }
        return v6_2;
    }

    private final int _outputRawMultiByteChar(int p4, char[] p5, int p6, int p7)
    {
        if ((p4 < 55296) || (p4 > 57343)) {
            byte[] v0 = this._outputBuffer;
            char v1_6 = this._outputTail;
            this._outputTail = (v1_6 + 1);
            v0[v1_6] = ((byte) ((p4 >> 12) | 224));
            char v1_1 = this._outputTail;
            this._outputTail = (v1_1 + 1);
            v0[v1_1] = ((byte) (((p4 >> 6) & 63) | 128));
            char v1_3 = this._outputTail;
            this._outputTail = (v1_3 + 1);
            v0[v1_3] = ((byte) ((p4 & 63) | 128));
        } else {
            if (p6 >= p7) {
                this._reportError("Split surrogate on writeRaw() input (last character)");
            }
            this._outputSurrogates(p4, p5[p6]);
            p6++;
        }
        return p6;
    }

    private final void _writeBytes(byte[] p5)
    {
        int v0 = p5.length;
        if ((this._outputTail + v0) <= this._outputEnd) {
            System.arraycopy(p5, 0, this._outputBuffer, this._outputTail, v0);
            this._outputTail = (this._outputTail + v0);
        } else {
            this._flushBuffer();
            if (v0 <= 512) {
            } else {
                this._outputStream.write(p5, 0, v0);
            }
        }
        return;
    }

    private final void _writeBytes(byte[] p3, int p4, int p5)
    {
        if ((this._outputTail + p5) <= this._outputEnd) {
            System.arraycopy(p3, p4, this._outputBuffer, this._outputTail, p5);
            this._outputTail = (this._outputTail + p5);
        } else {
            this._flushBuffer();
            if (p5 <= 512) {
            } else {
                this._outputStream.write(p3, p4, p5);
            }
        }
        return;
    }

    private int _writeCustomEscape(byte[] p8, int p9, com.flurry.org.codehaus.jackson.SerializableString p10, int p11)
    {
        int v0_0;
        byte[] v4 = p10.asUnquotedUTF8();
        int v6 = v4.length;
        if (v6 <= 6) {
            System.arraycopy(v4, 0, p8, p9, v6);
            v0_0 = (p9 + v6);
        } else {
            v0_0 = this._handleLongCustomEscape(p8, p9, this._outputEnd, v4, p11);
        }
        return v0_0;
    }

    private final void _writeCustomStringSegment2(char[] p15, int p16, int p17)
    {
        if ((this._outputTail + ((p17 - p16) * 6)) > this._outputEnd) {
            this._flushBuffer();
        }
        int v6;
        byte[] v8 = this._outputBuffer;
        int[] v4 = this._outputEscapes;
        if (this._maximumNonEscapedChar > 0) {
            v6 = this._maximumNonEscapedChar;
        } else {
            v6 = 65535;
        }
        com.flurry.org.codehaus.jackson.io.CharacterEscapes v2 = this._characterEscapes;
        int v10_0 = this._outputTail;
        int v7 = p16;
        while (v7 < p17) {
            int v16_1 = (v7 + 1);
            char v1 = p15[v7];
            if (v1 > 127) {
                if (v1 <= v6) {
                    com.flurry.org.codehaus.jackson.SerializableString v3_0 = v2.getEscapeSequence(v1);
                    if (v3_0 == null) {
                        int v9_0;
                        if (v1 > 2047) {
                            v9_0 = this._outputMultiByteChar(v1, v10_0);
                        } else {
                            int v9_1 = (v10_0 + 1);
                            v8[v10_0] = ((byte) ((v1 >> 6) | 192));
                            int v10_1 = (v9_1 + 1);
                            v8[v9_1] = ((byte) ((v1 & 63) | 128));
                            v9_0 = v10_1;
                        }
                        v10_0 = v9_0;
                        v7 = v16_1;
                    } else {
                        v10_0 = this._writeCustomEscape(v8, v10_0, v3_0, (p17 - v16_1));
                        v7 = v16_1;
                    }
                } else {
                    v10_0 = this._writeGenericEscape(v1, v10_0);
                    v7 = v16_1;
                }
            } else {
                if (v4[v1] != 0) {
                    int v5 = v4[v1];
                    if (v5 <= 0) {
                        if (v5 != -2) {
                            v10_0 = this._writeGenericEscape(v1, v10_0);
                            v7 = v16_1;
                        } else {
                            com.flurry.org.codehaus.jackson.SerializableString v3_1 = v2.getEscapeSequence(v1);
                            if (v3_1 != null) {
                                v10_0 = this._writeCustomEscape(v8, v10_0, v3_1, (p17 - v16_1));
                                v7 = v16_1;
                            } else {
                                throw new com.flurry.org.codehaus.jackson.JsonGenerationException(new StringBuilder().append("Invalid custom escape definitions; custom escape not found for character code 0x").append(Integer.toHexString(v1)).append(", although was supposed to have one").toString());
                            }
                        }
                    } else {
                        int v9_7 = (v10_0 + 1);
                        v8[v10_0] = 92;
                        v10_0 = (v9_7 + 1);
                        v8[v9_7] = ((byte) v5);
                        v7 = v16_1;
                    }
                } else {
                    int v9_8 = (v10_0 + 1);
                    v8[v10_0] = ((byte) v1);
                    v10_0 = v9_8;
                    v7 = v16_1;
                }
            }
        }
        this._outputTail = v10_0;
        return;
    }

    private int _writeGenericEscape(int p6, int p7)
    {
        int v7_1;
        byte[] v0 = this._outputBuffer;
        int v2_2 = (p7 + 1);
        v0[p7] = 92;
        int v7_3 = (v2_2 + 1);
        v0[v2_2] = 117;
        if (p6 <= 255) {
            int v2_0 = (v7_3 + 1);
            v0[v7_3] = 48;
            v7_1 = (v2_0 + 1);
            v0[v2_0] = 48;
        } else {
            int v1 = ((p6 >> 8) & 255);
            int v2_1 = (v7_3 + 1);
            v0[v7_3] = com.flurry.org.codehaus.jackson.impl.Utf8Generator.HEX_CHARS[(v1 >> 4)];
            v7_1 = (v2_1 + 1);
            v0[v2_1] = com.flurry.org.codehaus.jackson.impl.Utf8Generator.HEX_CHARS[(v1 & 15)];
            p6 &= 255;
        }
        int v2_3 = (v7_1 + 1);
        v0[v7_1] = com.flurry.org.codehaus.jackson.impl.Utf8Generator.HEX_CHARS[(p6 >> 4)];
        int v7_2 = (v2_3 + 1);
        v0[v2_3] = com.flurry.org.codehaus.jackson.impl.Utf8Generator.HEX_CHARS[(p6 & 15)];
        return v7_2;
    }

    private final void _writeLongString(String p5)
    {
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0_3 = this._outputBuffer;
        int v1_3 = this._outputTail;
        this._outputTail = (v1_3 + 1);
        v0_3[v1_3] = 34;
        this._writeStringSegments(p5);
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0_2 = this._outputBuffer;
        int v1_1 = this._outputTail;
        this._outputTail = (v1_1 + 1);
        v0_2[v1_1] = 34;
        return;
    }

    private final void _writeLongString(char[] p5, int p6, int p7)
    {
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0_4 = this._outputBuffer;
        int v1_4 = this._outputTail;
        this._outputTail = (v1_4 + 1);
        v0_4[v1_4] = 34;
        this._writeStringSegments(this._charBuffer, 0, p7);
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0_3 = this._outputBuffer;
        int v1_2 = this._outputTail;
        this._outputTail = (v1_2 + 1);
        v0_3[v1_2] = 34;
        return;
    }

    private final void _writeNull()
    {
        if ((this._outputTail + 4) >= this._outputEnd) {
            this._flushBuffer();
        }
        System.arraycopy(com.flurry.org.codehaus.jackson.impl.Utf8Generator.NULL_BYTES, 0, this._outputBuffer, this._outputTail, 4);
        this._outputTail = (this._outputTail + 4);
        return;
    }

    private final void _writeQuotedInt(int p5)
    {
        if ((this._outputTail + 13) >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0_5 = this._outputBuffer;
        int v1_3 = this._outputTail;
        this._outputTail = (v1_3 + 1);
        v0_5[v1_3] = 34;
        this._outputTail = com.flurry.org.codehaus.jackson.io.NumberOutput.outputInt(p5, this._outputBuffer, this._outputTail);
        byte[] v0_3 = this._outputBuffer;
        int v1_1 = this._outputTail;
        this._outputTail = (v1_1 + 1);
        v0_3[v1_1] = 34;
        return;
    }

    private final void _writeQuotedLong(long p5)
    {
        if ((this._outputTail + 23) >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0_5 = this._outputBuffer;
        int v1_3 = this._outputTail;
        this._outputTail = (v1_3 + 1);
        v0_5[v1_3] = 34;
        this._outputTail = com.flurry.org.codehaus.jackson.io.NumberOutput.outputLong(p5, this._outputBuffer, this._outputTail);
        byte[] v0_3 = this._outputBuffer;
        int v1_1 = this._outputTail;
        this._outputTail = (v1_1 + 1);
        v0_3[v1_1] = 34;
        return;
    }

    private final void _writeQuotedRaw(Object p5)
    {
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0_4 = this._outputBuffer;
        int v1_3 = this._outputTail;
        this._outputTail = (v1_3 + 1);
        v0_4[v1_3] = 34;
        this.writeRaw(p5.toString());
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0_3 = this._outputBuffer;
        int v1_1 = this._outputTail;
        this._outputTail = (v1_1 + 1);
        v0_3[v1_1] = 34;
        return;
    }

    private final void _writeSegmentedRaw(char[] p7, int p8, int p9)
    {
        int v2 = this._outputEnd;
        byte[] v0 = this._outputBuffer;
        while (p8 < p9) {
            do {
                char v1_1 = p7[p8];
                if (v1_1 < 128) {
                    if (this._outputTail >= v2) {
                        this._flushBuffer();
                    }
                    int v4_7 = this._outputTail;
                    this._outputTail = (v4_7 + 1);
                    v0[v4_7] = ((byte) v1_1);
                    p8++;
                } else {
                    if ((this._outputTail + 3) >= this._outputEnd) {
                        this._flushBuffer();
                    }
                    int v3 = (p8 + 1);
                    char v1_0 = p7[p8];
                    if (v1_0 >= 2048) {
                        this._outputRawMultiByteChar(v1_0, p7, v3, p9);
                    } else {
                        int v4_3 = this._outputTail;
                        this._outputTail = (v4_3 + 1);
                        v0[v4_3] = ((byte) ((v1_0 >> 6) | 192));
                        int v4_4 = this._outputTail;
                        this._outputTail = (v4_4 + 1);
                        v0[v4_4] = ((byte) ((v1_0 & 63) | 128));
                    }
                    p8 = v3;
                }
            } while(p8 < p9);
        }
        return;
    }

    private final void _writeStringSegment(char[] p7, int p8, int p9)
    {
        int v9_1 = (p9 + p8);
        int[] v1 = this._outputEscapes;
        int v4 = this._outputTail;
        while (p8 < v9_1) {
            char v0 = p7[p8];
            if ((v0 > 127) || (v1[v0] != 0)) {
                break;
            }
            int v3_1 = (v4 + 1);
            this._outputBuffer[v4] = ((byte) v0);
            p8++;
            v4 = v3_1;
        }
        this._outputTail = v4;
        if (p8 < v9_1) {
            if (this._characterEscapes == null) {
                if (this._maximumNonEscapedChar != 0) {
                    this._writeStringSegmentASCII2(p7, p8, v9_1);
                } else {
                    this._writeStringSegment2(p7, p8, v9_1);
                }
            } else {
                this._writeCustomStringSegment2(p7, p8, v9_1);
            }
        }
        return;
    }

    private final void _writeStringSegment2(char[] p10, int p11, int p12)
    {
        if ((this._outputTail + ((p12 - p11) * 6)) > this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v4 = this._outputBuffer;
        int[] v1 = this._outputEscapes;
        int v6_0 = this._outputTail;
        int v3 = p11;
        while (v3 < p12) {
            int v11_1 = (v3 + 1);
            char v0 = p10[v3];
            if (v0 > 127) {
                int v5_0;
                if (v0 > 2047) {
                    v5_0 = this._outputMultiByteChar(v0, v6_0);
                } else {
                    int v5_1 = (v6_0 + 1);
                    v4[v6_0] = ((byte) ((v0 >> 6) | 192));
                    int v6_1 = (v5_1 + 1);
                    v4[v5_1] = ((byte) ((v0 & 63) | 128));
                    v5_0 = v6_1;
                }
                v6_0 = v5_0;
                v3 = v11_1;
            } else {
                if (v1[v0] != 0) {
                    int v2 = v1[v0];
                    if (v2 <= 0) {
                        v6_0 = this._writeGenericEscape(v0, v6_0);
                        v3 = v11_1;
                    } else {
                        int v5_3 = (v6_0 + 1);
                        v4[v6_0] = 92;
                        v6_0 = (v5_3 + 1);
                        v4[v5_3] = ((byte) v2);
                        v3 = v11_1;
                    }
                } else {
                    int v5_4 = (v6_0 + 1);
                    v4[v6_0] = ((byte) v0);
                    v6_0 = v5_4;
                    v3 = v11_1;
                }
            }
        }
        this._outputTail = v6_0;
        return;
    }

    private final void _writeStringSegmentASCII2(char[] p11, int p12, int p13)
    {
        if ((this._outputTail + ((p13 - p12) * 6)) > this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v5 = this._outputBuffer;
        int[] v1 = this._outputEscapes;
        int v3 = this._maximumNonEscapedChar;
        int v7_0 = this._outputTail;
        int v4 = p12;
        while (v4 < p13) {
            int v12_1 = (v4 + 1);
            char v0 = p11[v4];
            if (v0 > 127) {
                if (v0 <= v3) {
                    int v6_0;
                    if (v0 > 2047) {
                        v6_0 = this._outputMultiByteChar(v0, v7_0);
                    } else {
                        int v6_1 = (v7_0 + 1);
                        v5[v7_0] = ((byte) ((v0 >> 6) | 192));
                        int v7_1 = (v6_1 + 1);
                        v5[v6_1] = ((byte) ((v0 & 63) | 128));
                        v6_0 = v7_1;
                    }
                    v7_0 = v6_0;
                    v4 = v12_1;
                } else {
                    v7_0 = this._writeGenericEscape(v0, v7_0);
                    v4 = v12_1;
                }
            } else {
                if (v1[v0] != 0) {
                    int v2 = v1[v0];
                    if (v2 <= 0) {
                        v7_0 = this._writeGenericEscape(v0, v7_0);
                        v4 = v12_1;
                    } else {
                        int v6_4 = (v7_0 + 1);
                        v5[v7_0] = 92;
                        v7_0 = (v6_4 + 1);
                        v5[v6_4] = ((byte) v2);
                        v4 = v12_1;
                    }
                } else {
                    int v6_5 = (v7_0 + 1);
                    v5[v7_0] = ((byte) v0);
                    v7_0 = v6_5;
                    v4 = v12_1;
                }
            }
        }
        this._outputTail = v7_0;
        return;
    }

    private final void _writeStringSegments(String p8)
    {
        int v1 = p8.length();
        int v3 = 0;
        char[] v0 = this._charBuffer;
        while (v1 > 0) {
            int v2 = Math.min(this._outputMaxContiguous, v1);
            p8.getChars(v3, (v3 + v2), v0, 0);
            if ((this._outputTail + v2) > this._outputEnd) {
                this._flushBuffer();
            }
            this._writeStringSegment(v0, 0, v2);
            v3 += v2;
            v1 -= v2;
        }
        return;
    }

    private final void _writeStringSegments(char[] p4, int p5, int p6)
    {
        do {
            int v0 = Math.min(this._outputMaxContiguous, p6);
            if ((this._outputTail + v0) > this._outputEnd) {
                this._flushBuffer();
            }
            this._writeStringSegment(p4, p5, v0);
            p5 += v0;
            p6 -= v0;
        } while(p6 > 0);
        return;
    }

    private final void _writeUTF8Segment(byte[] p8, int p9, int p10)
    {
        int v4 = p9;
        while (v4 < (p9 + p10)) {
            byte v0 = p8[v4];
            if ((v0 < 0) || (this._outputEscapes[v0] == 0)) {
                v4++;
            } else {
                this._writeUTF8Segment2(p8, p9, p10);
            }
            return;
        }
        if ((this._outputTail + p10) > this._outputEnd) {
            this._flushBuffer();
        }
        System.arraycopy(p8, p9, this._outputBuffer, this._outputTail, p10);
        this._outputTail = (this._outputTail + p10);
        return;
    }

    private final void _writeUTF8Segment2(byte[] p11, int p12, int p13)
    {
        int v6_0 = this._outputTail;
        if (((p13 * 6) + v6_0) > this._outputEnd) {
            this._flushBuffer();
            v6_0 = this._outputTail;
        }
        byte[] v5 = this._outputBuffer;
        int[] v2 = this._outputEscapes;
        int v13_1 = (p13 + p12);
        int v7_0 = v6_0;
        int v4 = p12;
        while (v4 < v13_1) {
            int v12_1 = (v4 + 1);
            byte v0 = p11[v4];
            byte v1 = v0;
            if ((v1 >= 0) && (v2[v1] != 0)) {
                int v6_1;
                int v3 = v2[v1];
                if (v3 <= 0) {
                    v6_1 = this._writeGenericEscape(v1, v7_0);
                } else {
                    int v6_2 = (v7_0 + 1);
                    v5[v7_0] = 92;
                    int v7_1 = (v6_2 + 1);
                    v5[v6_2] = ((byte) v3);
                    v6_1 = v7_1;
                }
                v7_0 = v6_1;
                v4 = v12_1;
            } else {
                int v6_3 = (v7_0 + 1);
                v5[v7_0] = v0;
                v7_0 = v6_3;
                v4 = v12_1;
            }
        }
        this._outputTail = v7_0;
        return;
    }

    private final void _writeUTF8Segments(byte[] p3, int p4, int p5)
    {
        do {
            int v0 = Math.min(this._outputMaxContiguous, p5);
            this._writeUTF8Segment(p3, p4, v0);
            p4 += v0;
            p5 -= v0;
        } while(p5 > 0);
        return;
    }

    protected final int _decodeSurrogate(int p6, int p7)
    {
        if ((p7 < 56320) || (p7 > 57343)) {
            this._reportError(new StringBuilder().append("Incomplete surrogate pair: first char 0x").append(Integer.toHexString(p6)).append(", second 0x").append(Integer.toHexString(p7)).toString());
        }
        return ((65536 + ((p6 - 55296) << 10)) + (p7 - 56320));
    }

    protected final void _flushBuffer()
    {
        int v0 = this._outputTail;
        if (v0 > 0) {
            this._outputTail = 0;
            this._outputStream.write(this._outputBuffer, 0, v0);
        }
        return;
    }

    protected final void _outputSurrogates(int p5, int p6)
    {
        int v1 = this._decodeSurrogate(p5, p6);
        if ((this._outputTail + 4) > this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0 = this._outputBuffer;
        int v2_5 = this._outputTail;
        this._outputTail = (v2_5 + 1);
        v0[v2_5] = ((byte) ((v1 >> 18) | 240));
        int v2_0 = this._outputTail;
        this._outputTail = (v2_0 + 1);
        v0[v2_0] = ((byte) (((v1 >> 12) & 63) | 128));
        int v2_2 = this._outputTail;
        this._outputTail = (v2_2 + 1);
        v0[v2_2] = ((byte) (((v1 >> 6) & 63) | 128));
        int v2_4 = this._outputTail;
        this._outputTail = (v2_4 + 1);
        v0[v2_4] = ((byte) ((v1 & 63) | 128));
        return;
    }

    protected void _releaseBuffers()
    {
        byte[] v0 = this._outputBuffer;
        if ((v0 != null) && (this._bufferRecyclable)) {
            this._outputBuffer = 0;
            this._ioContext.releaseWriteEncodingBuffer(v0);
        }
        char[] v1 = this._charBuffer;
        if (v1 != null) {
            this._charBuffer = 0;
            this._ioContext.releaseConcatBuffer(v1);
        }
        return;
    }

    protected final void _verifyPrettyValueWrite(String p2, int p3)
    {
        switch (p3) {
            case 0:
                if (!this._writeContext.inArray()) {
                    if (!this._writeContext.inObject()) {
                    } else {
                        this._cfgPrettyPrinter.beforeObjectEntries(this);
                    }
                } else {
                    this._cfgPrettyPrinter.beforeArrayValues(this);
                }
                break;
            case 1:
                this._cfgPrettyPrinter.writeArrayValueSeparator(this);
                break;
            case 2:
                this._cfgPrettyPrinter.writeObjectFieldValueSeparator(this);
                break;
            case 3:
                this._cfgPrettyPrinter.writeRootValueSeparator(this);
                break;
            default:
                this._cantHappen();
        }
        return;
    }

    protected final void _verifyValueWrite(String p5)
    {
        int v1 = this._writeContext.writeValue();
        if (v1 == 5) {
            this._reportError(new StringBuilder().append("Can not ").append(p5).append(", expecting field name").toString());
        }
        if (this._cfgPrettyPrinter != null) {
            this._verifyPrettyValueWrite(p5, v1);
        } else {
            int v0;
            switch (v1) {
                case 1:
                    v0 = 44;
                    if (this._outputTail >= this._outputEnd) {
                        this._flushBuffer();
                    }
                    this._outputBuffer[this._outputTail] = v0;
                    this._outputTail = (this._outputTail + 1);
                    break;
                case 2:
                    v0 = 58;
                    break;
                case 3:
                    v0 = 32;
                    break;
            }
        }
        return;
    }

    protected void _writeBinary(com.flurry.org.codehaus.jackson.Base64Variant p10, byte[] p11, int p12, int p13)
    {
        int v4 = (p13 - 3);
        int v5 = (this._outputEnd - 6);
        int v1 = (p10.getMaxLineLength() >> 2);
        int v3_2 = p12;
        while (v3_2 <= v4) {
            if (this._outputTail > v5) {
                this._flushBuffer();
            }
            int v12_2 = (v3_2 + 1);
            int v3_1 = (v12_2 + 1);
            int v12_3 = (v3_1 + 1);
            this._outputTail = p10.encodeBase64Chunk(((((p11[v3_2] << 8) | (p11[v12_2] & 255)) << 8) | (p11[v3_1] & 255)), this._outputBuffer, this._outputTail);
            v1--;
            if (v1 <= 0) {
                int v6_17 = this._outputBuffer;
                int v7_4 = this._outputTail;
                this._outputTail = (v7_4 + 1);
                v6_17[v7_4] = 92;
                int v6_18 = this._outputBuffer;
                int v7_5 = this._outputTail;
                this._outputTail = (v7_5 + 1);
                v6_18[v7_5] = 110;
                v1 = (p10.getMaxLineLength() >> 2);
            }
            v3_2 = v12_3;
        }
        int v2 = (p13 - v3_2);
        if (v2 > 0) {
            if (this._outputTail > v5) {
                this._flushBuffer();
            }
            int v0_0 = (p11[v3_2] << 16);
            if (v2 == 2) {
                v0_0 |= ((p11[(v3_2 + 1)] & 255) << 8);
            }
            this._outputTail = p10.encodeBase64Partial(v0_0, v2, this._outputBuffer, this._outputTail);
        }
        return;
    }

    protected final void _writeFieldName(com.flurry.org.codehaus.jackson.SerializableString p7)
    {
        byte[] v1 = p7.asQuotedUTF8();
        if (this.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.QUOTE_FIELD_NAMES)) {
            if (this._outputTail >= this._outputEnd) {
                this._flushBuffer();
            }
            byte[] v2_0 = this._outputBuffer;
            int v3_0 = this._outputTail;
            this._outputTail = (v3_0 + 1);
            v2_0[v3_0] = 34;
            int v0 = v1.length;
            if (((this._outputTail + v0) + 1) >= this._outputEnd) {
                this._writeBytes(v1);
                if (this._outputTail >= this._outputEnd) {
                    this._flushBuffer();
                }
                byte[] v2_5 = this._outputBuffer;
                int v3_3 = this._outputTail;
                this._outputTail = (v3_3 + 1);
                v2_5[v3_3] = 34;
            } else {
                System.arraycopy(v1, 0, this._outputBuffer, this._outputTail, v0);
                this._outputTail = (this._outputTail + v0);
                byte[] v2_10 = this._outputBuffer;
                int v3_5 = this._outputTail;
                this._outputTail = (v3_5 + 1);
                v2_10[v3_5] = 34;
            }
        } else {
            this._writeBytes(v1);
        }
        return;
    }

    protected final void _writeFieldName(String p7)
    {
        if (this.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.QUOTE_FIELD_NAMES)) {
            if (this._outputTail >= this._outputEnd) {
                this._flushBuffer();
            }
            byte[] v1_0 = this._outputBuffer;
            int v2_0 = this._outputTail;
            this._outputTail = (v2_0 + 1);
            v1_0[v2_0] = 34;
            int v0 = p7.length();
            if (v0 > this._charBufferLength) {
                this._writeStringSegments(p7);
            } else {
                p7.getChars(0, v0, this._charBuffer, 0);
                if (v0 > this._outputMaxContiguous) {
                    this._writeStringSegments(this._charBuffer, 0, v0);
                } else {
                    if ((this._outputTail + v0) > this._outputEnd) {
                        this._flushBuffer();
                    }
                    this._writeStringSegment(this._charBuffer, 0, v0);
                }
            }
            if (this._outputTail >= this._outputEnd) {
                this._flushBuffer();
            }
            byte[] v1_10 = this._outputBuffer;
            int v2_3 = this._outputTail;
            this._outputTail = (v2_3 + 1);
            v1_10[v2_3] = 34;
        } else {
            this._writeStringSegments(p7);
        }
        return;
    }

    protected final void _writePPFieldName(com.flurry.org.codehaus.jackson.SerializableString p6, boolean p7)
    {
        if (!p7) {
            this._cfgPrettyPrinter.beforeObjectEntries(this);
        } else {
            this._cfgPrettyPrinter.writeObjectEntrySeparator(this);
        }
        boolean v0 = this.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.QUOTE_FIELD_NAMES);
        if (v0) {
            if (this._outputTail >= this._outputEnd) {
                this._flushBuffer();
            }
            byte[] v1_1 = this._outputBuffer;
            int v2_1 = this._outputTail;
            this._outputTail = (v2_1 + 1);
            v1_1[v2_1] = 34;
        }
        this._writeBytes(p6.asQuotedUTF8());
        if (v0) {
            if (this._outputTail >= this._outputEnd) {
                this._flushBuffer();
            }
            byte[] v1_5 = this._outputBuffer;
            int v2_3 = this._outputTail;
            this._outputTail = (v2_3 + 1);
            v1_5[v2_3] = 34;
        }
        return;
    }

    protected final void _writePPFieldName(String p7, boolean p8)
    {
        if (!p8) {
            this._cfgPrettyPrinter.beforeObjectEntries(this);
        } else {
            this._cfgPrettyPrinter.writeObjectEntrySeparator(this);
        }
        if (!this.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.QUOTE_FIELD_NAMES)) {
            this._writeStringSegments(p7);
        } else {
            if (this._outputTail >= this._outputEnd) {
                this._flushBuffer();
            }
            byte[] v1_1 = this._outputBuffer;
            int v2_1 = this._outputTail;
            this._outputTail = (v2_1 + 1);
            v1_1[v2_1] = 34;
            int v0 = p7.length();
            if (v0 > this._charBufferLength) {
                this._writeStringSegments(p7);
            } else {
                p7.getChars(0, v0, this._charBuffer, 0);
                if (v0 > this._outputMaxContiguous) {
                    this._writeStringSegments(this._charBuffer, 0, v0);
                } else {
                    if ((this._outputTail + v0) > this._outputEnd) {
                        this._flushBuffer();
                    }
                    this._writeStringSegment(this._charBuffer, 0, v0);
                }
            }
            if (this._outputTail >= this._outputEnd) {
                this._flushBuffer();
            }
            byte[] v1_11 = this._outputBuffer;
            int v2_4 = this._outputTail;
            this._outputTail = (v2_4 + 1);
            v1_11[v2_4] = 34;
        }
        return;
    }

    public void close()
    {
        super.close();
        if ((this._outputBuffer != null) && (this.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.AUTO_CLOSE_JSON_CONTENT))) {
            while(true) {
                com.flurry.org.codehaus.jackson.impl.JsonWriteContext v0 = this.getOutputContext();
                if (!v0.inArray()) {
                    if (!v0.inObject()) {
                        break;
                    }
                    this.writeEndObject();
                } else {
                    this.writeEndArray();
                }
            }
        }
        this._flushBuffer();
        if (this._outputStream != null) {
            if ((!this._ioContext.isResourceManaged()) && (!this.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.AUTO_CLOSE_TARGET))) {
                if (this.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.FLUSH_PASSED_TO_STREAM)) {
                    this._outputStream.flush();
                }
            } else {
                this._outputStream.close();
            }
        }
        this._releaseBuffers();
        return;
    }

    public final void flush()
    {
        this._flushBuffer();
        if ((this._outputStream != null) && (this.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.FLUSH_PASSED_TO_STREAM))) {
            this._outputStream.flush();
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.io.CharacterEscapes getCharacterEscapes()
    {
        return this._characterEscapes;
    }

    public int getHighestEscapedChar()
    {
        return this._maximumNonEscapedChar;
    }

    public Object getOutputTarget()
    {
        return this._outputStream;
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator setCharacterEscapes(com.flurry.org.codehaus.jackson.io.CharacterEscapes p2)
    {
        this._characterEscapes = p2;
        if (p2 != null) {
            this._outputEscapes = p2.getEscapeCodesForAscii();
        } else {
            this._outputEscapes = com.flurry.org.codehaus.jackson.impl.Utf8Generator.sOutputEscapes;
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator setHighestNonEscapedChar(int p1)
    {
        if (p1 < 0) {
            p1 = 0;
        }
        this._maximumNonEscapedChar = p1;
        return this;
    }

    public void writeBinary(com.flurry.org.codehaus.jackson.Base64Variant p5, byte[] p6, int p7, int p8)
    {
        this._verifyValueWrite("write binary value");
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0_5 = this._outputBuffer;
        int v1_3 = this._outputTail;
        this._outputTail = (v1_3 + 1);
        v0_5[v1_3] = 34;
        this._writeBinary(p5, p6, p7, (p7 + p8));
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0_3 = this._outputBuffer;
        int v1_1 = this._outputTail;
        this._outputTail = (v1_1 + 1);
        v0_3[v1_1] = 34;
        return;
    }

    public void writeBoolean(boolean p6)
    {
        this._verifyValueWrite("write boolean value");
        if ((this._outputTail + 5) >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0;
        if (!p6) {
            v0 = com.flurry.org.codehaus.jackson.impl.Utf8Generator.FALSE_BYTES;
        } else {
            v0 = com.flurry.org.codehaus.jackson.impl.Utf8Generator.TRUE_BYTES;
        }
        int v1 = v0.length;
        System.arraycopy(v0, 0, this._outputBuffer, this._outputTail, v1);
        this._outputTail = (this._outputTail + v1);
        return;
    }

    public final void writeEndArray()
    {
        if (!this._writeContext.inArray()) {
            this._reportError(new StringBuilder().append("Current context not an ARRAY but ").append(this._writeContext.getTypeDesc()).toString());
        }
        if (this._cfgPrettyPrinter == null) {
            if (this._outputTail >= this._outputEnd) {
                this._flushBuffer();
            }
            byte[] v0_6 = this._outputBuffer;
            int v1_2 = this._outputTail;
            this._outputTail = (v1_2 + 1);
            v0_6[v1_2] = 93;
        } else {
            this._cfgPrettyPrinter.writeEndArray(this, this._writeContext.getEntryCount());
        }
        this._writeContext = this._writeContext.getParent();
        return;
    }

    public final void writeEndObject()
    {
        if (!this._writeContext.inObject()) {
            this._reportError(new StringBuilder().append("Current context not an object but ").append(this._writeContext.getTypeDesc()).toString());
        }
        this._writeContext = this._writeContext.getParent();
        if (this._cfgPrettyPrinter == null) {
            if (this._outputTail >= this._outputEnd) {
                this._flushBuffer();
            }
            byte[] v0_8 = this._outputBuffer;
            int v1_2 = this._outputTail;
            this._outputTail = (v1_2 + 1);
            v0_8[v1_2] = 125;
        } else {
            this._cfgPrettyPrinter.writeEndObject(this, this._writeContext.getEntryCount());
        }
        return;
    }

    public final void writeFieldName(com.flurry.org.codehaus.jackson.SerializableString p5)
    {
        byte[] v1_0 = 1;
        int v0 = this._writeContext.writeFieldName(p5.getValue());
        if (v0 == 4) {
            this._reportError("Can not write a field name, expecting a value");
        }
        if (this._cfgPrettyPrinter == null) {
            if (v0 == 1) {
                if (this._outputTail >= this._outputEnd) {
                    this._flushBuffer();
                }
                byte[] v1_2 = this._outputBuffer;
                int v2_3 = this._outputTail;
                this._outputTail = (v2_3 + 1);
                v1_2[v2_3] = 44;
            }
            this._writeFieldName(p5);
        } else {
            if (v0 != 1) {
                v1_0 = 0;
            }
            this._writePPFieldName(p5, v1_0);
        }
        return;
    }

    public final void writeFieldName(com.flurry.org.codehaus.jackson.io.SerializedString p5)
    {
        byte[] v1_0 = 1;
        int v0 = this._writeContext.writeFieldName(p5.getValue());
        if (v0 == 4) {
            this._reportError("Can not write a field name, expecting a value");
        }
        if (this._cfgPrettyPrinter == null) {
            if (v0 == 1) {
                if (this._outputTail >= this._outputEnd) {
                    this._flushBuffer();
                }
                byte[] v1_2 = this._outputBuffer;
                int v2_3 = this._outputTail;
                this._outputTail = (v2_3 + 1);
                v1_2[v2_3] = 44;
            }
            this._writeFieldName(p5);
        } else {
            if (v0 != 1) {
                v1_0 = 0;
            }
            this._writePPFieldName(p5, v1_0);
        }
        return;
    }

    public final void writeFieldName(String p5)
    {
        byte[] v1_0 = 1;
        int v0 = this._writeContext.writeFieldName(p5);
        if (v0 == 4) {
            this._reportError("Can not write a field name, expecting a value");
        }
        if (this._cfgPrettyPrinter == null) {
            if (v0 == 1) {
                if (this._outputTail >= this._outputEnd) {
                    this._flushBuffer();
                }
                byte[] v1_2 = this._outputBuffer;
                int v2_2 = this._outputTail;
                this._outputTail = (v2_2 + 1);
                v1_2[v2_2] = 44;
            }
            this._writeFieldName(p5);
        } else {
            if (v0 != 1) {
                v1_0 = 0;
            }
            this._writePPFieldName(p5, v1_0);
        }
        return;
    }

    public void writeNull()
    {
        this._verifyValueWrite("write null value");
        this._writeNull();
        return;
    }

    public void writeNumber(double p2)
    {
        if ((!this._cfgNumbersAsStrings) && (((!Double.isNaN(p2)) && (!Double.isInfinite(p2))) || (!this.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.QUOTE_NON_NUMERIC_NUMBERS)))) {
            this._verifyValueWrite("write number");
            this.writeRaw(String.valueOf(p2));
        } else {
            this.writeString(String.valueOf(p2));
        }
        return;
    }

    public void writeNumber(float p2)
    {
        if ((!this._cfgNumbersAsStrings) && (((!Float.isNaN(p2)) && (!Float.isInfinite(p2))) || (!this.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.QUOTE_NON_NUMERIC_NUMBERS)))) {
            this._verifyValueWrite("write number");
            this.writeRaw(String.valueOf(p2));
        } else {
            this.writeString(String.valueOf(p2));
        }
        return;
    }

    public void writeNumber(int p3)
    {
        this._verifyValueWrite("write number");
        if ((this._outputTail + 11) >= this._outputEnd) {
            this._flushBuffer();
        }
        if (!this._cfgNumbersAsStrings) {
            this._outputTail = com.flurry.org.codehaus.jackson.io.NumberOutput.outputInt(p3, this._outputBuffer, this._outputTail);
        } else {
            this._writeQuotedInt(p3);
        }
        return;
    }

    public void writeNumber(long p3)
    {
        this._verifyValueWrite("write number");
        if (!this._cfgNumbersAsStrings) {
            if ((this._outputTail + 21) >= this._outputEnd) {
                this._flushBuffer();
            }
            this._outputTail = com.flurry.org.codehaus.jackson.io.NumberOutput.outputLong(p3, this._outputBuffer, this._outputTail);
        } else {
            this._writeQuotedLong(p3);
        }
        return;
    }

    public void writeNumber(String p2)
    {
        this._verifyValueWrite("write number");
        if (!this._cfgNumbersAsStrings) {
            this.writeRaw(p2);
        } else {
            this._writeQuotedRaw(p2);
        }
        return;
    }

    public void writeNumber(java.math.BigDecimal p2)
    {
        this._verifyValueWrite("write number");
        if (p2 != null) {
            if (!this._cfgNumbersAsStrings) {
                this.writeRaw(p2.toString());
            } else {
                this._writeQuotedRaw(p2);
            }
        } else {
            this._writeNull();
        }
        return;
    }

    public void writeNumber(java.math.BigInteger p2)
    {
        this._verifyValueWrite("write number");
        if (p2 != null) {
            if (!this._cfgNumbersAsStrings) {
                this.writeRaw(p2.toString());
            } else {
                this._writeQuotedRaw(p2);
            }
        } else {
            this._writeNull();
        }
        return;
    }

    public void writeRaw(char p5)
    {
        if ((this._outputTail + 3) >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0 = this._outputBuffer;
        if (p5 > 127) {
            if (p5 >= 2048) {
                this._outputRawMultiByteChar(p5, 0, 0, 0);
            } else {
                int v1_2 = this._outputTail;
                this._outputTail = (v1_2 + 1);
                v0[v1_2] = ((byte) ((p5 >> 6) | 192));
                int v1_4 = this._outputTail;
                this._outputTail = (v1_4 + 1);
                v0[v1_4] = ((byte) ((p5 & 63) | 128));
            }
        } else {
            int v1_5 = this._outputTail;
            this._outputTail = (v1_5 + 1);
            v0[v1_5] = ((byte) p5);
        }
        return;
    }

    public void writeRaw(String p8)
    {
        int v4 = 0;
        int v2 = p8.length();
        while (v2 > 0) {
            int v3;
            char[] v1 = this._charBuffer;
            int v0 = v1.length;
            if (v2 >= v0) {
                v3 = v0;
            } else {
                v3 = v2;
            }
            p8.getChars(v4, (v4 + v3), v1, 0);
            this.writeRaw(v1, 0, v3);
            v4 += v3;
            v2 -= v3;
        }
        return;
    }

    public void writeRaw(String p6, int p7, int p8)
    {
        while (p8 > 0) {
            int v2;
            char[] v1 = this._charBuffer;
            int v0 = v1.length;
            if (p8 >= v0) {
                v2 = v0;
            } else {
                v2 = p8;
            }
            p6.getChars(p7, (p7 + v2), v1, 0);
            this.writeRaw(v1, 0, v2);
            p7 += v2;
            p8 -= v2;
        }
        return;
    }

    public final void writeRaw(char[] p7, int p8, int p9)
    {
        int v1 = ((p9 + p9) + p9);
        if ((this._outputTail + v1) <= this._outputEnd) {
            int v9_1 = (p9 + p8);
            while (p8 < v9_1) {
                do {
                    char v0_0 = p7[p8];
                    if (v0_0 <= 127) {
                        byte[] v3_2 = this._outputBuffer;
                        int v4_0 = this._outputTail;
                        this._outputTail = (v4_0 + 1);
                        v3_2[v4_0] = ((byte) v0_0);
                        p8++;
                    } else {
                        int v2 = (p8 + 1);
                        char v0_1 = p7[p8];
                        if (v0_1 >= 2048) {
                            this._outputRawMultiByteChar(v0_1, p7, v2, v9_1);
                        } else {
                            byte[] v3_5 = this._outputBuffer;
                            int v4_1 = this._outputTail;
                            this._outputTail = (v4_1 + 1);
                            v3_5[v4_1] = ((byte) ((v0_1 >> 6) | 192));
                            byte[] v3_7 = this._outputBuffer;
                            int v4_2 = this._outputTail;
                            this._outputTail = (v4_2 + 1);
                            v3_7[v4_2] = ((byte) ((v0_1 & 63) | 128));
                        }
                        p8 = v2;
                    }
                } while(p8 < v9_1);
            }
        } else {
            if (this._outputEnd >= v1) {
                this._flushBuffer();
            } else {
                this._writeSegmentedRaw(p7, p8, p9);
            }
        }
        return;
    }

    public void writeRawUTF8String(byte[] p5, int p6, int p7)
    {
        this._verifyValueWrite("write text value");
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0_4 = this._outputBuffer;
        int v1_3 = this._outputTail;
        this._outputTail = (v1_3 + 1);
        v0_4[v1_3] = 34;
        this._writeBytes(p5, p6, p7);
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0_2 = this._outputBuffer;
        int v1_1 = this._outputTail;
        this._outputTail = (v1_1 + 1);
        v0_2[v1_1] = 34;
        return;
    }

    public final void writeStartArray()
    {
        this._verifyValueWrite("start an array");
        this._writeContext = this._writeContext.createChildArrayContext();
        if (this._cfgPrettyPrinter == null) {
            if (this._outputTail >= this._outputEnd) {
                this._flushBuffer();
            }
            byte[] v0_1 = this._outputBuffer;
            int v1_0 = this._outputTail;
            this._outputTail = (v1_0 + 1);
            v0_1[v1_0] = 91;
        } else {
            this._cfgPrettyPrinter.writeStartArray(this);
        }
        return;
    }

    public final void writeStartObject()
    {
        this._verifyValueWrite("start an object");
        this._writeContext = this._writeContext.createChildObjectContext();
        if (this._cfgPrettyPrinter == null) {
            if (this._outputTail >= this._outputEnd) {
                this._flushBuffer();
            }
            byte[] v0_1 = this._outputBuffer;
            int v1_0 = this._outputTail;
            this._outputTail = (v1_0 + 1);
            v0_1[v1_0] = 123;
        } else {
            this._cfgPrettyPrinter.writeStartObject(this);
        }
        return;
    }

    public final void writeString(com.flurry.org.codehaus.jackson.SerializableString p5)
    {
        this._verifyValueWrite("write text value");
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0_5 = this._outputBuffer;
        int v1_3 = this._outputTail;
        this._outputTail = (v1_3 + 1);
        v0_5[v1_3] = 34;
        this._writeBytes(p5.asQuotedUTF8());
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0_3 = this._outputBuffer;
        int v1_1 = this._outputTail;
        this._outputTail = (v1_1 + 1);
        v0_3[v1_1] = 34;
        return;
    }

    public void writeString(String p7)
    {
        this._verifyValueWrite("write text value");
        if (p7 != null) {
            int v0 = p7.length();
            if (v0 <= this._charBufferLength) {
                p7.getChars(0, v0, this._charBuffer, 0);
                if (v0 <= this._outputMaxContiguous) {
                    if ((this._outputTail + v0) >= this._outputEnd) {
                        this._flushBuffer();
                    }
                    byte[] v1_3 = this._outputBuffer;
                    int v2_1 = this._outputTail;
                    this._outputTail = (v2_1 + 1);
                    v1_3[v2_1] = 34;
                    this._writeStringSegment(this._charBuffer, 0, v0);
                    if (this._outputTail >= this._outputEnd) {
                        this._flushBuffer();
                    }
                    byte[] v1_7 = this._outputBuffer;
                    int v2_3 = this._outputTail;
                    this._outputTail = (v2_3 + 1);
                    v1_7[v2_3] = 34;
                } else {
                    this._writeLongString(this._charBuffer, 0, v0);
                }
            } else {
                this._writeLongString(p7);
            }
        } else {
            this._writeNull();
        }
        return;
    }

    public void writeString(char[] p5, int p6, int p7)
    {
        this._verifyValueWrite("write text value");
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0_7 = this._outputBuffer;
        int v1_4 = this._outputTail;
        this._outputTail = (v1_4 + 1);
        v0_7[v1_4] = 34;
        if (p7 > this._outputMaxContiguous) {
            this._writeStringSegments(p5, p6, p7);
        } else {
            if ((this._outputTail + p7) > this._outputEnd) {
                this._flushBuffer();
            }
            this._writeStringSegment(p5, p6, p7);
        }
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0_5 = this._outputBuffer;
        int v1_2 = this._outputTail;
        this._outputTail = (v1_2 + 1);
        v0_5[v1_2] = 34;
        return;
    }

    public final void writeStringField(String p1, String p2)
    {
        this.writeFieldName(p1);
        this.writeString(p2);
        return;
    }

    public void writeUTF8String(byte[] p5, int p6, int p7)
    {
        this._verifyValueWrite("write text value");
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0_5 = this._outputBuffer;
        int v1_3 = this._outputTail;
        this._outputTail = (v1_3 + 1);
        v0_5[v1_3] = 34;
        if (p7 > this._outputMaxContiguous) {
            this._writeUTF8Segments(p5, p6, p7);
        } else {
            this._writeUTF8Segment(p5, p6, p7);
        }
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        byte[] v0_3 = this._outputBuffer;
        int v1_1 = this._outputTail;
        this._outputTail = (v1_1 + 1);
        v0_3[v1_1] = 34;
        return;
    }
}
