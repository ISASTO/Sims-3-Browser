package com.flurry.org.codehaus.jackson.io;
public final class JsonStringEncoder {
    private static final byte[] HEX_BYTES = None;
    private static final char[] HEX_CHARS = None;
    private static final int INT_0 = 48;
    private static final int INT_BACKSLASH = 92;
    private static final int INT_U = 117;
    private static final int SURR1_FIRST = 55296;
    private static final int SURR1_LAST = 56319;
    private static final int SURR2_FIRST = 56320;
    private static final int SURR2_LAST = 57343;
    protected static final ThreadLocal _threadEncoder;
    protected com.flurry.org.codehaus.jackson.util.ByteArrayBuilder _byteBuilder;
    protected final char[] _quoteBuffer;
    protected com.flurry.org.codehaus.jackson.util.TextBuffer _textBuffer;

    static JsonStringEncoder()
    {
        com.flurry.org.codehaus.jackson.io.JsonStringEncoder.HEX_CHARS = com.flurry.org.codehaus.jackson.util.CharTypes.copyHexChars();
        com.flurry.org.codehaus.jackson.io.JsonStringEncoder.HEX_BYTES = com.flurry.org.codehaus.jackson.util.CharTypes.copyHexBytes();
        com.flurry.org.codehaus.jackson.io.JsonStringEncoder._threadEncoder = new ThreadLocal();
        return;
    }

    public JsonStringEncoder()
    {
        char[] v0_2 = new char[6];
        this._quoteBuffer = v0_2;
        this._quoteBuffer[0] = 92;
        this._quoteBuffer[2] = 48;
        this._quoteBuffer[3] = 48;
        return;
    }

    private int _appendByteEscape(int p4, int p5, com.flurry.org.codehaus.jackson.util.ByteArrayBuilder p6, int p7)
    {
        p6.setCurrentSegmentLength(p7);
        p6.append(92);
        if (p5 >= 0) {
            p6.append(((byte) p5));
        } else {
            p6.append(117);
            if (p4 <= 255) {
                p6.append(48);
                p6.append(48);
            } else {
                int v0 = (p4 >> 8);
                p6.append(com.flurry.org.codehaus.jackson.io.JsonStringEncoder.HEX_BYTES[(v0 >> 4)]);
                p6.append(com.flurry.org.codehaus.jackson.io.JsonStringEncoder.HEX_BYTES[(v0 & 15)]);
                p4 &= 255;
            }
            p6.append(com.flurry.org.codehaus.jackson.io.JsonStringEncoder.HEX_BYTES[(p4 >> 4)]);
            p6.append(com.flurry.org.codehaus.jackson.io.JsonStringEncoder.HEX_BYTES[(p4 & 15)]);
        }
        return p6.getCurrentSegmentLength();
    }

    private int _appendSingleEscape(int p5, char[] p6)
    {
        int v1_1;
        if (p5 >= 0) {
            p6[1] = ((char) p5);
            v1_1 = 2;
        } else {
            int v0 = (- (p5 + 1));
            p6[1] = 117;
            p6[4] = com.flurry.org.codehaus.jackson.io.JsonStringEncoder.HEX_CHARS[(v0 >> 4)];
            p6[5] = com.flurry.org.codehaus.jackson.io.JsonStringEncoder.HEX_CHARS[(v0 & 15)];
            v1_1 = 6;
        }
        return v1_1;
    }

    private int _convertSurrogate(int p4, int p5)
    {
        if ((p5 >= 56320) && (p5 <= 57343)) {
            return ((65536 + ((p4 - 55296) << 10)) + (p5 - 56320));
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("Broken surrogate pair: first char 0x").append(Integer.toHexString(p4)).append(", second 0x").append(Integer.toHexString(p5)).append("; illegal combination").toString());
        }
    }

    private void _throwIllegalSurrogate(int p4)
    {
        if (p4 <= 1114111) {
            if (p4 < 55296) {
                throw new IllegalArgumentException(new StringBuilder().append("Illegal character point (0x").append(Integer.toHexString(p4)).append(") to output").toString());
            } else {
                if (p4 > 56319) {
                    throw new IllegalArgumentException(new StringBuilder().append("Unmatched second part of surrogate pair (0x").append(Integer.toHexString(p4)).append(")").toString());
                } else {
                    throw new IllegalArgumentException(new StringBuilder().append("Unmatched first part of surrogate pair (0x").append(Integer.toHexString(p4)).append(")").toString());
                }
            }
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("Illegal character point (0x").append(Integer.toHexString(p4)).append(") to output; max is 0x10FFFF as per RFC 4627").toString());
        }
    }

    public static com.flurry.org.codehaus.jackson.io.JsonStringEncoder getInstance()
    {
        com.flurry.org.codehaus.jackson.io.JsonStringEncoder v0_1;
        ref.SoftReference v1_1 = ((ref.SoftReference) com.flurry.org.codehaus.jackson.io.JsonStringEncoder._threadEncoder.get());
        if (v1_1 != null) {
            v0_1 = ((com.flurry.org.codehaus.jackson.io.JsonStringEncoder) v1_1.get());
        } else {
            v0_1 = 0;
        }
        if (v0_1 == null) {
            v0_1 = new com.flurry.org.codehaus.jackson.io.JsonStringEncoder();
            com.flurry.org.codehaus.jackson.io.JsonStringEncoder._threadEncoder.set(new ref.SoftReference(v0_1));
        }
        return v0_1;
    }

    public byte[] encodeAsUTF8(String p11)
    {
        com.flurry.org.codehaus.jackson.util.ByteArrayBuilder v0_0 = this._byteBuilder;
        if (v0_0 == null) {
            v0_0 = new com.flurry.org.codehaus.jackson.util.ByteArrayBuilder(0);
            this._byteBuilder = v0_0;
        }
        int v2 = p11.length();
        int v7_1 = 0;
        byte[] v5 = v0_0.resetAndGetFirstSegment();
        int v6 = v5.length;
        int v4_0 = 0;
        while (v4_0 < v2) {
            int v3_2 = (v4_0 + 1);
            int v1 = p11.charAt(v4_0);
            int v4_1 = v3_2;
            while (v1 <= 127) {
                if (v7_1 >= v6) {
                    v5 = v0_0.finishCurrentSegment();
                    v6 = v5.length;
                    v7_1 = 0;
                }
                int v8_1 = (v7_1 + 1);
                v5[v7_1] = ((byte) v1);
                if (v4_1 < v2) {
                    int v3_1 = (v4_1 + 1);
                    v1 = p11.charAt(v4_1);
                    v7_1 = v8_1;
                    v4_1 = v3_1;
                } else {
                    v7_1 = v8_1;
                }
                return this._byteBuilder.completeAndCoalesce(v7_1);
            }
            int v8_2;
            if (v7_1 < v6) {
                v8_2 = v7_1;
            } else {
                v5 = v0_0.finishCurrentSegment();
                v6 = v5.length;
                v8_2 = 0;
            }
            int v3_0;
            int v7_0;
            if (v1 >= 2048) {
                if ((v1 >= 55296) && (v1 <= 57343)) {
                    if (v1 > 56319) {
                        this._throwIllegalSurrogate(v1);
                    }
                    if (v4_1 >= v2) {
                        this._throwIllegalSurrogate(v1);
                    }
                    v3_0 = (v4_1 + 1);
                    v1 = this._convertSurrogate(v1, p11.charAt(v4_1));
                    if (v1 > 1114111) {
                        this._throwIllegalSurrogate(v1);
                    }
                    int v7_3 = (v8_2 + 1);
                    v5[v8_2] = ((byte) ((v1 >> 18) | 240));
                    if (v7_3 >= v6) {
                        v5 = v0_0.finishCurrentSegment();
                        v6 = v5.length;
                        v7_3 = 0;
                    }
                    int v7_4;
                    int v8_3 = (v7_3 + 1);
                    v5[v7_3] = ((byte) (((v1 >> 12) & 63) | 128));
                    if (v8_3 < v6) {
                        v7_4 = v8_3;
                    } else {
                        v5 = v0_0.finishCurrentSegment();
                        v6 = v5.length;
                        v7_4 = 0;
                    }
                    int v8_4 = (v7_4 + 1);
                    v5[v7_4] = ((byte) (((v1 >> 6) & 63) | 128));
                    v7_0 = v8_4;
                } else {
                    int v7_5 = (v8_2 + 1);
                    v5[v8_2] = ((byte) ((v1 >> 12) | 224));
                    if (v7_5 >= v6) {
                        v5 = v0_0.finishCurrentSegment();
                        v6 = v5.length;
                        v7_5 = 0;
                    }
                    int v8_5 = (v7_5 + 1);
                    v5[v7_5] = ((byte) (((v1 >> 6) & 63) | 128));
                    v7_0 = v8_5;
                    v3_0 = v4_1;
                }
            } else {
                v7_0 = (v8_2 + 1);
                v5[v8_2] = ((byte) ((v1 >> 6) | 192));
                v3_0 = v4_1;
            }
            if (v7_0 >= v6) {
                v5 = v0_0.finishCurrentSegment();
                v6 = v5.length;
                v7_0 = 0;
            }
            int v8_0 = (v7_0 + 1);
            v5[v7_0] = ((byte) ((v1 & 63) | 128));
            v7_1 = v8_0;
            v4_0 = v3_0;
        }
        return this._byteBuilder.completeAndCoalesce(v7_1);
    }

    public char[] quoteAsString(String p18)
    {
        com.flurry.org.codehaus.jackson.util.TextBuffer v14_0 = this._textBuffer;
        if (v14_0 == null) {
            v14_0 = new com.flurry.org.codehaus.jackson.util.TextBuffer(0);
            this._textBuffer = v14_0;
        }
        char[] v12 = v14_0.emptyAndGetCurrentSegment();
        int[] v4 = com.flurry.org.codehaus.jackson.util.CharTypes.get7BitOutputEscapes();
        int v3 = v4.length;
        int v6 = 0;
        int v8 = p18.length();
        int v10 = 0;
        while (v6 < v8) {
            while(true) {
                char v1 = p18.charAt(v6);
                if ((v1 < v3) && (v4[v1] != 0)) {
                    break;
                }
                if (v10 >= v12.length) {
                    v12 = v14_0.finishCurrentSegment();
                    v10 = 0;
                }
                int v11 = (v10 + 1);
                v12[v10] = v1;
                v6++;
                if (v6 < v8) {
                    v10 = v11;
                } else {
                    v10 = v11;
                }
                v14_0.setCurrentLength(v10);
                return v14_0.contentsAsArray();
            }
            int v7 = (v6 + 1);
            int v9 = this._appendSingleEscape(v4[p18.charAt(v6)], this._quoteBuffer);
            if ((v10 + v9) <= v12.length) {
                System.arraycopy(this._quoteBuffer, 0, v12, v10, v9);
                v10 += v9;
            } else {
                int v5 = (v12.length - v10);
                if (v5 > 0) {
                    System.arraycopy(this._quoteBuffer, 0, v12, v10, v5);
                }
                v12 = v14_0.finishCurrentSegment();
                int v13 = (v9 - v5);
                System.arraycopy(this._quoteBuffer, v5, v12, v10, v13);
                v10 += v13;
            }
            v6 = v7;
        }
        v14_0.setCurrentLength(v10);
        return v14_0.contentsAsArray();
    }

    public byte[] quoteAsUTF8(String p13)
    {
        com.flurry.org.codehaus.jackson.util.ByteArrayBuilder v0_0 = this._byteBuilder;
        if (v0_0 == null) {
            v0_0 = new com.flurry.org.codehaus.jackson.util.ByteArrayBuilder(0);
            this._byteBuilder = v0_0;
        }
        int v5 = 0;
        int v4 = p13.length();
        int v8_0 = 0;
        byte[] v7 = v0_0.resetAndGetFirstSegment();
        while (v5 < v4) {
            int[] v2 = com.flurry.org.codehaus.jackson.util.CharTypes.get7BitOutputEscapes();
            while(true) {
                int v1_1 = p13.charAt(v5);
                if ((v1_1 <= 127) && (v2[v1_1] == 0)) {
                    if (v8_0 >= v7.length) {
                        v7 = v0_0.finishCurrentSegment();
                        v8_0 = 0;
                    }
                    int v9_3 = (v8_0 + 1);
                    v7[v8_0] = ((byte) v1_1);
                    v5++;
                    if (v5 >= v4) {
                        break;
                    }
                    v8_0 = v9_3;
                } else {
                    if (v8_0 >= v7.length) {
                        v7 = v0_0.finishCurrentSegment();
                        v8_0 = 0;
                    }
                    int v6 = (v5 + 1);
                    int v1_2 = p13.charAt(v5);
                    if (v1_2 > 127) {
                        int v1_0;
                        int v8_2;
                        if (v1_2 > 2047) {
                            if ((v1_2 >= 55296) && (v1_2 <= 57343)) {
                                if (v1_2 > 56319) {
                                    this._throwIllegalSurrogate(v1_2);
                                }
                                if (v6 >= v4) {
                                    this._throwIllegalSurrogate(v1_2);
                                }
                                v5 = (v6 + 1);
                                int v1_3 = this._convertSurrogate(v1_2, p13.charAt(v6));
                                if (v1_3 > 1114111) {
                                    this._throwIllegalSurrogate(v1_3);
                                }
                                int v8_3;
                                int v9_4 = (v8_0 + 1);
                                v7[v8_0] = ((byte) ((v1_3 >> 18) | 240));
                                if (v9_4 < v7.length) {
                                    v8_3 = v9_4;
                                } else {
                                    v7 = v0_0.finishCurrentSegment();
                                    v8_3 = 0;
                                }
                                int v8_4;
                                int v9_5 = (v8_3 + 1);
                                v7[v8_3] = ((byte) (((v1_3 >> 12) & 63) | 128));
                                if (v9_5 < v7.length) {
                                    v8_4 = v9_5;
                                } else {
                                    v7 = v0_0.finishCurrentSegment();
                                    v8_4 = 0;
                                }
                                int v9_6 = (v8_4 + 1);
                                v7[v8_4] = ((byte) (((v1_3 >> 6) & 63) | 128));
                                v1_0 = ((v1_3 & 63) | 128);
                                v8_2 = v9_6;
                            } else {
                                int v8_1;
                                int v9_7 = (v8_0 + 1);
                                v7[v8_0] = ((byte) ((v1_2 >> 12) | 224));
                                if (v9_7 < v7.length) {
                                    v8_1 = v9_7;
                                } else {
                                    v7 = v0_0.finishCurrentSegment();
                                    v8_1 = 0;
                                }
                                int v9_0 = (v8_1 + 1);
                                v7[v8_1] = ((byte) (((v1_2 >> 6) & 63) | 128));
                                v1_0 = ((v1_2 & 63) | 128);
                                v8_2 = v9_0;
                                v5 = v6;
                            }
                        } else {
                            int v9_1 = (v8_0 + 1);
                            v7[v8_0] = ((byte) ((v1_2 >> 6) | 192));
                            v1_0 = ((v1_2 & 63) | 128);
                            v8_2 = v9_1;
                            v5 = v6;
                        }
                        if (v8_2 >= v7.length) {
                            v7 = v0_0.finishCurrentSegment();
                            v8_2 = 0;
                        }
                        int v9_2 = (v8_2 + 1);
                        v7[v8_2] = ((byte) v1_0);
                        v8_0 = v9_2;
                    } else {
                        v8_0 = this._appendByteEscape(v1_2, v2[v1_2], v0_0, v8_0);
                        v7 = v0_0.getCurrentSegment();
                        v5 = v6;
                    }
                }
                return this._byteBuilder.completeAndCoalesce(v8_0);
            }
            v8_0 = v9_3;
            break;
        }
        return this._byteBuilder.completeAndCoalesce(v8_0);
    }
}
