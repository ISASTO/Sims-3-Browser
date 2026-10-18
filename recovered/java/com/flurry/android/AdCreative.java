package com.flurry.android;
public class AdCreative {
    public static final String kAlignmentBottom = "bottom";
    public static final String kAlignmentCenter = "center";
    public static final String kAlignmentLeft = "left";
    public static final String kAlignmentMiddle = "middle";
    public static final String kAlignmentRight = "right";
    public static final String kAlignmentTop = "top";
    public static final String kFixBoth = "both";
    public static final String kFixHeight = "height";
    public static final String kFixNone = "none";
    public static final String kFixWidth = "width";
    public static final String kFormatBanner = "banner";
    public static final String kFormatCustom = "custom";
    public static final String kFormatTakeover = "takeover";
    private int a;
    private int b;
    private String c;
    private String d;
    private String e;

    AdCreative(int p1, int p2, String p3, String p4, String p5)
    {
        this.a = p1;
        this.b = p2;
        this.c = p3;
        this.d = p4;
        this.e = p5;
        return;
    }

    public String getAlignment()
    {
        return this.e;
    }

    public String getFix()
    {
        return this.d;
    }

    public String getFormat()
    {
        return this.c;
    }

    public int getHeight()
    {
        return this.a;
    }

    public int getWidth()
    {
        return this.b;
    }
}
