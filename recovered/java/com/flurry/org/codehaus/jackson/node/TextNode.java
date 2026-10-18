package com.flurry.org.codehaus.jackson.node;
public final class TextNode extends com.flurry.org.codehaus.jackson.node.ValueNode {
    static final com.flurry.org.codehaus.jackson.node.TextNode EMPTY_STRING_NODE = None;
    static final int INT_SPACE = 32;
    final String _value;

    static TextNode()
    {
        com.flurry.org.codehaus.jackson.node.TextNode.EMPTY_STRING_NODE = new com.flurry.org.codehaus.jackson.node.TextNode("");
        return;
    }

    public TextNode(String p1)
    {
        this._value = p1;
        return;
    }

    protected static void appendQuoted(StringBuilder p1, String p2)
    {
        p1.append(34);
        com.flurry.org.codehaus.jackson.util.CharTypes.appendQuoted(p1, p2);
        p1.append(34);
        return;
    }

    public static com.flurry.org.codehaus.jackson.node.TextNode valueOf(String p1)
    {
        com.flurry.org.codehaus.jackson.node.TextNode v0_2;
        if (p1 != null) {
            if (p1.length() != 0) {
                v0_2 = new com.flurry.org.codehaus.jackson.node.TextNode(p1);
            } else {
                v0_2 = com.flurry.org.codehaus.jackson.node.TextNode.EMPTY_STRING_NODE;
            }
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    protected void _reportBase64EOF()
    {
        throw new com.flurry.org.codehaus.jackson.JsonParseException("Unexpected end-of-String when base64 content", com.flurry.org.codehaus.jackson.JsonLocation.NA);
    }

    protected void _reportInvalidBase64(com.flurry.org.codehaus.jackson.Base64Variant p2, char p3, int p4)
    {
        this._reportInvalidBase64(p2, p3, p4, 0);
        return;
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
        throw new com.flurry.org.codehaus.jackson.JsonParseException(v0, com.flurry.org.codehaus.jackson.JsonLocation.NA);
    }

    public boolean asBoolean(boolean p3)
    {
        if ((this._value != null) && ("true".equals(this._value.trim()))) {
            p3 = 1;
        }
        return p3;
    }

    public double asDouble(double p3)
    {
        return com.flurry.org.codehaus.jackson.io.NumberInput.parseAsDouble(this._value, p3);
    }

    public int asInt(int p2)
    {
        return com.flurry.org.codehaus.jackson.io.NumberInput.parseAsInt(this._value, p2);
    }

    public long asLong(long p3)
    {
        return com.flurry.org.codehaus.jackson.io.NumberInput.parseAsLong(this._value, p3);
    }

    public String asText()
    {
        return this._value;
    }

    public com.flurry.org.codehaus.jackson.JsonToken asToken()
    {
        return com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING;
    }

    public boolean equals(Object p4)
    {
        boolean v0_0 = 0;
        if (p4 != this) {
            if ((p4 != null) && (p4.getClass() == this.getClass())) {
                v0_0 = ((com.flurry.org.codehaus.jackson.node.TextNode) p4)._value.equals(this._value);
            }
        } else {
            v0_0 = 1;
        }
        return v0_0;
    }

    public byte[] getBinaryValue()
    {
        return this.getBinaryValue(com.flurry.org.codehaus.jackson.Base64Variants.getDefaultVariant());
    }

    public byte[] getBinaryValue(com.flurry.org.codehaus.jackson.Base64Variant p13)
    {
        com.flurry.org.codehaus.jackson.util.ByteArrayBuilder v1_1 = new com.flurry.org.codehaus.jackson.util.ByteArrayBuilder(100);
        String v7 = this._value;
        int v5_0 = 0;
        int v4 = v7.length();
        while (v5_0 < v4) {
            while(true) {
                int v6_0 = (v5_0 + 1);
                char v2_0 = v7.charAt(v5_0);
                if (v6_0 < v4) {
                    if (v2_0 > 32) {
                        break;
                    }
                    v5_0 = v6_0;
                }
                return v1_1.toByteArray();
            }
            int v0_0 = p13.decodeBase64Char(v2_0);
            if (v0_0 < 0) {
                this._reportInvalidBase64(p13, v2_0, 0);
            }
            int v3_0 = v0_0;
            if (v6_0 >= v4) {
                this._reportBase64EOF();
            }
            int v5_1 = (v6_0 + 1);
            char v2_1 = v7.charAt(v6_0);
            int v0_1 = p13.decodeBase64Char(v2_1);
            if (v0_1 < 0) {
                this._reportInvalidBase64(p13, v2_1, 1);
            }
            int v3_1 = ((v3_0 << 6) | v0_1);
            if (v5_1 >= v4) {
                if (p13.usesPadding()) {
                    this._reportBase64EOF();
                } else {
                    v1_1.append((v3_1 >> 4));
                    break;
                }
            }
            int v6_1 = (v5_1 + 1);
            char v2_2 = v7.charAt(v5_1);
            int v0_2 = p13.decodeBase64Char(v2_2);
            if (v0_2 >= 0) {
                int v3_2 = ((v3_1 << 6) | v0_2);
                if (v6_1 >= v4) {
                    if (p13.usesPadding()) {
                        this._reportBase64EOF();
                    } else {
                        v1_1.appendTwoBytes((v3_2 >> 2));
                        break;
                    }
                }
                v5_0 = (v6_1 + 1);
                char v2_3 = v7.charAt(v6_1);
                int v0_3 = p13.decodeBase64Char(v2_3);
                if (v0_3 >= 0) {
                    v1_1.appendThreeBytes(((v3_2 << 6) | v0_3));
                } else {
                    if (v0_3 != -2) {
                        this._reportInvalidBase64(p13, v2_3, 3);
                    }
                    v1_1.appendTwoBytes((v3_2 >> 2));
                }
            } else {
                if (v0_2 != -2) {
                    this._reportInvalidBase64(p13, v2_2, 2);
                }
                if (v6_1 >= v4) {
                    this._reportBase64EOF();
                }
                v5_0 = (v6_1 + 1);
                char v2_4 = v7.charAt(v6_1);
                if (!p13.usesPaddingChar(v2_4)) {
                    this._reportInvalidBase64(p13, v2_4, 3, new StringBuilder().append("expected padding character \'").append(p13.getPaddingChar()).append("\'").toString());
                }
                v1_1.append((v3_1 >> 4));
            }
        }
        return v1_1.toByteArray();
    }

    public String getTextValue()
    {
        return this._value;
    }

    public int hashCode()
    {
        return this._value.hashCode();
    }

    public boolean isTextual()
    {
        return 1;
    }

    public final void serialize(com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        if (this._value != null) {
            p2.writeString(this._value);
        } else {
            p2.writeNull();
        }
        return;
    }

    public String toString()
    {
        int v0_0 = this._value.length();
        StringBuilder v1_1 = new StringBuilder(((v0_0 + 2) + (v0_0 >> 4)));
        com.flurry.org.codehaus.jackson.node.TextNode.appendQuoted(v1_1, this._value);
        return v1_1.toString();
    }
}
