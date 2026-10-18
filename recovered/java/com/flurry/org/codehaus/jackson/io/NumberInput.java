package com.flurry.org.codehaus.jackson.io;
public final class NumberInput {
    static final long L_BILLION = 1000000000;
    static final String MAX_LONG_STR = "";
    static final String MIN_LONG_STR_NO_SIGN = "";
    public static final String NASTY_SMALL_DOUBLE = "2.2250738585072012e-308";

    static NumberInput()
    {
        com.flurry.org.codehaus.jackson.io.NumberInput.MIN_LONG_STR_NO_SIGN = String.valueOf(-9223372036854775808).substring(1);
        com.flurry.org.codehaus.jackson.io.NumberInput.MAX_LONG_STR = String.valueOf(9223372036854775807);
        return;
    }

    public NumberInput()
    {
        return;
    }

    public static final boolean inLongRange(String p9, boolean p10)
    {
        String v2;
        int v5 = 1;
        if (!p10) {
            v2 = com.flurry.org.codehaus.jackson.io.NumberInput.MAX_LONG_STR;
        } else {
            v2 = com.flurry.org.codehaus.jackson.io.NumberInput.MIN_LONG_STR_NO_SIGN;
        }
        int v1 = v2.length();
        int v0 = p9.length();
        if (v0 >= v1) {
            if (v0 <= v1) {
                int v4 = 0;
                while (v4 < v1) {
                    int v3 = (p9.charAt(v4) - v2.charAt(v4));
                    if (v3 == 0) {
                        v4++;
                    } else {
                        if (v3 < 0) {
                            break;
                        }
                        v5 = 0;
                        break;
                    }
                }
            } else {
                v5 = 0;
            }
        }
        return v5;
    }

    public static final boolean inLongRange(char[] p8, int p9, int p10, boolean p11)
    {
        String v1;
        int v4 = 1;
        if (!p11) {
            v1 = com.flurry.org.codehaus.jackson.io.NumberInput.MAX_LONG_STR;
        } else {
            v1 = com.flurry.org.codehaus.jackson.io.NumberInput.MIN_LONG_STR_NO_SIGN;
        }
        int v0 = v1.length();
        if (p10 >= v0) {
            if (p10 <= v0) {
                int v3 = 0;
                while (v3 < v0) {
                    int v2 = (p8[(p9 + v3)] - v1.charAt(v3));
                    if (v2 == 0) {
                        v3++;
                    } else {
                        if (v2 < 0) {
                            break;
                        }
                        v4 = 0;
                        break;
                    }
                }
            } else {
                v4 = 0;
            }
        }
        return v4;
    }

    public static double parseAsDouble(String p2, double p3)
    {
        if (p2 != null) {
            String v2_1 = p2.trim();
            if (v2_1.length() != 0) {
                try {
                    p3 = com.flurry.org.codehaus.jackson.io.NumberInput.parseDouble(v2_1);
                } catch (NumberFormatException v1) {
                }
            }
        }
        return p3;
    }

    public static int parseAsInt(String p6, int p7)
    {
        if (p6 != null) {
            String v6_1 = p6.trim();
            int v3 = v6_1.length();
            if (v3 != 0) {
                int v2 = 0;
                if (0 < v3) {
                    char v0_0 = v6_1.charAt(0);
                    if (v0_0 != 43) {
                        if (v0_0 == 45) {
                            v2 = (0 + 1);
                        }
                    } else {
                        v6_1 = v6_1.substring(1);
                        v3 = v6_1.length();
                    }
                }
                while (v2 < v3) {
                    char v0_1 = v6_1.charAt(v2);
                    if ((v0_1 <= 57) && (v0_1 >= 48)) {
                        v2++;
                    } else {
                        try {
                            p7 = ((int) com.flurry.org.codehaus.jackson.io.NumberInput.parseDouble(v6_1));
                        } catch (NumberFormatException v1) {
                        }
                    }
                }
                try {
                    p7 = Integer.parseInt(v6_1);
                } catch (NumberFormatException v4) {
                }
            }
        }
        return p7;
    }

    public static long parseAsLong(String p6, long p7)
    {
        if (p6 != null) {
            String v6_1 = p6.trim();
            int v3 = v6_1.length();
            if (v3 != 0) {
                int v2 = 0;
                if (0 < v3) {
                    char v0_0 = v6_1.charAt(0);
                    if (v0_0 != 43) {
                        if (v0_0 == 45) {
                            v2 = (0 + 1);
                        }
                    } else {
                        v6_1 = v6_1.substring(1);
                        v3 = v6_1.length();
                    }
                }
                while (v2 < v3) {
                    char v0_1 = v6_1.charAt(v2);
                    if ((v0_1 <= 57) && (v0_1 >= 48)) {
                        v2++;
                    } else {
                        try {
                            p7 = ((long) com.flurry.org.codehaus.jackson.io.NumberInput.parseDouble(v6_1));
                        } catch (NumberFormatException v1) {
                        }
                    }
                }
                try {
                    p7 = Long.parseLong(v6_1);
                } catch (NumberFormatException v4) {
                }
            }
        }
        return p7;
    }

    public static final double parseDouble(String p2)
    {
        double v0_2;
        if (!"2.2250738585072012e-308".equals(p2)) {
            v0_2 = Double.parseDouble(p2);
        } else {
            v0_2 = 4503599627370496;
        }
        return v0_2;
    }

    public static final int parseInt(String p10)
    {
        int v2 = 0;
        char v0_0 = p10.charAt(0);
        int v1 = p10.length();
        if (v0_0 == 45) {
            v2 = 1;
        }
        int v5;
        int v3;
        if (v2 == 0) {
            if (v1 <= 9) {
                v5 = 1;
                if ((v0_0 <= 57) && (v0_0 >= 48)) {
                    v3 = (v0_0 - 48);
                    if (v5 < v1) {
                        int v4_1 = (v5 + 1);
                        char v0_1 = p10.charAt(v5);
                        if ((v0_1 <= 57) && (v0_1 >= 48)) {
                            v3 = ((v3 * 10) + (v0_1 - 48));
                            if (v4_1 < v1) {
                                v5 = (v4_1 + 1);
                                char v0_2 = p10.charAt(v4_1);
                                if ((v0_2 <= 57) && (v0_2 >= 48)) {
                                    v3 = ((v3 * 10) + (v0_2 - 48));
                                    if (v5 >= v1) {
                                        if (v2 != 0) {
                                            v3 = (- v3);
                                        }
                                        return v3;
                                    }
                                    do {
                                        int v4_2 = v5;
                                        v5 = (v4_2 + 1);
                                        char v0_3 = p10.charAt(v4_2);
                                        if ((v0_3 <= 57) && (v0_3 >= 48)) {
                                            v3 = ((v3 * 10) + (v0_3 - 48));
                                        } else {
                                            v3 = Integer.parseInt(p10);
                                            return v3;
                                        }
                                    } while(v5 < v1);
                                } else {
                                    v3 = Integer.parseInt(p10);
                                    return v3;
                                }
                            }
                        } else {
                            v3 = Integer.parseInt(p10);
                            return v3;
                        }
                    }
                } else {
                    v3 = Integer.parseInt(p10);
                }
            } else {
                v3 = Integer.parseInt(p10);
            }
        } else {
            if ((v1 != 1) && (v1 <= 10)) {
                v5 = (1 + 1);
                v0_0 = p10.charAt(1);
            } else {
                v3 = Integer.parseInt(p10);
            }
        }
        return v3;
    }

    public static final int parseInt(char[] p3, int p4, int p5)
    {
        int v0 = (p3[p4] - 48);
        int v5_1 = (p5 + p4);
        int v4_4 = (p4 + 1);
        if (v4_4 < v5_1) {
            v0 = ((v0 * 10) + (p3[v4_4] - 48));
            int v4_8 = (v4_4 + 1);
            if (v4_8 < v5_1) {
                v0 = ((v0 * 10) + (p3[v4_8] - 48));
                int v4_1 = (v4_8 + 1);
                if (v4_1 < v5_1) {
                    v0 = ((v0 * 10) + (p3[v4_1] - 48));
                    int v4_2 = (v4_1 + 1);
                    if (v4_2 < v5_1) {
                        v0 = ((v0 * 10) + (p3[v4_2] - 48));
                        int v4_3 = (v4_2 + 1);
                        if (v4_3 < v5_1) {
                            v0 = ((v0 * 10) + (p3[v4_3] - 48));
                            int v4_5 = (v4_3 + 1);
                            if (v4_5 < v5_1) {
                                v0 = ((v0 * 10) + (p3[v4_5] - 48));
                                int v4_6 = (v4_5 + 1);
                                if (v4_6 < v5_1) {
                                    v0 = ((v0 * 10) + (p3[v4_6] - 48));
                                    int v4_7 = (v4_6 + 1);
                                    if (v4_7 < v5_1) {
                                        v0 = ((v0 * 10) + (p3[v4_7] - 48));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return v0;
    }

    public static final long parseLong(String p3)
    {
        long v1_1;
        if (p3.length() > 9) {
            v1_1 = Long.parseLong(p3);
        } else {
            v1_1 = ((long) com.flurry.org.codehaus.jackson.io.NumberInput.parseInt(p3));
        }
        return v1_1;
    }

    public static final long parseLong(char[] p7, int p8, int p9)
    {
        int v0 = (p9 - 9);
        return (((long) com.flurry.org.codehaus.jackson.io.NumberInput.parseInt(p7, (p8 + v0), 9)) + (((long) com.flurry.org.codehaus.jackson.io.NumberInput.parseInt(p7, p8, v0)) * 1000000000));
    }
}
