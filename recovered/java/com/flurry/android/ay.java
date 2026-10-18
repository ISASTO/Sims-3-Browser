package com.flurry.android;
final class ay implements com.millennialmedia.android.MMAdView$MMAdListener {
    private synthetic com.flurry.android.al a;

    ay(com.flurry.android.al p1)
    {
        this.a = p1;
        return;
    }

    public final void MMAdCachingCompleted(com.millennialmedia.android.MMAdView p5, boolean p6)
    {
        android.util.Log.d("FlurryAgent", new StringBuilder().append("Millennial MMAdView Interstitial caching completed.").append(System.currentTimeMillis()).append(" fInter_success = ").append(com.flurry.android.al.a(this.a)).append(" success = ").append(p6).toString());
        if (!com.flurry.android.al.a(this.a)) {
            p5.display();
        }
        return;
    }

    public final void MMAdClickedToOverlay(com.millennialmedia.android.MMAdView p5)
    {
        this.a.onAdClicked(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", new StringBuilder().append("Millennial MMAdView Interstitial clicked to overlay.").append(System.currentTimeMillis()).toString());
        return;
    }

    public final void MMAdFailed(com.millennialmedia.android.MMAdView p3)
    {
        this.a.onAdUnFilled(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Millennial MMAdView Interstitial failed to load ad.");
        return;
    }

    public final void MMAdOverlayLaunched(com.millennialmedia.android.MMAdView p5)
    {
        this.a.onAdFilled(java.util.Collections.emptyMap());
        this.a.onAdShown(java.util.Collections.emptyMap());
        this.a.onAdClosed(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", new StringBuilder().append("Millennial MMAdView Interstitial overlay launched.").append(System.currentTimeMillis()).toString());
        return;
    }

    public final void MMAdRequestIsCaching(com.millennialmedia.android.MMAdView p3)
    {
        android.util.Log.d("FlurryAgent", "Millennial MMAdView Interstitial request is caching.");
        return;
    }

    public final void MMAdReturned(com.millennialmedia.android.MMAdView p3)
    {
        android.util.Log.d("FlurryAgent", "Millennial MMAdView In returned interstitial ad.");
        return;
    }
}
