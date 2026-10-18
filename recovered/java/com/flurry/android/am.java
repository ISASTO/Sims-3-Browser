package com.flurry.android;
final class am implements com.mobclix.android.sdk.MobclixAdViewListener {
    private synthetic com.flurry.android.ag a;

    am(com.flurry.android.ag p1)
    {
        this.a = p1;
        return;
    }

    public final String keywords()
    {
        android.util.Log.d("FlurryAgent", "Mobclix keyword callback.");
        return 0;
    }

    public final void onAdClick(com.mobclix.android.sdk.MobclixAdView p3)
    {
        this.a.onAdClicked(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Mobclix AdView ad clicked.");
        return;
    }

    public final void onCustomAdTouchThrough(com.mobclix.android.sdk.MobclixAdView p3, String p4)
    {
        this.a.onAdClicked(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Mobclix AdView custom ad clicked.");
        return;
    }

    public final void onFailedLoad(com.mobclix.android.sdk.MobclixAdView p3, int p4)
    {
        this.a.onAdUnFilled(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Mobclix AdView ad failed to load.");
        return;
    }

    public final boolean onOpenAllocationLoad(com.mobclix.android.sdk.MobclixAdView p3, int p4)
    {
        android.util.Log.d("FlurryAgent", "Mobclix AdView loaded an open allocation ad.");
        return 1;
    }

    public final void onSuccessfulLoad(com.mobclix.android.sdk.MobclixAdView p3)
    {
        this.a.onAdFilled(java.util.Collections.emptyMap());
        this.a.onAdShown(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Mobclix AdView ad successfully loaded.");
        return;
    }

    public final String query()
    {
        android.util.Log.d("FlurryAgent", "Mobclix query callback.");
        return 0;
    }
}
