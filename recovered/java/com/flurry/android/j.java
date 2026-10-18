package com.flurry.android;
final class j implements com.google.ads.AdListener {
    private synthetic com.flurry.android.ab a;

    j(com.flurry.android.ab p1)
    {
        this.a = p1;
        return;
    }

    public final void onDismissScreen(com.google.ads.Ad p3)
    {
        this.a.onAdClosed(java.util.Collections.emptyMap());
        android.util.Log.i("FlurryAgent", "Admob Interstitial dismissed from screen.");
        return;
    }

    public final void onFailedToReceiveAd(com.google.ads.Ad p3, com.google.ads.AdRequest$ErrorCode p4)
    {
        this.a.onAdUnFilled(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Admob Interstitial failed to receive takeover.");
        return;
    }

    public final void onLeaveApplication(com.google.ads.Ad p3)
    {
        this.a.onAdClicked(java.util.Collections.emptyMap());
        android.util.Log.i("FlurryAgent", "Admob Interstitial leave application.");
        return;
    }

    public final void onPresentScreen(com.google.ads.Ad p3)
    {
        android.util.Log.d("FlurryAgent", "Admob Interstitial present on screen.");
        return;
    }

    public final void onReceiveAd(com.google.ads.Ad p3)
    {
        this.a.onAdFilled(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Admob Interstitial received takeover.");
        this.a.onAdShown(java.util.Collections.emptyMap());
        com.flurry.android.ab.a(this.a).show();
        return;
    }
}
