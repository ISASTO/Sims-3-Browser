package com.flurry.org.codehaus.jackson.impl;
public abstract class JsonParserMinimalBase extends com.flurry.org.codehaus.jackson.JsonParser {
    protected static final int INT_APOSTROPHE = 39;
    protected static final int INT_ASTERISK = 42;
    protected static final int INT_BACKSLASH = 92;
    protected static final int INT_COLON = 58;
    protected static final int INT_COMMA = 44;
    protected static final int INT_CR = 13;
    protected static final int INT_LBRACKET = 91;
    protected static final int INT_LCURLY = 123;
    protected static final int INT_LF = 10;
    protected static final int INT_QUOTE = 34;
    protected static final int INT_RBRACKET = 93;
    protected static final int INT_RCURLY = 125;
    protected static final int INT_SLASH = 47;
    protected static final int INT_SPACE = 32;
    protected static final int INT_TAB = 9;
    protected static final int INT_b = 98;
    protected static final int INT_f = 102;
    protected static final int INT_n = 110;
    protected static final int INT_r = 114;
    protected static final int INT_t = 116;
    protected static final int INT_u = 117;

    protected JsonParserMinimalBase()
    {
        return;
    }

    protected JsonParserMinimalBase(int p1)
    {
        super(p1);
        return;
    }

    protected static final String _getCharDesc(int p3)
    {
        String v1_6;
        if (!Character.isISOControl(((char) p3))) {
            if (p3 <= 255) {
                v1_6 = new StringBuilder().append("\'").append(((char) p3)).append("\' (code ").append(p3).append(")").toString();
            } else {
                v1_6 = new StringBuilder().append("\'").append(((char) p3)).append("\' (code ").append(p3).append(" / 0x").append(Integer.toHexString(p3)).append(")").toString();
            }
        } else {
            v1_6 = new StringBuilder().append("(CTRL-CHAR, code ").append(p3).append(")").toString();
        }
        return v1_6;
    }

    protected final com.flurry.org.codehaus.jackson.JsonParseException _constructError(String p3, Throwable p4)
    {
        return new com.flurry.org.codehaus.jackson.JsonParseException(p3, this.getCurrentLocation(), p4);
    }

    protected void _decodeBase64(String p12, com.flurry.org.codehaus.jackson.util.ByteArrayBuilder p13, com.flurry.org.codehaus.jackson.Base64Variant p14)
    {
        int v4_0 = 0;
        int v3 = p12.length();
        while (v4_0 < v3) {
            while(true) {
                int v5_1 = (v4_0 + 1);
                char v1_4 = p12.charAt(v4_0);
                if (v5_1 < v3) {
                    if (v1_4 > 32) {
                        break;
                    }
                    v4_0 = v5_1;
                }
                return;
            }
            int v0_0 = p14.decodeBase64Char(v1_4);
            if (v0_0 < 0) {
                this._reportInvalidBase64(p14, v1_4, 0, 0);
            }
            int v2_0 = v0_0;
            if (v5_1 >= v3) {
                this._reportBase64EOF();
            }
            int v4_1 = (v5_1 + 1);
            char v1_0 = p12.charAt(v5_1);
            int v0_1 = p14.decodeBase64Char(v1_0);
            if (v0_1 < 0) {
                this._reportInvalidBase64(p14, v1_0, 1, 0);
            }
            int v2_1 = ((v2_0 << 6) | v0_1);
            if (v4_1 >= v3) {
                if (p14.usesPadding()) {
                    this._reportBase64EOF();
                } else {
                    p13.append((v2_1 >> 4));
                    break;
                }
            }
            int v5_0 = (v4_1 + 1);
            char v1_1 = p12.charAt(v4_1);
            int v0_2 = p14.decodeBase64Char(v1_1);
            if (v0_2 >= 0) {
                int v2_2 = ((v2_1 << 6) | v0_2);
                if (v5_0 >= v3) {
                    if (p14.usesPadding()) {
                        this._reportBase64EOF();
                    } else {
                        p13.appendTwoBytes((v2_2 >> 2));
                        break;
                    }
                }
                v4_0 = (v5_0 + 1);
                char v1_2 = p12.charAt(v5_0);
                int v0_3 = p14.decodeBase64Char(v1_2);
                if (v0_3 >= 0) {
                    p13.appendThreeBytes(((v2_2 << 6) | v0_3));
                } else {
                    if (v0_3 != -2) {
                        this._reportInvalidBase64(p14, v1_2, 3, 0);
                    }
                    p13.appendTwoBytes((v2_2 >> 2));
                }
            } else {
                if (v0_2 != -2) {
                    this._reportInvalidBase64(p14, v1_1, 2, 0);
                }
                if (v5_0 >= v3) {
                    this._reportBase64EOF();
                }
                v4_0 = (v5_0 + 1);
                char v1_3 = p12.charAt(v5_0);
                if (!p14.usesPaddingChar(v1_3)) {
                    this._reportInvalidBase64(p14, v1_3, 3, new StringBuilder().append("expected padding character \'").append(p14.getPaddingChar()).append("\'").toString());
                }
                p13.append((v2_1 >> 4));
            }
        }
        return;
    }

    protected abstract void _handleEOF();

    protected char _handleUnrecognizedCharacterEscape(char p3)
    {
        if ((!this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_BACKSLASH_ESCAPING_ANY_CHARACTER)) && ((p3 != 39) || (!this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_SINGLE_QUOTES)))) {
            this._reportError(new StringBuilder().append("Unrecognized character escape ").append(com.flurry.org.codehaus.jackson.impl.JsonParserMinimalBase._getCharDesc(p3)).toString());
        }
        return p3;
    }

    protected void _reportBase64EOF()
    {
        throw this._constructError("Unexpected end-of-String in base64 content");
    }

    protected final void _reportError(String p2)
    {
        throw this._constructError(p2);
    }

    protected void _reportInvalidBase64(com.flurry.org.codehaus.jackson.Base64Variant p4, char p5, int p6, String p7)
    {
        String v0;
        if (p5 > 32) {
            if (!p4.usesPaddingChar(p5)) {
                if ((Character.isDefined(p5)) && (!Character.isISOControl(p5))) {
                    v0 = new StringBuilder().append("Illegal character \'").append(p5).append("\' (code 0x").append(Integer.toHexString(p5)).append(") in base64 content").toString();
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
        throw this._constructError(v0);
    }

    protected void _reportInvalidEOF()
    {
        this._reportInvalidEOF(new StringBuilder().append(" in ").append(this._currToken).toString());
        return;
    }

    protected void _reportInvalidEOF(String p3)
    {
        this._reportError(new StringBuilder().append("Unexpected end-of-input").append(p3).toString());
        return;
    }

    protected void _reportInvalidEOFInValue()
    {
        this._reportInvalidEOF(" in a value");
        return;
    }

    protected void _reportUnexpectedChar(int p4, String p5)
    {
        String v0 = new StringBuilder().append("Unexpected character (").append(com.flurry.org.codehaus.jackson.impl.JsonParserMinimalBase._getCharDesc(p4)).append(")").toString();
        if (p5 != null) {
            v0 = new StringBuilder().append(v0).append(": ").append(p5).toString();
        }
        this._reportError(v0);
        return;
    }

    protected final void _throwInternal()
    {
        throw new RuntimeException("Internal error: this code path should never get executed");
    }

    protected void _throwInvalidSpace(int p5)
    {
        this._reportError(new StringBuilder().append("Illegal character (").append(com.flurry.org.codehaus.jackson.impl.JsonParserMinimalBase._getCharDesc(((char) p5))).append("): only regular white space (\\r, \\n, \\t) is allowed between tokens").toString());
        return;
    }

    protected void _throwUnquotedSpace(int p5, String p6)
    {
        if ((!this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_UNQUOTED_CONTROL_CHARS)) || (p5 >= 32)) {
            this._reportError(new StringBuilder().append("Illegal unquoted character (").append(com.flurry.org.codehaus.jackson.impl.JsonParserMinimalBase._getCharDesc(((char) p5))).append("): has to be escaped using backslash to be included in ").append(p6).toString());
        }
        return;
    }

    protected final void _wrapError(String p2, Throwable p3)
    {
        throw this._constructError(p2, p3);
    }

    public abstract void close();

    public abstract byte[] getBinaryValue(com.flurry.org.codehaus.jackson.Base64Variant p0);

    public abstract String getCurrentName();

    public abstract com.flurry.org.codehaus.jackson.JsonStreamContext getParsingContext();

    public abstract String getText();

    public abstract char[] getTextCharacters();

    public abstract int getTextLength();

    public abstract int getTextOffset();

    public boolean getValueAsBoolean(boolean p7)
    {
        boolean v2 = 1;
        if (this._currToken == null) {
            v2 = p7;
        } else {
            switch (com.flurry.org.codehaus.jackson.impl.JsonParserMinimalBase$1.$SwitchMap$org$codehaus$jackson$JsonToken[this._currToken.ordinal()]) {
                case 5:
                    if (this.getIntValue() == 0) {
                        v2 = 0;
                    }
                case 6:
                    break;
                case 7:
                case 8:
                    v2 = 0;
                    break;
                case 9:
                    Boolean v1_0 = this.getEmbeddedObject();
                    if ((v1_0 instanceof Boolean)) {
                        v2 = ((Boolean) v1_0).booleanValue();
                    } else {
                        if (!"true".equals(this.getText().trim())) {
                        }
                    }
                    break;
                default:
            }
        }
        return v2;
    }

    public double getValueAsDouble(double p4)
    {
        if (this._currToken != null) {
            switch (com.flurry.org.codehaus.jackson.impl.JsonParserMinimalBase$1.$SwitchMap$org$codehaus$jackson$JsonToken[this._currToken.ordinal()]) {
                case 5:
                case 11:
                    p4 = this.getDoubleValue();
                    break;
                case 6:
                    p4 = 4607182418800017408;
                    break;
                case 7:
                case 8:
                    p4 = 0;
                    break;
                case 9:
                    Number v0_0 = this.getEmbeddedObject();
                    if ((v0_0 instanceof Number)) {
                        p4 = ((Number) v0_0).doubleValue();
                    }
                    break;
                case 10:
                    p4 = com.flurry.org.codehaus.jackson.io.NumberInput.parseAsDouble(this.getText(), p4);
                    break;
            }
        }
        return p4;
    }

    public int getValueAsInt(int p4)
    {
        if (this._currToken != null) {
            switch (com.flurry.org.codehaus.jackson.impl.JsonParserMinimalBase$1.$SwitchMap$org$codehaus$jackson$JsonToken[this._currToken.ordinal()]) {
                case 5:
                case 11:
                    p4 = this.getIntValue();
                    break;
                case 6:
                    p4 = 1;
                    break;
                case 7:
                case 8:
                    p4 = 0;
                    break;
                case 9:
                    Number v0_0 = this.getEmbeddedObject();
                    if ((v0_0 instanceof Number)) {
                        p4 = ((Number) v0_0).intValue();
                    }
                    break;
                case 10:
                    p4 = com.flurry.org.codehaus.jackson.io.NumberInput.parseAsInt(this.getText(), p4);
                    break;
            }
        }
        return p4;
    }

    public long getValueAsLong(long p4)
    {
        if (this._currToken != null) {
            switch (com.flurry.org.codehaus.jackson.impl.JsonParserMinimalBase$1.$SwitchMap$org$codehaus$jackson$JsonToken[this._currToken.ordinal()]) {
                case 5:
                case 11:
                    p4 = this.getLongValue();
                    break;
                case 6:
                    p4 = 1;
                    break;
                case 7:
                case 8:
                    p4 = 0;
                    break;
                case 9:
                    Number v0_0 = this.getEmbeddedObject();
                    if ((v0_0 instanceof Number)) {
                        p4 = ((Number) v0_0).longValue();
                    }
                    break;
                case 10:
                    p4 = com.flurry.org.codehaus.jackson.io.NumberInput.parseAsLong(this.getText(), p4);
                    break;
            }
        }
        return p4;
    }

    public abstract boolean hasTextCharacters();

    public abstract boolean isClosed();

    public abstract com.flurry.org.codehaus.jackson.JsonToken nextToken();

    public com.flurry.org.codehaus.jackson.JsonParser skipChildren()
    {
        if ((this._currToken == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) || (this._currToken == com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY)) {
            int v0 = 1;
            do {
                com.flurry.org.codehaus.jackson.JsonToken v1 = this.nextToken();
                if (v1 != null) {
                    switch (com.flurry.org.codehaus.jackson.impl.JsonParserMinimalBase$1.$SwitchMap$org$codehaus$jackson$JsonToken[v1.ordinal()]) {
                        case 1:
                        case 2:
                            v0++;
                            break;
                        case 3:
                        case 4:
                            v0--;
                            break;
                        default:
                    }
                } else {
                    this._handleEOF();
                    break;
                }
            } while(v0 != 0);
        }
        return this;
    }
}
