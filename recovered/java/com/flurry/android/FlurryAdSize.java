package com.flurry.android;
public final enum class FlurryAdSize extends java.lang.Enum {
    public static final enum com.flurry.android.FlurryAdSize BANNER_BOTTOM;
    public static final enum com.flurry.android.FlurryAdSize BANNER_TOP;
    public static final enum com.flurry.android.FlurryAdSize FULLSCREEN;
    private static final synthetic com.flurry.android.FlurryAdSize[] b;
    private int a;

    static FlurryAdSize()
    {
        com.flurry.android.FlurryAdSize.BANNER_TOP = new com.flurry.android.FlurryAdSize("BANNER_TOP", 0, 1);
        com.flurry.android.FlurryAdSize.BANNER_BOTTOM = new com.flurry.android.FlurryAdSize("BANNER_BOTTOM", 1, 2);
        com.flurry.android.FlurryAdSize.FULLSCREEN = new com.flurry.android.FlurryAdSize("FULLSCREEN", 2, 3);
        com.flurry.android.FlurryAdSize[] v0_3 = new com.flurry.android.FlurryAdSize[3];
        v0_3[0] = com.flurry.android.FlurryAdSize.BANNER_TOP;
        v0_3[1] = com.flurry.android.FlurryAdSize.BANNER_BOTTOM;
        v0_3[2] = com.flurry.android.FlurryAdSize.FULLSCREEN;
        com.flurry.android.FlurryAdSize.b = v0_3;
        return;
    }

    private FlurryAdSize(String p1, int p2, int p3)
    {
        super(p1, p2);
        super.a = p3;
        return;
    }

    public static com.flurry.android.FlurryAdSize valueOf(String p1)
    {
        return ((com.flurry.android.FlurryAdSize) Enum.valueOf(com.flurry.android.FlurryAdSize, p1));
    }

    public static com.flurry.android.FlurryAdSize[] values()
    {
        return ((com.flurry.android.FlurryAdSize[]) com.flurry.android.FlurryAdSize.b.clone());
    }

    final int a()
    {
        return this.a;
    }
}
