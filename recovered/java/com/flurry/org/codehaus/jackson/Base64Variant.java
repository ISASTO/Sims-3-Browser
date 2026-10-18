package com.flurry.org.codehaus.jackson;
public final class Base64Variant {
    public static final int BASE64_VALUE_INVALID = 255;
    public static final int BASE64_VALUE_PADDING = 254;
    static final char PADDING_CHAR_NONE;
    private final int[] _asciiToBase64;
    private final byte[] _base64ToAsciiB;
    private final char[] _base64ToAsciiC;
    final int _maxLineLength;
    final String _name;
    final char _paddingChar;
    final boolean _usesPadding;

    public Base64Variant(com.flurry.org.codehaus.jackson.Base64Variant p7, String p8, int p9)
    {
        this(p7, p8, p7._usesPadding, p7._paddingChar, p9);
        return;
    }

    public Base64Variant(com.flurry.org.codehaus.jackson.Base64Variant p7, String p8, boolean p9, char p10, int p11)
    {
        int[] v3_4 = new int[128];
        this._asciiToBase64 = v3_4;
        int[] v3_5 = new char[64];
        this._base64ToAsciiC = v3_5;
        int[] v3_6 = new byte[64];
        this._base64ToAsciiB = v3_6;
        this._name = p8;
        byte[] v0 = p7._base64ToAsciiB;
        System.arraycopy(v0, 0, this._base64ToAsciiB, 0, v0.length);
        char[] v1 = p7._base64ToAsciiC;
        System.arraycopy(v1, 0, this._base64ToAsciiC, 0, v1.length);
        int[] v2 = p7._asciiToBase64;
        System.arraycopy(v2, 0, this._asciiToBase64, 0, v2.length);
        this._usesPadding = p9;
        this._paddingChar = p10;
        this._maxLineLength = p11;
        return;
    }

    public Base64Variant(String p7, String p8, boolean p9, char p10, int p11)
    {
        int[] v3_8 = new int[128];
        this._asciiToBase64 = v3_8;
        int[] v3_10 = new char[64];
        this._base64ToAsciiC = v3_10;
        int[] v3_11 = new byte[64];
        this._base64ToAsciiB = v3_11;
        this._name = p7;
        this._usesPadding = p9;
        this._paddingChar = p10;
        this._maxLineLength = p11;
        int v1 = p8.length();
        if (v1 == 64) {
            p8.getChars(0, v1, this._base64ToAsciiC, 0);
            java.util.Arrays.fill(this._asciiToBase64, -1);
            int v2 = 0;
            while (v2 < v1) {
                char v0 = this._base64ToAsciiC[v2];
                this._base64ToAsciiB[v2] = ((byte) v0);
                this._asciiToBase64[v0] = v2;
                v2++;
            }
            if (p9) {
                this._asciiToBase64[p10] = -2;
            }
            return;
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("Base64Alphabet length must be exactly 64 (was ").append(v1).append(")").toString());
        }
    }

    public int decodeBase64Byte(byte p3)
    {
        int v1_1;
        if (p3 > 127) {
            v1_1 = -1;
        } else {
            v1_1 = this._asciiToBase64[p3];
        }
        return v1_1;
    }

    public int decodeBase64Char(char p3)
    {
        int v1_1;
        if (p3 > 127) {
            v1_1 = -1;
        } else {
            v1_1 = this._asciiToBase64[p3];
        }
        return v1_1;
    }

    public int decodeBase64Char(int p2)
    {
        int v0_1;
        if (p2 > 127) {
            v0_1 = -1;
        } else {
            v0_1 = this._asciiToBase64[p2];
        }
        return v0_1;
    }

    public String encode(byte[] p2)
    {
        return this.encode(p2, 0);
    }

    public String encode(byte[] p13, boolean p14)
    {
        int v2 = p13.length;
        StringBuilder v8_1 = new StringBuilder((((v2 >> 2) + v2) + (v2 >> 3)));
        if (p14) {
            v8_1.append(34);
        }
        int v1 = (this.getMaxLineLength() >> 2);
        int v7 = (v2 - 3);
        int v5_0 = 0;
        while (v5_0 <= v7) {
            int v4_2 = (v5_0 + 1);
            int v5_2 = (v4_2 + 1);
            int v4_3 = (v5_2 + 1);
            this.encodeBase64Chunk(v8_1, ((((p13[v5_0] << 8) | (p13[v4_2] & 255)) << 8) | (p13[v5_2] & 255)));
            v1--;
            if (v1 <= 0) {
                v8_1.append(92);
                v8_1.append(110);
                v1 = (this.getMaxLineLength() >> 2);
            }
            v5_0 = v4_3;
        }
        int v3 = (v2 - v5_0);
        if (v3 > 0) {
            int v0_0 = (p13[v5_0] << 16);
            if (v3 == 2) {
                v0_0 |= ((p13[(v5_0 + 1)] & 255) << 8);
            }
            this.encodeBase64Partial(v8_1, v0_0, v3);
        }
        if (p14) {
            v8_1.append(34);
        }
        return v8_1.toString();
    }

    public byte encodeBase64BitsAsByte(int p2)
    {
        return this._base64ToAsciiB[p2];
    }

    public char encodeBase64BitsAsChar(int p2)
    {
        return this._base64ToAsciiC[p2];
    }

    public int encodeBase64Chunk(int p4, byte[] p5, int p6)
    {
        int v0_0 = (p6 + 1);
        p5[p6] = this._base64ToAsciiB[((p4 >> 18) & 63)];
        int v6_2 = (v0_0 + 1);
        p5[v0_0] = this._base64ToAsciiB[((p4 >> 12) & 63)];
        int v0_1 = (v6_2 + 1);
        p5[v6_2] = this._base64ToAsciiB[((p4 >> 6) & 63)];
        int v6_1 = (v0_1 + 1);
        p5[v0_1] = this._base64ToAsciiB[(p4 & 63)];
        return v6_1;
    }

    public int encodeBase64Chunk(int p4, char[] p5, int p6)
    {
        int v0_0 = (p6 + 1);
        p5[p6] = this._base64ToAsciiC[((p4 >> 18) & 63)];
        int v6_2 = (v0_0 + 1);
        p5[v0_0] = this._base64ToAsciiC[((p4 >> 12) & 63)];
        int v0_1 = (v6_2 + 1);
        p5[v6_2] = this._base64ToAsciiC[((p4 >> 6) & 63)];
        int v6_1 = (v0_1 + 1);
        p5[v0_1] = this._base64ToAsciiC[(p4 & 63)];
        return v6_1;
    }

    public void encodeBase64Chunk(StringBuilder p3, int p4)
    {
        p3.append(this._base64ToAsciiC[((p4 >> 18) & 63)]);
        p3.append(this._base64ToAsciiC[((p4 >> 12) & 63)]);
        p3.append(this._base64ToAsciiC[((p4 >> 6) & 63)]);
        p3.append(this._base64ToAsciiC[(p4 & 63)]);
        return;
    }

    public int encodeBase64Partial(int p6, int p7, byte[] p8, int p9)
    {
        int v0_0 = (p9 + 1);
        p8[p9] = this._base64ToAsciiB[((p6 >> 18) & 63)];
        int v9_1 = (v0_0 + 1);
        p8[v0_0] = this._base64ToAsciiB[((p6 >> 12) & 63)];
        if (!this._usesPadding) {
            if (p7 == 2) {
                int v0_1 = (v9_1 + 1);
                p8[v9_1] = this._base64ToAsciiB[((p6 >> 6) & 63)];
                v9_1 = v0_1;
            }
        } else {
            byte v2_6;
            byte v1 = ((byte) this._paddingChar);
            int v0_2 = (v9_1 + 1);
            if (p7 != 2) {
                v2_6 = v1;
            } else {
                v2_6 = this._base64ToAsciiB[((p6 >> 6) & 63)];
            }
            p8[v9_1] = v2_6;
            v9_1 = (v0_2 + 1);
            p8[v0_2] = v1;
        }
        return v9_1;
    }

    public int encodeBase64Partial(int p5, int p6, char[] p7, int p8)
    {
        int v0_0 = (p8 + 1);
        p7[p8] = this._base64ToAsciiC[((p5 >> 18) & 63)];
        int v8_1 = (v0_0 + 1);
        p7[v0_0] = this._base64ToAsciiC[((p5 >> 12) & 63)];
        if (!this._usesPadding) {
            if (p6 == 2) {
                int v0_1 = (v8_1 + 1);
                p7[v8_1] = this._base64ToAsciiC[((p5 >> 6) & 63)];
                v8_1 = v0_1;
            }
        } else {
            char v1_5;
            int v0_2 = (v8_1 + 1);
            if (p6 != 2) {
                v1_5 = this._paddingChar;
            } else {
                v1_5 = this._base64ToAsciiC[((p5 >> 6) & 63)];
            }
            p7[v8_1] = v1_5;
            v8_1 = (v0_2 + 1);
            p7[v0_2] = this._paddingChar;
        }
        return v8_1;
    }

    public void encodeBase64Partial(StringBuilder p4, int p5, int p6)
    {
        p4.append(this._base64ToAsciiC[((p5 >> 18) & 63)]);
        p4.append(this._base64ToAsciiC[((p5 >> 12) & 63)]);
        if (!this._usesPadding) {
            if (p6 == 2) {
                p4.append(this._base64ToAsciiC[((p5 >> 6) & 63)]);
            }
        } else {
            char v0_4;
            if (p6 != 2) {
                v0_4 = this._paddingChar;
            } else {
                v0_4 = this._base64ToAsciiC[((p5 >> 6) & 63)];
            }
            p4.append(v0_4);
            p4.append(this._paddingChar);
        }
        return;
    }

    public int getMaxLineLength()
    {
        return this._maxLineLength;
    }

    public String getName()
    {
        return this._name;
    }

    public byte getPaddingByte()
    {
        return ((byte) this._paddingChar);
    }

    public char getPaddingChar()
    {
        return this._paddingChar;
    }

    public String toString()
    {
        return this._name;
    }

    public boolean usesPadding()
    {
        return this._usesPadding;
    }

    public boolean usesPaddingChar(char p2)
    {
        int v0_1;
        if (p2 != this._paddingChar) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean usesPaddingChar(int p2)
    {
        int v0_1;
        if (p2 != this._paddingChar) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }
}
