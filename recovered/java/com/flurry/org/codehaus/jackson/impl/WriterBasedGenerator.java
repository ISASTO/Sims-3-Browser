package com.flurry.org.codehaus.jackson.impl;
public final class WriterBasedGenerator extends com.flurry.org.codehaus.jackson.impl.JsonGeneratorBase {
    protected static final char[] HEX_CHARS = None;
    protected static final int SHORT_WRITE = 32;
    protected static final int[] sOutputEscapes;
    protected com.flurry.org.codehaus.jackson.io.CharacterEscapes _characterEscapes;
    protected com.flurry.org.codehaus.jackson.SerializableString _currentEscape;
    protected char[] _entityBuffer;
    protected final com.flurry.org.codehaus.jackson.io.IOContext _ioContext;
    protected int _maximumNonEscapedChar;
    protected char[] _outputBuffer;
    protected int _outputEnd;
    protected int[] _outputEscapes;
    protected int _outputHead;
    protected int _outputTail;
    protected final java.io.Writer _writer;

    static WriterBasedGenerator()
    {
        com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS = com.flurry.org.codehaus.jackson.util.CharTypes.copyHexChars();
        com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.sOutputEscapes = com.flurry.org.codehaus.jackson.util.CharTypes.get7BitOutputEscapes();
        return;
    }

    public WriterBasedGenerator(com.flurry.org.codehaus.jackson.io.IOContext p3, int p4, com.flurry.org.codehaus.jackson.ObjectCodec p5, java.io.Writer p6)
    {
        super(p4, p5);
        super._outputEscapes = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.sOutputEscapes;
        super._outputHead = 0;
        super._outputTail = 0;
        super._ioContext = p3;
        super._writer = p6;
        super._outputBuffer = p3.allocConcatBuffer();
        super._outputEnd = super._outputBuffer.length;
        if (super.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.ESCAPE_NON_ASCII)) {
            super.setHighestNonEscapedChar(127);
        }
        return;
    }

    private char[] _allocateEntityBuffer()
    {
        char[] v0 = new char[14];
        v0[0] = 92;
        v0[2] = 92;
        v0[3] = 117;
        v0[4] = 48;
        v0[5] = 48;
        v0[8] = 92;
        v0[9] = 117;
        this._entityBuffer = v0;
        return v0;
    }

    private final void _appendCharacterEscape(char p11, int p12)
    {
        if (p12 < 0) {
            if (p12 == -2) {
                String v1;
                if (this._currentEscape != null) {
                    v1 = this._currentEscape.getValue();
                    this._currentEscape = 0;
                } else {
                    v1 = this._characterEscapes.getEscapeSequence(p11).getValue();
                }
                int v3 = v1.length();
                if ((this._outputTail + v3) > this._outputEnd) {
                    this._flushBuffer();
                    if (v3 > this._outputEnd) {
                        this._writer.write(v1);
                        return;
                    }
                }
                v1.getChars(0, v3, this._outputBuffer, this._outputTail);
                this._outputTail = (this._outputTail + v3);
            } else {
                if ((this._outputTail + 2) > this._outputEnd) {
                    this._flushBuffer();
                }
                int v4_2;
                int v4_0 = this._outputTail;
                char[] v0 = this._outputBuffer;
                int v5_0 = (v4_0 + 1);
                v0[v4_0] = 92;
                int v4_1 = (v5_0 + 1);
                v0[v5_0] = 117;
                if (p11 <= 255) {
                    int v5_1 = (v4_1 + 1);
                    v0[v4_1] = 48;
                    v4_2 = (v5_1 + 1);
                    v0[v5_1] = 48;
                } else {
                    int v2 = ((p11 >> 8) & 255);
                    int v5_2 = (v4_1 + 1);
                    v0[v4_1] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(v2 >> 4)];
                    v4_2 = (v5_2 + 1);
                    v0[v5_2] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(v2 & 15)];
                    p11 = ((char) (p11 & 255));
                }
                int v5_3 = (v4_2 + 1);
                v0[v4_2] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(p11 >> 4)];
                v0[v5_3] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(p11 & 15)];
                this._outputTail = v5_3;
            }
        } else {
            if ((this._outputTail + 2) > this._outputEnd) {
                this._flushBuffer();
            }
            java.io.Writer v6_29 = this._outputBuffer;
            char[] v7_8 = this._outputTail;
            this._outputTail = (v7_8 + 1);
            v6_29[v7_8] = 92;
            java.io.Writer v6_30 = this._outputBuffer;
            char[] v7_9 = this._outputTail;
            this._outputTail = (v7_9 + 1);
            v6_30[v7_9] = ((char) p12);
        }
        return;
    }

    private final int _prependOrWriteCharacterEscape(char[] p10, int p11, int p12, char p13, int p14)
    {
        int v5_1;
        if (p14 < 0) {
            if (p14 == -2) {
                String v1;
                if (this._currentEscape != null) {
                    v1 = this._currentEscape.getValue();
                    this._currentEscape = 0;
                } else {
                    v1 = this._characterEscapes.getEscapeSequence(p13).getValue();
                }
                int v3 = v1.length();
                if ((p11 < v3) || (p11 >= p12)) {
                    this._writer.write(v1);
                } else {
                    p11 -= v3;
                    v1.getChars(0, v3, p10, p11);
                }
                v5_1 = p11;
            } else {
                if ((p11 <= 5) || (p11 >= p12)) {
                    char[] v0_1 = this._entityBuffer;
                    if (v0_1 == null) {
                        v0_1 = this._allocateEntityBuffer();
                    }
                    this._outputHead = this._outputTail;
                    if (p13 <= 255) {
                        v0_1[6] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(p13 >> 4)];
                        v0_1[7] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(p13 & 15)];
                        this._writer.write(v0_1, 2, 6);
                    } else {
                        int v2_0 = ((p13 >> 8) & 255);
                        int v4 = (p13 & 255);
                        v0_1[10] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(v2_0 >> 4)];
                        v0_1[11] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(v2_0 & 15)];
                        v0_1[12] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(v4 >> 4)];
                        v0_1[13] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(v4 & 15)];
                        this._writer.write(v0_1, 8, 6);
                    }
                } else {
                    int v11_3;
                    int v11_1 = (p11 - 6);
                    int v5_2 = (v11_1 + 1);
                    p10[v11_1] = 92;
                    int v11_2 = (v5_2 + 1);
                    p10[v5_2] = 117;
                    if (p13 <= 255) {
                        int v5_3 = (v11_2 + 1);
                        p10[v11_2] = 48;
                        v11_3 = (v5_3 + 1);
                        p10[v5_3] = 48;
                    } else {
                        int v2_1 = ((p13 >> 8) & 255);
                        int v5_4 = (v11_2 + 1);
                        p10[v11_2] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(v2_1 >> 4)];
                        v11_3 = (v5_4 + 1);
                        p10[v5_4] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(v2_1 & 15)];
                        p13 = ((char) (p13 & 255));
                    }
                    int v5_0 = (v11_3 + 1);
                    p10[v11_3] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(p13 >> 4)];
                    p10[v5_0] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(p13 & 15)];
                    p11 = (v5_0 - 5);
                }
                v5_1 = p11;
            }
        } else {
            if ((p11 <= 1) || (p11 >= p12)) {
                char[] v0_0 = this._entityBuffer;
                if (v0_0 == null) {
                    v0_0 = this._allocateEntityBuffer();
                }
                v0_0[1] = ((char) p14);
                this._writer.write(v0_0, 0, 2);
            } else {
                p11 -= 2;
                p10[p11] = 92;
                p10[(p11 + 1)] = ((char) p14);
            }
            v5_1 = p11;
        }
        return v5_1;
    }

    private final void _prependOrWriteCharacterEscape(char p14, int p15)
    {
        if (p15 < 0) {
            if (p15 == -2) {
                String v1;
                if (this._currentEscape != null) {
                    v1 = this._currentEscape.getValue();
                    this._currentEscape = 0;
                } else {
                    v1 = this._characterEscapes.getEscapeSequence(p14).getValue();
                }
                int v3 = v1.length();
                if (this._outputTail < v3) {
                    this._outputHead = this._outputTail;
                    this._writer.write(v1);
                } else {
                    int v5_4 = (this._outputTail - v3);
                    this._outputHead = v5_4;
                    v1.getChars(0, v3, this._outputBuffer, v5_4);
                }
            } else {
                if (this._outputTail < 6) {
                    char[] v0_1 = this._entityBuffer;
                    if (v0_1 == null) {
                        v0_1 = this._allocateEntityBuffer();
                    }
                    this._outputHead = this._outputTail;
                    if (p14 <= 255) {
                        v0_1[6] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(p14 >> 4)];
                        v0_1[7] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(p14 & 15)];
                        this._writer.write(v0_1, 2, 6);
                    } else {
                        int v2_0 = ((p14 >> 8) & 255);
                        int v4 = (p14 & 255);
                        v0_1[10] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(v2_0 >> 4)];
                        v0_1[11] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(v2_0 & 15)];
                        v0_1[12] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(v4 >> 4)];
                        v0_1[13] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(v4 & 15)];
                        this._writer.write(v0_1, 8, 6);
                    }
                } else {
                    int v5_0;
                    char[] v0_2 = this._outputBuffer;
                    int v5_5 = (this._outputTail - 6);
                    this._outputHead = v5_5;
                    v0_2[v5_5] = 92;
                    int v5_6 = (v5_5 + 1);
                    v0_2[v5_6] = 117;
                    if (p14 <= 255) {
                        int v5_7 = (v5_6 + 1);
                        v0_2[v5_7] = 48;
                        v5_0 = (v5_7 + 1);
                        v0_2[v5_0] = 48;
                    } else {
                        int v2_1 = ((p14 >> 8) & 255);
                        int v5_8 = (v5_6 + 1);
                        v0_2[v5_8] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(v2_1 >> 4)];
                        v5_0 = (v5_8 + 1);
                        v0_2[v5_0] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(v2_1 & 15)];
                        p14 = ((char) (p14 & 255));
                    }
                    int v5_1 = (v5_0 + 1);
                    v0_2[v5_1] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(p14 >> 4)];
                    v0_2[(v5_1 + 1)] = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.HEX_CHARS[(p14 & 15)];
                }
            }
        } else {
            if (this._outputTail < 2) {
                char[] v0_0 = this._entityBuffer;
                if (v0_0 == null) {
                    v0_0 = this._allocateEntityBuffer();
                }
                this._outputHead = this._outputTail;
                v0_0[1] = ((char) p15);
                this._writer.write(v0_0, 0, 2);
            } else {
                int v5_3 = (this._outputTail - 2);
                this._outputHead = v5_3;
                int v6 = (v5_3 + 1);
                this._outputBuffer[v5_3] = 92;
                this._outputBuffer[v6] = ((char) p15);
            }
        }
        return;
    }

    private void _writeLongString(String p8)
    {
        this._flushBuffer();
        int v3 = p8.length();
        int v1 = 0;
        do {
            int v2;
            int v0 = this._outputEnd;
            if ((v1 + v0) <= v3) {
                v2 = v0;
            } else {
                v2 = (v3 - v1);
            }
            p8.getChars(v1, (v1 + v2), this._outputBuffer, 0);
            if (this._characterEscapes == null) {
                if (this._maximumNonEscapedChar == 0) {
                    this._writeSegment(v2);
                } else {
                    this._writeSegmentASCII(v2, this._maximumNonEscapedChar);
                }
            } else {
                this._writeSegmentCustom(v2);
            }
            v1 += v2;
        } while(v1 < v3);
        return;
    }

    private final void _writeNull()
    {
        if ((this._outputTail + 4) >= this._outputEnd) {
            this._flushBuffer();
        }
        int v1_3 = this._outputTail;
        char[] v0 = this._outputBuffer;
        v0[v1_3] = 110;
        int v1_0 = (v1_3 + 1);
        v0[v1_0] = 117;
        int v1_1 = (v1_0 + 1);
        v0[v1_1] = 108;
        int v1_2 = (v1_1 + 1);
        v0[v1_2] = 108;
        this._outputTail = (v1_2 + 1);
        return;
    }

    private final void _writeQuotedInt(int p5)
    {
        if ((this._outputTail + 13) >= this._outputEnd) {
            this._flushBuffer();
        }
        char[] v0_5 = this._outputBuffer;
        int v1_3 = this._outputTail;
        this._outputTail = (v1_3 + 1);
        v0_5[v1_3] = 34;
        this._outputTail = com.flurry.org.codehaus.jackson.io.NumberOutput.outputInt(p5, this._outputBuffer, this._outputTail);
        char[] v0_3 = this._outputBuffer;
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
        char[] v0_5 = this._outputBuffer;
        int v1_3 = this._outputTail;
        this._outputTail = (v1_3 + 1);
        v0_5[v1_3] = 34;
        this._outputTail = com.flurry.org.codehaus.jackson.io.NumberOutput.outputLong(p5, this._outputBuffer, this._outputTail);
        char[] v0_3 = this._outputBuffer;
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
        char[] v0_4 = this._outputBuffer;
        int v1_3 = this._outputTail;
        this._outputTail = (v1_3 + 1);
        v0_4[v1_3] = 34;
        this.writeRaw(p5.toString());
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        char[] v0_3 = this._outputBuffer;
        int v1_1 = this._outputTail;
        this._outputTail = (v1_1 + 1);
        v0_3[v1_1] = 34;
        return;
    }

    private final void _writeSegment(int p11)
    {
        int[] v6 = this._outputEscapes;
        int v7 = v6.length;
        int v2 = 0;
        int v9 = 0;
        while (v2 < p11) {
            do {
                char v4 = this._outputBuffer[v2];
                if ((v4 < v7) && (v6[v4] != 0)) {
                    break;
                }
                v2++;
            } while(v2 < p11);
            int v8 = (v2 - v9);
            if (v8 > 0) {
                this._writer.write(this._outputBuffer, v9, v8);
                if (v2 >= p11) {
                    break;
                }
            }
            v2++;
            v9 = this._prependOrWriteCharacterEscape(this._outputBuffer, v2, p11, v4, v6[v4]);
        }
        return;
    }

    private final void _writeSegmentASCII(int p11, int p12)
    {
        int[] v6 = this._outputEscapes;
        int v7 = Math.min(v6.length, (this._maximumNonEscapedChar + 1));
        int v2 = 0;
        int v5 = 0;
        int v9 = 0;
        while (v2 < p11) {
            do {
                char v4 = this._outputBuffer[v2];
                if (v4 >= v7) {
                    if (v4 <= p12) {
                        v2++;
                    } else {
                        v5 = -1;
                        break;
                    }
                } else {
                    v5 = v6[v4];
                    if (v5 != 0) {
                        break;
                    }
                }
            } while(v2 < p11);
            int v8 = (v2 - v9);
            if (v8 > 0) {
                this._writer.write(this._outputBuffer, v9, v8);
                if (v2 >= p11) {
                    break;
                }
            }
            v2++;
            v9 = this._prependOrWriteCharacterEscape(this._outputBuffer, v2, p11, v4, v5);
        }
        return;
    }

    private final void _writeSegmentCustom(int p13)
    {
        int v10;
        int[] v7 = this._outputEscapes;
        if (this._maximumNonEscapedChar >= 1) {
            v10 = this._maximumNonEscapedChar;
        } else {
            v10 = 65535;
        }
        int v8 = Math.min(v7.length, (this._maximumNonEscapedChar + 1));
        com.flurry.org.codehaus.jackson.io.CharacterEscapes v6 = this._characterEscapes;
        int v2 = 0;
        int v5 = 0;
        int v11 = 0;
        while (v2 < p13) {
            do {
                char v4 = this._outputBuffer[v2];
                if (v4 >= v8) {
                    if (v4 <= v10) {
                        com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator v0_2 = v6.getEscapeSequence(v4);
                        this._currentEscape = v0_2;
                        if (v0_2 == null) {
                            v2++;
                        } else {
                            v5 = -2;
                            break;
                        }
                    } else {
                        v5 = -1;
                        break;
                    }
                } else {
                    v5 = v7[v4];
                    if (v5 != 0) {
                        break;
                    }
                }
            } while(v2 < p13);
            int v9 = (v2 - v11);
            if (v9 > 0) {
                this._writer.write(this._outputBuffer, v11, v9);
                if (v2 >= p13) {
                    break;
                }
            }
            v2++;
            v11 = this._prependOrWriteCharacterEscape(this._outputBuffer, v2, p13, v4, v5);
        }
        return;
    }

    private void _writeString(String p5)
    {
        int v0 = p5.length();
        if (v0 <= this._outputEnd) {
            if ((this._outputTail + v0) > this._outputEnd) {
                this._flushBuffer();
            }
            p5.getChars(0, v0, this._outputBuffer, this._outputTail);
            if (this._characterEscapes == null) {
                if (this._maximumNonEscapedChar == 0) {
                    this._writeString2(v0);
                } else {
                    this._writeStringASCII(v0, this._maximumNonEscapedChar);
                }
            } else {
                this._writeStringCustom(v0);
            }
        } else {
            this._writeLongString(p5);
        }
        return;
    }

    private final void _writeString(char[] p9, int p10, int p11)
    {
        if (this._characterEscapes == null) {
            if (this._maximumNonEscapedChar == 0) {
                int v11_1 = (p11 + p10);
                int[] v1 = this._outputEscapes;
                int v2 = v1.length;
                while (p10 < v11_1) {
                    do {
                        int v4;
                        char v0_1 = p9[p10];
                        if ((v0_1 >= v2) || (v1[v0_1] == 0)) {
                            p10++;
                        } else {
                            v4 = p10;
                        }
                        int v3 = (v4 - p10);
                        if (v3 >= 32) {
                            this._flushBuffer();
                            this._writer.write(p9, p10, v3);
                        } else {
                            if ((this._outputTail + v3) > this._outputEnd) {
                                this._flushBuffer();
                            }
                            if (v3 > 0) {
                                System.arraycopy(p9, p10, this._outputBuffer, this._outputTail, v3);
                                this._outputTail = (this._outputTail + v3);
                            }
                        }
                        if (v4 < v11_1) {
                            p10 = (v4 + 1);
                            char v0_0 = p9[v4];
                            this._appendCharacterEscape(v0_0, v1[v0_0]);
                        }
                    } while(p10 < v11_1);
                    v4 = p10;
                }
            } else {
                this._writeStringASCII(p9, p10, p11, this._maximumNonEscapedChar);
            }
        } else {
            this._writeStringCustom(p9, p10, p11);
        }
        return;
    }

    private void _writeString2(int p9)
    {
        int v1 = (this._outputTail + p9);
        int[] v2 = this._outputEscapes;
        int v3 = v2.length;
        while (this._outputTail < v1) {
            do {
                char v0_1 = this._outputBuffer[this._outputTail];
                if ((v0_1 >= v3) || (v2[v0_1] == 0)) {
                    int v5_3 = (this._outputTail + 1);
                    this._outputTail = v5_3;
                } else {
                    int v4 = (this._outputTail - this._outputHead);
                    if (v4 > 0) {
                        this._writer.write(this._outputBuffer, this._outputHead, v4);
                    }
                    int v5_6 = this._outputBuffer;
                    int v6_2 = this._outputTail;
                    this._outputTail = (v6_2 + 1);
                    char v0_0 = v5_6[v6_2];
                    this._prependOrWriteCharacterEscape(v0_0, v2[v0_0]);
                }
            } while(v5_3 < v1);
        }
        return;
    }

    private void _writeStringASCII(int p10, int p11)
    {
        int v1 = (this._outputTail + p10);
        int[] v3 = this._outputEscapes;
        int v4 = Math.min(v3.length, (this._maximumNonEscapedChar + 1));
        while (this._outputTail < v1) {
            do {
                int v2;
                char v0 = this._outputBuffer[this._outputTail];
                if (v0 >= v4) {
                    if (v0 <= p11) {
                        int v6_3 = (this._outputTail + 1);
                        this._outputTail = v6_3;
                    } else {
                        v2 = -1;
                    }
                } else {
                    v2 = v3[v0];
                    if (v2 == 0) {
                    }
                }
                int v5 = (this._outputTail - this._outputHead);
                if (v5 > 0) {
                    this._writer.write(this._outputBuffer, this._outputHead, v5);
                }
                this._outputTail = (this._outputTail + 1);
                this._prependOrWriteCharacterEscape(v0, v2);
            } while(v6_3 < v1);
        }
        return;
    }

    private final void _writeStringASCII(char[] p9, int p10, int p11, int p12)
    {
        int v11_1 = (p11 + p10);
        int[] v2 = this._outputEscapes;
        int v3 = Math.min(v2.length, (p12 + 1));
        int v1 = 0;
        while (p10 < v11_1) {
            do {
                char v0 = p9[p10];
                if (v0 >= v3) {
                    if (v0 <= p12) {
                        p10++;
                    } else {
                        v1 = -1;
                        break;
                    }
                } else {
                    v1 = v2[v0];
                    if (v1 != 0) {
                        break;
                    }
                }
            } while(p10 < v11_1);
            int v4 = (p10 - p10);
            if (v4 >= 32) {
                this._flushBuffer();
                this._writer.write(p9, p10, v4);
            } else {
                if ((this._outputTail + v4) > this._outputEnd) {
                    this._flushBuffer();
                }
                if (v4 > 0) {
                    System.arraycopy(p9, p10, this._outputBuffer, this._outputTail, v4);
                    this._outputTail = (this._outputTail + v4);
                }
            }
            if (p10 >= v11_1) {
                break;
            }
            p10++;
            this._appendCharacterEscape(v0, v1);
        }
        return;
    }

    private void _writeStringCustom(int p12)
    {
        int v7;
        int v2 = (this._outputTail + p12);
        int[] v4 = this._outputEscapes;
        if (this._maximumNonEscapedChar >= 1) {
            v7 = this._maximumNonEscapedChar;
        } else {
            v7 = 65535;
        }
        int v5 = Math.min(v4.length, (v7 + 1));
        com.flurry.org.codehaus.jackson.io.CharacterEscapes v1 = this._characterEscapes;
        while (this._outputTail < v2) {
            do {
                int v3;
                char v0 = this._outputBuffer[this._outputTail];
                if (v0 >= v5) {
                    if (v0 <= v7) {
                        int v8_3 = v1.getEscapeSequence(v0);
                        this._currentEscape = v8_3;
                        if (v8_3 == 0) {
                            int v8_6 = (this._outputTail + 1);
                            this._outputTail = v8_6;
                        } else {
                            v3 = -2;
                        }
                    } else {
                        v3 = -1;
                    }
                } else {
                    v3 = v4[v0];
                    if (v3 == 0) {
                    }
                }
                int v6 = (this._outputTail - this._outputHead);
                if (v6 > 0) {
                    this._writer.write(this._outputBuffer, this._outputHead, v6);
                }
                this._outputTail = (this._outputTail + 1);
                this._prependOrWriteCharacterEscape(v0, v3);
            } while(v8_6 < v2);
        }
        return;
    }

    private final void _writeStringCustom(char[] p11, int p12, int p13)
    {
        int v5;
        int v13_1 = (p13 + p12);
        int[] v3 = this._outputEscapes;
        if (this._maximumNonEscapedChar >= 1) {
            v5 = this._maximumNonEscapedChar;
        } else {
            v5 = 65535;
        }
        int v4 = Math.min(v3.length, (v5 + 1));
        com.flurry.org.codehaus.jackson.io.CharacterEscapes v1 = this._characterEscapes;
        int v2 = 0;
        while (p12 < v13_1) {
            do {
                char v0 = p11[p12];
                if (v0 >= v4) {
                    if (v0 <= v5) {
                        int v8_0 = v1.getEscapeSequence(v0);
                        this._currentEscape = v8_0;
                        if (v8_0 == 0) {
                            p12++;
                        } else {
                            v2 = -2;
                            break;
                        }
                    } else {
                        v2 = -1;
                        break;
                    }
                } else {
                    v2 = v3[v0];
                    if (v2 != 0) {
                        break;
                    }
                }
            } while(p12 < v13_1);
            int v6 = (p12 - p12);
            if (v6 >= 32) {
                this._flushBuffer();
                this._writer.write(p11, p12, v6);
            } else {
                if ((this._outputTail + v6) > this._outputEnd) {
                    this._flushBuffer();
                }
                if (v6 > 0) {
                    System.arraycopy(p11, p12, this._outputBuffer, this._outputTail, v6);
                    this._outputTail = (this._outputTail + v6);
                }
            }
            if (p12 >= v13_1) {
                break;
            }
            p12++;
            this._appendCharacterEscape(v0, v2);
        }
        return;
    }

    private void writeRawLong(String p8)
    {
        int v3 = (this._outputEnd - this._outputTail);
        p8.getChars(0, v3, this._outputBuffer, this._outputTail);
        this._outputTail = (this._outputTail + v3);
        this._flushBuffer();
        int v2 = v3;
        int v1 = (p8.length() - v3);
        while (v1 > this._outputEnd) {
            int v0 = this._outputEnd;
            p8.getChars(v2, (v2 + v0), this._outputBuffer, 0);
            this._outputHead = 0;
            this._outputTail = v0;
            this._flushBuffer();
            v2 += v0;
            v1 -= v0;
        }
        p8.getChars(v2, (v2 + v1), this._outputBuffer, 0);
        this._outputHead = 0;
        this._outputTail = v1;
        return;
    }

    protected final void _flushBuffer()
    {
        int v0 = (this._outputTail - this._outputHead);
        if (v0 > 0) {
            int v1 = this._outputHead;
            this._outputHead = 0;
            this._outputTail = 0;
            this._writer.write(this._outputBuffer, v1, v0);
        }
        return;
    }

    protected void _releaseBuffers()
    {
        char[] v0 = this._outputBuffer;
        if (v0 != null) {
            this._outputBuffer = 0;
            this._ioContext.releaseConcatBuffer(v0);
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

    public void _writeFieldName(com.flurry.org.codehaus.jackson.SerializableString p8, boolean p9)
    {
        if (this._cfgPrettyPrinter == null) {
            if ((this._outputTail + 1) >= this._outputEnd) {
                this._flushBuffer();
            }
            if (p9) {
                char[] v2_0 = this._outputBuffer;
                int v3_0 = this._outputTail;
                this._outputTail = (v3_0 + 1);
                v2_0[v3_0] = 44;
            }
            char[] v1 = p8.asQuotedChars();
            if (this.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.QUOTE_FIELD_NAMES)) {
                char[] v2_4 = this._outputBuffer;
                int v3_1 = this._outputTail;
                this._outputTail = (v3_1 + 1);
                v2_4[v3_1] = 34;
                int v0 = v1.length;
                if (((this._outputTail + v0) + 1) < this._outputEnd) {
                    System.arraycopy(v1, 0, this._outputBuffer, this._outputTail, v0);
                    this._outputTail = (this._outputTail + v0);
                    char[] v2_11 = this._outputBuffer;
                    int v3_4 = this._outputTail;
                    this._outputTail = (v3_4 + 1);
                    v2_11[v3_4] = 34;
                } else {
                    this.writeRaw(v1, 0, v0);
                    if (this._outputTail >= this._outputEnd) {
                        this._flushBuffer();
                    }
                    char[] v2_14 = this._outputBuffer;
                    int v3_6 = this._outputTail;
                    this._outputTail = (v3_6 + 1);
                    v2_14[v3_6] = 34;
                }
            } else {
                this.writeRaw(v1, 0, v1.length);
            }
        } else {
            this._writePPFieldName(p8, p9);
        }
        return;
    }

    protected void _writeFieldName(String p5, boolean p6)
    {
        if (this._cfgPrettyPrinter == null) {
            if ((this._outputTail + 1) >= this._outputEnd) {
                this._flushBuffer();
            }
            if (p6) {
                char[] v0_8 = this._outputBuffer;
                int v1_0 = this._outputTail;
                this._outputTail = (v1_0 + 1);
                v0_8[v1_0] = 44;
            }
            if (this.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.QUOTE_FIELD_NAMES)) {
                char[] v0_3 = this._outputBuffer;
                int v1_1 = this._outputTail;
                this._outputTail = (v1_1 + 1);
                v0_3[v1_1] = 34;
                this._writeString(p5);
                if (this._outputTail >= this._outputEnd) {
                    this._flushBuffer();
                }
                char[] v0_5 = this._outputBuffer;
                int v1_3 = this._outputTail;
                this._outputTail = (v1_3 + 1);
                v0_5[v1_3] = 34;
            } else {
                this._writeString(p5);
            }
        } else {
            this._writePPFieldName(p5, p6);
        }
        return;
    }

    protected final void _writePPFieldName(com.flurry.org.codehaus.jackson.SerializableString p7, boolean p8)
    {
        if (!p8) {
            this._cfgPrettyPrinter.beforeObjectEntries(this);
        } else {
            this._cfgPrettyPrinter.writeObjectEntrySeparator(this);
        }
        char[] v0 = p7.asQuotedChars();
        if (!this.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.QUOTE_FIELD_NAMES)) {
            this.writeRaw(v0, 0, v0.length);
        } else {
            if (this._outputTail >= this._outputEnd) {
                this._flushBuffer();
            }
            char[] v1_3 = this._outputBuffer;
            int v2_1 = this._outputTail;
            this._outputTail = (v2_1 + 1);
            v1_3[v2_1] = 34;
            this.writeRaw(v0, 0, v0.length);
            if (this._outputTail >= this._outputEnd) {
                this._flushBuffer();
            }
            char[] v1_7 = this._outputBuffer;
            int v2_3 = this._outputTail;
            this._outputTail = (v2_3 + 1);
            v1_7[v2_3] = 34;
        }
        return;
    }

    protected final void _writePPFieldName(String p5, boolean p6)
    {
        if (!p6) {
            this._cfgPrettyPrinter.beforeObjectEntries(this);
        } else {
            this._cfgPrettyPrinter.writeObjectEntrySeparator(this);
        }
        if (!this.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.QUOTE_FIELD_NAMES)) {
            this._writeString(p5);
        } else {
            if (this._outputTail >= this._outputEnd) {
                this._flushBuffer();
            }
            char[] v0_1 = this._outputBuffer;
            int v1_1 = this._outputTail;
            this._outputTail = (v1_1 + 1);
            v0_1[v1_1] = 34;
            this._writeString(p5);
            if (this._outputTail >= this._outputEnd) {
                this._flushBuffer();
            }
            char[] v0_4 = this._outputBuffer;
            int v1_3 = this._outputTail;
            this._outputTail = (v1_3 + 1);
            v0_4[v1_3] = 34;
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
        if (this._writer != null) {
            if ((!this._ioContext.isResourceManaged()) && (!this.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.AUTO_CLOSE_TARGET))) {
                if (this.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.FLUSH_PASSED_TO_STREAM)) {
                    this._writer.flush();
                }
            } else {
                this._writer.close();
            }
        }
        this._releaseBuffers();
        return;
    }

    public final void flush()
    {
        this._flushBuffer();
        if ((this._writer != null) && (this.isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature.FLUSH_PASSED_TO_STREAM))) {
            this._writer.flush();
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
        return this._writer;
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator setCharacterEscapes(com.flurry.org.codehaus.jackson.io.CharacterEscapes p2)
    {
        this._characterEscapes = p2;
        if (p2 != null) {
            this._outputEscapes = p2.getEscapeCodesForAscii();
        } else {
            this._outputEscapes = com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator.sOutputEscapes;
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
        char[] v0_5 = this._outputBuffer;
        int v1_3 = this._outputTail;
        this._outputTail = (v1_3 + 1);
        v0_5[v1_3] = 34;
        this._writeBinary(p5, p6, p7, (p7 + p8));
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        char[] v0_3 = this._outputBuffer;
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
        int v1_3;
        int v1_6 = this._outputTail;
        char[] v0 = this._outputBuffer;
        if (!p6) {
            v0[v1_6] = 102;
            int v1_0 = (v1_6 + 1);
            v0[v1_0] = 97;
            int v1_1 = (v1_0 + 1);
            v0[v1_1] = 108;
            int v1_2 = (v1_1 + 1);
            v0[v1_2] = 115;
            v1_3 = (v1_2 + 1);
            v0[v1_3] = 101;
        } else {
            v0[v1_6] = 116;
            int v1_4 = (v1_6 + 1);
            v0[v1_4] = 114;
            int v1_5 = (v1_4 + 1);
            v0[v1_5] = 117;
            v1_3 = (v1_5 + 1);
            v0[v1_3] = 101;
        }
        this._outputTail = (v1_3 + 1);
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
            char[] v0_6 = this._outputBuffer;
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
            char[] v0_8 = this._outputBuffer;
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
        int v1 = 1;
        int v0 = this._writeContext.writeFieldName(p5.getValue());
        if (v0 == 4) {
            this._reportError("Can not write a field name, expecting a value");
        }
        if (v0 != 1) {
            v1 = 0;
        }
        this._writeFieldName(p5, v1);
        return;
    }

    public final void writeFieldName(com.flurry.org.codehaus.jackson.io.SerializedString p5)
    {
        int v1 = 1;
        int v0 = this._writeContext.writeFieldName(p5.getValue());
        if (v0 == 4) {
            this._reportError("Can not write a field name, expecting a value");
        }
        if (v0 != 1) {
            v1 = 0;
        }
        this._writeFieldName(p5, v1);
        return;
    }

    public final void writeFieldName(String p4)
    {
        int v1 = 1;
        int v0 = this._writeContext.writeFieldName(p4);
        if (v0 == 4) {
            this._reportError("Can not write a field name, expecting a value");
        }
        if (v0 != 1) {
            v1 = 0;
        }
        this._writeFieldName(p4, v1);
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
        if (!this._cfgNumbersAsStrings) {
            if ((this._outputTail + 11) >= this._outputEnd) {
                this._flushBuffer();
            }
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

    public void writeRaw(char p4)
    {
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        char[] v0_1 = this._outputBuffer;
        int v1_1 = this._outputTail;
        this._outputTail = (v1_1 + 1);
        v0_1[v1_1] = p4;
        return;
    }

    public void writeRaw(String p6)
    {
        int v0 = p6.length();
        int v1 = (this._outputEnd - this._outputTail);
        if (v1 == 0) {
            this._flushBuffer();
            v1 = (this._outputEnd - this._outputTail);
        }
        if (v1 < v0) {
            this.writeRawLong(p6);
        } else {
            p6.getChars(0, v0, this._outputBuffer, this._outputTail);
            this._outputTail = (this._outputTail + v0);
        }
        return;
    }

    public void writeRaw(String p5, int p6, int p7)
    {
        int v0 = (this._outputEnd - this._outputTail);
        if (v0 < p7) {
            this._flushBuffer();
            v0 = (this._outputEnd - this._outputTail);
        }
        if (v0 < p7) {
            this.writeRawLong(p5.substring(p6, (p6 + p7)));
        } else {
            p5.getChars(p6, (p6 + p7), this._outputBuffer, this._outputTail);
            this._outputTail = (this._outputTail + p7);
        }
        return;
    }

    public void writeRaw(char[] p4, int p5, int p6)
    {
        if (p6 >= 32) {
            this._flushBuffer();
            this._writer.write(p4, p5, p6);
        } else {
            if (p6 > (this._outputEnd - this._outputTail)) {
                this._flushBuffer();
            }
            System.arraycopy(p4, p5, this._outputBuffer, this._outputTail, p6);
            this._outputTail = (this._outputTail + p6);
        }
        return;
    }

    public void writeRawUTF8String(byte[] p1, int p2, int p3)
    {
        this._reportUnsupportedOperation();
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
            char[] v0_1 = this._outputBuffer;
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
            char[] v0_1 = this._outputBuffer;
            int v1_0 = this._outputTail;
            this._outputTail = (v1_0 + 1);
            v0_1[v1_0] = 123;
        } else {
            this._cfgPrettyPrinter.writeStartObject(this);
        }
        return;
    }

    public final void writeString(com.flurry.org.codehaus.jackson.SerializableString p9)
    {
        this._verifyValueWrite("write text value");
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        char[] v3_10 = this._outputBuffer;
        int v4_5 = this._outputTail;
        this._outputTail = (v4_5 + 1);
        v3_10[v4_5] = 34;
        char[] v2 = p9.asQuotedChars();
        int v0 = v2.length;
        if (v0 >= 32) {
            this._flushBuffer();
            this._writer.write(v2, 0, v0);
        } else {
            if (v0 > (this._outputEnd - this._outputTail)) {
                this._flushBuffer();
            }
            System.arraycopy(v2, 0, this._outputBuffer, this._outputTail, v0);
            this._outputTail = (this._outputTail + v0);
        }
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        char[] v3_8 = this._outputBuffer;
        int v4_3 = this._outputTail;
        this._outputTail = (v4_3 + 1);
        v3_8[v4_3] = 34;
        return;
    }

    public void writeString(String p5)
    {
        this._verifyValueWrite("write text value");
        if (p5 != null) {
            if (this._outputTail >= this._outputEnd) {
                this._flushBuffer();
            }
            char[] v0_4 = this._outputBuffer;
            int v1_3 = this._outputTail;
            this._outputTail = (v1_3 + 1);
            v0_4[v1_3] = 34;
            this._writeString(p5);
            if (this._outputTail >= this._outputEnd) {
                this._flushBuffer();
            }
            char[] v0_2 = this._outputBuffer;
            int v1_1 = this._outputTail;
            this._outputTail = (v1_1 + 1);
            v0_2[v1_1] = 34;
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
        char[] v0_4 = this._outputBuffer;
        int v1_3 = this._outputTail;
        this._outputTail = (v1_3 + 1);
        v0_4[v1_3] = 34;
        this._writeString(p5, p6, p7);
        if (this._outputTail >= this._outputEnd) {
            this._flushBuffer();
        }
        char[] v0_2 = this._outputBuffer;
        int v1_1 = this._outputTail;
        this._outputTail = (v1_1 + 1);
        v0_2[v1_1] = 34;
        return;
    }

    public final void writeStringField(String p1, String p2)
    {
        this.writeFieldName(p1);
        this.writeString(p2);
        return;
    }

    public void writeUTF8String(byte[] p1, int p2, int p3)
    {
        this._reportUnsupportedOperation();
        return;
    }
}
