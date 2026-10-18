package com.flurry.org.codehaus.jackson.impl;
public final class Utf8StreamParser extends com.flurry.org.codehaus.jackson.impl.JsonParserBase {
    static final byte BYTE_LF = 0xa;
    private static final int[] sInputCodesLatin1;
    private static final int[] sInputCodesUtf8;
    protected boolean _bufferRecyclable;
    protected byte[] _inputBuffer;
    protected java.io.InputStream _inputStream;
    protected com.flurry.org.codehaus.jackson.ObjectCodec _objectCodec;
    private int _quad1;
    protected int[] _quadBuffer;
    protected final com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer _symbols;
    protected boolean _tokenIncomplete;

    static Utf8StreamParser()
    {
        com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.sInputCodesUtf8 = com.flurry.org.codehaus.jackson.util.CharTypes.getInputCodeUtf8();
        com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.sInputCodesLatin1 = com.flurry.org.codehaus.jackson.util.CharTypes.getInputCodeLatin1();
        return;
    }

    public Utf8StreamParser(com.flurry.org.codehaus.jackson.io.IOContext p2, int p3, java.io.InputStream p4, com.flurry.org.codehaus.jackson.ObjectCodec p5, com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer p6, byte[] p7, int p8, int p9, boolean p10)
    {
        super(p2, p3);
        boolean v0_3 = new int[16];
        super._quadBuffer = v0_3;
        super._tokenIncomplete = 0;
        super._inputStream = p4;
        super._objectCodec = p5;
        super._symbols = p6;
        super._inputBuffer = p7;
        super._inputPtr = p8;
        super._inputEnd = p9;
        super._bufferRecyclable = p10;
        if (!com.flurry.org.codehaus.jackson.JsonParser$Feature.CANONICALIZE_FIELD_NAMES.enabledIn(p3)) {
            super._throwInternal();
        }
        return;
    }

    private final int _decodeUtf8_2(int p5)
    {
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        int v1_5 = this._inputBuffer;
        int v2_4 = this._inputPtr;
        this._inputPtr = (v2_4 + 1);
        byte v0 = v1_5[v2_4];
        if ((v0 & 192) != 128) {
            this._reportInvalidOther((v0 & 255), this._inputPtr);
        }
        return (((p5 & 31) << 6) | (v0 & 63));
    }

    private final int _decodeUtf8_3(int p7)
    {
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        int v7_1 = (p7 & 15);
        int v2_9 = this._inputBuffer;
        int v3_7 = this._inputPtr;
        this._inputPtr = (v3_7 + 1);
        byte v1_0 = v2_9[v3_7];
        if ((v1_0 & 192) != 128) {
            this._reportInvalidOther((v1_0 & 255), this._inputPtr);
        }
        int v0_0 = ((v7_1 << 6) | (v1_0 & 63));
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        int v2_5 = this._inputBuffer;
        int v3_4 = this._inputPtr;
        this._inputPtr = (v3_4 + 1);
        byte v1_1 = v2_5[v3_4];
        if ((v1_1 & 192) != 128) {
            this._reportInvalidOther((v1_1 & 255), this._inputPtr);
        }
        return ((v0_0 << 6) | (v1_1 & 63));
    }

    private final int _decodeUtf8_3fast(int p7)
    {
        int v7_1 = (p7 & 15);
        int v2_2 = this._inputBuffer;
        int v3_5 = this._inputPtr;
        this._inputPtr = (v3_5 + 1);
        byte v1_1 = v2_2[v3_5];
        if ((v1_1 & 192) != 128) {
            this._reportInvalidOther((v1_1 & 255), this._inputPtr);
        }
        int v0_0 = ((v7_1 << 6) | (v1_1 & 63));
        int v2_1 = this._inputBuffer;
        int v3_2 = this._inputPtr;
        this._inputPtr = (v3_2 + 1);
        byte v1_0 = v2_1[v3_2];
        if ((v1_0 & 192) != 128) {
            this._reportInvalidOther((v1_0 & 255), this._inputPtr);
        }
        return ((v0_0 << 6) | (v1_0 & 63));
    }

    private final int _decodeUtf8_4(int p6)
    {
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        int v1_14 = this._inputBuffer;
        int v2_12 = this._inputPtr;
        this._inputPtr = (v2_12 + 1);
        byte v0_2 = v1_14[v2_12];
        if ((v0_2 & 192) != 128) {
            this._reportInvalidOther((v0_2 & 255), this._inputPtr);
        }
        int v6_1 = (((p6 & 7) << 6) | (v0_2 & 63));
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        int v1_6 = this._inputBuffer;
        int v2_4 = this._inputPtr;
        this._inputPtr = (v2_4 + 1);
        byte v0_0 = v1_6[v2_4];
        if ((v0_0 & 192) != 128) {
            this._reportInvalidOther((v0_0 & 255), this._inputPtr);
        }
        int v6_2 = ((v6_1 << 6) | (v0_0 & 63));
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        int v1_11 = this._inputBuffer;
        int v2_8 = this._inputPtr;
        this._inputPtr = (v2_8 + 1);
        byte v0_1 = v1_11[v2_8];
        if ((v0_1 & 192) != 128) {
            this._reportInvalidOther((v0_1 & 255), this._inputPtr);
        }
        return (((v6_2 << 6) | (v0_1 & 63)) - 65536);
    }

    private final void _finishString2(char[] p10, int p11)
    {
        int[] v1 = com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.sInputCodesUtf8;
        byte[] v2 = this._inputBuffer;
        while(true) {
            int v5_0 = this._inputPtr;
            if (v5_0 >= this._inputEnd) {
                this.loadMoreGuaranteed();
                v5_0 = this._inputPtr;
            }
            if (p11 >= p10.length) {
                p10 = this._textBuffer.finishCurrentSegment();
                p11 = 0;
            }
            int v3 = Math.min(this._inputEnd, ((p10.length - p11) + v5_0));
            int v6 = v5_0;
            int v4_0 = p11;
            while (v6 < v3) {
                int v5_1 = (v6 + 1);
                int v0_0 = (v2[v6] & 255);
                if (v1[v0_0] == 0) {
                    int v11_1 = (v4_0 + 1);
                    p10[v4_0] = ((char) v0_0);
                    v6 = v5_1;
                    v4_0 = v11_1;
                } else {
                    this._inputPtr = v5_1;
                    if (v0_0 != 34) {
                        int v11_2;
                        switch (v1[v0_0]) {
                            case 1:
                                v0_0 = this._decodeEscaped();
                                v11_2 = v4_0;
                                break;
                            case 2:
                                v0_0 = this._decodeUtf8_2(v0_0);
                                v11_2 = v4_0;
                                break;
                            case 3:
                                if ((this._inputEnd - this._inputPtr) < 2) {
                                    v0_0 = this._decodeUtf8_3(v0_0);
                                    v11_2 = v4_0;
                                } else {
                                    v0_0 = this._decodeUtf8_3fast(v0_0);
                                    v11_2 = v4_0;
                                }
                                break;
                            case 4:
                                int v0_1 = this._decodeUtf8_4(v0_0);
                                v11_2 = (v4_0 + 1);
                                p10[v4_0] = ((char) (55296 | (v0_1 >> 10)));
                                if (v11_2 >= p10.length) {
                                    p10 = this._textBuffer.finishCurrentSegment();
                                    v11_2 = 0;
                                }
                                v0_0 = (56320 | (v0_1 & 1023));
                                break;
                            default:
                                if (v0_0 >= 32) {
                                    this._reportInvalidChar(v0_0);
                                    v11_2 = v4_0;
                                } else {
                                    this._throwUnquotedSpace(v0_0, "string value");
                                    v11_2 = v4_0;
                                }
                        }
                        if (v11_2 >= p10.length) {
                            p10 = this._textBuffer.finishCurrentSegment();
                            v11_2 = 0;
                        }
                        int v4_1 = (v11_2 + 1);
                        p10[v11_2] = ((char) v0_0);
                        p11 = v4_1;
                    }
                    this._textBuffer.setCurrentLength(v4_0);
                    return;
                }
            }
            this._inputPtr = v6;
            p11 = v4_0;
        }
        this._textBuffer.setCurrentLength(v4_0);
        return;
    }

    private final void _isNextTokenNameNo(int p6)
    {
        this._parsingContext.setCurrentName(this._parseFieldName(p6).getName());
        this._currToken = com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME;
        int v6_1 = this._skipWS();
        if (v6_1 != 58) {
            this._reportUnexpectedChar(v6_1, "was expecting a colon to separate field name and value");
        }
        int v6_2 = this._skipWS();
        if (v6_2 != 34) {
            com.flurry.org.codehaus.jackson.JsonToken v1;
            switch (v6_2) {
                case 45:
                case 48:
                case 49:
                case 50:
                case 51:
                case 52:
                case 53:
                case 54:
                case 55:
                case 56:
                case 57:
                    v1 = this.parseNumberText(v6_2);
                    break;
                case 91:
                    v1 = com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY;
                    break;
                case 93:
                case 125:
                    this._reportUnexpectedChar(v6_2, "expected a value");
                    this._matchToken("true", 1);
                    v1 = com.flurry.org.codehaus.jackson.JsonToken.VALUE_TRUE;
                    break;
                case 102:
                    this._matchToken("false", 1);
                    v1 = com.flurry.org.codehaus.jackson.JsonToken.VALUE_FALSE;
                    break;
                case 110:
                    this._matchToken("null", 1);
                    v1 = com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL;
                    break;
                case 123:
                    v1 = com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT;
                    break;
                default:
                    v1 = this._handleUnexpectedValue(v6_2);
            }
            this._nextToken = v1;
        } else {
            this._tokenIncomplete = 1;
            this._nextToken = com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING;
        }
        return;
    }

    private final void _isNextTokenNameYes()
    {
        if ((this._inputPtr >= this._inputEnd) || (this._inputBuffer[this._inputPtr] != 58)) {
            int v0_0 = this._skipColon();
            switch (v0_0) {
                case 34:
                    this._tokenIncomplete = 1;
                    this._nextToken = com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING;
                    break;
                case 45:
                case 48:
                case 49:
                case 50:
                case 51:
                case 52:
                case 53:
                case 54:
                case 55:
                case 56:
                case 57:
                    this._nextToken = this.parseNumberText(v0_0);
                    break;
                case 91:
                    this._nextToken = com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY;
                    break;
                case 93:
                case 125:
                    this._reportUnexpectedChar(v0_0, "expected a value");
                    break;
                case 102:
                    this._matchToken("false", 1);
                    this._nextToken = com.flurry.org.codehaus.jackson.JsonToken.VALUE_FALSE;
                    break;
                case 110:
                    this._matchToken("null", 1);
                    this._nextToken = com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL;
                    break;
                case 116:
                    break;
                case 123:
                    this._nextToken = com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT;
                    break;
                default:
                    this._nextToken = this._handleUnexpectedValue(v0_0);
            }
            this._matchToken("true", 1);
            this._nextToken = com.flurry.org.codehaus.jackson.JsonToken.VALUE_TRUE;
        } else {
            this._inputPtr = (this._inputPtr + 1);
            int v1_3 = this._inputBuffer;
            int v2_0 = this._inputPtr;
            this._inputPtr = (v2_0 + 1);
            int v0_1 = v1_3[v2_0];
            if (v0_1 != 34) {
                if (v0_1 != 123) {
                    if (v0_1 != 91) {
                        v0_0 = (v0_1 & 255);
                        if ((v0_0 > 32) && (v0_0 != 47)) {
                        } else {
                            this._inputPtr = (this._inputPtr - 1);
                            v0_0 = this._skipWS();
                        }
                    } else {
                        this._nextToken = com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY;
                    }
                } else {
                    this._nextToken = com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT;
                }
            } else {
                this._tokenIncomplete = 1;
                this._nextToken = com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING;
            }
        }
        return;
    }

    private final com.flurry.org.codehaus.jackson.JsonToken _nextAfterName()
    {
        this._nameCopied = 0;
        com.flurry.org.codehaus.jackson.JsonToken v0 = this._nextToken;
        this._nextToken = 0;
        if (v0 != com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY) {
            if (v0 == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
                this._parsingContext = this._parsingContext.createChildObjectContext(this._tokenInputRow, this._tokenInputCol);
            }
        } else {
            this._parsingContext = this._parsingContext.createChildArrayContext(this._tokenInputRow, this._tokenInputCol);
        }
        this._currToken = v0;
        return v0;
    }

    private final com.flurry.org.codehaus.jackson.JsonToken _nextTokenNotInObject(int p4)
    {
        com.flurry.org.codehaus.jackson.JsonToken v0_1;
        if (p4 != 34) {
            switch (p4) {
                case 45:
                case 48:
                case 49:
                case 50:
                case 51:
                case 52:
                case 53:
                case 54:
                case 55:
                case 56:
                case 57:
                    v0_1 = this.parseNumberText(p4);
                    this._currToken = v0_1;
                    break;
                case 91:
                    this._parsingContext = this._parsingContext.createChildArrayContext(this._tokenInputRow, this._tokenInputCol);
                    v0_1 = com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY;
                    this._currToken = v0_1;
                    break;
                case 93:
                case 125:
                    this._reportUnexpectedChar(p4, "expected a value");
                    break;
                case 102:
                    this._matchToken("false", 1);
                    v0_1 = com.flurry.org.codehaus.jackson.JsonToken.VALUE_FALSE;
                    this._currToken = v0_1;
                    break;
                case 110:
                    this._matchToken("null", 1);
                    v0_1 = com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL;
                    this._currToken = v0_1;
                    break;
                case 116:
                    break;
                case 123:
                    this._parsingContext = this._parsingContext.createChildObjectContext(this._tokenInputRow, this._tokenInputCol);
                    v0_1 = com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT;
                    this._currToken = v0_1;
                    break;
                default:
                    v0_1 = this._handleUnexpectedValue(p4);
                    this._currToken = v0_1;
            }
            this._matchToken("true", 1);
            v0_1 = com.flurry.org.codehaus.jackson.JsonToken.VALUE_TRUE;
            this._currToken = v0_1;
        } else {
            this._tokenIncomplete = 1;
            v0_1 = com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING;
            this._currToken = v0_1;
        }
        return v0_1;
    }

    private final com.flurry.org.codehaus.jackson.JsonToken _parseFloatText(char[] p10, int p11, int p12, boolean p13, int p14)
    {
        int v2 = 0;
        int v0 = 0;
        if (p12 == 46) {
            int v3_2 = (p11 + 1);
            p10[p11] = ((char) p12);
            p11 = v3_2;
            while ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
                byte v4_11 = this._inputBuffer;
                int v5_3 = this._inputPtr;
                this._inputPtr = (v5_3 + 1);
                p12 = (v4_11[v5_3] & 255);
                if ((p12 >= 48) && (p12 <= 57)) {
                    v2++;
                    if (p11 >= p10.length) {
                        p10 = this._textBuffer.finishCurrentSegment();
                        p11 = 0;
                    }
                    int v3_0 = (p11 + 1);
                    p10[p11] = ((char) p12);
                    p11 = v3_0;
                }
                if (v2 == 0) {
                    this.reportUnexpectedNumberChar(p12, "Decimal point not followed by a digit");
                }
            }
            v0 = 1;
        }
        int v1 = 0;
        if ((p12 == 101) || (p12 == 69)) {
            if (p11 >= p10.length) {
                p10 = this._textBuffer.finishCurrentSegment();
                p11 = 0;
            }
            int v3_1 = (p11 + 1);
            p10[p11] = ((char) p12);
            if (this._inputPtr >= this._inputEnd) {
                this.loadMoreGuaranteed();
            }
            byte v4_24 = this._inputBuffer;
            int v5_5 = this._inputPtr;
            this._inputPtr = (v5_5 + 1);
            int v12_1 = (v4_24[v5_5] & 255);
            if ((v12_1 != 45) && (v12_1 != 43)) {
                p11 = v3_1;
            } else {
                int v11_1;
                if (v3_1 < p10.length) {
                    v11_1 = v3_1;
                } else {
                    p10 = this._textBuffer.finishCurrentSegment();
                    v11_1 = 0;
                }
                int v3_3 = (v11_1 + 1);
                p10[v11_1] = ((char) v12_1);
                if (this._inputPtr >= this._inputEnd) {
                    this.loadMoreGuaranteed();
                }
                byte v4_33 = this._inputBuffer;
                int v5_7 = this._inputPtr;
                this._inputPtr = (v5_7 + 1);
                v12_1 = (v4_33[v5_7] & 255);
                p11 = v3_3;
            }
            while ((v12_1 <= 57) && (v12_1 >= 48)) {
                v1++;
                if (p11 >= p10.length) {
                    p10 = this._textBuffer.finishCurrentSegment();
                    p11 = 0;
                }
                int v3_4 = (p11 + 1);
                p10[p11] = ((char) v12_1);
                if ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
                    byte v4_3 = this._inputBuffer;
                    int v5_1 = this._inputPtr;
                    this._inputPtr = (v5_1 + 1);
                    v12_1 = (v4_3[v5_1] & 255);
                    p11 = v3_4;
                } else {
                    v0 = 1;
                    p11 = v3_4;
                    break;
                }
            }
            if (v1 == 0) {
                this.reportUnexpectedNumberChar(v12_1, "Exponent indicator not followed by a digit");
            }
        }
        if (v0 == 0) {
            this._inputPtr = (this._inputPtr - 1);
        }
        this._textBuffer.setCurrentLength(p11);
        return this.resetFloat(p13, p14, v2, v1);
    }

    private final com.flurry.org.codehaus.jackson.JsonToken _parserNumber2(char[] p8, int p9, boolean p10, int p11)
    {
        while ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
            com.flurry.org.codehaus.jackson.JsonToken v0_17 = this._inputBuffer;
            char[] v1_2 = this._inputPtr;
            this._inputPtr = (v1_2 + 1);
            int v3 = (v0_17[v1_2] & 255);
            if ((v3 <= 57) && (v3 >= 48)) {
                if (p9 >= p8.length) {
                    p8 = this._textBuffer.finishCurrentSegment();
                    p9 = 0;
                }
                int v6 = (p9 + 1);
                p8[p9] = ((char) v3);
                p11++;
                p9 = v6;
            } else {
                if ((v3 != 46) && ((v3 != 101) && (v3 != 69))) {
                    this._inputPtr = (this._inputPtr - 1);
                    this._textBuffer.setCurrentLength(p9);
                    com.flurry.org.codehaus.jackson.JsonToken v0_13 = this.resetInt(p10, p11);
                } else {
                    v0_13 = this._parseFloatText(p8, p9, v3, p10, p11);
                }
            }
            return v0_13;
        }
        this._textBuffer.setCurrentLength(p9);
        v0_13 = this.resetInt(p10, p11);
        return v0_13;
    }

    private final void _skipCComment()
    {
        int[] v1 = com.flurry.org.codehaus.jackson.util.CharTypes.getInputCodeComment();
        while ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
            int v3_0 = this._inputBuffer;
            int v4_0 = this._inputPtr;
            this._inputPtr = (v4_0 + 1);
            int v2 = (v3_0[v4_0] & 255);
            int v0 = v1[v2];
            if (v0 != 0) {
                switch (v0) {
                    case 2:
                        this._skipUtf8_2(v2);
                        break;
                    case 3:
                        this._skipUtf8_3(v2);
                        break;
                    case 4:
                        this._skipUtf8_4(v2);
                        break;
                    case 10:
                        this._skipLF();
                        break;
                    case 13:
                        this._skipCR();
                        break;
                    case 42:
                        if (this._inputBuffer[this._inputPtr] == 47) {
                            this._inputPtr = (this._inputPtr + 1);
                        }
                        break;
                    default:
                        this._reportInvalidChar(v2);
                }
            }
            return;
        }
        this._reportInvalidEOF(" in a comment");
        return;
    }

    private final int _skipColon()
    {
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        int v1;
        int v2_18 = this._inputBuffer;
        int v3_11 = this._inputPtr;
        this._inputPtr = (v3_11 + 1);
        int v0_0 = v2_18[v3_11];
        if (v0_0 != 58) {
            int v0_1 = (v0_0 & 255);
            while(true) {
                switch (v0_1) {
                    case 9:
                    case 13:
                    case 32:
                        this._skipCR();
                        break;
                    case 10:
                        this._skipLF();
                        break;
                    case 47:
                        this._skipComment();
                        break;
                    default:
                        if (v0_1 < 32) {
                            this._throwInvalidSpace(v0_1);
                        }
                        if (this._inputPtr >= this._inputEnd) {
                            this.loadMoreGuaranteed();
                        }
                        int v2_1 = this._inputBuffer;
                        int v3_1 = this._inputPtr;
                        this._inputPtr = (v3_1 + 1);
                        int v0_2 = (v2_1[v3_1] & 255);
                        if (v0_2 == 58) {
                            while ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
                                int v2_17 = this._inputBuffer;
                                int v3_10 = this._inputPtr;
                                this._inputPtr = (v3_10 + 1);
                                int v0_4 = (v2_17[v3_10] & 255);
                                if (v0_4 <= 32) {
                                    if (v0_4 != 32) {
                                        if (v0_4 != 10) {
                                            if (v0_4 != 13) {
                                                if (v0_4 != 9) {
                                                    this._throwInvalidSpace(v0_4);
                                                }
                                            } else {
                                                this._skipCR();
                                            }
                                        } else {
                                            this._skipLF();
                                        }
                                    }
                                } else {
                                    if (v0_4 == 47) {
                                        this._skipComment();
                                    } else {
                                        v1 = v0_4;
                                    }
                                }
                            }
                            throw this._constructError(new StringBuilder().append("Unexpected end-of-input within/between ").append(this._parsingContext.getTypeDesc()).append(" entries").toString());
                        } else {
                            this._reportUnexpectedChar(v0_2, "was expecting a colon to separate field name and value");
                        }
                }
            }
        } else {
            if (this._inputPtr >= this._inputEnd) {
            } else {
                int v0_3 = (this._inputBuffer[this._inputPtr] & 255);
                if ((v0_3 <= 32) || (v0_3 == 47)) {
                } else {
                    this._inputPtr = (this._inputPtr + 1);
                    v1 = v0_3;
                }
            }
        }
        return v1;
    }

    private final void _skipComment()
    {
        if (!this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_COMMENTS)) {
            this._reportUnexpectedChar(47, "maybe a (non-standard) comment? (not recognized as one since Feature \'ALLOW_COMMENTS\' not enabled for parser)");
        }
        if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
            this._reportInvalidEOF(" in a comment");
        }
        String v1_3 = this._inputBuffer;
        int v2_0 = this._inputPtr;
        this._inputPtr = (v2_0 + 1);
        int v0 = (v1_3[v2_0] & 255);
        if (v0 != 47) {
            if (v0 != 42) {
                this._reportUnexpectedChar(v0, "was expecting either \'*\' or \'/\' for a comment");
            } else {
                this._skipCComment();
            }
        } else {
            this._skipCppComment();
        }
        return;
    }

    private final void _skipCppComment()
    {
        int[] v1 = com.flurry.org.codehaus.jackson.util.CharTypes.getInputCodeComment();
        while ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
            byte v3_3 = this._inputBuffer;
            int v4_1 = this._inputPtr;
            this._inputPtr = (v4_1 + 1);
            int v2 = (v3_3[v4_1] & 255);
            int v0 = v1[v2];
            if (v0 != 0) {
                switch (v0) {
                    case 2:
                        this._skipUtf8_2(v2);
                        break;
                    case 3:
                        this._skipUtf8_3(v2);
                        break;
                    case 4:
                        this._skipUtf8_4(v2);
                        break;
                    case 10:
                        this._skipLF();
                        break;
                        break;
                    case 13:
                        this._skipCR();
                        break;
                        break;
                    default:
                        this._reportInvalidChar(v2);
                }
            }
        }
        return;
    }

    private final void _skipUtf8_2(int p4)
    {
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        int v0_2 = this._inputBuffer;
        int v1_3 = this._inputPtr;
        this._inputPtr = (v1_3 + 1);
        p4 = v0_2[v1_3];
        if ((p4 & 192) != 128) {
            this._reportInvalidOther((p4 & 255), this._inputPtr);
        }
        return;
    }

    private final void _skipUtf8_3(int p5)
    {
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        int v0_7 = this._inputBuffer;
        int v1_5 = this._inputPtr;
        this._inputPtr = (v1_5 + 1);
        byte v5_1 = v0_7[v1_5];
        if ((v5_1 & 192) != 128) {
            this._reportInvalidOther((v5_1 & 255), this._inputPtr);
        }
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        int v0_4 = this._inputBuffer;
        int v1_3 = this._inputPtr;
        this._inputPtr = (v1_3 + 1);
        byte v5_0 = v0_4[v1_3];
        if ((v5_0 & 192) != 128) {
            this._reportInvalidOther((v5_0 & 255), this._inputPtr);
        }
        return;
    }

    private final void _skipUtf8_4(int p6)
    {
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        int v1_11 = this._inputBuffer;
        int v2_8 = this._inputPtr;
        this._inputPtr = (v2_8 + 1);
        byte v0_2 = v1_11[v2_8];
        if ((v0_2 & 192) != 128) {
            this._reportInvalidOther((v0_2 & 255), this._inputPtr);
        }
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        int v1_4 = this._inputBuffer;
        int v2_3 = this._inputPtr;
        this._inputPtr = (v2_3 + 1);
        byte v0_0 = v1_4[v2_3];
        if ((v0_0 & 192) != 128) {
            this._reportInvalidOther((v0_0 & 255), this._inputPtr);
        }
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        int v1_8 = this._inputBuffer;
        int v2_6 = this._inputPtr;
        this._inputPtr = (v2_6 + 1);
        byte v0_1 = v1_8[v2_6];
        if ((v0_1 & 192) != 128) {
            this._reportInvalidOther((v0_1 & 255), this._inputPtr);
        }
        return;
    }

    private final int _skipWS()
    {
        while ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
            int v1_6 = this._inputBuffer;
            String v2_4 = this._inputPtr;
            this._inputPtr = (v2_4 + 1);
            int v0 = (v1_6[v2_4] & 255);
            if (v0 <= 32) {
                if (v0 != 32) {
                    if (v0 != 10) {
                        if (v0 != 13) {
                            if (v0 != 9) {
                                this._throwInvalidSpace(v0);
                            }
                        } else {
                            this._skipCR();
                        }
                    } else {
                        this._skipLF();
                    }
                }
            } else {
                if (v0 == 47) {
                    this._skipComment();
                } else {
                    return v0;
                }
            }
        }
        throw this._constructError(new StringBuilder().append("Unexpected end-of-input within/between ").append(this._parsingContext.getTypeDesc()).append(" entries").toString());
    }

    private final int _skipWSOrEnd()
    {
        while ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
            int v1_7 = this._inputBuffer;
            int v2_0 = this._inputPtr;
            this._inputPtr = (v2_0 + 1);
            int v0 = (v1_7[v2_0] & 255);
            if (v0 <= 32) {
                if (v0 != 32) {
                    if (v0 != 10) {
                        if (v0 != 13) {
                            if (v0 != 9) {
                                this._throwInvalidSpace(v0);
                            }
                        } else {
                            this._skipCR();
                        }
                    } else {
                        this._skipLF();
                    }
                }
            } else {
                if (v0 == 47) {
                    this._skipComment();
                }
            }
            return v0;
        }
        this._handleEOF();
        v0 = -1;
        return v0;
    }

    private final int _verifyNoLeadingZeroes()
    {
        if ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
            int v0 = (this._inputBuffer[this._inputPtr] & 255);
            if ((v0 >= 48) && (v0 <= 57)) {
                if (!this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_NUMERIC_LEADING_ZEROS)) {
                    this.reportInvalidNumber("Leading zeroes not allowed");
                }
                this._inputPtr = (this._inputPtr + 1);
                if (v0 != 48) {
                    return v0;
                }
                while ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
                    v0 = (this._inputBuffer[this._inputPtr] & 255);
                    if ((v0 >= 48) && (v0 <= 57)) {
                        this._inputPtr = (this._inputPtr + 1);
                        if (v0 != 48) {
                            break;
                        }
                    } else {
                        v0 = 48;
                        break;
                    }
                }
            } else {
                v0 = 48;
            }
        } else {
            v0 = 48;
        }
        return v0;
    }

    private final com.flurry.org.codehaus.jackson.sym.Name addName(int[] p15, int p16, int p17)
    {
        int v10;
        int v3 = (((p16 << 2) - 4) + p17);
        if (p17 >= 4) {
            v10 = 0;
        } else {
            v10 = p15[(p16 - 1)];
            p15[(p16 - 1)] = (v10 << ((4 - p17) << 3));
        }
        char[] v4 = this._textBuffer.emptyAndGetCurrentSegment();
        int v9 = 0;
        int v8 = 0;
        while (v9 < v3) {
            int v7_0;
            int v5_0 = ((p15[(v9 >> 2)] >> ((3 - (v9 & 3)) << 3)) & 255);
            v9++;
            if (v5_0 <= 127) {
                v7_0 = v8;
            } else {
                int v11;
                int v5_3;
                if ((v5_0 & 224) != 192) {
                    if ((v5_0 & 240) != 224) {
                        if ((v5_0 & 248) != 240) {
                            this._reportInvalidInitial(v5_0);
                            v5_3 = 1;
                            v11 = 1;
                        } else {
                            v5_3 = (v5_0 & 7);
                            v11 = 3;
                        }
                    } else {
                        v5_3 = (v5_0 & 15);
                        v11 = 2;
                    }
                } else {
                    v5_3 = (v5_0 & 31);
                    v11 = 1;
                }
                if ((v9 + v11) > v3) {
                    this._reportInvalidEOF(" in field name");
                }
                int v6_2 = (p15[(v9 >> 2)] >> ((3 - (v9 & 3)) << 3));
                v9++;
                if ((v6_2 & 192) != 128) {
                    this._reportInvalidOther(v6_2);
                }
                v5_0 = ((v5_3 << 6) | (v6_2 & 63));
                if (v11 > 1) {
                    int v6_4 = (p15[(v9 >> 2)] >> ((3 - (v9 & 3)) << 3));
                    v9++;
                    if ((v6_4 & 192) != 128) {
                        this._reportInvalidOther(v6_4);
                    }
                    v5_0 = ((v5_0 << 6) | (v6_4 & 63));
                    if (v11 > 2) {
                        int v6_0 = (p15[(v9 >> 2)] >> ((3 - (v9 & 3)) << 3));
                        v9++;
                        if ((v6_0 & 192) != 128) {
                            this._reportInvalidOther((v6_0 & 255));
                        }
                        v5_0 = ((v5_0 << 6) | (v6_0 & 63));
                    }
                }
                if (v11 <= 2) {
                } else {
                    int v5_1 = (v5_0 - 65536);
                    if (v8 >= v4.length) {
                        v4 = this._textBuffer.expandCurrentSegment();
                    }
                    v7_0 = (v8 + 1);
                    v4[v8] = ((char) (55296 + (v5_1 >> 10)));
                    v5_0 = (56320 | (v5_1 & 1023));
                }
            }
            if (v7_0 >= v4.length) {
                v4 = this._textBuffer.expandCurrentSegment();
            }
            v8 = (v7_0 + 1);
            v4[v7_0] = ((char) v5_0);
        }
        String v1_1 = new String(v4, 0, v8);
        if (p17 < 4) {
            p15[(p16 - 1)] = v10;
        }
        return this._symbols.addName(v1_1, p15, p16);
    }

    private final com.flurry.org.codehaus.jackson.sym.Name findName(int p4, int p5)
    {
        com.flurry.org.codehaus.jackson.sym.Name v0 = this._symbols.findName(p4);
        if (v0 == null) {
            this._quadBuffer[0] = p4;
            v0 = this.addName(this._quadBuffer, 1, p5);
        }
        return v0;
    }

    private final com.flurry.org.codehaus.jackson.sym.Name findName(int p4, int p5, int p6)
    {
        com.flurry.org.codehaus.jackson.sym.Name v0 = this._symbols.findName(p4, p5);
        if (v0 == null) {
            this._quadBuffer[0] = p4;
            this._quadBuffer[1] = p5;
            v0 = this.addName(this._quadBuffer, 2, p6);
        }
        return v0;
    }

    private final com.flurry.org.codehaus.jackson.sym.Name findName(int[] p4, int p5, int p6, int p7)
    {
        if (p5 >= p4.length) {
            p4 = com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.growArrayBy(p4, p4.length);
            this._quadBuffer = p4;
        }
        int v1 = (p5 + 1);
        p4[p5] = p6;
        com.flurry.org.codehaus.jackson.sym.Name v0 = this._symbols.findName(p4, v1);
        if (v0 == null) {
            v0 = this.addName(p4, v1, p7);
        }
        return v0;
    }

    public static int[] growArrayBy(int[] p4, int p5)
    {
        int[] v4_1;
        if (p4 != null) {
            int v0 = p4.length;
            v4_1 = new int[(v0 + p5)];
            System.arraycopy(p4, 0, v4_1, 0, v0);
        } else {
            v4_1 = new int[p5];
        }
        return v4_1;
    }

    private int nextByte()
    {
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        int v0_1 = this._inputBuffer;
        int v1_1 = this._inputPtr;
        this._inputPtr = (v1_1 + 1);
        return (v0_1[v1_1] & 255);
    }

    private final com.flurry.org.codehaus.jackson.sym.Name parseFieldName(int p7, int p8, int p9)
    {
        return this.parseEscapedFieldName(this._quadBuffer, 0, p7, p8, p9);
    }

    private final com.flurry.org.codehaus.jackson.sym.Name parseFieldName(int p7, int p8, int p9, int p10)
    {
        this._quadBuffer[0] = p7;
        return this.parseEscapedFieldName(this._quadBuffer, 1, p8, p9, p10);
    }

    protected void _closeInput()
    {
        if (this._inputStream != null) {
            if ((this._ioContext.isResourceManaged()) || (this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.AUTO_CLOSE_SOURCE))) {
                this._inputStream.close();
            }
            this._inputStream = 0;
        }
        return;
    }

    protected byte[] _decodeBase64(com.flurry.org.codehaus.jackson.Base64Variant p11)
    {
        com.flurry.org.codehaus.jackson.util.ByteArrayBuilder v1 = this._getByteArrayBuilder();
        do {
            if (this._inputPtr >= this._inputEnd) {
                this.loadMoreGuaranteed();
            }
            byte[] v4_31 = this._inputBuffer;
            String v5_0 = this._inputPtr;
            this._inputPtr = (v5_0 + 1);
            int v2_1 = (v4_31[v5_0] & 255);
            if (v2_1 > 32) {
                byte[] v4_11;
                int v0_0 = p11.decodeBase64Char(v2_1);
                if (v0_0 >= 0) {
                    break;
                }
                if (v2_1 != 34) {
                    v0_0 = this._decodeBase64Escape(p11, v2_1, 0);
                } else {
                    v4_11 = v1.toByteArray();
                }
                return v4_11;
            }
        } while(v0_0 < 0);
        int v3_2 = v0_0;
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        byte[] v4_15 = this._inputBuffer;
        String v5_6 = this._inputPtr;
        this._inputPtr = (v5_6 + 1);
        int v2_2 = (v4_15[v5_6] & 255);
        int v0_1 = p11.decodeBase64Char(v2_2);
        if (v0_1 < 0) {
            v0_1 = this._decodeBase64Escape(p11, v2_2, 1);
        }
        int v3_3 = ((v3_2 << 6) | v0_1);
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        byte[] v4_20 = this._inputBuffer;
        String v5_8 = this._inputPtr;
        this._inputPtr = (v5_8 + 1);
        int v2_3 = (v4_20[v5_8] & 255);
        int v0_2 = p11.decodeBase64Char(v2_3);
        if (v0_2 < 0) {
            if (v0_2 != -2) {
                if ((v2_3 != 34) || (p11.usesPadding())) {
                    v0_2 = this._decodeBase64Escape(p11, v2_3, 2);
                } else {
                    v1.append((v3_3 >> 4));
                    v4_11 = v1.toByteArray();
                    return v4_11;
                }
            }
            if (v0_2 == -2) {
                if (this._inputPtr >= this._inputEnd) {
                    this.loadMoreGuaranteed();
                }
                byte[] v4_0 = this._inputBuffer;
                String v5_1 = this._inputPtr;
                this._inputPtr = (v5_1 + 1);
                int v2_0 = (v4_0[v5_1] & 255);
                if (p11.usesPaddingChar(v2_0)) {
                    v1.append((v3_3 >> 4));
                } else {
                    throw this.reportInvalidBase64Char(p11, v2_0, 3, new StringBuilder().append("expected padding character \'").append(p11.getPaddingChar()).append("\'").toString());
                }
                return v4_11;
            }
        }
        int v3_4 = ((v3_3 << 6) | v0_2);
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        byte[] v4_27 = this._inputBuffer;
        String v5_11 = this._inputPtr;
        this._inputPtr = (v5_11 + 1);
        int v2_4 = (v4_27[v5_11] & 255);
        int v0_3 = p11.decodeBase64Char(v2_4);
        if (v0_3 < 0) {
            if (v0_3 != -2) {
                if ((v2_4 != 34) || (p11.usesPadding())) {
                    v0_3 = this._decodeBase64Escape(p11, v2_4, 3);
                } else {
                    v1.appendTwoBytes((v3_4 >> 2));
                    v4_11 = v1.toByteArray();
                    return v4_11;
                }
            }
            if (v0_3 == -2) {
                v1.appendTwoBytes((v3_4 >> 2));
            }
        }
        v1.appendThreeBytes(((v3_4 << 6) | v0_3));
    }

    protected int _decodeCharForError(int p7)
    {
        int v0 = p7;
        if (p7 < 0) {
            int v2;
            if ((p7 & 224) != 192) {
                if ((p7 & 240) != 224) {
                    if ((p7 & 248) != 240) {
                        this._reportInvalidInitial((p7 & 255));
                        v2 = 1;
                    } else {
                        v0 = (p7 & 7);
                        v2 = 3;
                    }
                } else {
                    v0 = (p7 & 15);
                    v2 = 2;
                }
            } else {
                v0 = (p7 & 31);
                v2 = 1;
            }
            int v1_0 = this.nextByte();
            if ((v1_0 & 192) != 128) {
                this._reportInvalidOther((v1_0 & 255));
            }
            v0 = ((v0 << 6) | (v1_0 & 63));
            if (v2 > 1) {
                int v1_1 = this.nextByte();
                if ((v1_1 & 192) != 128) {
                    this._reportInvalidOther((v1_1 & 255));
                }
                v0 = ((v0 << 6) | (v1_1 & 63));
                if (v2 > 2) {
                    int v1_2 = this.nextByte();
                    if ((v1_2 & 192) != 128) {
                        this._reportInvalidOther((v1_2 & 255));
                    }
                    v0 = ((v0 << 6) | (v1_2 & 63));
                }
            }
        }
        return v0;
    }

    protected final char _decodeEscaped()
    {
        if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
            this._reportInvalidEOF(" in character escape sequence");
        }
        int v5_2;
        int v5_13 = this._inputBuffer;
        int v6_3 = this._inputPtr;
        this._inputPtr = (v6_3 + 1);
        byte v0 = v5_13[v6_3];
        switch (v0) {
            case 34:
            case 47:
            case 92:
                v5_2 = ((char) v0);
                break;
            case 98:
                v5_2 = 8;
                break;
            case 102:
                v5_2 = 12;
                break;
            case 110:
                v5_2 = 10;
                break;
            case 114:
                v5_2 = 13;
                break;
            case 116:
                v5_2 = 9;
                break;
            case 117:
                int v4 = 0;
                int v3 = 0;
                while (v3 < 4) {
                    if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
                        this._reportInvalidEOF(" in character escape sequence");
                    }
                    int v5_6 = this._inputBuffer;
                    int v6_2 = this._inputPtr;
                    this._inputPtr = (v6_2 + 1);
                    byte v1 = v5_6[v6_2];
                    int v2 = com.flurry.org.codehaus.jackson.util.CharTypes.charToHex(v1);
                    if (v2 < 0) {
                        this._reportUnexpectedChar(v1, "expected a hex-digit for character escape sequence");
                    }
                    v4 = ((v4 << 4) | v2);
                    v3++;
                }
                v5_2 = ((char) v4);
                break;
            default:
                v5_2 = this._handleUnrecognizedCharacterEscape(((char) this._decodeCharForError(v0)));
        }
        return v5_2;
    }

    protected void _finishString()
    {
        int v7 = this._inputPtr;
        if (v7 >= this._inputEnd) {
            this.loadMoreGuaranteed();
            v7 = this._inputPtr;
        }
        char[] v4 = this._textBuffer.emptyAndGetCurrentSegment();
        int v3 = Math.min(this._inputEnd, (v4.length + v7));
        byte[] v2 = this._inputBuffer;
        int v6 = 0;
        while (v7 < v3) {
            int v0 = (v2[v7] & 255);
            if (com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.sInputCodesUtf8[v0] == 0) {
                v7++;
                int v5_0 = (v6 + 1);
                v4[v6] = ((char) v0);
                v6 = v5_0;
            } else {
                if (v0 != 34) {
                    break;
                }
                this._inputPtr = (v7 + 1);
                this._textBuffer.setCurrentLength(v6);
            }
            return;
        }
        this._inputPtr = v7;
        this._finishString2(v4, v6);
        return;
    }

    protected final String _getText2(com.flurry.org.codehaus.jackson.JsonToken p3)
    {
        String v0_1;
        if (p3 != null) {
            switch (com.flurry.org.codehaus.jackson.impl.Utf8StreamParser$1.$SwitchMap$org$codehaus$jackson$JsonToken[p3.ordinal()]) {
                case 1:
                    v0_1 = this._parsingContext.getCurrentName();
                    break;
                case 2:
                case 3:
                case 4:
                    v0_1 = this._textBuffer.contentsAsString();
                    break;
                default:
                    v0_1 = p3.asString();
            }
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    protected com.flurry.org.codehaus.jackson.JsonToken _handleApostropheValue()
    {
        int v6 = 0;
        char[] v5 = this._textBuffer.emptyAndGetCurrentSegment();
        int[] v1 = com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.sInputCodesUtf8;
        byte[] v2 = this._inputBuffer;
        while(true) {
            if (this._inputPtr >= this._inputEnd) {
                this.loadMoreGuaranteed();
            }
            if (v6 >= v5.length) {
                v5 = this._textBuffer.finishCurrentSegment();
                v6 = 0;
            }
            int v3 = this._inputEnd;
            int v4 = (this._inputPtr + (v5.length - v6));
            if (v4 < v3) {
                v3 = v4;
            }
            while (this._inputPtr < v3) {
                int v8_4 = this._inputPtr;
                this._inputPtr = (v8_4 + 1);
                int v0_0 = (v2[v8_4] & 255);
                if ((v0_0 != 39) && (v1[v0_0] == 0)) {
                    int v7_0 = (v6 + 1);
                    v5[v6] = ((char) v0_0);
                    v6 = v7_0;
                } else {
                    if (v0_0 != 39) {
                        switch (v1[v0_0]) {
                            case 1:
                                if (v0_0 == 34) {
                                } else {
                                    v0_0 = this._decodeEscaped();
                                }
                                break;
                            case 2:
                                v0_0 = this._decodeUtf8_2(v0_0);
                                break;
                            case 3:
                                if ((this._inputEnd - this._inputPtr) < 2) {
                                    v0_0 = this._decodeUtf8_3(v0_0);
                                } else {
                                    v0_0 = this._decodeUtf8_3fast(v0_0);
                                }
                                break;
                            case 4:
                                int v0_1 = this._decodeUtf8_4(v0_0);
                                int v7_1 = (v6 + 1);
                                v5[v6] = ((char) (55296 | (v0_1 >> 10)));
                                if (v7_1 < v5.length) {
                                    v6 = v7_1;
                                } else {
                                    v5 = this._textBuffer.finishCurrentSegment();
                                    v6 = 0;
                                }
                                v0_0 = (56320 | (v0_1 & 1023));
                                break;
                            default:
                                if (v0_0 < 32) {
                                    this._throwUnquotedSpace(v0_0, "string value");
                                }
                                this._reportInvalidChar(v0_0);
                        }
                        if (v6 >= v5.length) {
                            v5 = this._textBuffer.finishCurrentSegment();
                            v6 = 0;
                        }
                        int v7_2 = (v6 + 1);
                        v5[v6] = ((char) v0_0);
                        v6 = v7_2;
                        break;
                    }
                    this._textBuffer.setCurrentLength(v6);
                    return com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING;
                }
            }
        }
        this._textBuffer.setCurrentLength(v6);
        return com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING;
    }

    protected com.flurry.org.codehaus.jackson.JsonToken _handleInvalidNumberStart(int p10, boolean p11)
    {
        long v1_7;
        long v1_0 = -4503599627370496;
        if (p10 != 73) {
            this.reportUnexpectedNumberChar(p10, "expected digit (0-9) to follow minus sign, for valid numeric value");
            v1_7 = 0;
        } else {
            if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
                this._reportInvalidEOFInValue();
            }
            boolean v5_0 = this._inputBuffer;
            int v6_0 = this._inputPtr;
            this._inputPtr = (v6_0 + 1);
            p10 = v5_0[v6_0];
            if (p10 != 78) {
                if (p10 != 110) {
                } else {
                    String v0_0;
                    if (!p11) {
                        v0_0 = "+Infinity";
                    } else {
                        v0_0 = "-Infinity";
                    }
                    this._matchToken(v0_0, 3);
                    if (!this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_NON_NUMERIC_NUMBERS)) {
                        this._reportError(new StringBuilder().append("Non-standard token \'").append(v0_0).append("\': enable JsonParser.Feature.ALLOW_NON_NUMERIC_NUMBERS to allow").toString());
                    } else {
                        if (!p11) {
                            v1_0 = 9218868437227405312;
                        }
                        v1_7 = this.resetAsNaN(v0_0, v1_0);
                    }
                }
            } else {
                String v0_1;
                if (!p11) {
                    v0_1 = "+INF";
                } else {
                    v0_1 = "-INF";
                }
                this._matchToken(v0_1, 3);
                if (!this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_NON_NUMERIC_NUMBERS)) {
                    this._reportError(new StringBuilder().append("Non-standard token \'").append(v0_1).append("\': enable JsonParser.Feature.ALLOW_NON_NUMERIC_NUMBERS to allow").toString());
                } else {
                    if (!p11) {
                        v1_0 = 9218868437227405312;
                    }
                    v1_7 = this.resetAsNaN(v0_1, v1_0);
                }
            }
        }
        return v1_7;
    }

    protected com.flurry.org.codehaus.jackson.JsonToken _handleUnexpectedValue(int p4)
    {
        String v0_2;
        switch (p4) {
            case 39:
                if (!this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_SINGLE_QUOTES)) {
                    this._reportUnexpectedChar(p4, "expected a valid value (number, String, array, object, \'true\', \'false\' or \'null\')");
                    v0_2 = 0;
                } else {
                    v0_2 = this._handleApostropheValue();
                }
                break;
            case 43:
                if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
                    this._reportInvalidEOFInValue();
                }
                String v0_5 = this._inputBuffer;
                long v1_3 = this._inputPtr;
                this._inputPtr = (v1_3 + 1);
                v0_2 = this._handleInvalidNumberStart((v0_5[v1_3] & 255), 0);
                break;
            case 78:
                this._matchToken("NaN", 1);
                if (!this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_NON_NUMERIC_NUMBERS)) {
                    this._reportError("Non-standard token \'NaN\': enable JsonParser.Feature.ALLOW_NON_NUMERIC_NUMBERS to allow");
                } else {
                    v0_2 = this.resetAsNaN("NaN", 9221120237041090560);
                }
                break;
            default:
        }
        return v0_2;
    }

    protected final com.flurry.org.codehaus.jackson.sym.Name _handleUnusualFieldName(int p10)
    {
        if ((p10 != 39) || (!this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_SINGLE_QUOTES))) {
            if (!this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_UNQUOTED_FIELD_NAMES)) {
                this._reportUnexpectedChar(p10, "was expecting double-quote to start field name");
            }
            int[] v0 = com.flurry.org.codehaus.jackson.util.CharTypes.getInputCodeUtf8JsNames();
            if (v0[p10] != 0) {
                this._reportUnexpectedChar(p10, "was expecting either valid name character (for unquoted name) or double-quote (for quoted) to start field name");
            }
            int[] v6 = this._quadBuffer;
            int v1 = 0;
            int v2 = 0;
            int v5_0 = 0;
            while(true) {
                int v4_1;
                if (v2 >= 4) {
                    if (v5_0 >= v6.length) {
                        v6 = com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.growArrayBy(v6, v6.length);
                        this._quadBuffer = v6;
                    }
                    v4_1 = (v5_0 + 1);
                    v6[v5_0] = v1;
                    v1 = p10;
                    v2 = 1;
                } else {
                    v2++;
                    v1 = ((v1 << 8) | p10);
                    v4_1 = v5_0;
                }
                if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
                    this._reportInvalidEOF(" in field name");
                }
                p10 = (this._inputBuffer[this._inputPtr] & 255);
                if (v0[p10] != 0) {
                    break;
                }
                this._inputPtr = (this._inputPtr + 1);
                v5_0 = v4_1;
            }
            if (v2 > 0) {
                if (v4_1 >= v6.length) {
                    v6 = com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.growArrayBy(v6, v6.length);
                    this._quadBuffer = v6;
                }
                int v5_1 = (v4_1 + 1);
                v6[v4_1] = v1;
                v4_1 = v5_1;
            }
            com.flurry.org.codehaus.jackson.sym.Name v3 = this._symbols.findName(v6, v4_1);
            if (v3 == null) {
                v3 = this.addName(v6, v4_1, v2);
            }
        } else {
            v3 = this._parseApostropheFieldName();
        }
        return v3;
    }

    protected final boolean _loadToHaveAtLeast(int p10)
    {
        java.io.IOException v2_0 = 0;
        if (this._inputStream != null) {
            int v0 = (this._inputEnd - this._inputPtr);
            if ((v0 <= 0) || (this._inputPtr <= 0)) {
                this._inputEnd = 0;
            } else {
                this._currInputProcessed = (this._currInputProcessed + ((long) this._inputPtr));
                this._currInputRowStart = (this._currInputRowStart - this._inputPtr);
                System.arraycopy(this._inputBuffer, this._inputPtr, this._inputBuffer, 0, v0);
                this._inputEnd = v0;
            }
            this._inputPtr = 0;
            while (this._inputEnd < p10) {
                int v1 = this._inputStream.read(this._inputBuffer, this._inputEnd, (this._inputBuffer.length - this._inputEnd));
                if (v1 >= 1) {
                    this._inputEnd = (this._inputEnd + v1);
                } else {
                    this._closeInput();
                    if (v1 == 0) {
                        throw new java.io.IOException(new StringBuilder().append("InputStream.read() returned 0 characters when trying to read ").append(v0).append(" bytes").toString());
                    }
                }
            }
            v2_0 = 1;
        }
        return v2_0;
    }

    protected final void _matchToken(String p7, int p8)
    {
        int v2 = p7.length();
        do {
            if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
                this._reportInvalidEOF(" in a value");
            }
            if (this._inputBuffer[this._inputPtr] != p7.charAt(p8)) {
                this._reportInvalidToken(p7.substring(0, p8), "\'null\', \'true\', \'false\' or NaN");
            }
            this._inputPtr = (this._inputPtr + 1);
            p8++;
        } while(p8 < v2);
    }

    protected final com.flurry.org.codehaus.jackson.sym.Name _parseApostropheFieldName()
    {
        if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
            this._reportInvalidEOF(": was expecting closing \'\'\' for name");
        }
        com.flurry.org.codehaus.jackson.sym.Name v4;
        int v8_0 = this._inputBuffer;
        int v9_1 = this._inputPtr;
        this._inputPtr = (v9_1 + 1);
        int v0 = (v8_0[v9_1] & 255);
        if (v0 != 39) {
            int[] v7 = this._quadBuffer;
            int v2_0 = 0;
            int v3_0 = 0;
            int v6 = 0;
            while (v0 != 39) {
                if ((v0 != 34) && (com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.sInputCodesLatin1[v0] != 0)) {
                    if (v0 == 92) {
                        v0 = this._decodeEscaped();
                    } else {
                        this._throwUnquotedSpace(v0, "name");
                    }
                    if (v0 > 127) {
                        if (v3_0 >= 4) {
                            if (v6 >= v7.length) {
                                v7 = com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.growArrayBy(v7, v7.length);
                                this._quadBuffer = v7;
                            }
                            int v5_2 = (v6 + 1);
                            v7[v6] = v2_0;
                            v2_0 = 0;
                            v3_0 = 0;
                            v6 = v5_2;
                        }
                        int v5_3;
                        if (v0 >= 2048) {
                            int v2_1 = ((v2_0 << 8) | ((v0 >> 12) | 224));
                            int v3_1 = (v3_0 + 1);
                            if (v3_1 < 4) {
                                v5_3 = v6;
                            } else {
                                if (v6 >= v7.length) {
                                    v7 = com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.growArrayBy(v7, v7.length);
                                    this._quadBuffer = v7;
                                }
                                v5_3 = (v6 + 1);
                                v7[v6] = v2_1;
                                v2_1 = 0;
                                v3_1 = 0;
                            }
                            v2_0 = ((v2_1 << 8) | (((v0 >> 6) & 63) | 128));
                            v3_0 = (v3_1 + 1);
                        } else {
                            v2_0 = ((v2_0 << 8) | ((v0 >> 6) | 192));
                            v3_0++;
                            v5_3 = v6;
                        }
                        v0 = ((v0 & 63) | 128);
                        v6 = v5_3;
                    }
                }
                int v5_4;
                if (v3_0 >= 4) {
                    if (v6 >= v7.length) {
                        v7 = com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.growArrayBy(v7, v7.length);
                        this._quadBuffer = v7;
                    }
                    v5_4 = (v6 + 1);
                    v7[v6] = v2_0;
                    v2_0 = v0;
                    v3_0 = 1;
                } else {
                    v3_0++;
                    v2_0 = ((v2_0 << 8) | v0);
                    v5_4 = v6;
                }
                if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
                    this._reportInvalidEOF(" in field name");
                }
                int v8_3 = this._inputBuffer;
                int v9_0 = this._inputPtr;
                this._inputPtr = (v9_0 + 1);
                v0 = (v8_3[v9_0] & 255);
                v6 = v5_4;
            }
            int v5_0;
            if (v3_0 <= 0) {
                v5_0 = v6;
            } else {
                if (v6 >= v7.length) {
                    v7 = com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.growArrayBy(v7, v7.length);
                    this._quadBuffer = v7;
                }
                v5_0 = (v6 + 1);
                v7[v6] = v2_0;
            }
            v4 = this._symbols.findName(v7, v5_0);
            if (v4 == null) {
                v4 = this.addName(v7, v5_0, v3_0);
            }
        } else {
            v4 = com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer.getEmptyName();
        }
        return v4;
    }

    protected final com.flurry.org.codehaus.jackson.sym.Name _parseFieldName(int p11)
    {
        com.flurry.org.codehaus.jackson.sym.Name v3_3;
        if (p11 == 34) {
            if ((this._inputPtr + 9) <= this._inputEnd) {
                byte[] v1 = this._inputBuffer;
                int[] v0 = com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.sInputCodesLatin1;
                com.flurry.org.codehaus.jackson.sym.Name v3_0 = this._inputPtr;
                this._inputPtr = (v3_0 + 1);
                int v2_0 = (v1[v3_0] & 255);
                if (v0[v2_0] != 0) {
                    if (v2_0 != 34) {
                        v3_3 = this.parseFieldName(0, v2_0, 0);
                    } else {
                        v3_3 = com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer.getEmptyName();
                    }
                } else {
                    com.flurry.org.codehaus.jackson.sym.Name v3_4 = this._inputPtr;
                    this._inputPtr = (v3_4 + 1);
                    int v11_1 = (v1[v3_4] & 255);
                    if (v0[v11_1] != 0) {
                        if (v11_1 != 34) {
                            v3_3 = this.parseFieldName(v2_0, v11_1, 1);
                        } else {
                            v3_3 = this.findName(v2_0, 1);
                        }
                    } else {
                        int v2_1 = ((v2_0 << 8) | v11_1);
                        com.flurry.org.codehaus.jackson.sym.Name v3_8 = this._inputPtr;
                        this._inputPtr = (v3_8 + 1);
                        int v11_2 = (v1[v3_8] & 255);
                        if (v0[v11_2] != 0) {
                            if (v11_2 != 34) {
                                v3_3 = this.parseFieldName(v2_1, v11_2, 2);
                            } else {
                                v3_3 = this.findName(v2_1, 2);
                            }
                        } else {
                            int v2_2 = ((v2_1 << 8) | v11_2);
                            com.flurry.org.codehaus.jackson.sym.Name v3_12 = this._inputPtr;
                            this._inputPtr = (v3_12 + 1);
                            int v11_3 = (v1[v3_12] & 255);
                            if (v0[v11_3] != 0) {
                                if (v11_3 != 34) {
                                    v3_3 = this.parseFieldName(v2_2, v11_3, 3);
                                } else {
                                    v3_3 = this.findName(v2_2, 3);
                                }
                            } else {
                                int v2_3 = ((v2_2 << 8) | v11_3);
                                com.flurry.org.codehaus.jackson.sym.Name v3_17 = this._inputPtr;
                                this._inputPtr = (v3_17 + 1);
                                int v11_4 = (v1[v3_17] & 255);
                                if (v0[v11_4] != 0) {
                                    if (v11_4 != 34) {
                                        v3_3 = this.parseFieldName(v2_3, v11_4, 4);
                                    } else {
                                        v3_3 = this.findName(v2_3, 4);
                                    }
                                } else {
                                    this._quad1 = v2_3;
                                    v3_3 = this.parseMediumFieldName(v11_4, v0);
                                }
                            }
                        }
                    }
                }
            } else {
                v3_3 = this.slowParseFieldName();
            }
        } else {
            v3_3 = this._handleUnusualFieldName(p11);
        }
        return v3_3;
    }

    protected void _releaseBuffers()
    {
        super._releaseBuffers();
        if (this._bufferRecyclable) {
            byte[] v0 = this._inputBuffer;
            if (v0 != null) {
                this._inputBuffer = 0;
                this._ioContext.releaseReadIOBuffer(v0);
            }
        }
        return;
    }

    protected void _reportInvalidChar(int p2)
    {
        if (p2 < 32) {
            this._throwInvalidSpace(p2);
        }
        this._reportInvalidInitial(p2);
        return;
    }

    protected void _reportInvalidInitial(int p3)
    {
        this._reportError(new StringBuilder().append("Invalid UTF-8 start byte 0x").append(Integer.toHexString(p3)).toString());
        return;
    }

    protected void _reportInvalidOther(int p3)
    {
        this._reportError(new StringBuilder().append("Invalid UTF-8 middle byte 0x").append(Integer.toHexString(p3)).toString());
        return;
    }

    protected void _reportInvalidOther(int p1, int p2)
    {
        this._inputPtr = p2;
        this._reportInvalidOther(p1);
        return;
    }

    protected void _reportInvalidToken(String p7, String p8)
    {
        StringBuilder v2_1 = new StringBuilder(p7);
        while ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
            int v3_13 = this._inputBuffer;
            String v4_4 = this._inputPtr;
            this._inputPtr = (v4_4 + 1);
            char v0 = ((char) this._decodeCharForError(v3_13[v4_4]));
            if (!Character.isJavaIdentifierPart(v0)) {
                break;
            }
            this._inputPtr = (this._inputPtr + 1);
            v2_1.append(v0);
        }
        this._reportError(new StringBuilder().append("Unrecognized token \'").append(v2_1.toString()).append("\': was expecting ").append(p8).toString());
        return;
    }

    protected final void _skipCR()
    {
        if (((this._inputPtr < this._inputEnd) || (this.loadMore())) && (this._inputBuffer[this._inputPtr] == 10)) {
            this._inputPtr = (this._inputPtr + 1);
        }
        this._currInputRow = (this._currInputRow + 1);
        this._currInputRowStart = this._inputPtr;
        return;
    }

    protected final void _skipLF()
    {
        this._currInputRow = (this._currInputRow + 1);
        this._currInputRowStart = this._inputPtr;
        return;
    }

    protected void _skipString()
    {
        this._tokenIncomplete = 0;
        int[] v1 = com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.sInputCodesUtf8;
        byte[] v2 = this._inputBuffer;
        while(true) {
            int v5;
            int v4_0 = this._inputPtr;
            int v3 = this._inputEnd;
            if (v4_0 >= v3) {
                this.loadMoreGuaranteed();
                v3 = this._inputEnd;
                v5 = this._inputPtr;
                if (v5 >= v3) {
                    this._inputPtr = v5;
                } else {
                    v4_0 = (v5 + 1);
                    int v0 = (v2[v5] & 255);
                    if (v1[v0] != 0) {
                        this._inputPtr = v4_0;
                        if (v0 != 34) {
                            switch (v1[v0]) {
                                case 1:
                                    this._decodeEscaped();
                                    break;
                                case 2:
                                    this._skipUtf8_2(v0);
                                    break;
                                case 3:
                                    this._skipUtf8_3(v0);
                                    break;
                                case 4:
                                    this._skipUtf8_4(v0);
                                    break;
                                default:
                                    if (v0 >= 32) {
                                        break;
                                    }
                                    this._throwUnquotedSpace(v0, "string value");
                            }
                        } else {
                            return;
                        }
                    }
                }
            }
            v5 = v4_0;
        }
        this._reportInvalidChar(v0);
    }

    public void close()
    {
        super.close();
        this._symbols.release();
        return;
    }

    public byte[] getBinaryValue(com.flurry.org.codehaus.jackson.Base64Variant p5)
    {
        if ((this._currToken != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) && ((this._currToken != com.flurry.org.codehaus.jackson.JsonToken.VALUE_EMBEDDED_OBJECT) || (this._binaryValue == null))) {
            this._reportError(new StringBuilder().append("Current token (").append(this._currToken).append(") not VALUE_STRING or VALUE_EMBEDDED_OBJECT, can not access as binary").toString());
        }
        if (!this._tokenIncomplete) {
            if (this._binaryValue == null) {
                com.flurry.org.codehaus.jackson.util.ByteArrayBuilder v0 = this._getByteArrayBuilder();
                this._decodeBase64(this.getText(), v0, p5);
                this._binaryValue = v0.toByteArray();
            }
        } else {
            try {
                this._binaryValue = this._decodeBase64(p5);
                this._tokenIncomplete = 0;
            } catch (IllegalArgumentException v1) {
                throw this._constructError(new StringBuilder().append("Failed to decode VALUE_STRING as base64 (").append(p5).append("): ").append(v1.getMessage()).toString());
            }
        }
        return this._binaryValue;
    }

    public com.flurry.org.codehaus.jackson.ObjectCodec getCodec()
    {
        return this._objectCodec;
    }

    public Object getInputSource()
    {
        return this._inputStream;
    }

    public String getText()
    {
        String v1_2;
        com.flurry.org.codehaus.jackson.JsonToken v0 = this._currToken;
        if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
            v1_2 = this._getText2(v0);
        } else {
            if (this._tokenIncomplete) {
                this._tokenIncomplete = 0;
                this._finishString();
            }
            v1_2 = this._textBuffer.contentsAsString();
        }
        return v1_2;
    }

    public char[] getTextCharacters()
    {
        char[] v2_3;
        if (this._currToken == null) {
            v2_3 = 0;
        } else {
            switch (com.flurry.org.codehaus.jackson.impl.Utf8StreamParser$1.$SwitchMap$org$codehaus$jackson$JsonToken[this._currToken.ordinal()]) {
                case 1:
                    if (!this._nameCopied) {
                        String v0 = this._parsingContext.getCurrentName();
                        int v1 = v0.length();
                        if (this._nameCopyBuffer != null) {
                            if (this._nameCopyBuffer.length < v1) {
                                char[] v2_9 = new char[v1];
                                this._nameCopyBuffer = v2_9;
                            }
                        } else {
                            this._nameCopyBuffer = this._ioContext.allocNameCopyBuffer(v1);
                        }
                        v0.getChars(0, v1, this._nameCopyBuffer, 0);
                        this._nameCopied = 1;
                    }
                    v2_3 = this._nameCopyBuffer;
                    break;
                case 2:
                    if (this._tokenIncomplete) {
                        this._tokenIncomplete = 0;
                        this._finishString();
                    } else {
                    }
                case 3:
                case 4:
                    break;
                case 3:
                case 4:
                    break;
                default:
                    v2_3 = this._currToken.asCharArray();
            }
            v2_3 = this._textBuffer.getTextBuffer();
        }
        return v2_3;
    }

    public int getTextLength()
    {
        int v0_0 = 0;
        if (this._currToken != null) {
            switch (com.flurry.org.codehaus.jackson.impl.Utf8StreamParser$1.$SwitchMap$org$codehaus$jackson$JsonToken[this._currToken.ordinal()]) {
                case 1:
                    v0_0 = this._parsingContext.getCurrentName().length();
                    break;
                case 2:
                    if (this._tokenIncomplete) {
                        this._tokenIncomplete = 0;
                        this._finishString();
                    } else {
                    }
                case 3:
                case 4:
                    break;
                case 3:
                case 4:
                    break;
                default:
                    v0_0 = this._currToken.asCharArray().length;
            }
            v0_0 = this._textBuffer.size();
        }
        return v0_0;
    }

    public int getTextOffset()
    {
        int v0_0 = 0;
        if (this._currToken != null) {
            switch (com.flurry.org.codehaus.jackson.impl.Utf8StreamParser$1.$SwitchMap$org$codehaus$jackson$JsonToken[this._currToken.ordinal()]) {
                case 1:
                default:
                    break;
                case 2:
                    if (this._tokenIncomplete) {
                        this._tokenIncomplete = 0;
                        this._finishString();
                    } else {
                        v0_0 = this._textBuffer.getTextOffset();
                    }
            }
        }
        return v0_0;
    }

    protected final boolean loadMore()
    {
        java.io.IOException v1_0 = 0;
        this._currInputProcessed = (this._currInputProcessed + ((long) this._inputEnd));
        this._currInputRowStart = (this._currInputRowStart - this._inputEnd);
        if (this._inputStream != null) {
            int v0 = this._inputStream.read(this._inputBuffer, 0, this._inputBuffer.length);
            if (v0 <= 0) {
                this._closeInput();
                if (v0 == 0) {
                    throw new java.io.IOException(new StringBuilder().append("InputStream.read() returned 0 characters when trying to read ").append(this._inputBuffer.length).append(" bytes").toString());
                }
            } else {
                this._inputPtr = 0;
                this._inputEnd = v0;
                v1_0 = 1;
            }
        }
        return v1_0;
    }

    public Boolean nextBooleanValue()
    {
        Boolean v1 = 0;
        if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
            switch (com.flurry.org.codehaus.jackson.impl.Utf8StreamParser$1.$SwitchMap$org$codehaus$jackson$JsonToken[this.nextToken().ordinal()]) {
                case 5:
                    v1 = Boolean.TRUE;
                    break;
                case 6:
                    v1 = Boolean.FALSE;
                    break;
                default:
            }
        } else {
            this._nameCopied = 0;
            com.flurry.org.codehaus.jackson.JsonToken v0 = this._nextToken;
            this._nextToken = 0;
            this._currToken = v0;
            if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_TRUE) {
                if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_FALSE) {
                    if (v0 != com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY) {
                        if (v0 == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
                            this._parsingContext = this._parsingContext.createChildObjectContext(this._tokenInputRow, this._tokenInputCol);
                        }
                    } else {
                        this._parsingContext = this._parsingContext.createChildArrayContext(this._tokenInputRow, this._tokenInputCol);
                    }
                } else {
                    v1 = Boolean.FALSE;
                }
            } else {
                v1 = Boolean.TRUE;
            }
        }
        return v1;
    }

    public boolean nextFieldName(com.flurry.org.codehaus.jackson.SerializableString p11)
    {
        byte v6_5;
        this._numTypesValid = 0;
        if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
            if (this._tokenIncomplete) {
                this._skipString();
            }
            int v1 = this._skipWSOrEnd();
            if (v1 >= 0) {
                this._tokenInputTotal = ((this._currInputProcessed + ((long) this._inputPtr)) - 1);
                this._tokenInputRow = this._currInputRow;
                this._tokenInputCol = ((this._inputPtr - this._currInputRowStart) - 1);
                this._binaryValue = 0;
                if (v1 != 93) {
                    if (v1 != 125) {
                        if (this._parsingContext.expectComma()) {
                            if (v1 != 44) {
                                this._reportUnexpectedChar(v1, new StringBuilder().append("was expecting comma to separate ").append(this._parsingContext.getTypeDesc()).append(" entries").toString());
                            }
                            v1 = this._skipWS();
                        }
                        if (this._parsingContext.inObject()) {
                            if (v1 == 34) {
                                byte[] v3 = p11.asQuotedUTF8();
                                int v2 = v3.length;
                                if ((this._inputPtr + v2) < this._inputEnd) {
                                    int v0 = (this._inputPtr + v2);
                                    if (this._inputBuffer[v0] == 34) {
                                        int v4 = 0;
                                        while (v4 != v2) {
                                            if (v3[v4] == this._inputBuffer[(this._inputPtr + v4)]) {
                                                v4++;
                                            }
                                        }
                                        this._inputPtr = (v0 + 1);
                                        this._parsingContext.setCurrentName(p11.getValue());
                                        this._currToken = com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME;
                                        this._isNextTokenNameYes();
                                        v6_5 = 1;
                                        return v6_5;
                                    }
                                }
                            }
                            this._isNextTokenNameNo(v1);
                            v6_5 = 0;
                        } else {
                            this._nextTokenNotInObject(v1);
                            v6_5 = 0;
                        }
                    } else {
                        if (!this._parsingContext.inObject()) {
                            this._reportMismatchedEndMarker(v1, 93);
                        }
                        this._parsingContext = this._parsingContext.getParent();
                        this._currToken = com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT;
                        v6_5 = 0;
                    }
                } else {
                    if (!this._parsingContext.inArray()) {
                        this._reportMismatchedEndMarker(v1, 125);
                    }
                    this._parsingContext = this._parsingContext.getParent();
                    this._currToken = com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY;
                    v6_5 = 0;
                }
            } else {
                this.close();
                this._currToken = 0;
                v6_5 = 0;
            }
        } else {
            this._nextAfterName();
            v6_5 = 0;
        }
        return v6_5;
    }

    public int nextIntValue(int p5)
    {
        if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
            if (this.nextToken() == com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
                p5 = this.getIntValue();
            }
        } else {
            this._nameCopied = 0;
            com.flurry.org.codehaus.jackson.JsonToken v0 = this._nextToken;
            this._nextToken = 0;
            this._currToken = v0;
            if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
                if (v0 != com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY) {
                    if (v0 == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
                        this._parsingContext = this._parsingContext.createChildObjectContext(this._tokenInputRow, this._tokenInputCol);
                    }
                } else {
                    this._parsingContext = this._parsingContext.createChildArrayContext(this._tokenInputRow, this._tokenInputCol);
                }
            } else {
                p5 = this.getIntValue();
            }
        }
        return p5;
    }

    public long nextLongValue(long p5)
    {
        if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
            if (this.nextToken() == com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
                p5 = this.getLongValue();
            }
        } else {
            this._nameCopied = 0;
            com.flurry.org.codehaus.jackson.JsonToken v0 = this._nextToken;
            this._nextToken = 0;
            this._currToken = v0;
            if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
                if (v0 != com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY) {
                    if (v0 == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
                        this._parsingContext = this._parsingContext.createChildObjectContext(this._tokenInputRow, this._tokenInputCol);
                    }
                } else {
                    this._parsingContext = this._parsingContext.createChildArrayContext(this._tokenInputRow, this._tokenInputCol);
                }
            } else {
                p5 = this.getLongValue();
            }
        }
        return p5;
    }

    public String nextTextValue()
    {
        String v1_0 = 0;
        if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
            if (this.nextToken() == com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                v1_0 = this.getText();
            }
        } else {
            this._nameCopied = 0;
            com.flurry.org.codehaus.jackson.JsonToken v0 = this._nextToken;
            this._nextToken = 0;
            this._currToken = v0;
            if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                if (v0 != com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY) {
                    if (v0 == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
                        this._parsingContext = this._parsingContext.createChildObjectContext(this._tokenInputRow, this._tokenInputCol);
                    }
                } else {
                    this._parsingContext = this._parsingContext.createChildArrayContext(this._tokenInputRow, this._tokenInputCol);
                }
            } else {
                if (this._tokenIncomplete) {
                    this._tokenIncomplete = 0;
                    this._finishString();
                }
                v1_0 = this._textBuffer.contentsAsString();
            }
        }
        return v1_0;
    }

    public com.flurry.org.codehaus.jackson.JsonToken nextToken()
    {
        com.flurry.org.codehaus.jackson.JsonToken v3_0 = 0;
        this._numTypesValid = 0;
        if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
            if (this._tokenIncomplete) {
                this._skipString();
            }
            int v0_0 = this._skipWSOrEnd();
            if (v0_0 >= 0) {
                this._tokenInputTotal = ((this._currInputProcessed + ((long) this._inputPtr)) - 1);
                this._tokenInputRow = this._currInputRow;
                this._tokenInputCol = ((this._inputPtr - this._currInputRowStart) - 1);
                this._binaryValue = 0;
                if (v0_0 != 93) {
                    if (v0_0 != 125) {
                        if (this._parsingContext.expectComma()) {
                            if (v0_0 != 44) {
                                this._reportUnexpectedChar(v0_0, new StringBuilder().append("was expecting comma to separate ").append(this._parsingContext.getTypeDesc()).append(" entries").toString());
                            }
                            v0_0 = this._skipWS();
                        }
                        if (this._parsingContext.inObject()) {
                            this._parsingContext.setCurrentName(this._parseFieldName(v0_0).getName());
                            this._currToken = com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME;
                            int v0_1 = this._skipWS();
                            if (v0_1 != 58) {
                                this._reportUnexpectedChar(v0_1, "was expecting a colon to separate field name and value");
                            }
                            int v0_2 = this._skipWS();
                            if (v0_2 != 34) {
                                com.flurry.org.codehaus.jackson.JsonToken v2;
                                switch (v0_2) {
                                    case 45:
                                    case 48:
                                    case 49:
                                    case 50:
                                    case 51:
                                    case 52:
                                    case 53:
                                    case 54:
                                    case 55:
                                    case 56:
                                    case 57:
                                        v2 = this.parseNumberText(v0_2);
                                        break;
                                    case 91:
                                        v2 = com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY;
                                        break;
                                    case 93:
                                    case 125:
                                        this._reportUnexpectedChar(v0_2, "expected a value");
                                        this._matchToken("true", 1);
                                        v2 = com.flurry.org.codehaus.jackson.JsonToken.VALUE_TRUE;
                                        break;
                                    case 102:
                                        this._matchToken("false", 1);
                                        v2 = com.flurry.org.codehaus.jackson.JsonToken.VALUE_FALSE;
                                        break;
                                    case 110:
                                        this._matchToken("null", 1);
                                        v2 = com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL;
                                        break;
                                    case 123:
                                        v2 = com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT;
                                        break;
                                    default:
                                        v2 = this._handleUnexpectedValue(v0_2);
                                }
                                this._nextToken = v2;
                                v3_0 = this._currToken;
                            } else {
                                this._tokenIncomplete = 1;
                                this._nextToken = com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING;
                                v3_0 = this._currToken;
                            }
                        } else {
                            v3_0 = this._nextTokenNotInObject(v0_0);
                        }
                    } else {
                        if (!this._parsingContext.inObject()) {
                            this._reportMismatchedEndMarker(v0_0, 93);
                        }
                        this._parsingContext = this._parsingContext.getParent();
                        v3_0 = com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT;
                        this._currToken = v3_0;
                    }
                } else {
                    if (!this._parsingContext.inArray()) {
                        this._reportMismatchedEndMarker(v0_0, 125);
                    }
                    this._parsingContext = this._parsingContext.getParent();
                    v3_0 = com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY;
                    this._currToken = v3_0;
                }
            } else {
                this.close();
                this._currToken = 0;
            }
        } else {
            v3_0 = this._nextAfterName();
        }
        return v3_0;
    }

    protected com.flurry.org.codehaus.jackson.sym.Name parseEscapedFieldName(int[] p8, int p9, int p10, int p11, int p12)
    {
        while(true) {
            int v2_0;
            if (com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.sInputCodesLatin1[p11] == 0) {
                v2_0 = p9;
            } else {
                if (p11 == 34) {
                    break;
                }
                if (p11 == 92) {
                    p11 = this._decodeEscaped();
                } else {
                    this._throwUnquotedSpace(p11, "name");
                }
                if (p11 <= 127) {
                } else {
                    int v2_1;
                    if (p12 < 4) {
                        v2_1 = p9;
                    } else {
                        if (p9 >= p8.length) {
                            p8 = com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.growArrayBy(p8, p8.length);
                            this._quadBuffer = p8;
                        }
                        v2_1 = (p9 + 1);
                        p8[p9] = p10;
                        p10 = 0;
                        p12 = 0;
                    }
                    int v9_1;
                    if (p11 >= 2048) {
                        int v10_1 = ((p10 << 8) | ((p11 >> 12) | 224));
                        int v12_1 = (p12 + 1);
                        if (v12_1 < 4) {
                            v9_1 = v2_1;
                        } else {
                            if (v2_1 >= p8.length) {
                                p8 = com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.growArrayBy(p8, p8.length);
                                this._quadBuffer = p8;
                            }
                            v9_1 = (v2_1 + 1);
                            p8[v2_1] = v10_1;
                            v10_1 = 0;
                            v12_1 = 0;
                        }
                        p10 = ((v10_1 << 8) | (((p11 >> 6) & 63) | 128));
                        p12 = (v12_1 + 1);
                    } else {
                        p10 = ((p10 << 8) | ((p11 >> 6) | 192));
                        p12++;
                        v9_1 = v2_1;
                    }
                    p11 = ((p11 & 63) | 128);
                    v2_0 = v9_1;
                }
            }
            if (p12 >= 4) {
                if (v2_0 >= p8.length) {
                    p8 = com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.growArrayBy(p8, p8.length);
                    this._quadBuffer = p8;
                }
                p9 = (v2_0 + 1);
                p8[v2_0] = p10;
                p10 = p11;
                p12 = 1;
            } else {
                p12++;
                p10 = ((p10 << 8) | p11);
                p9 = v2_0;
            }
            if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
                this._reportInvalidEOF(" in field name");
            }
            int v3_21 = this._inputBuffer;
            int v4_8 = this._inputPtr;
            this._inputPtr = (v4_8 + 1);
            p11 = (v3_21[v4_8] & 255);
        }
        if (p12 > 0) {
            if (p9 >= p8.length) {
                p8 = com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.growArrayBy(p8, p8.length);
                this._quadBuffer = p8;
            }
            int v2_2 = (p9 + 1);
            p8[p9] = p10;
            p9 = v2_2;
        }
        com.flurry.org.codehaus.jackson.sym.Name v1 = this._symbols.findName(p8, p9);
        if (v1 == null) {
            v1 = this.addName(p8, p9, p12);
        }
        return v1;
    }

    protected com.flurry.org.codehaus.jackson.sym.Name parseLongFieldName(int p13)
    {
        int[] v6 = com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.sInputCodesLatin1;
        int v2 = 2;
        while ((this._inputEnd - this._inputPtr) >= 4) {
            int[] v0_2 = this._inputBuffer;
            int[] v1_1 = this._inputPtr;
            this._inputPtr = (v1_1 + 1);
            int v4_1 = (v0_2[v1_1] & 255);
            if (v6[v4_1] == 0) {
                int v13_1 = ((p13 << 8) | v4_1);
                int[] v0_6 = this._inputBuffer;
                int[] v1_2 = this._inputPtr;
                this._inputPtr = (v1_2 + 1);
                int v4_2 = (v0_6[v1_2] & 255);
                if (v6[v4_2] == 0) {
                    int v13_2 = ((v13_1 << 8) | v4_2);
                    int[] v0_10 = this._inputBuffer;
                    int[] v1_3 = this._inputPtr;
                    this._inputPtr = (v1_3 + 1);
                    int v4_3 = (v0_10[v1_3] & 255);
                    if (v6[v4_3] == 0) {
                        int v13_3 = ((v13_2 << 8) | v4_3);
                        int[] v0_14 = this._inputBuffer;
                        int[] v1_4 = this._inputPtr;
                        this._inputPtr = (v1_4 + 1);
                        int v4_4 = (v0_14[v1_4] & 255);
                        if (v6[v4_4] == 0) {
                            if (v2 >= this._quadBuffer.length) {
                                this._quadBuffer = com.flurry.org.codehaus.jackson.impl.Utf8StreamParser.growArrayBy(this._quadBuffer, v2);
                            }
                            int v7 = (v2 + 1);
                            this._quadBuffer[v2] = v13_3;
                            p13 = v4_4;
                            v2 = v7;
                        } else {
                            if (v4_4 != 34) {
                                int[] v0_0 = this.parseEscapedFieldName(this._quadBuffer, v2, v13_3, v4_4, 4);
                            } else {
                                v0_0 = this.findName(this._quadBuffer, v2, v13_3, 4);
                            }
                        }
                    } else {
                        if (v4_3 != 34) {
                            v0_0 = this.parseEscapedFieldName(this._quadBuffer, v2, v13_2, v4_3, 3);
                        } else {
                            v0_0 = this.findName(this._quadBuffer, v2, v13_2, 3);
                        }
                    }
                } else {
                    if (v4_2 != 34) {
                        v0_0 = this.parseEscapedFieldName(this._quadBuffer, v2, v13_1, v4_2, 2);
                    } else {
                        v0_0 = this.findName(this._quadBuffer, v2, v13_1, 2);
                    }
                }
            } else {
                if (v4_1 != 34) {
                    v0_0 = this.parseEscapedFieldName(this._quadBuffer, v2, p13, v4_1, 1);
                } else {
                    v0_0 = this.findName(this._quadBuffer, v2, p13, 1);
                }
            }
            return v0_0;
        }
        v0_0 = this.parseEscapedFieldName(this._quadBuffer, v2, 0, p13, 0);
        return v0_0;
    }

    protected final com.flurry.org.codehaus.jackson.sym.Name parseMediumFieldName(int p10, int[] p11)
    {
        com.flurry.org.codehaus.jackson.sym.Name v1_16;
        com.flurry.org.codehaus.jackson.sym.Name v1_15 = this._inputBuffer;
        int v2_4 = this._inputPtr;
        this._inputPtr = (v2_4 + 1);
        int v0_0 = (v1_15[v2_4] & 255);
        if (p11[v0_0] == 0) {
            int v10_1 = ((p10 << 8) | v0_0);
            com.flurry.org.codehaus.jackson.sym.Name v1_2 = this._inputBuffer;
            int v2_0 = this._inputPtr;
            this._inputPtr = (v2_0 + 1);
            int v0_1 = (v1_2[v2_0] & 255);
            if (p11[v0_1] == 0) {
                int v10_2 = ((v10_1 << 8) | v0_1);
                com.flurry.org.codehaus.jackson.sym.Name v1_6 = this._inputBuffer;
                int v2_1 = this._inputPtr;
                this._inputPtr = (v2_1 + 1);
                int v0_2 = (v1_6[v2_1] & 255);
                if (p11[v0_2] == 0) {
                    int v10_3 = ((v10_2 << 8) | v0_2);
                    com.flurry.org.codehaus.jackson.sym.Name v1_10 = this._inputBuffer;
                    int v2_2 = this._inputPtr;
                    this._inputPtr = (v2_2 + 1);
                    int v0_3 = (v1_10[v2_2] & 255);
                    if (p11[v0_3] == 0) {
                        this._quadBuffer[0] = this._quad1;
                        this._quadBuffer[1] = v10_3;
                        v1_16 = this.parseLongFieldName(v0_3);
                    } else {
                        if (v0_3 != 34) {
                            v1_16 = this.parseFieldName(this._quad1, v10_3, v0_3, 4);
                        } else {
                            v1_16 = this.findName(this._quad1, v10_3, 4);
                        }
                    }
                } else {
                    if (v0_2 != 34) {
                        v1_16 = this.parseFieldName(this._quad1, v10_2, v0_2, 3);
                    } else {
                        v1_16 = this.findName(this._quad1, v10_2, 3);
                    }
                }
            } else {
                if (v0_1 != 34) {
                    v1_16 = this.parseFieldName(this._quad1, v10_1, v0_1, 2);
                } else {
                    v1_16 = this.findName(this._quad1, v10_1, 2);
                }
            }
        } else {
            if (v0_0 != 34) {
                v1_16 = this.parseFieldName(this._quad1, p10, v0_0, 1);
            } else {
                v1_16 = this.findName(this._quad1, p10, 1);
            }
        }
        return v1_16;
    }

    protected final com.flurry.org.codehaus.jackson.JsonToken parseNumberText(int p13)
    {
        int v4;
        char[] v1 = this._textBuffer.emptyAndGetCurrentSegment();
        if (p13 != 45) {
            v4 = 0;
        } else {
            v4 = 1;
        }
        int v7_0;
        com.flurry.org.codehaus.jackson.JsonToken v0_14;
        if (v4 == 0) {
            v7_0 = 0;
            if (p13 == 48) {
                p13 = this._verifyNoLeadingZeroes();
            }
            int v2_0 = (v7_0 + 1);
            v1[v7_0] = ((char) p13);
            int v5 = 1;
            int v6 = (this._inputPtr + v1.length);
            if (v6 > this._inputEnd) {
                v6 = this._inputEnd;
            }
            while (this._inputPtr < v6) {
                com.flurry.org.codehaus.jackson.JsonToken v0_5 = this._inputBuffer;
                int v3_5 = this._inputPtr;
                this._inputPtr = (v3_5 + 1);
                int v13_1 = (v0_5[v3_5] & 255);
                if ((v13_1 >= 48) && (v13_1 <= 57)) {
                    v5++;
                    int v7_1 = (v2_0 + 1);
                    v1[v2_0] = ((char) v13_1);
                    v2_0 = v7_1;
                } else {
                    if ((v13_1 != 46) && ((v13_1 != 101) && (v13_1 != 69))) {
                        this._inputPtr = (this._inputPtr - 1);
                        this._textBuffer.setCurrentLength(v2_0);
                        v0_14 = this.resetInt(v4, v5);
                    } else {
                        v0_14 = this._parseFloatText(v1, v2_0, v13_1, v4, v5);
                    }
                }
            }
            v0_14 = this._parserNumber2(v1, v2_0, v4, v5);
        } else {
            v7_0 = (0 + 1);
            v1[0] = 45;
            if (this._inputPtr >= this._inputEnd) {
                this.loadMoreGuaranteed();
            }
            int v3_1 = this._inputBuffer;
            int v8_2 = this._inputPtr;
            this._inputPtr = (v8_2 + 1);
            p13 = (v3_1[v8_2] & 255);
            if ((p13 >= 48) && (p13 <= 57)) {
            } else {
                v0_14 = this._handleInvalidNumberStart(p13, 1);
            }
        }
        return v0_14;
    }

    public int releaseBuffered(java.io.OutputStream p5)
    {
        int v0 = (this._inputEnd - this._inputPtr);
        if (v0 >= 1) {
            p5.write(this._inputBuffer, this._inputPtr, v0);
        } else {
            v0 = 0;
        }
        return v0;
    }

    public void setCodec(com.flurry.org.codehaus.jackson.ObjectCodec p1)
    {
        this._objectCodec = p1;
        return;
    }

    protected com.flurry.org.codehaus.jackson.sym.Name slowParseFieldName()
    {
        if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
            this._reportInvalidEOF(": was expecting closing \'\"\' for name");
        }
        com.flurry.org.codehaus.jackson.sym.Name v0_4;
        com.flurry.org.codehaus.jackson.sym.Name v0_7 = this._inputBuffer;
        int[] v1_0 = this._inputPtr;
        this._inputPtr = (v1_0 + 1);
        int v4 = (v0_7[v1_0] & 255);
        if (v4 != 34) {
            v0_4 = this.parseEscapedFieldName(this._quadBuffer, 0, 0, v4, 0);
        } else {
            v0_4 = com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer.getEmptyName();
        }
        return v0_4;
    }
}
