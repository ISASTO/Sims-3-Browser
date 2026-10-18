package com.flurry.android;
final class aw implements com.jumptap.adtag.JtAdViewListener {
    private synthetic com.flurry.android.g a;

    aw(com.flurry.android.g p1)
    {
        this.a = p1;
        return;
    }

    public final void onAdError(com.jumptap.adtag.JtAdView p3, int p4, int p5)
    {
        android.util.Log.d("FlurryAgent", "Jumptap Interstitial error.");
        return;
    }

    public final void onFocusChange(com.jumptap.adtag.JtAdView p3, int p4, boolean p5)
    {
        android.util.Log.d("FlurryAgent", "Jumptap Interstitial focus changed.");
        return;
    }

    public final void onInterstitialDismissed(com.jumptap.adtag.JtAdView p3, int p4)
    {
        this.a.onAdClosed(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Jumptap Interstitial dismissed.");
        return;
    }

    public final void onNewAd(com.jumptap.adtag.JtAdView p3, int p4, String p5)
    {
        this.a.onAdFilled(java.util.Collections.emptyMap());
        this.a.onAdShown(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Jumptap Interstitial new ad.");
        return;
    }

    public final void onNoAdFound(com.jumptap.adtag.JtAdView p3, int p4)
    {
        this.a.onAdUnFilled(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Jumptap Interstitial no ad found.");
        return;
    }
}
