package com.flurry.org.codehaus.jackson.impl;
public abstract class JsonParserBase extends com.flurry.org.codehaus.jackson.impl.JsonParserMinimalBase {
    static final java.math.BigDecimal BD_MAX_INT = None;
    static final java.math.BigDecimal BD_MAX_LONG = None;
    static final java.math.BigDecimal BD_MIN_INT = None;
    static final java.math.BigDecimal BD_MIN_LONG = None;
    protected static final char CHAR_NULL = 0;
    protected static final int INT_0 = 48;
    protected static final int INT_1 = 49;
    protected static final int INT_2 = 50;
    protected static final int INT_3 = 51;
    protected static final int INT_4 = 52;
    protected static final int INT_5 = 53;
    protected static final int INT_6 = 54;
    protected static final int INT_7 = 55;
    protected static final int INT_8 = 56;
    protected static final int INT_9 = 57;
    protected static final int INT_DECIMAL_POINT = 46;
    protected static final int INT_E = 69;
    protected static final int INT_MINUS = 45;
    protected static final int INT_PLUS = 43;
    protected static final int INT_e = 101;
    static final double MAX_INT_D = 72430328479680;
    static final long MAX_INT_L = 2147483647;
    static final double MAX_LONG_D = 17376;
    static final double MIN_INT_D = 49632;
    static final long MIN_INT_L = 2147483648;
    static final double MIN_LONG_D = 50144;
    protected static final int NR_BIGDECIMAL = 16;
    protected static final int NR_BIGINT = 4;
    protected static final int NR_DOUBLE = 8;
    protected static final int NR_INT = 1;
    protected static final int NR_LONG = 2;
    protected static final int NR_UNKNOWN;
    protected byte[] _binaryValue;
    protected com.flurry.org.codehaus.jackson.util.ByteArrayBuilder _byteArrayBuilder;
    protected boolean _closed;
    protected long _currInputProcessed;
    protected int _currInputRow;
    protected int _currInputRowStart;
    protected int _expLength;
    protected int _fractLength;
    protected int _inputEnd;
    protected int _inputPtr;
    protected int _intLength;
    protected final com.flurry.org.codehaus.jackson.io.IOContext _ioContext;
    protected boolean _nameCopied;
    protected char[] _nameCopyBuffer;
    protected com.flurry.org.codehaus.jackson.JsonToken _nextToken;
    protected int _numTypesValid;
    protected java.math.BigDecimal _numberBigDecimal;
    protected java.math.BigInteger _numberBigInt;
    protected double _numberDouble;
    protected int _numberInt;
    protected long _numberLong;
    protected boolean _numberNegative;
    protected com.flurry.org.codehaus.jackson.impl.JsonReadContext _parsingContext;
    protected final com.flurry.org.codehaus.jackson.util.TextBuffer _textBuffer;
    protected int _tokenInputCol;
    protected int _tokenInputRow;
    protected long _tokenInputTotal;

    static JsonParserBase()
    {
        com.flurry.org.codehaus.jackson.impl.JsonParserBase.BD_MIN_LONG = new java.math.BigDecimal(-9223372036854775808);
        com.flurry.org.codehaus.jackson.impl.JsonParserBase.BD_MAX_LONG = new java.math.BigDecimal(9223372036854775807);
        com.flurry.org.codehaus.jackson.impl.JsonParserBase.BD_MIN_INT = new java.math.BigDecimal(-9223372036854775808);
        com.flurry.org.codehaus.jackson.impl.JsonParserBase.BD_MAX_INT = new java.math.BigDecimal(9223372036854775807);
        return;
    }

    protected JsonParserBase(com.flurry.org.codehaus.jackson.io.IOContext p6, int p7)
    {
        this._inputPtr = 0;
        this._inputEnd = 0;
        this._currInputProcessed = 0;
        this._currInputRow = 1;
        this._currInputRowStart = 0;
        this._tokenInputTotal = 0;
        this._tokenInputRow = 1;
        this._tokenInputCol = 0;
        this._nameCopyBuffer = 0;
        this._nameCopied = 0;
        this._byteArrayBuilder = 0;
        this._numTypesValid = 0;
        this._features = p7;
        this._ioContext = p6;
        this._textBuffer = p6.constructTextBuffer();
        this._parsingContext = com.flurry.org.codehaus.jackson.impl.JsonReadContext.createRootContext();
        return;
    }

    private final void _parseSlowFloatValue(int p4)
    {
        try {
            if (p4 != 16) {
                this._numberDouble = this._textBuffer.contentsAsDouble();
                this._numTypesValid = 8;
            } else {
                this._numberBigDecimal = this._textBuffer.contentsAsDecimal();
                this._numTypesValid = 16;
            }
        } catch (NumberFormatException v0) {
            this._wrapError(new StringBuilder().append("Malformed numeric value \'").append(this._textBuffer.contentsAsString()).append("\'").toString(), v0);
        }
        return;
    }

    private final void _parseSlowIntValue(int p5, char[] p6, int p7, int p8)
    {
        String v1 = this._textBuffer.contentsAsString();
        try {
            if (!com.flurry.org.codehaus.jackson.io.NumberInput.inLongRange(p6, p7, p8, this._numberNegative)) {
                this._numberBigInt = new java.math.BigInteger(v1);
                this._numTypesValid = 4;
            } else {
                this._numberLong = Long.parseLong(v1);
                this._numTypesValid = 2;
            }
        } catch (NumberFormatException v0) {
            this._wrapError(new StringBuilder().append("Malformed numeric value \'").append(v1).append("\'").toString(), v0);
        }
        return;
    }

    protected abstract void _closeInput();

    protected final int _decodeBase64Escape(com.flurry.org.codehaus.jackson.Base64Variant p4, char p5, int p6)
    {
        if (p5 == 92) {
            int v0;
            char v1 = this._decodeEscaped();
            if ((v1 > 32) || (p6 != 0)) {
                v0 = p4.decodeBase64Char(v1);
                if (v0 < 0) {
                    throw this.reportInvalidBase64Char(p4, v1, p6);
                }
            } else {
                v0 = -1;
            }
            return v0;
        } else {
            throw this.reportInvalidBase64Char(p4, p5, p6);
        }
    }

    protected final int _decodeBase64Escape(com.flurry.org.codehaus.jackson.Base64Variant p4, int p5, int p6)
    {
        if (p5 == 92) {
            int v0;
            char v1 = this._decodeEscaped();
            if ((v1 > 32) || (p6 != 0)) {
                v0 = p4.decodeBase64Char(v1);
                if (v0 < 0) {
                    throw this.reportInvalidBase64Char(p4, v1, p6);
                }
            } else {
                v0 = -1;
            }
            return v0;
        } else {
            throw this.reportInvalidBase64Char(p4, p5, p6);
        }
    }

    protected char _decodeEscaped()
    {
        throw new UnsupportedOperationException();
    }

    protected abstract void _finishString();

    public com.flurry.org.codehaus.jackson.util.ByteArrayBuilder _getByteArrayBuilder()
    {
        if (this._byteArrayBuilder != null) {
            this._byteArrayBuilder.reset();
        } else {
            this._byteArrayBuilder = new com.flurry.org.codehaus.jackson.util.ByteArrayBuilder();
        }
        return this._byteArrayBuilder;
    }

    protected void _handleEOF()
    {
        if (!this._parsingContext.inRoot()) {
            this._reportInvalidEOF(new StringBuilder().append(": expected close marker for ").append(this._parsingContext.getTypeDesc()).append(" (from ").append(this._parsingContext.getStartLocation(this._ioContext.getSourceReference())).append(")").toString());
        }
        return;
    }

    protected void _parseNumericValue(int p10)
    {
        if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
            if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT) {
                this._reportError(new StringBuilder().append("Current token (").append(this._currToken).append(") not numeric, can not use numeric value accessors").toString());
            } else {
                this._parseSlowFloatValue(p10);
            }
        } else {
            char[] v0 = this._textBuffer.getTextBuffer();
            int v5 = this._textBuffer.getTextOffset();
            int v4 = this._intLength;
            if (this._numberNegative) {
                v5++;
            }
            if (v4 > 9) {
                if (v4 > 18) {
                    this._parseSlowIntValue(p10, v0, v5, v4);
                } else {
                    long v2 = com.flurry.org.codehaus.jackson.io.NumberInput.parseLong(v0, v5, v4);
                    if (this._numberNegative) {
                        v2 = (- v2);
                    }
                    if (v4 == 10) {
                        if (!this._numberNegative) {
                            if (v2 <= 2147483647) {
                                this._numberInt = ((int) v2);
                                this._numTypesValid = 1;
                                return;
                            }
                        } else {
                            if (v2 >= -2147483648) {
                                this._numberInt = ((int) v2);
                                this._numTypesValid = 1;
                                return;
                            }
                        }
                    }
                    this._numberLong = v2;
                    this._numTypesValid = 2;
                }
            } else {
                int v1 = com.flurry.org.codehaus.jackson.io.NumberInput.parseInt(v0, v5, v4);
                if (this._numberNegative) {
                    v1 = (- v1);
                }
                this._numberInt = v1;
                this._numTypesValid = 1;
            }
        }
        return;
    }

    protected void _releaseBuffers()
    {
        this._textBuffer.releaseBuffers();
        char[] v0 = this._nameCopyBuffer;
        if (v0 != null) {
            this._nameCopyBuffer = 0;
            this._ioContext.releaseNameCopyBuffer(v0);
        }
        return;
    }

    protected void _reportMismatchedEndMarker(int p5, char p6)
    {
        this._reportError(new StringBuilder().append("Unexpected close marker \'").append(((char) p5)).append("\': expected \'").append(p6).append("\' (for ").append(this._parsingContext.getTypeDesc()).append(" starting at ").append(new StringBuilder().append("").append(this._parsingContext.getStartLocation(this._ioContext.getSourceReference())).toString()).append(")").toString());
        return;
    }

    public void close()
    {
        if (!this._closed) {
            this._closed = 1;
            try {
                this._closeInput();
                this._releaseBuffers();
            } catch (Throwable v0_2) {
                this._releaseBuffers();
                throw v0_2;
            }
        }
        return;
    }

    protected void convertNumberToBigDecimal()
    {
        if ((this._numTypesValid & 8) == 0) {
            if ((this._numTypesValid & 4) == 0) {
                if ((this._numTypesValid & 2) == 0) {
                    if ((this._numTypesValid & 1) == 0) {
                        this._throwInternal();
                    } else {
                        this._numberBigDecimal = java.math.BigDecimal.valueOf(((long) this._numberInt));
                    }
                } else {
                    this._numberBigDecimal = java.math.BigDecimal.valueOf(this._numberLong);
                }
            } else {
                this._numberBigDecimal = new java.math.BigDecimal(this._numberBigInt);
            }
        } else {
            this._numberBigDecimal = new java.math.BigDecimal(this.getText());
        }
        this._numTypesValid = (this._numTypesValid | 16);
        return;
    }

    protected void convertNumberToBigInteger()
    {
        if ((this._numTypesValid & 16) == 0) {
            if ((this._numTypesValid & 2) == 0) {
                if ((this._numTypesValid & 1) == 0) {
                    if ((this._numTypesValid & 8) == 0) {
                        this._throwInternal();
                    } else {
                        this._numberBigInt = java.math.BigDecimal.valueOf(this._numberDouble).toBigInteger();
                    }
                } else {
                    this._numberBigInt = java.math.BigInteger.valueOf(((long) this._numberInt));
                }
            } else {
                this._numberBigInt = java.math.BigInteger.valueOf(this._numberLong);
            }
        } else {
            this._numberBigInt = this._numberBigDecimal.toBigInteger();
        }
        this._numTypesValid = (this._numTypesValid | 4);
        return;
    }

    protected void convertNumberToDouble()
    {
        if ((this._numTypesValid & 16) == 0) {
            if ((this._numTypesValid & 4) == 0) {
                if ((this._numTypesValid & 2) == 0) {
                    if ((this._numTypesValid & 1) == 0) {
                        this._throwInternal();
                    } else {
                        this._numberDouble = ((double) this._numberInt);
                    }
                } else {
                    this._numberDouble = ((double) this._numberLong);
                }
            } else {
                this._numberDouble = this._numberBigInt.doubleValue();
            }
        } else {
            this._numberDouble = this._numberBigDecimal.doubleValue();
        }
        this._numTypesValid = (this._numTypesValid | 8);
        return;
    }

    protected void convertNumberToInt()
    {
        if ((this._numTypesValid & 2) == 0) {
            if ((this._numTypesValid & 4) == 0) {
                if ((this._numTypesValid & 8) == 0) {
                    if ((this._numTypesValid & 16) == 0) {
                        this._throwInternal();
                    } else {
                        if ((com.flurry.org.codehaus.jackson.impl.JsonParserBase.BD_MIN_INT.compareTo(this._numberBigDecimal) > 0) || (com.flurry.org.codehaus.jackson.impl.JsonParserBase.BD_MAX_INT.compareTo(this._numberBigDecimal) < 0)) {
                            this.reportOverflowInt();
                        }
                        this._numberInt = this._numberBigDecimal.intValue();
                    }
                } else {
                    if ((this._numberDouble < -4476578029606273024) || (this._numberDouble > 4746794007244308480)) {
                        this.reportOverflowInt();
                    }
                    this._numberInt = ((int) this._numberDouble);
                }
            } else {
                this._numberInt = this._numberBigInt.intValue();
            }
        } else {
            int v0 = ((int) this._numberLong);
            if (((long) v0) != this._numberLong) {
                this._reportError(new StringBuilder().append("Numeric value (").append(this.getText()).append(") out of range of int").toString());
            }
            this._numberInt = v0;
        }
        this._numTypesValid = (this._numTypesValid | 1);
        return;
    }

    protected void convertNumberToLong()
    {
        if ((this._numTypesValid & 1) == 0) {
            if ((this._numTypesValid & 4) == 0) {
                if ((this._numTypesValid & 8) == 0) {
                    if ((this._numTypesValid & 16) == 0) {
                        this._throwInternal();
                    } else {
                        if ((com.flurry.org.codehaus.jackson.impl.JsonParserBase.BD_MIN_LONG.compareTo(this._numberBigDecimal) > 0) || (com.flurry.org.codehaus.jackson.impl.JsonParserBase.BD_MAX_LONG.compareTo(this._numberBigDecimal) < 0)) {
                            this.reportOverflowLong();
                        }
                        this._numberLong = this._numberBigDecimal.longValue();
                    }
                } else {
                    if ((this._numberDouble < -4332462841530417152) || (this._numberDouble > 4890909195324358656)) {
                        this.reportOverflowLong();
                    }
                    this._numberLong = ((long) this._numberDouble);
                }
            } else {
                this._numberLong = this._numberBigInt.longValue();
            }
        } else {
            this._numberLong = ((long) this._numberInt);
        }
        this._numTypesValid = (this._numTypesValid | 2);
        return;
    }

    public java.math.BigInteger getBigIntegerValue()
    {
        if ((this._numTypesValid & 4) == 0) {
            if (this._numTypesValid == 0) {
                this._parseNumericValue(4);
            }
            if ((this._numTypesValid & 4) == 0) {
                this.convertNumberToBigInteger();
            }
        }
        return this._numberBigInt;
    }

    public com.flurry.org.codehaus.jackson.JsonLocation getCurrentLocation()
    {
        return new com.flurry.org.codehaus.jackson.JsonLocation(this._ioContext.getSourceReference(), ((this._currInputProcessed + ((long) this._inputPtr)) - 1), this._currInputRow, ((this._inputPtr - this._currInputRowStart) + 1));
    }

    public String getCurrentName()
    {
        if ((this._currToken != com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) && (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY)) {
            String v1_1 = this._parsingContext.getCurrentName();
        } else {
            v1_1 = this._parsingContext.getParent().getCurrentName();
        }
        return v1_1;
    }

    public java.math.BigDecimal getDecimalValue()
    {
        if ((this._numTypesValid & 16) == 0) {
            if (this._numTypesValid == 0) {
                this._parseNumericValue(16);
            }
            if ((this._numTypesValid & 16) == 0) {
                this.convertNumberToBigDecimal();
            }
        }
        return this._numberBigDecimal;
    }

    public double getDoubleValue()
    {
        if ((this._numTypesValid & 8) == 0) {
            if (this._numTypesValid == 0) {
                this._parseNumericValue(8);
            }
            if ((this._numTypesValid & 8) == 0) {
                this.convertNumberToDouble();
            }
        }
        return this._numberDouble;
    }

    public float getFloatValue()
    {
        return ((float) this.getDoubleValue());
    }

    public int getIntValue()
    {
        if ((this._numTypesValid & 1) == 0) {
            if (this._numTypesValid == 0) {
                this._parseNumericValue(1);
            }
            if ((this._numTypesValid & 1) == 0) {
                this.convertNumberToInt();
            }
        }
        return this._numberInt;
    }

    public long getLongValue()
    {
        if ((this._numTypesValid & 2) == 0) {
            if (this._numTypesValid == 0) {
                this._parseNumericValue(2);
            }
            if ((this._numTypesValid & 2) == 0) {
                this.convertNumberToLong();
            }
        }
        return this._numberLong;
    }

    public com.flurry.org.codehaus.jackson.JsonParser$NumberType getNumberType()
    {
        if (this._numTypesValid == 0) {
            this._parseNumericValue(0);
        }
        com.flurry.org.codehaus.jackson.JsonParser$NumberType v0_1;
        if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
            if ((this._numTypesValid & 16) == 0) {
                v0_1 = com.flurry.org.codehaus.jackson.JsonParser$NumberType.DOUBLE;
            } else {
                v0_1 = com.flurry.org.codehaus.jackson.JsonParser$NumberType.BIG_DECIMAL;
            }
        } else {
            if ((this._numTypesValid & 1) == 0) {
                if ((this._numTypesValid & 2) == 0) {
                    v0_1 = com.flurry.org.codehaus.jackson.JsonParser$NumberType.BIG_INTEGER;
                } else {
                    v0_1 = com.flurry.org.codehaus.jackson.JsonParser$NumberType.LONG;
                }
            } else {
                v0_1 = com.flurry.org.codehaus.jackson.JsonParser$NumberType.INT;
            }
        }
        return v0_1;
    }

    public Number getNumberValue()
    {
        if (this._numTypesValid == 0) {
            this._parseNumericValue(0);
        }
        java.math.BigDecimal v0_4;
        if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
            if ((this._numTypesValid & 16) == 0) {
                if ((this._numTypesValid & 8) == 0) {
                    this._throwInternal();
                }
                v0_4 = Double.valueOf(this._numberDouble);
            } else {
                v0_4 = this._numberBigDecimal;
            }
        } else {
            if ((this._numTypesValid & 1) == 0) {
                if ((this._numTypesValid & 2) == 0) {
                    if ((this._numTypesValid & 4) == 0) {
                        v0_4 = this._numberBigDecimal;
                    } else {
                        v0_4 = this._numberBigInt;
                    }
                } else {
                    v0_4 = Long.valueOf(this._numberLong);
                }
            } else {
                v0_4 = Integer.valueOf(this._numberInt);
            }
        }
        return v0_4;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.JsonStreamContext getParsingContext()
    {
        return this.getParsingContext();
    }

    public com.flurry.org.codehaus.jackson.impl.JsonReadContext getParsingContext()
    {
        return this._parsingContext;
    }

    public final long getTokenCharacterOffset()
    {
        return this._tokenInputTotal;
    }

    public final int getTokenColumnNr()
    {
        int v0 = this._tokenInputCol;
        if (v0 >= 0) {
            v0++;
        }
        return v0;
    }

    public final int getTokenLineNr()
    {
        return this._tokenInputRow;
    }

    public com.flurry.org.codehaus.jackson.JsonLocation getTokenLocation()
    {
        return new com.flurry.org.codehaus.jackson.JsonLocation(this._ioContext.getSourceReference(), this.getTokenCharacterOffset(), this.getTokenLineNr(), this.getTokenColumnNr());
    }

    public boolean hasTextCharacters()
    {
        int v0_2;
        if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
            if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
                v0_2 = 0;
            } else {
                v0_2 = this._nameCopied;
            }
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public boolean isClosed()
    {
        return this._closed;
    }

    protected abstract boolean loadMore();

    protected final void loadMoreGuaranteed()
    {
        if (!this.loadMore()) {
            this._reportInvalidEOF();
        }
        return;
    }

    protected IllegalArgumentException reportInvalidBase64Char(com.flurry.org.codehaus.jackson.Base64Variant p2, int p3, int p4)
    {
        return this.reportInvalidBase64Char(p2, p3, p4, 0);
    }

    protected IllegalArgumentException reportInvalidBase64Char(com.flurry.org.codehaus.jackson.Base64Variant p4, int p5, int p6, String p7)
    {
        String v0;
        if (p5 > 32) {
            if (!p4.usesPaddingChar(p5)) {
                if ((Character.isDefined(p5)) && (!Character.isISOControl(p5))) {
                    v0 = new StringBuilder().append("Illegal character \'").append(((char) p5)).append("\' (code 0x").append(Integer.toHexString(p5)).append(") in base64 content").toString();
                } else {
                    v0 = new StringBuilder().append("Illegal character (code 0x").append(Integer.toHexString(p5)).append(") in base64 content").toString();
                }
            } else {
                v0 = new StringBuilder().append("Unexpected padding character (\'").append(p4.getPaddingChar()).append("\') as character #").append((p6 + 1)).append(" of 4-char base64 unit: padding only legal as 3rd or 4th character").toString();
            }
        } else {
            v0 = new StringBuilder().append("Illegal white space character (code 0x").append(Integer.toHexString(p5)).append(") as character #").append((p6 + 1)).append(" of 4-char base64 unit: can only used between units").toString();
        }
        if (p7 != null) {
            v0 = new StringBuilder().append(v0).append(": ").append(p7).toString();
        }
        return new IllegalArgumentException(v0);
    }

    protected void reportInvalidNumber(String p3)
    {
        this._reportError(new StringBuilder().append("Invalid numeric value: ").append(p3).toString());
        return;
    }

    protected void reportOverflowInt()
    {
        this._reportError(new StringBuilder().append("Numeric value (").append(this.getText()).append(") out of range of int (").append(-2147483648).append(" - ").append(2147483647).append(")").toString());
        return;
    }

    protected void reportOverflowLong()
    {
        this._reportError(new StringBuilder().append("Numeric value (").append(this.getText()).append(") out of range of long (").append(-9223372036854775808).append(" - ").append(9223372036854775807).append(")").toString());
        return;
    }

    protected void reportUnexpectedNumberChar(int p4, String p5)
    {
        String v0 = new StringBuilder().append("Unexpected character (").append(com.flurry.org.codehaus.jackson.impl.JsonParserBase._getCharDesc(p4)).append(") in numeric value").toString();
        if (p5 != null) {
            v0 = new StringBuilder().append(v0).append(": ").append(p5).toString();
        }
        this._reportError(v0);
        return;
    }

    protected final com.flurry.org.codehaus.jackson.JsonToken reset(boolean p2, int p3, int p4, int p5)
    {
        if ((p4 >= 1) || (p5 >= 1)) {
            com.flurry.org.codehaus.jackson.JsonToken v0_1 = this.resetFloat(p2, p3, p4, p5);
        } else {
            v0_1 = this.resetInt(p2, p3);
        }
        return v0_1;
    }

    protected final com.flurry.org.codehaus.jackson.JsonToken resetAsNaN(String p2, double p3)
    {
        this._textBuffer.resetWithString(p2);
        this._numberDouble = p3;
        this._numTypesValid = 8;
        return com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT;
    }

    protected final com.flurry.org.codehaus.jackson.JsonToken resetFloat(boolean p2, int p3, int p4, int p5)
    {
        this._numberNegative = p2;
        this._intLength = p3;
        this._fractLength = p4;
        this._expLength = p5;
        this._numTypesValid = 0;
        return com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT;
    }

    protected final com.flurry.org.codehaus.jackson.JsonToken resetInt(boolean p2, int p3)
    {
        this._numberNegative = p2;
        this._intLength = p3;
        this._fractLength = 0;
        this._expLength = 0;
        this._numTypesValid = 0;
        return com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT;
    }

    public com.flurry.org.codehaus.jackson.Version version()
    {
        return com.flurry.org.codehaus.jackson.util.VersionUtil.versionFor(this.getClass());
    }
}
