package com.flurry.android;
final class w implements com.jumptap.adtag.JtAdViewListener {
    private synthetic com.flurry.android.g a;

    w(com.flurry.android.g p1)
    {
        this.a = p1;
        return;
    }

    public final void onAdError(com.jumptap.adtag.JtAdView p3, int p4, int p5)
    {
        android.util.Log.d("FlurryAgent", "Jumptap AdView error.");
        return;
    }

    public final void onFocusChange(com.jumptap.adtag.JtAdView p3, int p4, boolean p5)
    {
        android.util.Log.d("FlurryAgent", "Jumptap AdView focus changed.");
        return;
    }

    public final void onInterstitialDismissed(com.jumptap.adtag.JtAdView p3, int p4)
    {
        this.a.onAdClosed(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Jumptap AdView dismissed.");
        return;
    }

    public final void onNewAd(com.jumptap.adtag.JtAdView p3, int p4, String p5)
    {
        this.a.onAdFilled(java.util.Collections.emptyMap());
        this.a.onAdShown(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Jumptap AdView new ad.");
        return;
    }

    public final void onNoAdFound(com.jumptap.adtag.JtAdView p3, int p4)
    {
        this.a.onAdUnFilled(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Jumptap AdView no ad found.");
        return;
    }
}
