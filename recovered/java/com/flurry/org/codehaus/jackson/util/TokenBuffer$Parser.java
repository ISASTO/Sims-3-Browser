package com.flurry.org.codehaus.jackson.util;
public final class TokenBuffer$Parser extends com.flurry.org.codehaus.jackson.impl.JsonParserMinimalBase {
    protected transient com.flurry.org.codehaus.jackson.util.ByteArrayBuilder _byteBuilder;
    protected boolean _closed;
    protected com.flurry.org.codehaus.jackson.ObjectCodec _codec;
    protected com.flurry.org.codehaus.jackson.JsonLocation _location;
    protected com.flurry.org.codehaus.jackson.impl.JsonReadContext _parsingContext;
    protected com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment _segment;
    protected int _segmentPtr;

    public TokenBuffer$Parser(com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment p3, com.flurry.org.codehaus.jackson.ObjectCodec p4)
    {
        super(0);
        super._location = 0;
        super._segment = p3;
        super._segmentPtr = -1;
        super._codec = p4;
        super._parsingContext = com.flurry.org.codehaus.jackson.impl.JsonReadContext.createRootContext(-1, -1);
        return;
    }

    protected final void _checkIsNumber()
    {
        if ((this._currToken != null) && (this._currToken.isNumeric())) {
            return;
        } else {
            throw this._constructError(new StringBuilder().append("Current token (").append(this._currToken).append(") not numeric, can not use numeric value accessors").toString());
        }
    }

    protected final Object _currentObject()
    {
        return this._segment.get(this._segmentPtr);
    }

    protected void _handleEOF()
    {
        this._throwInternal();
        return;
    }

    public void close()
    {
        if (!this._closed) {
            this._closed = 1;
        }
        return;
    }

    public java.math.BigInteger getBigIntegerValue()
    {
        java.math.BigInteger v0_2;
        java.math.BigInteger v0_0 = this.getNumberValue();
        if (!(v0_0 instanceof java.math.BigInteger)) {
            switch (com.flurry.org.codehaus.jackson.util.TokenBuffer$1.$SwitchMap$org$codehaus$jackson$JsonParser$NumberType[this.getNumberType().ordinal()]) {
                case 3:
                    v0_2 = ((java.math.BigDecimal) v0_0).toBigInteger();
                    break;
                default:
                    v0_2 = java.math.BigInteger.valueOf(v0_0.longValue());
            }
        } else {
            v0_2 = ((java.math.BigInteger) v0_0);
        }
        return v0_2;
    }

    public byte[] getBinaryValue(com.flurry.org.codehaus.jackson.Base64Variant p6)
    {
        byte[] v1_0;
        if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.VALUE_EMBEDDED_OBJECT) {
            if (this._currToken == com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                String v2 = this.getText();
                if (v2 != null) {
                    com.flurry.org.codehaus.jackson.util.ByteArrayBuilder v0_0 = this._byteBuilder;
                    if (v0_0 != null) {
                        this._byteBuilder.reset();
                    } else {
                        v0_0 = new com.flurry.org.codehaus.jackson.util.ByteArrayBuilder(100);
                        this._byteBuilder = v0_0;
                    }
                    this._decodeBase64(v2, v0_0, p6);
                    v1_0 = v0_0.toByteArray();
                } else {
                    v1_0 = 0;
                }
            } else {
                throw this._constructError(new StringBuilder().append("Current token (").append(this._currToken).append(") not VALUE_STRING (or VALUE_EMBEDDED_OBJECT with byte[]), can not access as binary").toString());
            }
        } else {
            byte[] v1_1 = this._currentObject();
            if (!(v1_1 instanceof byte[])) {
            } else {
                v1_0 = ((byte[]) ((byte[]) v1_1));
            }
        }
        return v1_0;
    }

    public com.flurry.org.codehaus.jackson.ObjectCodec getCodec()
    {
        return this._codec;
    }

    public com.flurry.org.codehaus.jackson.JsonLocation getCurrentLocation()
    {
        com.flurry.org.codehaus.jackson.JsonLocation v0_1;
        if (this._location != null) {
            v0_1 = this._location;
        } else {
            v0_1 = com.flurry.org.codehaus.jackson.JsonLocation.NA;
        }
        return v0_1;
    }

    public String getCurrentName()
    {
        return this._parsingContext.getCurrentName();
    }

    public java.math.BigDecimal getDecimalValue()
    {
        java.math.BigDecimal v0_2;
        java.math.BigDecimal v0_0 = this.getNumberValue();
        if (!(v0_0 instanceof java.math.BigDecimal)) {
            switch (com.flurry.org.codehaus.jackson.util.TokenBuffer$1.$SwitchMap$org$codehaus$jackson$JsonParser$NumberType[this.getNumberType().ordinal()]) {
                case 1:
                case 5:
                    v0_2 = java.math.BigDecimal.valueOf(v0_0.longValue());
                    break;
                case 2:
                    v0_2 = new java.math.BigDecimal(((java.math.BigInteger) v0_0));
                    break;
                case 3:
                case 4:
                default:
                    v0_2 = java.math.BigDecimal.valueOf(v0_0.doubleValue());
                    break;
            }
        } else {
            v0_2 = ((java.math.BigDecimal) v0_0);
        }
        return v0_2;
    }

    public double getDoubleValue()
    {
        return this.getNumberValue().doubleValue();
    }

    public Object getEmbeddedObject()
    {
        int v0_1;
        if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.VALUE_EMBEDDED_OBJECT) {
            v0_1 = 0;
        } else {
            v0_1 = this._currentObject();
        }
        return v0_1;
    }

    public float getFloatValue()
    {
        return this.getNumberValue().floatValue();
    }

    public int getIntValue()
    {
        int v0_1;
        if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
            v0_1 = this.getNumberValue().intValue();
        } else {
            v0_1 = ((Number) this._currentObject()).intValue();
        }
        return v0_1;
    }

    public long getLongValue()
    {
        return this.getNumberValue().longValue();
    }

    public com.flurry.org.codehaus.jackson.JsonParser$NumberType getNumberType()
    {
        int v1_2;
        Number v0 = this.getNumberValue();
        if (!(v0 instanceof Integer)) {
            if (!(v0 instanceof Long)) {
                if (!(v0 instanceof Double)) {
                    if (!(v0 instanceof java.math.BigDecimal)) {
                        if (!(v0 instanceof Float)) {
                            if (!(v0 instanceof java.math.BigInteger)) {
                                v1_2 = 0;
                            } else {
                                v1_2 = com.flurry.org.codehaus.jackson.JsonParser$NumberType.BIG_INTEGER;
                            }
                        } else {
                            v1_2 = com.flurry.org.codehaus.jackson.JsonParser$NumberType.FLOAT;
                        }
                    } else {
                        v1_2 = com.flurry.org.codehaus.jackson.JsonParser$NumberType.BIG_DECIMAL;
                    }
                } else {
                    v1_2 = com.flurry.org.codehaus.jackson.JsonParser$NumberType.DOUBLE;
                }
            } else {
                v1_2 = com.flurry.org.codehaus.jackson.JsonParser$NumberType.LONG;
            }
        } else {
            v1_2 = com.flurry.org.codehaus.jackson.JsonParser$NumberType.INT;
        }
        return v1_2;
    }

    public final Number getNumberValue()
    {
        this._checkIsNumber();
        return ((Number) this._currentObject());
    }

    public com.flurry.org.codehaus.jackson.JsonStreamContext getParsingContext()
    {
        return this._parsingContext;
    }

    public String getText()
    {
        String v1_0 = 0;
        if ((this._currToken != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) && (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME)) {
            if (this._currToken != null) {
                switch (com.flurry.org.codehaus.jackson.util.TokenBuffer$1.$SwitchMap$org$codehaus$jackson$JsonToken[this._currToken.ordinal()]) {
                    case 7:
                    case 8:
                        Object v0_0 = this._currentObject();
                        if (v0_0 != null) {
                            v1_0 = v0_0.toString();
                        }
                        break;
                    default:
                        v1_0 = this._currToken.asString();
                }
            }
        } else {
            Object v0_1 = this._currentObject();
            if (!(v0_1 instanceof String)) {
                if (v0_1 != null) {
                    v1_0 = v0_1.toString();
                }
            } else {
                v1_0 = ((String) v0_1);
            }
        }
        return v1_0;
    }

    public char[] getTextCharacters()
    {
        char[] v1;
        String v0 = this.getText();
        if (v0 != null) {
            v1 = v0.toCharArray();
        } else {
            v1 = 0;
        }
        return v1;
    }

    public int getTextLength()
    {
        int v1;
        String v0 = this.getText();
        if (v0 != null) {
            v1 = v0.length();
        } else {
            v1 = 0;
        }
        return v1;
    }

    public int getTextOffset()
    {
        return 0;
    }

    public com.flurry.org.codehaus.jackson.JsonLocation getTokenLocation()
    {
        return this.getCurrentLocation();
    }

    public boolean hasTextCharacters()
    {
        return 0;
    }

    public boolean isClosed()
    {
        return this._closed;
    }

    public com.flurry.org.codehaus.jackson.JsonToken nextToken()
    {
        com.flurry.org.codehaus.jackson.impl.JsonReadContext v2_0 = 0;
        if ((!this._closed) && (this._segment != null)) {
            com.flurry.org.codehaus.jackson.JsonToken v3_13 = (this._segmentPtr + 1);
            this._segmentPtr = v3_13;
            if (v3_13 >= 16) {
                this._segmentPtr = 0;
                this._segment = this._segment.next();
                if (this._segment == null) {
                    return v2_0;
                }
            }
            this._currToken = this._segment.type(this._segmentPtr);
            if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
                if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
                    if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY) {
                        if ((this._currToken == com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT) || (this._currToken == com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY)) {
                            this._parsingContext = this._parsingContext.getParent();
                            if (this._parsingContext == null) {
                                this._parsingContext = com.flurry.org.codehaus.jackson.impl.JsonReadContext.createRootContext(-1, -1);
                            }
                        }
                    } else {
                        this._parsingContext = this._parsingContext.createChildArrayContext(-1, -1);
                    }
                } else {
                    this._parsingContext = this._parsingContext.createChildObjectContext(-1, -1);
                }
            } else {
                String v0;
                String v1_0 = this._currentObject();
                if (!(v1_0 instanceof String)) {
                    v0 = v1_0.toString();
                } else {
                    v0 = ((String) v1_0);
                }
                this._parsingContext.setCurrentName(v0);
            }
            v2_0 = this._currToken;
        }
        return v2_0;
    }

    public com.flurry.org.codehaus.jackson.JsonToken peekNextToken()
    {
        com.flurry.org.codehaus.jackson.JsonToken v2 = 0;
        if (!this._closed) {
            com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment v1 = this._segment;
            int v0 = (this._segmentPtr + 1);
            if (v0 >= 16) {
                v0 = 0;
                if (v1 != null) {
                    v1 = v1.next();
                } else {
                    v1 = 0;
                }
            }
            if (v1 != null) {
                v2 = v1.type(v0);
            }
        }
        return v2;
    }

    public void setCodec(com.flurry.org.codehaus.jackson.ObjectCodec p1)
    {
        this._codec = p1;
        return;
    }

    public void setLocation(com.flurry.org.codehaus.jackson.JsonLocation p1)
    {
        this._location = p1;
        return;
    }
}
