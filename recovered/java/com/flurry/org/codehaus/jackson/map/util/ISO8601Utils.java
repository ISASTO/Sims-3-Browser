package com.flurry.org.codehaus.jackson.map.util;
public class ISO8601Utils {
    private static final String GMT_ID = "GMT";
    private static final java.util.TimeZone TIMEZONE_GMT;

    static ISO8601Utils()
    {
        com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.TIMEZONE_GMT = java.util.TimeZone.getTimeZone("GMT");
        return;
    }

    public ISO8601Utils()
    {
        return;
    }

    private static void checkOffset(String p4, int p5, char p6)
    {
        char v0 = p4.charAt(p5);
        if (v0 == p6) {
            return;
        } else {
            throw new IndexOutOfBoundsException(new StringBuilder().append("Expected \'").append(p6).append("\' character but found \'").append(v0).append("\'").toString());
        }
    }

    public static String format(java.util.Date p2)
    {
        return com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.format(p2, 0, com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.TIMEZONE_GMT);
    }

    public static String format(java.util.Date p1, boolean p2)
    {
        return com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.format(p1, p2, com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.TIMEZONE_GMT);
    }

    public static String format(java.util.Date p12, boolean p13, java.util.TimeZone p14)
    {
        int v6_3;
        java.util.GregorianCalendar v0_1 = new java.util.GregorianCalendar(p14, java.util.Locale.US);
        v0_1.setTime(p12);
        int v1_2 = "yyyy-MM-ddThh:mm:ss".length();
        if (!p13) {
            v6_3 = 0;
        } else {
            v6_3 = ".sss".length();
        }
        int v6_10;
        int v1_0 = (v1_2 + v6_3);
        if (p14.getRawOffset() != 0) {
            v6_10 = "+hh:mm".length();
        } else {
            v6_10 = "Z".length();
        }
        StringBuilder v2_1 = new StringBuilder((v1_0 + v6_10));
        com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.padInt(v2_1, v0_1.get(1), "yyyy".length());
        v2_1.append(45);
        com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.padInt(v2_1, (v0_1.get(2) + 1), "MM".length());
        v2_1.append(45);
        com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.padInt(v2_1, v0_1.get(5), "dd".length());
        v2_1.append(84);
        com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.padInt(v2_1, v0_1.get(11), "hh".length());
        v2_1.append(58);
        com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.padInt(v2_1, v0_1.get(12), "mm".length());
        v2_1.append(58);
        com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.padInt(v2_1, v0_1.get(13), "ss".length());
        if (p13) {
            v2_1.append(46);
            com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.padInt(v2_1, v0_1.get(14), "sss".length());
        }
        int v5 = p14.getOffset(v0_1.getTimeInMillis());
        if (v5 == 0) {
            v2_1.append(90);
        } else {
            int v6_0;
            int v3 = Math.abs(((v5 / 60000) / 60));
            int v4 = Math.abs(((v5 / 60000) % 60));
            if (v5 >= 0) {
                v6_0 = 43;
            } else {
                v6_0 = 45;
            }
            v2_1.append(v6_0);
            com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.padInt(v2_1, v3, "hh".length());
            v2_1.append(58);
            com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.padInt(v2_1, v4, "mm".length());
        }
        return v2_1.toString();
    }

    private static void padInt(StringBuilder p3, int p4, int p5)
    {
        String v1 = Integer.toString(p4);
        int v0 = (p5 - v1.length());
        while (v0 > 0) {
            p3.append(48);
            v0--;
        }
        p3.append(v1);
        return;
    }

    public static java.util.Date parse(String p19)
    {
        int v10_0 = (0 + 4);
        try {
            int v9_5;
            int v15 = com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.parseInt(p19, 0, v10_0);
            com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.checkOffset(p19, v10_0, 45);
            int v9_7 = (v10_0 + 1);
            int v10_1 = (v9_7 + 2);
            int v8 = com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.parseInt(p19, v9_7, v10_1);
            com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.checkOffset(p19, v10_1, 45);
            int v9_1 = (v10_1 + 1);
            int v10_2 = (v9_1 + 2);
            int v3 = com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.parseInt(p19, v9_1, v10_2);
            com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.checkOffset(p19, v10_2, 84);
            int v9_2 = (v10_2 + 1);
            int v10_3 = (v9_2 + 2);
            int v5 = com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.parseInt(p19, v9_2, v10_3);
            com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.checkOffset(p19, v10_3, 58);
            int v9_3 = (v10_3 + 1);
            int v10_4 = (v9_3 + 2);
            int v7 = com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.parseInt(p19, v9_3, v10_4);
            com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.checkOffset(p19, v10_4, 58);
            int v9_4 = (v10_4 + 1);
            int v10_5 = (v9_4 + 2);
            int v11 = com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.parseInt(p19, v9_4, v10_5);
            int v6 = 0;
        } catch (IllegalArgumentException v4_2) {
            java.util.Date v16_20 = new IllegalArgumentException;
            v16_20(new StringBuilder().append("Failed to parse date ").append(p19).toString(), v4_2);
            throw v16_20;
        } catch (IllegalArgumentException v4_1) {
            java.util.Date v16_19 = new IllegalArgumentException;
            v16_19(new StringBuilder().append("Failed to parse date ").append(p19).toString(), v4_1);
            throw v16_19;
        } catch (IllegalArgumentException v4_0) {
            java.util.Date v16_18 = new IllegalArgumentException;
            v16_18(new StringBuilder().append("Failed to parse date ").append(p19).toString(), v4_0);
            throw v16_18;
        }
        if (p19.charAt(v10_5) != 46) {
            v9_5 = v10_5;
        } else {
            com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.checkOffset(p19, v10_5, 46);
            int v9_6 = (v10_5 + 1);
            int v10_6 = (v9_6 + 3);
            v6 = com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.parseInt(p19, v9_6, v10_6);
            v9_5 = v10_6;
        }
        try {
            String v13;
            char v14 = p19.charAt(v9_5);
        } catch (IllegalArgumentException v4_2) {
        } catch (IllegalArgumentException v4_1) {
        } catch (IllegalArgumentException v4_0) {
        }
        if ((v14 != 43) && (v14 != 45)) {
            if (v14 != 90) {
                throw new IndexOutOfBoundsException(new StringBuilder().append("Invalid time zone indicator ").append(v14).toString());
            } else {
                v13 = "GMT";
            }
        } else {
            v13 = new StringBuilder().append("GMT").append(p19.substring(v9_5)).toString();
        }
        java.util.TimeZone v12 = java.util.TimeZone.getTimeZone(v13);
        if (v12.getID().equals(v13)) {
            java.util.GregorianCalendar v2_1 = new java.util.GregorianCalendar(v12);
            v2_1.setLenient(0);
            v2_1.set(1, v15);
            v2_1.set(2, (v8 - 1));
            v2_1.set(5, v3);
            v2_1.set(11, v5);
            v2_1.set(12, v7);
            v2_1.set(13, v11);
            v2_1.set(14, v6);
            return v2_1.getTime();
        } else {
            throw new IndexOutOfBoundsException();
        }
    }

    private static int parseInt(String p7, int p8, int p9)
    {
        if ((p8 >= 0) && ((p9 <= p7.length()) && (p8 <= p9))) {
            int v2;
            int v3_0 = 0;
            if (p8 >= p9) {
                v2 = p8;
            } else {
                v2 = (p8 + 1);
                int v0_0 = Character.digit(p7.charAt(p8), 10);
                if (v0_0 >= 0) {
                    v3_0 = (- v0_0);
                } else {
                    throw new NumberFormatException(new StringBuilder().append("Invalid number: ").append(p7).toString());
                }
            }
            while (v2 < p9) {
                int v1_0 = (v2 + 1);
                int v0_1 = Character.digit(p7.charAt(v2), 10);
                if (v0_1 >= 0) {
                    v3_0 = ((v3_0 * 10) - v0_1);
                    v2 = v1_0;
                } else {
                    throw new NumberFormatException(new StringBuilder().append("Invalid number: ").append(p7).toString());
                }
            }
            return (- v3_0);
        } else {
            throw new NumberFormatException(p7);
        }
    }
}
