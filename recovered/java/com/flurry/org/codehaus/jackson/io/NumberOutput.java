package com.flurry.org.codehaus.jackson.io;
public final class NumberOutput {
    private static int BILLION;
    static final char[] FULL_TRIPLETS;
    static final byte[] FULL_TRIPLETS_B;
    static final char[] LEADING_TRIPLETS;
    private static long MAX_INT_AS_LONG;
    private static int MILLION;
    private static long MIN_INT_AS_LONG;
    private static final char NULL_CHAR;
    static final String SMALLEST_LONG;
    private static long TEN_BILLION_L;
    private static long THOUSAND_L;
    static final String[] sSmallIntStrs;
    static final String[] sSmallIntStrs2;

    static NumberOutput()
    {
        com.flurry.org.codehaus.jackson.io.NumberOutput.MILLION = 1000000;
        com.flurry.org.codehaus.jackson.io.NumberOutput.BILLION = 1000000000;
        com.flurry.org.codehaus.jackson.io.NumberOutput.TEN_BILLION_L = 10000000000;
        com.flurry.org.codehaus.jackson.io.NumberOutput.THOUSAND_L = 1000;
        com.flurry.org.codehaus.jackson.io.NumberOutput.MIN_INT_AS_LONG = -2147483648;
        com.flurry.org.codehaus.jackson.io.NumberOutput.MAX_INT_AS_LONG = 2147483647;
        com.flurry.org.codehaus.jackson.io.NumberOutput.SMALLEST_LONG = String.valueOf(-9223372036854775808);
        char[] v10_17 = new char[4000];
        com.flurry.org.codehaus.jackson.io.NumberOutput.LEADING_TRIPLETS = v10_17;
        char[] v10_20 = new char[4000];
        com.flurry.org.codehaus.jackson.io.NumberOutput.FULL_TRIPLETS = v10_20;
        int v7 = 0;
        int v4 = 0;
        while (v4 < 10) {
            char v8;
            char v0 = ((char) (v4 + 48));
            if (v4 != 0) {
                v8 = v0;
            } else {
                v8 = 0;
            }
            int v5 = 0;
            while (v5 < 10) {
                int v9;
                char v1 = ((char) (v5 + 48));
                if ((v4 != 0) || (v5 != 0)) {
                    v9 = v1;
                } else {
                    v9 = 0;
                }
                int v6 = 0;
                while (v6 < 10) {
                    char v2 = ((char) (v6 + 48));
                    com.flurry.org.codehaus.jackson.io.NumberOutput.LEADING_TRIPLETS[v7] = v8;
                    com.flurry.org.codehaus.jackson.io.NumberOutput.LEADING_TRIPLETS[(v7 + 1)] = v9;
                    com.flurry.org.codehaus.jackson.io.NumberOutput.LEADING_TRIPLETS[(v7 + 2)] = v2;
                    com.flurry.org.codehaus.jackson.io.NumberOutput.FULL_TRIPLETS[v7] = v0;
                    com.flurry.org.codehaus.jackson.io.NumberOutput.FULL_TRIPLETS[(v7 + 1)] = v1;
                    com.flurry.org.codehaus.jackson.io.NumberOutput.FULL_TRIPLETS[(v7 + 2)] = v2;
                    v7 += 4;
                    v6++;
                }
                v5++;
            }
            v4++;
        }
        char[] v10_23 = new byte[4000];
        com.flurry.org.codehaus.jackson.io.NumberOutput.FULL_TRIPLETS_B = v10_23;
        int v3 = 0;
        while (v3 < 4000) {
            com.flurry.org.codehaus.jackson.io.NumberOutput.FULL_TRIPLETS_B[v3] = ((byte) com.flurry.org.codehaus.jackson.io.NumberOutput.FULL_TRIPLETS[v3]);
            v3++;
        }
        char[] v10_26 = new String[11];
        v10_26[0] = "0";
        v10_26[1] = "1";
        v10_26[2] = "2";
        v10_26[3] = "3";
        v10_26[4] = "4";
        v10_26[5] = "5";
        v10_26[6] = "6";
        v10_26[7] = "7";
        v10_26[8] = "8";
        v10_26[9] = "9";
        v10_26[10] = "10";
        com.flurry.org.codehaus.jackson.io.NumberOutput.sSmallIntStrs = v10_26;
        char[] v10_30 = new String[10];
        v10_30[0] = "-1";
        v10_30[1] = "-2";
        v10_30[2] = "-3";
        v10_30[3] = "-4";
        v10_30[4] = "-5";
        v10_30[5] = "-6";
        v10_30[6] = "-7";
        v10_30[7] = "-8";
        v10_30[8] = "-9";
        v10_30[9] = "-10";
        com.flurry.org.codehaus.jackson.io.NumberOutput.sSmallIntStrs2 = v10_30;
        return;
    }

    public NumberOutput()
    {
        return;
    }

    private static int calcLongStrLength(long p7)
    {
        int v2 = 10;
        long v0 = com.flurry.org.codehaus.jackson.io.NumberOutput.TEN_BILLION_L;
        while ((p7 >= v0) && (v2 != 19)) {
            v2++;
            v0 = ((v0 << 3) + (v0 << 1));
        }
        return v2;
    }

    private static int outputFullTriplet(int p4, byte[] p5, int p6)
    {
        int v0_0 = (p4 << 2);
        int v2_0 = (p6 + 1);
        int v1 = (v0_0 + 1);
        p5[p6] = com.flurry.org.codehaus.jackson.io.NumberOutput.FULL_TRIPLETS_B[v0_0];
        int v6_1 = (v2_0 + 1);
        int v0_1 = (v1 + 1);
        p5[v2_0] = com.flurry.org.codehaus.jackson.io.NumberOutput.FULL_TRIPLETS_B[v1];
        int v2_1 = (v6_1 + 1);
        p5[v6_1] = com.flurry.org.codehaus.jackson.io.NumberOutput.FULL_TRIPLETS_B[v0_1];
        return v2_1;
    }

    private static int outputFullTriplet(int p4, char[] p5, int p6)
    {
        int v0_0 = (p4 << 2);
        int v2_0 = (p6 + 1);
        int v1 = (v0_0 + 1);
        p5[p6] = com.flurry.org.codehaus.jackson.io.NumberOutput.FULL_TRIPLETS[v0_0];
        int v6_1 = (v2_0 + 1);
        int v0_1 = (v1 + 1);
        p5[v2_0] = com.flurry.org.codehaus.jackson.io.NumberOutput.FULL_TRIPLETS[v1];
        int v2_1 = (v6_1 + 1);
        p5[v6_1] = com.flurry.org.codehaus.jackson.io.NumberOutput.FULL_TRIPLETS[v0_1];
        return v2_1;
    }

    public static int outputInt(int p7, byte[] p8, int p9)
    {
        int v5_10;
        if (p7 >= 0) {
            if (p7 >= com.flurry.org.codehaus.jackson.io.NumberOutput.MILLION) {
                int v0;
                if (p7 < com.flurry.org.codehaus.jackson.io.NumberOutput.BILLION) {
                    v0 = 0;
                } else {
                    v0 = 1;
                }
                if (v0 != 0) {
                    p7 -= com.flurry.org.codehaus.jackson.io.NumberOutput.BILLION;
                    if (p7 < com.flurry.org.codehaus.jackson.io.NumberOutput.BILLION) {
                        int v2_0 = (p9 + 1);
                        p8[p9] = 49;
                        p9 = v2_0;
                    } else {
                        p7 -= com.flurry.org.codehaus.jackson.io.NumberOutput.BILLION;
                        int v2_1 = (p9 + 1);
                        p8[p9] = 50;
                        p9 = v2_1;
                    }
                }
                int v9_1;
                int v1_0 = (p7 / 1000);
                int v3 = (p7 - (v1_0 * 1000));
                int v1_1 = (v1_0 / 1000);
                int v4_0 = (v1_0 - (v1_1 * 1000));
                if (v0 == 0) {
                    v9_1 = com.flurry.org.codehaus.jackson.io.NumberOutput.outputLeadingTriplet(v1_1, p8, p9);
                } else {
                    v9_1 = com.flurry.org.codehaus.jackson.io.NumberOutput.outputFullTriplet(v1_1, p8, p9);
                }
                v5_10 = com.flurry.org.codehaus.jackson.io.NumberOutput.outputFullTriplet(v3, p8, com.flurry.org.codehaus.jackson.io.NumberOutput.outputFullTriplet(v4_0, p8, v9_1));
            } else {
                int v9_5;
                if (p7 >= 1000) {
                    int v4_1 = (p7 / 1000);
                    v9_5 = com.flurry.org.codehaus.jackson.io.NumberOutput.outputFullTriplet((p7 - (v4_1 * 1000)), p8, com.flurry.org.codehaus.jackson.io.NumberOutput.outputLeadingTriplet(v4_1, p8, p9));
                } else {
                    if (p7 >= 10) {
                        v9_5 = com.flurry.org.codehaus.jackson.io.NumberOutput.outputLeadingTriplet(p7, p8, p9);
                    } else {
                        int v2_3 = (p9 + 1);
                        p8[p9] = ((byte) (p7 + 48));
                        v9_5 = v2_3;
                    }
                }
                v5_10 = v9_5;
            }
        } else {
            if (p7 != -2147483648) {
                int v2_2 = (p9 + 1);
                p8[p9] = 45;
                p7 = (- p7);
                p9 = v2_2;
            } else {
                v5_10 = com.flurry.org.codehaus.jackson.io.NumberOutput.outputLong(((long) p7), p8, p9);
            }
        }
        return v5_10;
    }

    public static int outputInt(int p7, char[] p8, int p9)
    {
        int v5_10;
        if (p7 >= 0) {
            if (p7 >= com.flurry.org.codehaus.jackson.io.NumberOutput.MILLION) {
                int v0;
                if (p7 < com.flurry.org.codehaus.jackson.io.NumberOutput.BILLION) {
                    v0 = 0;
                } else {
                    v0 = 1;
                }
                if (v0 != 0) {
                    p7 -= com.flurry.org.codehaus.jackson.io.NumberOutput.BILLION;
                    if (p7 < com.flurry.org.codehaus.jackson.io.NumberOutput.BILLION) {
                        int v2_0 = (p9 + 1);
                        p8[p9] = 49;
                        p9 = v2_0;
                    } else {
                        p7 -= com.flurry.org.codehaus.jackson.io.NumberOutput.BILLION;
                        int v2_1 = (p9 + 1);
                        p8[p9] = 50;
                        p9 = v2_1;
                    }
                }
                int v9_1;
                int v1_0 = (p7 / 1000);
                int v3 = (p7 - (v1_0 * 1000));
                int v1_1 = (v1_0 / 1000);
                int v4_0 = (v1_0 - (v1_1 * 1000));
                if (v0 == 0) {
                    v9_1 = com.flurry.org.codehaus.jackson.io.NumberOutput.outputLeadingTriplet(v1_1, p8, p9);
                } else {
                    v9_1 = com.flurry.org.codehaus.jackson.io.NumberOutput.outputFullTriplet(v1_1, p8, p9);
                }
                v5_10 = com.flurry.org.codehaus.jackson.io.NumberOutput.outputFullTriplet(v3, p8, com.flurry.org.codehaus.jackson.io.NumberOutput.outputFullTriplet(v4_0, p8, v9_1));
            } else {
                int v9_5;
                if (p7 >= 1000) {
                    int v4_1 = (p7 / 1000);
                    v9_5 = com.flurry.org.codehaus.jackson.io.NumberOutput.outputFullTriplet((p7 - (v4_1 * 1000)), p8, com.flurry.org.codehaus.jackson.io.NumberOutput.outputLeadingTriplet(v4_1, p8, p9));
                } else {
                    if (p7 >= 10) {
                        v9_5 = com.flurry.org.codehaus.jackson.io.NumberOutput.outputLeadingTriplet(p7, p8, p9);
                    } else {
                        int v2_3 = (p9 + 1);
                        p8[p9] = ((char) (p7 + 48));
                        v9_5 = v2_3;
                    }
                }
                v5_10 = v9_5;
            }
        } else {
            if (p7 != -2147483648) {
                int v2_2 = (p9 + 1);
                p8[p9] = 45;
                p7 = (- p7);
                p9 = v2_2;
            } else {
                v5_10 = com.flurry.org.codehaus.jackson.io.NumberOutput.outputLong(((long) p7), p8, p9);
            }
        }
        return v5_10;
    }

    private static int outputLeadingTriplet(int p5, byte[] p6, int p7)
    {
        int v1_0 = (p5 << 2);
        int v2 = (v1_0 + 1);
        char v0_1 = com.flurry.org.codehaus.jackson.io.NumberOutput.LEADING_TRIPLETS[v1_0];
        if (v0_1 != 0) {
            int v3_2 = (p7 + 1);
            p6[p7] = ((byte) v0_1);
            p7 = v3_2;
        }
        int v1_1 = (v2 + 1);
        char v0_0 = com.flurry.org.codehaus.jackson.io.NumberOutput.LEADING_TRIPLETS[v2];
        if (v0_0 != 0) {
            int v3_0 = (p7 + 1);
            p6[p7] = ((byte) v0_0);
            p7 = v3_0;
        }
        int v3_1 = (p7 + 1);
        p6[p7] = ((byte) com.flurry.org.codehaus.jackson.io.NumberOutput.LEADING_TRIPLETS[v1_1]);
        return v3_1;
    }

    private static int outputLeadingTriplet(int p5, char[] p6, int p7)
    {
        int v1_0 = (p5 << 2);
        int v2 = (v1_0 + 1);
        char v0_1 = com.flurry.org.codehaus.jackson.io.NumberOutput.LEADING_TRIPLETS[v1_0];
        if (v0_1 != 0) {
            int v3_2 = (p7 + 1);
            p6[p7] = v0_1;
            p7 = v3_2;
        }
        int v1_1 = (v2 + 1);
        char v0_0 = com.flurry.org.codehaus.jackson.io.NumberOutput.LEADING_TRIPLETS[v2];
        if (v0_0 != 0) {
            int v3_0 = (p7 + 1);
            p6[p7] = v0_0;
            p7 = v3_0;
        }
        int v3_1 = (p7 + 1);
        p6[p7] = com.flurry.org.codehaus.jackson.io.NumberOutput.LEADING_TRIPLETS[v1_1];
        return v3_1;
    }

    public static int outputLong(long p11, byte[] p13, int p14)
    {
        int v5_1;
        if (p11 >= 0) {
            if (p11 > com.flurry.org.codehaus.jackson.io.NumberOutput.MAX_INT_AS_LONG) {
                int v14_1 = (p14 + com.flurry.org.codehaus.jackson.io.NumberOutput.calcLongStrLength(p11));
                int v7 = v14_1;
                while (p11 > com.flurry.org.codehaus.jackson.io.NumberOutput.MAX_INT_AS_LONG) {
                    v7 -= 3;
                    int v3_1 = (p11 / com.flurry.org.codehaus.jackson.io.NumberOutput.THOUSAND_L);
                    com.flurry.org.codehaus.jackson.io.NumberOutput.outputFullTriplet(((int) (p11 - (com.flurry.org.codehaus.jackson.io.NumberOutput.THOUSAND_L * v3_1))), p13, v7);
                    p11 = v3_1;
                }
                int v1 = ((int) p11);
                while (v1 >= 1000) {
                    v7 -= 3;
                    int v3_0 = (v1 / 1000);
                    com.flurry.org.codehaus.jackson.io.NumberOutput.outputFullTriplet((v1 - (v3_0 * 1000)), p13, v7);
                    v1 = v3_0;
                }
                com.flurry.org.codehaus.jackson.io.NumberOutput.outputLeadingTriplet(v1, p13, p14);
                v5_1 = v14_1;
            } else {
                v5_1 = com.flurry.org.codehaus.jackson.io.NumberOutput.outputInt(((int) p11), p13, p14);
            }
        } else {
            if (p11 <= com.flurry.org.codehaus.jackson.io.NumberOutput.MIN_INT_AS_LONG) {
                if (p11 != -9223372036854775808) {
                    int v5_0 = (p14 + 1);
                    p13[p14] = 45;
                    p11 = (- p11);
                    p14 = v5_0;
                } else {
                    int v2 = com.flurry.org.codehaus.jackson.io.NumberOutput.SMALLEST_LONG.length();
                    int v0 = 0;
                    v5_1 = p14;
                    while (v0 < v2) {
                        int v14_2 = (v5_1 + 1);
                        p13[v5_1] = ((byte) com.flurry.org.codehaus.jackson.io.NumberOutput.SMALLEST_LONG.charAt(v0));
                        v0++;
                        v5_1 = v14_2;
                    }
                }
            } else {
                v5_1 = com.flurry.org.codehaus.jackson.io.NumberOutput.outputInt(((int) p11), p13, p14);
            }
        }
        return v5_1;
    }

    public static int outputLong(long p10, char[] p12, int p13)
    {
        int v8_11;
        if (p10 >= 0) {
            if (p10 > com.flurry.org.codehaus.jackson.io.NumberOutput.MAX_INT_AS_LONG) {
                int v13_1 = (p13 + com.flurry.org.codehaus.jackson.io.NumberOutput.calcLongStrLength(p10));
                int v6 = v13_1;
                while (p10 > com.flurry.org.codehaus.jackson.io.NumberOutput.MAX_INT_AS_LONG) {
                    v6 -= 3;
                    int v2_1 = (p10 / com.flurry.org.codehaus.jackson.io.NumberOutput.THOUSAND_L);
                    com.flurry.org.codehaus.jackson.io.NumberOutput.outputFullTriplet(((int) (p10 - (com.flurry.org.codehaus.jackson.io.NumberOutput.THOUSAND_L * v2_1))), p12, v6);
                    p10 = v2_1;
                }
                int v0 = ((int) p10);
                while (v0 >= 1000) {
                    v6 -= 3;
                    int v2_0 = (v0 / 1000);
                    com.flurry.org.codehaus.jackson.io.NumberOutput.outputFullTriplet((v0 - (v2_0 * 1000)), p12, v6);
                    v0 = v2_0;
                }
                com.flurry.org.codehaus.jackson.io.NumberOutput.outputLeadingTriplet(v0, p12, p13);
                v8_11 = v13_1;
            } else {
                v8_11 = com.flurry.org.codehaus.jackson.io.NumberOutput.outputInt(((int) p10), p12, p13);
            }
        } else {
            if (p10 <= com.flurry.org.codehaus.jackson.io.NumberOutput.MIN_INT_AS_LONG) {
                if (p10 != -9223372036854775808) {
                    int v4 = (p13 + 1);
                    p12[p13] = 45;
                    p10 = (- p10);
                    p13 = v4;
                } else {
                    int v1 = com.flurry.org.codehaus.jackson.io.NumberOutput.SMALLEST_LONG.length();
                    com.flurry.org.codehaus.jackson.io.NumberOutput.SMALLEST_LONG.getChars(0, v1, p12, p13);
                    v8_11 = (p13 + v1);
                }
            } else {
                v8_11 = com.flurry.org.codehaus.jackson.io.NumberOutput.outputInt(((int) p10), p12, p13);
            }
        }
        return v8_11;
    }

    public static String toString(double p1)
    {
        return Double.toString(p1);
    }

    public static String toString(int p2)
    {
        String v1_2;
        if (p2 >= com.flurry.org.codehaus.jackson.io.NumberOutput.sSmallIntStrs.length) {
            v1_2 = Integer.toString(p2);
        } else {
            if (p2 < 0) {
                int v0 = ((- p2) - 1);
                if (v0 >= com.flurry.org.codehaus.jackson.io.NumberOutput.sSmallIntStrs2.length) {
                } else {
                    v1_2 = com.flurry.org.codehaus.jackson.io.NumberOutput.sSmallIntStrs2[v0];
                }
            } else {
                v1_2 = com.flurry.org.codehaus.jackson.io.NumberOutput.sSmallIntStrs[p2];
            }
        }
        return v1_2;
    }

    public static String toString(long p2)
    {
        if ((p2 > 2147483647) || (p2 < -2147483648)) {
            String v0_2 = Long.toString(p2);
        } else {
            v0_2 = com.flurry.org.codehaus.jackson.io.NumberOutput.toString(((int) p2));
        }
        return v0_2;
    }
}
