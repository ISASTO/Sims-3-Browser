package com.flurry.android;
public final enum class FlurryAdType extends java.lang.Enum {
    public static final enum com.flurry.android.FlurryAdType VIDEO_TAKEOVER;
    public static final enum com.flurry.android.FlurryAdType WEB_BANNER;
    public static final enum com.flurry.android.FlurryAdType WEB_TAKEOVER;
    private static final synthetic com.flurry.android.FlurryAdType[] a;

    static FlurryAdType()
    {
        com.flurry.android.FlurryAdType.WEB_BANNER = new com.flurry.android.FlurryAdType("WEB_BANNER", 0);
        com.flurry.android.FlurryAdType.WEB_TAKEOVER = new com.flurry.android.FlurryAdType("WEB_TAKEOVER", 1);
        com.flurry.android.FlurryAdType.VIDEO_TAKEOVER = new com.flurry.android.FlurryAdType("VIDEO_TAKEOVER", 2);
        com.flurry.android.FlurryAdType[] v0_3 = new com.flurry.android.FlurryAdType[3];
        v0_3[0] = com.flurry.android.FlurryAdType.WEB_BANNER;
        v0_3[1] = com.flurry.android.FlurryAdType.WEB_TAKEOVER;
        v0_3[2] = com.flurry.android.FlurryAdType.VIDEO_TAKEOVER;
        com.flurry.android.FlurryAdType.a = v0_3;
        return;
    }

    private FlurryAdType(String p1, int p2)
    {
        super(p1, p2);
        return;
    }

    public static com.flurry.android.FlurryAdType valueOf(String p1)
    {
        return ((com.flurry.android.FlurryAdType) Enum.valueOf(com.flurry.android.FlurryAdType, p1));
    }

    public static com.flurry.android.FlurryAdType[] values()
    {
        return ((com.flurry.android.FlurryAdType[]) com.flurry.android.FlurryAdType.a.clone());
    }
}
