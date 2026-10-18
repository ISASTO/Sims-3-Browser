package com.flurry.android;
public abstract class AdNetworkView extends com.flurry.android.r {
    public static String sAdNetworkApiKey;
    public static String sAdNetworkApiKey2;
    public com.flurry.android.AdCreative fAdCreative;

    public AdNetworkView(android.content.Context p1, com.flurry.android.AdCreative p2)
    {
        super(p1);
        super.fAdCreative = p2;
        return;
    }

    AdNetworkView(android.content.Context p1, com.flurry.android.bo p2, com.flurry.android.bl p3, com.flurry.android.AdCreative p4)
    {
        super(p1, p2, p3);
        super.fAdCreative = p4;
        return;
    }

    public void onAdClicked(java.util.Map p2)
    {
        super.a("clicked", p2);
        return;
    }

    public void onAdClosed(java.util.Map p2)
    {
        super.a("adClosed", p2);
        return;
    }

    public void onAdFilled(java.util.Map p2)
    {
        super.a("filled", p2);
        return;
    }

    public void onAdShown(java.util.Map p2)
    {
        super.a("rendered", p2);
        return;
    }

    public void onAdUnFilled(java.util.Map p2)
    {
        super.a("unfilled", p2);
        return;
    }

    public bridge synthetic void stop()
    {
        super.stop();
        return;
    }
}
