package com.flurry.org.codehaus.jackson.map.util;
public class StdDateFormat extends java.text.DateFormat {
    protected static final String[] ALL_FORMATS = None;
    protected static final java.text.DateFormat DATE_FORMAT_ISO8601 = None;
    protected static final java.text.DateFormat DATE_FORMAT_ISO8601_Z = None;
    protected static final java.text.DateFormat DATE_FORMAT_PLAIN = None;
    protected static final java.text.DateFormat DATE_FORMAT_RFC1123 = None;
    protected static final String DATE_FORMAT_STR_ISO8601 = "yyyy-MM-dd'T'HH:mm:ss.SSSZ";
    protected static final String DATE_FORMAT_STR_ISO8601_Z = "yyyy-MM-dd'T'HH:mm:ss.SSS'Z'";
    protected static final String DATE_FORMAT_STR_PLAIN = "yyyy-MM-dd";
    protected static final String DATE_FORMAT_STR_RFC1123 = "EEE, dd MMM yyyy HH:mm:ss zzz";
    public static final com.flurry.org.codehaus.jackson.map.util.StdDateFormat instance;
    protected transient java.text.DateFormat _formatISO8601;
    protected transient java.text.DateFormat _formatISO8601_z;
    protected transient java.text.DateFormat _formatPlain;
    protected transient java.text.DateFormat _formatRFC1123;

    static StdDateFormat()
    {
        com.flurry.org.codehaus.jackson.map.util.StdDateFormat v1_1 = new String[4];
        v1_1[0] = "yyyy-MM-dd\'T\'HH:mm:ss.SSSZ";
        v1_1[1] = "yyyy-MM-dd\'T\'HH:mm:ss.SSS\'Z\'";
        v1_1[2] = "EEE, dd MMM yyyy HH:mm:ss zzz";
        v1_1[3] = "yyyy-MM-dd";
        com.flurry.org.codehaus.jackson.map.util.StdDateFormat.ALL_FORMATS = v1_1;
        java.util.TimeZone v0 = java.util.TimeZone.getTimeZone("GMT");
        com.flurry.org.codehaus.jackson.map.util.StdDateFormat.DATE_FORMAT_RFC1123 = new java.text.SimpleDateFormat("EEE, dd MMM yyyy HH:mm:ss zzz");
        com.flurry.org.codehaus.jackson.map.util.StdDateFormat.DATE_FORMAT_RFC1123.setTimeZone(v0);
        com.flurry.org.codehaus.jackson.map.util.StdDateFormat.DATE_FORMAT_ISO8601 = new java.text.SimpleDateFormat("yyyy-MM-dd\'T\'HH:mm:ss.SSSZ");
        com.flurry.org.codehaus.jackson.map.util.StdDateFormat.DATE_FORMAT_ISO8601.setTimeZone(v0);
        com.flurry.org.codehaus.jackson.map.util.StdDateFormat.DATE_FORMAT_ISO8601_Z = new java.text.SimpleDateFormat("yyyy-MM-dd\'T\'HH:mm:ss.SSS\'Z\'");
        com.flurry.org.codehaus.jackson.map.util.StdDateFormat.DATE_FORMAT_ISO8601_Z.setTimeZone(v0);
        com.flurry.org.codehaus.jackson.map.util.StdDateFormat.DATE_FORMAT_PLAIN = new java.text.SimpleDateFormat("yyyy-MM-dd");
        com.flurry.org.codehaus.jackson.map.util.StdDateFormat.DATE_FORMAT_PLAIN.setTimeZone(v0);
        com.flurry.org.codehaus.jackson.map.util.StdDateFormat.instance = new com.flurry.org.codehaus.jackson.map.util.StdDateFormat();
        return;
    }

    public StdDateFormat()
    {
        return;
    }

    public static java.text.DateFormat getBlueprintISO8601Format()
    {
        return com.flurry.org.codehaus.jackson.map.util.StdDateFormat.DATE_FORMAT_ISO8601;
    }

    public static java.text.DateFormat getBlueprintRFC1123Format()
    {
        return com.flurry.org.codehaus.jackson.map.util.StdDateFormat.DATE_FORMAT_RFC1123;
    }

    public static java.text.DateFormat getISO8601Format(java.util.TimeZone p2)
    {
        java.text.DateFormat v0_1 = ((java.text.DateFormat) com.flurry.org.codehaus.jackson.map.util.StdDateFormat.DATE_FORMAT_ISO8601.clone());
        v0_1.setTimeZone(p2);
        return v0_1;
    }

    public static java.text.DateFormat getRFC1123Format(java.util.TimeZone p2)
    {
        java.text.DateFormat v0_1 = ((java.text.DateFormat) com.flurry.org.codehaus.jackson.map.util.StdDateFormat.DATE_FORMAT_RFC1123.clone());
        v0_1.setTimeZone(p2);
        return v0_1;
    }

    private static final boolean hasTimeZone(String p6)
    {
        int v2 = 1;
        int v1 = p6.length();
        if (v1 < 6) {
            v2 = 0;
        } else {
            char v0_2 = p6.charAt((v1 - 6));
            if ((v0_2 != 43) && (v0_2 != 45)) {
                char v0_0 = p6.charAt((v1 - 5));
                if ((v0_0 != 43) && (v0_0 != 45)) {
                    char v0_1 = p6.charAt((v1 - 3));
                    if ((v0_1 != 43) && (v0_1 != 45)) {
                    }
                }
            }
        }
        return v2;
    }

    public com.flurry.org.codehaus.jackson.map.util.StdDateFormat clone()
    {
        return new com.flurry.org.codehaus.jackson.map.util.StdDateFormat();
    }

    public bridge synthetic Object clone()
    {
        return this.clone();
    }

    public StringBuffer format(java.util.Date p2, StringBuffer p3, java.text.FieldPosition p4)
    {
        if (this._formatISO8601 == null) {
            this._formatISO8601 = ((java.text.DateFormat) com.flurry.org.codehaus.jackson.map.util.StdDateFormat.DATE_FORMAT_ISO8601.clone());
        }
        return this._formatISO8601.format(p2, p3, p4);
    }

    protected boolean looksLikeISO8601(String p4)
    {
        int v0 = 0;
        if ((p4.length() >= 5) && ((Character.isDigit(p4.charAt(0))) && ((Character.isDigit(p4.charAt(3))) && (p4.charAt(4) == 45)))) {
            v0 = 1;
        }
        return v0;
    }

    public java.util.Date parse(String p13)
    {
        String v13_1 = p13.trim();
        java.text.ParsePosition v4_1 = new java.text.ParsePosition(0);
        java.util.Date v5 = this.parse(v13_1, v4_1);
        if (v5 == null) {
            StringBuilder v6_0 = new StringBuilder();
            String[] v0 = com.flurry.org.codehaus.jackson.map.util.StdDateFormat.ALL_FORMATS;
            int v3 = v0.length;
            int v2 = 0;
            while (v2 < v3) {
                String v1 = v0[v2];
                if (v6_0.length() <= 0) {
                    v6_0.append(34);
                } else {
                    v6_0.append("\", \"");
                }
                v6_0.append(v1);
                v2++;
            }
            v6_0.append(34);
            int v9_1 = new Object[2];
            v9_1[0] = v13_1;
            v9_1[1] = v6_0.toString();
            throw new java.text.ParseException(String.format("Can not parse date \"%s\": not compatible with any of standard forms (%s)", v9_1), v4_1.getErrorIndex());
        } else {
            return v5;
        }
    }

    public java.util.Date parse(String p6, java.text.ParsePosition p7)
    {
        java.util.Date v2_4;
        if (!this.looksLikeISO8601(p6)) {
            int v1 = p6.length();
            do {
                v1--;
                if (v1 < 0) {
                    break;
                }
                char v0 = p6.charAt(v1);
            } while((v0 >= 48) && (v0 <= 57));
            if ((v1 >= 0) || (!com.flurry.org.codehaus.jackson.io.NumberInput.inLongRange(p6, 0))) {
                v2_4 = this.parseAsRFC1123(p6, p7);
            } else {
                v2_4 = new java.util.Date(Long.parseLong(p6));
            }
        } else {
            v2_4 = this.parseAsISO8601(p6, p7);
        }
        return v2_4;
    }

    protected java.util.Date parseAsISO8601(String p9, java.text.ParsePosition p10)
    {
        java.text.DateFormat v1_0;
        int v2_0 = p9.length();
        char v0_1 = p9.charAt((v2_0 - 1));
        if ((v2_0 > 10) || (!Character.isDigit(v0_1))) {
            if (v0_1 != 90) {
                if (!com.flurry.org.codehaus.jackson.map.util.StdDateFormat.hasTimeZone(p9)) {
                    StringBuilder v3_1 = new StringBuilder(p9);
                    if (((v2_0 - p9.lastIndexOf(84)) - 1) <= 8) {
                        v3_1.append(".000");
                    }
                    v3_1.append(90);
                    p9 = v3_1.toString();
                    v1_0 = this._formatISO8601_z;
                    if (v1_0 == null) {
                        v1_0 = ((java.text.DateFormat) com.flurry.org.codehaus.jackson.map.util.StdDateFormat.DATE_FORMAT_ISO8601_Z.clone());
                        this._formatISO8601_z = v1_0;
                    }
                } else {
                    char v0_0 = p9.charAt((v2_0 - 3));
                    if (v0_0 != 58) {
                        if ((v0_0 == 43) || (v0_0 == 45)) {
                            p9 = new StringBuilder().append(p9).append("00").toString();
                        }
                    } else {
                        StringBuilder v3_3 = new StringBuilder(p9);
                        v3_3.delete((v2_0 - 3), (v2_0 - 2));
                        p9 = v3_3.toString();
                    }
                    int v2_1 = p9.length();
                    if (Character.isDigit(p9.charAt((v2_1 - 9)))) {
                        StringBuilder v3_5 = new StringBuilder(p9);
                        v3_5.insert((v2_1 - 5), ".000");
                        p9 = v3_5.toString();
                    }
                    v1_0 = this._formatISO8601;
                    if (this._formatISO8601 == null) {
                        v1_0 = ((java.text.DateFormat) com.flurry.org.codehaus.jackson.map.util.StdDateFormat.DATE_FORMAT_ISO8601.clone());
                        this._formatISO8601 = v1_0;
                    }
                }
            } else {
                v1_0 = this._formatISO8601_z;
                if (v1_0 == null) {
                    v1_0 = ((java.text.DateFormat) com.flurry.org.codehaus.jackson.map.util.StdDateFormat.DATE_FORMAT_ISO8601_Z.clone());
                    this._formatISO8601_z = v1_0;
                }
                if (p9.charAt((v2_0 - 4)) == 58) {
                    StringBuilder v3_7 = new StringBuilder(p9);
                    v3_7.insert((v2_0 - 1), ".000");
                    p9 = v3_7.toString();
                }
            }
        } else {
            v1_0 = this._formatPlain;
            if (v1_0 == null) {
                v1_0 = ((java.text.DateFormat) com.flurry.org.codehaus.jackson.map.util.StdDateFormat.DATE_FORMAT_PLAIN.clone());
                this._formatPlain = v1_0;
            }
        }
        return v1_0.parse(p9, p10);
    }

    protected java.util.Date parseAsRFC1123(String p2, java.text.ParsePosition p3)
    {
        if (this._formatRFC1123 == null) {
            this._formatRFC1123 = ((java.text.DateFormat) com.flurry.org.codehaus.jackson.map.util.StdDateFormat.DATE_FORMAT_RFC1123.clone());
        }
        return this._formatRFC1123.parse(p2, p3);
    }
}
