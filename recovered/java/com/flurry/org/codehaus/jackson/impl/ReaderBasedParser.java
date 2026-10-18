package com.flurry.org.codehaus.jackson.impl;
public final class ReaderBasedParser extends com.flurry.org.codehaus.jackson.impl.JsonParserBase {
    protected char[] _inputBuffer;
    protected com.flurry.org.codehaus.jackson.ObjectCodec _objectCodec;
    protected java.io.Reader _reader;
    protected final com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer _symbols;
    protected boolean _tokenIncomplete;

    public ReaderBasedParser(com.flurry.org.codehaus.jackson.io.IOContext p2, int p3, java.io.Reader p4, com.flurry.org.codehaus.jackson.ObjectCodec p5, com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer p6)
    {
        super(p2, p3);
        super._tokenIncomplete = 0;
        super._reader = p4;
        super._inputBuffer = p2.allocTokenBuffer();
        super._objectCodec = p5;
        super._symbols = p6;
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

    private String _parseFieldName2(int p13, int p14, int p15)
    {
        this._textBuffer.resetWithShared(this._inputBuffer, p13, (this._inputPtr - p13));
        char[] v4 = this._textBuffer.getCurrentSegment();
        int v5 = this._textBuffer.getCurrentSegmentSize();
        while(true) {
            if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
                this._reportInvalidEOF(new StringBuilder().append(": was expecting closing \'").append(((char) p15)).append("\' for name").toString());
            }
            String v9_9 = this._inputBuffer;
            String v10_5 = this._inputPtr;
            this._inputPtr = (v10_5 + 1);
            char v1 = v9_9[v10_5];
            char v2 = v1;
            if (v2 <= 92) {
                if (v2 != 92) {
                    if (v2 <= p15) {
                        if (v2 == p15) {
                            break;
                        }
                        if (v2 < 32) {
                            this._throwUnquotedSpace(v2, "name");
                        }
                    }
                } else {
                    v1 = this._decodeEscaped();
                }
            }
            p14 = ((p14 * 31) + v2);
            int v6 = (v5 + 1);
            v4[v5] = v1;
            if (v6 < v4.length) {
                v5 = v6;
            } else {
                v4 = this._textBuffer.finishCurrentSegment();
                v5 = 0;
            }
        }
        this._textBuffer.setCurrentLength(v5);
        com.flurry.org.codehaus.jackson.util.TextBuffer v8 = this._textBuffer;
        return this._symbols.findSymbol(v8.getTextBuffer(), v8.getTextOffset(), v8.size(), p14);
    }

    private String _parseUnusualFieldName2(int p15, int p16, int[] p17)
    {
        this._textBuffer.resetWithShared(this._inputBuffer, p15, (this._inputPtr - p15));
        char[] v6 = this._textBuffer.getCurrentSegment();
        int v7 = this._textBuffer.getCurrentSegmentSize();
        int v5 = p17.length;
        while ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
            char v2 = this._inputBuffer[this._inputPtr];
            char v3 = v2;
            if (v3 > v5) {
                if (!Character.isJavaIdentifierPart(v2)) {
                    break;
                }
            } else {
                if (p17[v3] != 0) {
                    break;
                }
            }
            this._inputPtr = (this._inputPtr + 1);
            p16 = ((p16 * 31) + v3);
            int v8 = (v7 + 1);
            v6[v7] = v2;
            if (v8 < v6.length) {
                v7 = v8;
            } else {
                v6 = this._textBuffer.finishCurrentSegment();
                v7 = 0;
            }
        }
        this._textBuffer.setCurrentLength(v7);
        com.flurry.org.codehaus.jackson.util.TextBuffer v10 = this._textBuffer;
        return this._symbols.findSymbol(v10.getTextBuffer(), v10.getTextOffset(), v10.size(), p16);
    }

    private final void _skipCComment()
    {
        while ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
            int v1_13 = this._inputBuffer;
            int v2_4 = this._inputPtr;
            this._inputPtr = (v2_4 + 1);
            char v0 = v1_13[v2_4];
            if (v0 <= 42) {
                if (v0 != 42) {
                    if (v0 < 32) {
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
                    if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
                        break;
                    }
                    if (this._inputBuffer[this._inputPtr] == 47) {
                        this._inputPtr = (this._inputPtr + 1);
                    }
                }
            }
            return;
        }
        this._reportInvalidEOF(" in a comment");
        return;
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
        char v0 = v1_3[v2_0];
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
        while ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
            int v1_6 = this._inputBuffer;
            int v2_1 = this._inputPtr;
            this._inputPtr = (v2_1 + 1);
            char v0 = v1_6[v2_1];
            if (v0 < 32) {
                if (v0 != 10) {
                    if (v0 != 13) {
                        if (v0 != 9) {
                            this._throwInvalidSpace(v0);
                        }
                    } else {
                        this._skipCR();
                        break;
                    }
                } else {
                    this._skipLF();
                    break;
                }
            }
        }
        return;
    }

    private final int _skipWS()
    {
        while ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
            int v1_6 = this._inputBuffer;
            String v2_4 = this._inputPtr;
            this._inputPtr = (v2_4 + 1);
            char v0 = v1_6[v2_4];
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
            int v1_6 = this._inputBuffer;
            int v2_0 = this._inputPtr;
            this._inputPtr = (v2_0 + 1);
            int v0 = v1_6[v2_0];
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

    private final char _verifyNoLeadingZeroes()
    {
        if ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
            int v0 = this._inputBuffer[this._inputPtr];
            if ((v0 >= 48) && (v0 <= 57)) {
                if (!this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_NUMERIC_LEADING_ZEROS)) {
                    this.reportInvalidNumber("Leading zeroes not allowed");
                }
                this._inputPtr = (this._inputPtr + 1);
                if (v0 != 48) {
                    return v0;
                }
                while ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
                    v0 = this._inputBuffer[this._inputPtr];
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

    private final com.flurry.org.codehaus.jackson.JsonToken parseNumberText2(boolean p15)
    {
        char[] v5 = this._textBuffer.emptyAndGetCurrentSegment();
        int v6_0 = 0;
        if (p15) {
            v5[0] = 45;
            v6_0 = (0 + 1);
        }
        char v0_1;
        int v4 = 0;
        if (this._inputPtr >= this._inputEnd) {
            v0_1 = this.getNextChar("No digit following minus sign");
        } else {
            char[] v8_22 = this._inputBuffer;
            int v9_7 = this._inputPtr;
            this._inputPtr = (v9_7 + 1);
            v0_1 = v8_22[v9_7];
        }
        if (v0_1 == 48) {
            v0_1 = this._verifyNoLeadingZeroes();
        }
        int v1 = 0;
        while ((v0_1 >= 48) && (v0_1 <= 57)) {
            v4++;
            if (v6_0 >= v5.length) {
                v5 = this._textBuffer.finishCurrentSegment();
                v6_0 = 0;
            }
            int v7_3 = (v6_0 + 1);
            v5[v6_0] = v0_1;
            if ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
                char[] v8_32 = this._inputBuffer;
                int v9_9 = this._inputPtr;
                this._inputPtr = (v9_9 + 1);
                v0_1 = v8_32[v9_9];
                v6_0 = v7_3;
            } else {
                v0_1 = 0;
                v1 = 1;
            }
            if (v4 == 0) {
                this.reportInvalidNumber(new StringBuilder().append("Missing integer part (next char ").append(com.flurry.org.codehaus.jackson.impl.ReaderBasedParser._getCharDesc(v0_1)).append(")").toString());
            }
            int v6_1;
            int v3 = 0;
            if (v0_1 != 46) {
                v6_1 = v7_3;
            } else {
                v6_1 = (v7_3 + 1);
                v5[v7_3] = v0_1;
                while ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
                    char[] v8_42 = this._inputBuffer;
                    int v9_14 = this._inputPtr;
                    this._inputPtr = (v9_14 + 1);
                    v0_1 = v8_42[v9_14];
                    if ((v0_1 >= 48) && (v0_1 <= 57)) {
                        v3++;
                        if (v6_1 >= v5.length) {
                            v5 = this._textBuffer.finishCurrentSegment();
                            v6_1 = 0;
                        }
                        int v7_5 = (v6_1 + 1);
                        v5[v6_1] = v0_1;
                        v6_1 = v7_5;
                    }
                    if (v3 == 0) {
                        this.reportUnexpectedNumberChar(v0_1, "Decimal point not followed by a digit");
                    }
                }
                v1 = 1;
            }
            int v2 = 0;
            if ((v0_1 == 101) || (v0_1 == 69)) {
                if (v6_1 >= v5.length) {
                    v5 = this._textBuffer.finishCurrentSegment();
                    v6_1 = 0;
                }
                char v0_0;
                int v7_0 = (v6_1 + 1);
                v5[v6_1] = v0_1;
                if (this._inputPtr >= this._inputEnd) {
                    v0_0 = this.getNextChar("expected a digit for number exponent");
                } else {
                    char[] v8_8 = this._inputBuffer;
                    int v9_1 = this._inputPtr;
                    this._inputPtr = (v9_1 + 1);
                    v0_0 = v8_8[v9_1];
                }
                if ((v0_0 != 45) && (v0_0 != 43)) {
                    v6_1 = v7_0;
                } else {
                    int v6_2;
                    if (v7_0 < v5.length) {
                        v6_2 = v7_0;
                    } else {
                        v5 = this._textBuffer.finishCurrentSegment();
                        v6_2 = 0;
                    }
                    int v7_1 = (v6_2 + 1);
                    v5[v6_2] = v0_0;
                    if (this._inputPtr >= this._inputEnd) {
                        v0_0 = this.getNextChar("expected a digit for number exponent");
                    } else {
                        char[] v8_14 = this._inputBuffer;
                        int v9_4 = this._inputPtr;
                        this._inputPtr = (v9_4 + 1);
                        v0_0 = v8_14[v9_4];
                    }
                    v6_1 = v7_1;
                }
                while ((v0_0 <= 57) && (v0_0 >= 48)) {
                    v2++;
                    if (v6_1 >= v5.length) {
                        v5 = this._textBuffer.finishCurrentSegment();
                        v6_1 = 0;
                    }
                    int v7_2 = (v6_1 + 1);
                    v5[v6_1] = v0_0;
                    if ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
                        char[] v8_20 = this._inputBuffer;
                        int v9_6 = this._inputPtr;
                        this._inputPtr = (v9_6 + 1);
                        v0_0 = v8_20[v9_6];
                        v6_1 = v7_2;
                    } else {
                        v1 = 1;
                        v6_1 = v7_2;
                        break;
                    }
                }
                if (v2 == 0) {
                    this.reportUnexpectedNumberChar(v0_0, "Exponent indicator not followed by a digit");
                }
            }
            if (v1 == 0) {
                this._inputPtr = (this._inputPtr - 1);
            }
            this._textBuffer.setCurrentLength(v6_1);
            return this.reset(p15, v4, v3, v2);
        }
        v7_3 = v6_0;
    }

    protected void _closeInput()
    {
        if (this._reader != null) {
            if ((this._ioContext.isResourceManaged()) || (this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.AUTO_CLOSE_SOURCE))) {
                this._reader.close();
            }
            this._reader = 0;
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
            byte[] v4_25 = this._inputBuffer;
            String v5_0 = this._inputPtr;
            this._inputPtr = (v5_0 + 1);
            char v2_1 = v4_25[v5_0];
            if (v2_1 > 32) {
                byte[] v4_8;
                int v0_0 = p11.decodeBase64Char(v2_1);
                if (v0_0 >= 0) {
                    break;
                }
                if (v2_1 != 34) {
                    v0_0 = this._decodeBase64Escape(p11, v2_1, 0);
                } else {
                    v4_8 = v1.toByteArray();
                }
                return v4_8;
            }
        } while(v0_0 < 0);
        int v3_2 = v0_0;
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        byte[] v4_12 = this._inputBuffer;
        String v5_5 = this._inputPtr;
        this._inputPtr = (v5_5 + 1);
        char v2_2 = v4_12[v5_5];
        int v0_1 = p11.decodeBase64Char(v2_2);
        if (v0_1 < 0) {
            v0_1 = this._decodeBase64Escape(p11, v2_2, 1);
        }
        int v3_3 = ((v3_2 << 6) | v0_1);
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        byte[] v4_16 = this._inputBuffer;
        String v5_7 = this._inputPtr;
        this._inputPtr = (v5_7 + 1);
        char v2_3 = v4_16[v5_7];
        int v0_2 = p11.decodeBase64Char(v2_3);
        if (v0_2 < 0) {
            if (v0_2 != -2) {
                if ((v2_3 != 34) || (p11.usesPadding())) {
                    v0_2 = this._decodeBase64Escape(p11, v2_3, 2);
                } else {
                    v1.append((v3_3 >> 4));
                    v4_8 = v1.toByteArray();
                    return v4_8;
                }
            }
            if (v0_2 == -2) {
                if (this._inputPtr >= this._inputEnd) {
                    this.loadMoreGuaranteed();
                }
                byte[] v4_27 = this._inputBuffer;
                String v5_12 = this._inputPtr;
                this._inputPtr = (v5_12 + 1);
                char v2_0 = v4_27[v5_12];
                if (p11.usesPaddingChar(v2_0)) {
                    v1.append((v3_3 >> 4));
                } else {
                    throw this.reportInvalidBase64Char(p11, v2_0, 3, new StringBuilder().append("expected padding character \'").append(p11.getPaddingChar()).append("\'").toString());
                }
                return v4_8;
            }
        }
        int v3_4 = ((v3_3 << 6) | v0_2);
        if (this._inputPtr >= this._inputEnd) {
            this.loadMoreGuaranteed();
        }
        byte[] v4_22 = this._inputBuffer;
        String v5_10 = this._inputPtr;
        this._inputPtr = (v5_10 + 1);
        char v2_4 = v4_22[v5_10];
        int v0_3 = p11.decodeBase64Char(v2_4);
        if (v0_3 < 0) {
            if (v0_3 != -2) {
                if ((v2_4 != 34) || (p11.usesPadding())) {
                    v0_3 = this._decodeBase64Escape(p11, v2_4, 3);
                } else {
                    v1.appendTwoBytes((v3_4 >> 2));
                    v4_8 = v1.toByteArray();
                    return v4_8;
                }
            }
            if (v0_3 == -2) {
                v1.appendTwoBytes((v3_4 >> 2));
            }
        }
        v1.appendThreeBytes(((v3_4 << 6) | v0_3));
    }

    protected final char _decodeEscaped()
    {
        if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
            this._reportInvalidEOF(" in character escape sequence");
        }
        int v5_10 = this._inputBuffer;
        int v6_3 = this._inputPtr;
        this._inputPtr = (v6_3 + 1);
        char v0 = v5_10[v6_3];
        switch (v0) {
            case 34:
            case 47:
            case 92:
                break;
            case 34:
            case 47:
            case 92:
                break;
            case 34:
            case 47:
            case 92:
                break;
            case 98:
                v0 = 8;
                break;
            case 102:
                v0 = 12;
                break;
            case 110:
                v0 = 10;
                break;
            case 114:
                v0 = 13;
                break;
            case 116:
                v0 = 9;
                break;
            case 117:
                int v4 = 0;
                int v3 = 0;
                while (v3 < 4) {
                    if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
                        this._reportInvalidEOF(" in character escape sequence");
                    }
                    int v5_5 = this._inputBuffer;
                    int v6_2 = this._inputPtr;
                    this._inputPtr = (v6_2 + 1);
                    char v1 = v5_5[v6_2];
                    int v2 = com.flurry.org.codehaus.jackson.util.CharTypes.charToHex(v1);
                    if (v2 < 0) {
                        this._reportUnexpectedChar(v1, "expected a hex-digit for character escape sequence");
                    }
                    v4 = ((v4 << 4) | v2);
                    v3++;
                }
                v0 = ((char) v4);
                break;
            default:
                v0 = this._handleUnrecognizedCharacterEscape(v0);
        }
        return v0;
    }

    protected void _finishString()
    {
        int v4 = this._inputPtr;
        int v2 = this._inputEnd;
        if (v4 >= v2) {
            this._textBuffer.resetWithCopy(this._inputBuffer, this._inputPtr, (v4 - this._inputPtr));
            this._inputPtr = v4;
            this._finishString2();
        } else {
            int[] v1 = com.flurry.org.codehaus.jackson.util.CharTypes.getInputCodeLatin1();
            do {
                char v0 = this._inputBuffer[v4];
                if ((v0 >= v1.length) || (v1[v0] == 0)) {
                    v4++;
                } else {
                    if (v0 != 34) {
                        break;
                    }
                    this._textBuffer.resetWithShared(this._inputBuffer, this._inputPtr, (v4 - this._inputPtr));
                    this._inputPtr = (v4 + 1);
                }
            } while(v4 < v2);
        }
        return;
    }

    protected void _finishString2()
    {
        char[] v2 = this._textBuffer.getCurrentSegment();
        int v3 = this._textBuffer.getCurrentSegmentSize();
        while(true) {
            if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
                this._reportInvalidEOF(": was expecting closing quote for a string value");
            }
            String v5_2 = this._inputBuffer;
            int v6_0 = this._inputPtr;
            this._inputPtr = (v6_0 + 1);
            char v0 = v5_2[v6_0];
            char v1 = v0;
            if (v1 <= 92) {
                if (v1 != 92) {
                    if (v1 <= 34) {
                        if (v1 == 34) {
                            break;
                        }
                        if (v1 < 32) {
                            this._throwUnquotedSpace(v1, "string value");
                        }
                    }
                } else {
                    v0 = this._decodeEscaped();
                }
            }
            if (v3 >= v2.length) {
                v2 = this._textBuffer.finishCurrentSegment();
                v3 = 0;
            }
            int v4 = (v3 + 1);
            v2[v3] = v0;
            v3 = v4;
        }
        this._textBuffer.setCurrentLength(v3);
        return;
    }

    protected final String _getText2(com.flurry.org.codehaus.jackson.JsonToken p3)
    {
        String v0_1;
        if (p3 != null) {
            switch (com.flurry.org.codehaus.jackson.impl.ReaderBasedParser$1.$SwitchMap$org$codehaus$jackson$JsonToken[p3.ordinal()]) {
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

    protected final com.flurry.org.codehaus.jackson.JsonToken _handleApostropheValue()
    {
        char[] v2 = this._textBuffer.emptyAndGetCurrentSegment();
        int v3 = this._textBuffer.getCurrentSegmentSize();
        while(true) {
            if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
                this._reportInvalidEOF(": was expecting closing quote for a string value");
            }
            String v5_2 = this._inputBuffer;
            int v6_0 = this._inputPtr;
            this._inputPtr = (v6_0 + 1);
            char v0 = v5_2[v6_0];
            char v1 = v0;
            if (v1 <= 92) {
                if (v1 != 92) {
                    if (v1 <= 39) {
                        if (v1 == 39) {
                            break;
                        }
                        if (v1 < 32) {
                            this._throwUnquotedSpace(v1, "string value");
                        }
                    }
                } else {
                    v0 = this._decodeEscaped();
                }
            }
            if (v3 >= v2.length) {
                v2 = this._textBuffer.finishCurrentSegment();
                v3 = 0;
            }
            int v4 = (v3 + 1);
            v2[v3] = v0;
            v3 = v4;
        }
        this._textBuffer.setCurrentLength(v3);
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

    protected final com.flurry.org.codehaus.jackson.JsonToken _handleUnexpectedValue(int p4)
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
                v0_2 = this._handleInvalidNumberStart(v0_5[v1_3], 0);
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

    protected final String _handleUnusualFieldName(int p12)
    {
        if ((p12 != 39) || (!this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_SINGLE_QUOTES))) {
            if (!this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_UNQUOTED_FIELD_NAMES)) {
                this._reportUnexpectedChar(p12, "was expecting double-quote to start field name");
            }
            int v2;
            int[] v1 = com.flurry.org.codehaus.jackson.util.CharTypes.getInputCodeLatin1JsNames();
            int v5 = v1.length;
            if (p12 >= v5) {
                v2 = Character.isJavaIdentifierPart(((char) p12));
            } else {
                if ((v1[p12] != 0) || ((p12 >= 48) && (p12 <= 57))) {
                    v2 = 0;
                } else {
                    v2 = 1;
                }
            }
            if (v2 == 0) {
                this._reportUnexpectedChar(p12, "was expecting either valid name character (for unquoted name) or double-quote (for quoted) to start field name");
            }
            int v6 = this._inputPtr;
            int v3 = 0;
            int v4 = this._inputEnd;
            if (v6 < v4) {
                do {
                    char v0 = this._inputBuffer[v6];
                    if (v0 >= v5) {
                        if (!Character.isJavaIdentifierPart(((char) v0))) {
                            int v7_0 = (this._inputPtr - 1);
                            this._inputPtr = v6;
                            String v8_14 = this._symbols.findSymbol(this._inputBuffer, v7_0, (v6 - v7_0), v3);
                            return v8_14;
                        }
                    } else {
                        if (v1[v0] != 0) {
                            int v7_2 = (this._inputPtr - 1);
                            this._inputPtr = v6;
                            v8_14 = this._symbols.findSymbol(this._inputBuffer, v7_2, (v6 - v7_2), v3);
                            return v8_14;
                        }
                    }
                    v3 = ((v3 * 31) + v0);
                    v6++;
                } while(v6 < v4);
            }
            int v7_1 = (this._inputPtr - 1);
            this._inputPtr = v6;
            v8_14 = this._parseUnusualFieldName2(v7_1, v3, v1);
        } else {
            v8_14 = this._parseApostropheFieldName();
        }
        return v8_14;
    }

    protected final void _matchToken(String p6, int p7)
    {
        int v1 = p6.length();
        do {
            if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
                this._reportInvalidEOFInValue();
            }
            if (this._inputBuffer[this._inputPtr] != p6.charAt(p7)) {
                this._reportInvalidToken(p6.substring(0, p7), "\'null\', \'true\', \'false\' or NaN");
            }
            this._inputPtr = (this._inputPtr + 1);
            p7++;
        } while(p7 < v1);
    }

    protected final String _parseApostropheFieldName()
    {
        int v7_2;
        int v5 = this._inputPtr;
        int v2 = 0;
        int v3 = this._inputEnd;
        if (v5 >= v3) {
            int v6_0 = this._inputPtr;
            this._inputPtr = v5;
            v7_2 = this._parseFieldName2(v6_0, v2, 39);
        } else {
            int[] v1 = com.flurry.org.codehaus.jackson.util.CharTypes.getInputCodeLatin1();
            do {
                char v0 = this._inputBuffer[v5];
                if (v0 != 39) {
                    if ((v0 < v1.length) && (v1[v0] != 0)) {
                        break;
                    }
                    v2 = ((v2 * 31) + v0);
                    v5++;
                } else {
                    int v6_1 = this._inputPtr;
                    this._inputPtr = (v5 + 1);
                    v7_2 = this._symbols.findSymbol(this._inputBuffer, v6_1, (v5 - v6_1), v2);
                }
            } while(v5 < v3);
        }
        return v7_2;
    }

    protected final String _parseFieldName(int p11)
    {
        String v7_2;
        if (p11 == 34) {
            int v5 = this._inputPtr;
            int v2 = 0;
            int v3 = this._inputEnd;
            if (v5 < v3) {
                int[] v1 = com.flurry.org.codehaus.jackson.util.CharTypes.getInputCodeLatin1();
                do {
                    char v0 = this._inputBuffer[v5];
                    if ((v0 >= v1.length) || (v1[v0] == 0)) {
                        v2 = ((v2 * 31) + v0);
                        v5++;
                    } else {
                        if (v0 != 34) {
                            break;
                        }
                        int v6_1 = this._inputPtr;
                        this._inputPtr = (v5 + 1);
                        v7_2 = this._symbols.findSymbol(this._inputBuffer, v6_1, (v5 - v6_1), v2);
                        return v7_2;
                    }
                } while(v5 < v3);
            }
            int v6_0 = this._inputPtr;
            this._inputPtr = v5;
            v7_2 = this._parseFieldName2(v6_0, v2, 34);
        } else {
            v7_2 = this._handleUnusualFieldName(p11);
        }
        return v7_2;
    }

    protected void _releaseBuffers()
    {
        super._releaseBuffers();
        char[] v0 = this._inputBuffer;
        if (v0 != null) {
            this._inputBuffer = 0;
            this._ioContext.releaseTokenBuffer(v0);
        }
        return;
    }

    protected void _reportInvalidToken(String p5, String p6)
    {
        StringBuilder v1_1 = new StringBuilder(p5);
        while ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
            char v0 = this._inputBuffer[this._inputPtr];
            if (!Character.isJavaIdentifierPart(v0)) {
                break;
            }
            this._inputPtr = (this._inputPtr + 1);
            v1_1.append(v0);
        }
        this._reportError(new StringBuilder().append("Unrecognized token \'").append(v1_1.toString()).append("\': was expecting ").toString());
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
        int v4 = this._inputPtr;
        int v3 = this._inputEnd;
        char[] v2 = this._inputBuffer;
        while(true) {
            if (v4 >= v3) {
                this._inputPtr = v4;
                if (!this.loadMore()) {
                    this._reportInvalidEOF(": was expecting closing quote for a string value");
                }
                v4 = this._inputPtr;
                v3 = this._inputEnd;
            }
            int v5 = (v4 + 1);
            char v1 = v2[v4];
            if (v1 <= 92) {
                if (v1 != 92) {
                    if (v1 <= 34) {
                        if (v1 == 34) {
                            break;
                        }
                        if (v1 < 32) {
                            this._inputPtr = v5;
                            this._throwUnquotedSpace(v1, "string value");
                        }
                    }
                } else {
                    this._inputPtr = v5;
                    this._decodeEscaped();
                    v4 = this._inputPtr;
                    v3 = this._inputEnd;
                }
            }
            v4 = v5;
        }
        this._inputPtr = v5;
        return;
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
        return this._reader;
    }

    protected char getNextChar(String p4)
    {
        if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
            this._reportInvalidEOF(p4);
        }
        char v0_3 = this._inputBuffer;
        int v1_1 = this._inputPtr;
        this._inputPtr = (v1_1 + 1);
        return v0_3[v1_1];
    }

    public final String getText()
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
            switch (com.flurry.org.codehaus.jackson.impl.ReaderBasedParser$1.$SwitchMap$org$codehaus$jackson$JsonToken[this._currToken.ordinal()]) {
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
            switch (com.flurry.org.codehaus.jackson.impl.ReaderBasedParser$1.$SwitchMap$org$codehaus$jackson$JsonToken[this._currToken.ordinal()]) {
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
            switch (com.flurry.org.codehaus.jackson.impl.ReaderBasedParser$1.$SwitchMap$org$codehaus$jackson$JsonToken[this._currToken.ordinal()]) {
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
        if (this._reader != null) {
            int v0 = this._reader.read(this._inputBuffer, 0, this._inputBuffer.length);
            if (v0 <= 0) {
                this._closeInput();
                if (v0 == 0) {
                    throw new java.io.IOException(new StringBuilder().append("Reader returned 0 characters when trying to read ").append(this._inputEnd).toString());
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
            switch (com.flurry.org.codehaus.jackson.impl.ReaderBasedParser$1.$SwitchMap$org$codehaus$jackson$JsonToken[this.nextToken().ordinal()]) {
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
        com.flurry.org.codehaus.jackson.JsonToken v3 = 0;
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
                        boolean v1 = this._parsingContext.inObject();
                        if (v1) {
                            this._parsingContext.setCurrentName(this._parseFieldName(v0_0));
                            this._currToken = com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME;
                            int v0_1 = this._skipWS();
                            if (v0_1 != 58) {
                                this._reportUnexpectedChar(v0_1, "was expecting a colon to separate field name and value");
                            }
                            v0_0 = this._skipWS();
                        }
                        switch (v0_0) {
                            case 34:
                                this._tokenIncomplete = 1;
                                v3 = com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING;
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
                                v3 = this.parseNumberText(v0_0);
                                break;
                            case 91:
                                if (!v1) {
                                    this._parsingContext = this._parsingContext.createChildArrayContext(this._tokenInputRow, this._tokenInputCol);
                                }
                                v3 = com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY;
                                break;
                            case 93:
                            case 125:
                                this._reportUnexpectedChar(v0_0, "expected a value");
                                this._matchToken("true", 1);
                                v3 = com.flurry.org.codehaus.jackson.JsonToken.VALUE_TRUE;
                                break;
                            case 102:
                                this._matchToken("false", 1);
                                v3 = com.flurry.org.codehaus.jackson.JsonToken.VALUE_FALSE;
                                break;
                            case 110:
                                this._matchToken("null", 1);
                                v3 = com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL;
                                break;
                            case 123:
                                if (!v1) {
                                    this._parsingContext = this._parsingContext.createChildObjectContext(this._tokenInputRow, this._tokenInputCol);
                                }
                                v3 = com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT;
                                break;
                            default:
                                v3 = this._handleUnexpectedValue(v0_0);
                        }
                        if (!v1) {
                            this._currToken = v3;
                        } else {
                            this._nextToken = v3;
                            v3 = this._currToken;
                        }
                    } else {
                        if (!this._parsingContext.inObject()) {
                            this._reportMismatchedEndMarker(v0_0, 93);
                        }
                        this._parsingContext = this._parsingContext.getParent();
                        v3 = com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT;
                        this._currToken = v3;
                    }
                } else {
                    if (!this._parsingContext.inArray()) {
                        this._reportMismatchedEndMarker(v0_0, 125);
                    }
                    this._parsingContext = this._parsingContext.getParent();
                    v3 = com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY;
                    this._currToken = v3;
                }
            } else {
                this.close();
                this._currToken = 0;
            }
        } else {
            v3 = this._nextAfterName();
        }
        return v3;
    }

    protected final com.flurry.org.codehaus.jackson.JsonToken parseNumberText(int p15)
    {
        int v5;
        if (p15 != 45) {
            v5 = 0;
        } else {
            v5 = 1;
        }
        char[] v9_13;
        int v6_0 = this._inputPtr;
        int v8 = (v6_0 - 1);
        int v2 = this._inputEnd;
        if (v5 == 0) {
            if (p15 == 48) {
                if (v5 != 0) {
                    v8++;
                }
                this._inputPtr = v8;
                v9_13 = this.parseNumberText2(v5);
            } else {
                int v3 = 1;
                while (v6_0 < this._inputEnd) {
                    int v7_1 = (v6_0 + 1);
                    char v15_1 = this._inputBuffer[v6_0];
                    if ((v15_1 >= 48) && (v15_1 <= 57)) {
                        v3++;
                        v6_0 = v7_1;
                    } else {
                        int v1 = 0;
                        if (v15_1 == 46) {
                            while (v7_1 < v2) {
                                int v6_1 = (v7_1 + 1);
                                v15_1 = this._inputBuffer[v7_1];
                                if ((v15_1 >= 48) && (v15_1 <= 57)) {
                                    v1++;
                                    v7_1 = v6_1;
                                } else {
                                    if (v1 == 0) {
                                        this.reportUnexpectedNumberChar(v15_1, "Decimal point not followed by a digit");
                                    }
                                    v7_1 = v6_1;
                                }
                            }
                        }
                        int v0 = 0;
                        if ((v15_1 == 101) || (v15_1 == 69)) {
                            if (v7_1 >= v2) {
                                break;
                            }
                            int v6_2 = (v7_1 + 1);
                            char v15_2 = this._inputBuffer[v7_1];
                            if ((v15_2 != 45) && (v15_2 != 43)) {
                                v7_1 = v6_2;
                            } else {
                                if (v6_2 >= v2) {
                                    break;
                                }
                                v7_1 = (v6_2 + 1);
                                v15_2 = this._inputBuffer[v6_2];
                            }
                            while ((v15_2 <= 57) && (v15_2 >= 48)) {
                                v0++;
                                if (v7_1 < v2) {
                                    v15_2 = this._inputBuffer[v7_1];
                                    v7_1++;
                                }
                            }
                            if (v0 == 0) {
                                this.reportUnexpectedNumberChar(v15_2, "Exponent indicator not followed by a digit");
                            }
                        }
                        int v6_4 = (v7_1 - 1);
                        this._inputPtr = v6_4;
                        this._textBuffer.resetWithShared(this._inputBuffer, v8, (v6_4 - v8));
                        v9_13 = this.reset(v5, v3, v1, v0);
                    }
                }
            }
        } else {
            if (v6_0 < this._inputEnd) {
                int v7_0 = (v6_0 + 1);
                p15 = this._inputBuffer[v6_0];
                if ((p15 <= 57) && (p15 >= 48)) {
                    v6_0 = v7_0;
                } else {
                    this._inputPtr = v7_0;
                    v9_13 = this._handleInvalidNumberStart(p15, 1);
                }
            }
        }
        return v9_13;
    }

    public int releaseBuffered(java.io.Writer p5)
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
}
