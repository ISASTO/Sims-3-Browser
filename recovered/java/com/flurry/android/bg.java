package com.flurry.android;
final class bg implements com.google.ads.AdListener {
    private synthetic com.flurry.android.ab a;

    bg(com.flurry.android.ab p1)
    {
        this.a = p1;
        return;
    }

    public final void onDismissScreen(com.google.ads.Ad p3)
    {
        this.a.onAdClosed(java.util.Collections.emptyMap());
        android.util.Log.i("FlurryAgent", "Admob AdView dismissed from screen.");
        return;
    }

    public final void onFailedToReceiveAd(com.google.ads.Ad p3, com.google.ads.AdRequest$ErrorCode p4)
    {
        this.a.onAdUnFilled(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Admob AdView failed to receive ad.");
        return;
    }

    public final void onLeaveApplication(com.google.ads.Ad p3)
    {
        this.a.onAdClicked(java.util.Collections.emptyMap());
        android.util.Log.i("FlurryAgent", "Admob AdView leave application.");
        return;
    }

    public final void onPresentScreen(com.google.ads.Ad p3)
    {
        android.util.Log.d("FlurryAgent", "Admob AdView present on screen.");
        return;
    }

    public final void onReceiveAd(com.google.ads.Ad p3)
    {
        this.a.onAdFilled(java.util.Collections.emptyMap());
        this.a.onAdShown(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Admob AdView received ad.");
        return;
    }
}
