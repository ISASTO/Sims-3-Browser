package com.flurry.org.codehaus.jackson.util;
public final class CharTypes {
    private static final byte[] HEX_BYTES;
    private static final char[] HEX_CHARS;
    static final int[] sHexValues;
    static final int[] sInputCodes;
    static final int[] sInputCodesComment;
    static final int[] sInputCodesJsNames;
    static final int[] sInputCodesUtf8;
    static final int[] sInputCodesUtf8JsNames;
    static final int[] sOutputEscapes128;

    static CharTypes()
    {
        com.flurry.org.codehaus.jackson.util.CharTypes.HEX_CHARS = "0123456789ABCDEF".toCharArray();
        int v3 = com.flurry.org.codehaus.jackson.util.CharTypes.HEX_CHARS.length;
        int[] v5_3 = new byte[v3];
        com.flurry.org.codehaus.jackson.util.CharTypes.HEX_BYTES = v5_3;
        int v2_3 = 0;
        while (v2_3 < v3) {
            com.flurry.org.codehaus.jackson.util.CharTypes.HEX_BYTES[v2_3] = ((byte) com.flurry.org.codehaus.jackson.util.CharTypes.HEX_CHARS[v2_3]);
            v2_3++;
        }
        int[] v4_0 = new int[256];
        int v2_5 = 0;
        while (v2_5 < 32) {
            v4_0[v2_5] = -1;
            v2_5++;
        }
        v4_0[34] = 1;
        v4_0[92] = 1;
        com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodes = v4_0;
        int[] v4_1 = new int[com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodes.length];
        System.arraycopy(com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodes, 0, v4_1, 0, com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodes.length);
        int v0 = 128;
        while (v0 < 256) {
            int v1;
            if ((v0 & 224) != 192) {
                if ((v0 & 240) != 224) {
                    if ((v0 & 248) != 240) {
                        v1 = -1;
                    } else {
                        v1 = 4;
                    }
                } else {
                    v1 = 3;
                }
            } else {
                v1 = 2;
            }
            v4_1[v0] = v1;
            v0++;
        }
        com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodesUtf8 = v4_1;
        int[] v4_2 = new int[256];
        java.util.Arrays.fill(v4_2, -1);
        int v2_4 = 33;
        while (v2_4 < 256) {
            if (Character.isJavaIdentifierPart(((char) v2_4))) {
                v4_2[v2_4] = 0;
            }
            v2_4++;
        }
        v4_2[64] = 0;
        v4_2[35] = 0;
        v4_2[42] = 0;
        v4_2[45] = 0;
        v4_2[43] = 0;
        com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodesJsNames = v4_2;
        int[] v4_3 = new int[256];
        System.arraycopy(com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodesJsNames, 0, v4_3, 0, com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodesJsNames.length);
        java.util.Arrays.fill(v4_3, 128, 128, 0);
        com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodesUtf8JsNames = v4_3;
        int[] v5_27 = new int[256];
        com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodesComment = v5_27;
        System.arraycopy(com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodesUtf8, 128, com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodesComment, 128, 128);
        java.util.Arrays.fill(com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodesComment, 0, 32, -1);
        com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodesComment[9] = 0;
        com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodesComment[10] = 10;
        com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodesComment[13] = 13;
        com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodesComment[42] = 42;
        int[] v4_4 = new int[128];
        int v2_2 = 0;
        while (v2_2 < 32) {
            v4_4[v2_2] = -1;
            v2_2++;
        }
        v4_4[34] = 34;
        v4_4[92] = 92;
        v4_4[8] = 98;
        v4_4[9] = 116;
        v4_4[12] = 102;
        v4_4[10] = 110;
        v4_4[13] = 114;
        com.flurry.org.codehaus.jackson.util.CharTypes.sOutputEscapes128 = v4_4;
        int[] v5_1 = new int[128];
        com.flurry.org.codehaus.jackson.util.CharTypes.sHexValues = v5_1;
        java.util.Arrays.fill(com.flurry.org.codehaus.jackson.util.CharTypes.sHexValues, -1);
        int v2_0 = 0;
        while (v2_0 < 10) {
            com.flurry.org.codehaus.jackson.util.CharTypes.sHexValues[(v2_0 + 48)] = v2_0;
            v2_0++;
        }
        int v2_1 = 0;
        while (v2_1 < 6) {
            com.flurry.org.codehaus.jackson.util.CharTypes.sHexValues[(v2_1 + 97)] = (v2_1 + 10);
            com.flurry.org.codehaus.jackson.util.CharTypes.sHexValues[(v2_1 + 65)] = (v2_1 + 10);
            v2_1++;
        }
        return;
    }

    public CharTypes()
    {
        return;
    }

    public static void appendQuoted(StringBuilder p10, String p11)
    {
        int[] v2 = com.flurry.org.codehaus.jackson.util.CharTypes.sOutputEscapes128;
        int v3 = v2.length;
        int v4 = 0;
        int v5 = p11.length();
        while (v4 < v5) {
            char v0 = p11.charAt(v4);
            if ((v0 < v3) && (v2[v0] != 0)) {
                p10.append(92);
                int v1 = v2[v0];
                if (v1 >= 0) {
                    p10.append(((char) v1));
                } else {
                    p10.append(117);
                    p10.append(48);
                    p10.append(48);
                    int v6 = (- (v1 + 1));
                    p10.append(com.flurry.org.codehaus.jackson.util.CharTypes.HEX_CHARS[(v6 >> 4)]);
                    p10.append(com.flurry.org.codehaus.jackson.util.CharTypes.HEX_CHARS[(v6 & 15)]);
                }
            } else {
                p10.append(v0);
            }
            v4++;
        }
        return;
    }

    public static int charToHex(int p1)
    {
        int v0_2;
        if (p1 <= 127) {
            v0_2 = com.flurry.org.codehaus.jackson.util.CharTypes.sHexValues[p1];
        } else {
            v0_2 = -1;
        }
        return v0_2;
    }

    public static byte[] copyHexBytes()
    {
        return ((byte[]) ((byte[]) com.flurry.org.codehaus.jackson.util.CharTypes.HEX_BYTES.clone()));
    }

    public static char[] copyHexChars()
    {
        return ((char[]) ((char[]) com.flurry.org.codehaus.jackson.util.CharTypes.HEX_CHARS.clone()));
    }

    public static final int[] get7BitOutputEscapes()
    {
        return com.flurry.org.codehaus.jackson.util.CharTypes.sOutputEscapes128;
    }

    public static final int[] getInputCodeComment()
    {
        return com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodesComment;
    }

    public static final int[] getInputCodeLatin1()
    {
        return com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodes;
    }

    public static final int[] getInputCodeLatin1JsNames()
    {
        return com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodesJsNames;
    }

    public static final int[] getInputCodeUtf8()
    {
        return com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodesUtf8;
    }

    public static final int[] getInputCodeUtf8JsNames()
    {
        return com.flurry.org.codehaus.jackson.util.CharTypes.sInputCodesUtf8JsNames;
    }
}
