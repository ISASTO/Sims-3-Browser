package com.flurry.org.codehaus.jackson.map.util;
public class ISO8601DateFormat extends java.text.DateFormat {
    private static java.util.Calendar CALENDAR = None;
    private static java.text.NumberFormat NUMBER_FORMAT = None;
    private static final long serialVersionUID = 1;

    static ISO8601DateFormat()
    {
        com.flurry.org.codehaus.jackson.map.util.ISO8601DateFormat.CALENDAR = new java.util.GregorianCalendar();
        com.flurry.org.codehaus.jackson.map.util.ISO8601DateFormat.NUMBER_FORMAT = new java.text.DecimalFormat();
        return;
    }

    public ISO8601DateFormat()
    {
        this.numberFormat = com.flurry.org.codehaus.jackson.map.util.ISO8601DateFormat.NUMBER_FORMAT;
        this.calendar = com.flurry.org.codehaus.jackson.map.util.ISO8601DateFormat.CALENDAR;
        return;
    }

    public Object clone()
    {
        return this;
    }

    public StringBuffer format(java.util.Date p2, StringBuffer p3, java.text.FieldPosition p4)
    {
        p3.append(com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.format(p2));
        return p3;
    }

    public java.util.Date parse(String p2, java.text.ParsePosition p3)
    {
        p3.setIndex(p2.length());
        return com.flurry.org.codehaus.jackson.map.util.ISO8601Utils.parse(p2);
    }
}
