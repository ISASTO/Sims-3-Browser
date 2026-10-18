package com.flurry.android;
final class ak implements com.millennialmedia.android.MMAdView$MMAdListener {
    private synthetic com.flurry.android.al a;

    ak(com.flurry.android.al p1)
    {
        this.a = p1;
        return;
    }

    public final void MMAdCachingCompleted(com.millennialmedia.android.MMAdView p3, boolean p4)
    {
        android.util.Log.d("FlurryAgent", "Millennial MMAdView banner caching completed.");
        return;
    }

    public final void MMAdClickedToOverlay(com.millennialmedia.android.MMAdView p3)
    {
        this.a.onAdClicked(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Millennial MMAdView clicked to overlay.");
        return;
    }

    public final void MMAdFailed(com.millennialmedia.android.MMAdView p3)
    {
        this.a.onAdUnFilled(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Millennial MMAdView failed to load ad.");
        return;
    }

    public final void MMAdOverlayLaunched(com.millennialmedia.android.MMAdView p3)
    {
        android.util.Log.d("FlurryAgent", "Millennial MMAdView banner overlay launched.");
        return;
    }

    public final void MMAdRequestIsCaching(com.millennialmedia.android.MMAdView p3)
    {
        android.util.Log.d("FlurryAgent", "Millennial MMAdView banner request is caching.");
        return;
    }

    public final void MMAdReturned(com.millennialmedia.android.MMAdView p5)
    {
        this.a.onAdFilled(java.util.Collections.emptyMap());
        this.a.onAdShown(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", new StringBuilder().append("Millennial MMAdView returned ad.").append(System.currentTimeMillis()).toString());
        return;
    }
}
