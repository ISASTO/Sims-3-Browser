package com.flurry.android;
final class ad implements com.mobclix.android.sdk.MobclixFullScreenAdViewListener {
    private synthetic com.flurry.android.ag a;

    ad(com.flurry.android.ag p1)
    {
        this.a = p1;
        return;
    }

    public final String keywords()
    {
        android.util.Log.d("FlurryAgent", "Mobclix keyword callback.");
        return 0;
    }

    public final void onDismissAd(com.mobclix.android.sdk.MobclixFullScreenAdView p3)
    {
        this.a.onAdClosed(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Mobclix Interstitial ad dismissed.");
        return;
    }

    public final void onFailedLoad(com.mobclix.android.sdk.MobclixFullScreenAdView p3, int p4)
    {
        this.a.onAdUnFilled(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Mobclix Interstitial ad failed to load.");
        return;
    }

    public final void onFinishLoad(com.mobclix.android.sdk.MobclixFullScreenAdView p3)
    {
        this.a.onAdFilled(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Mobclix Interstitial ad successfully loaded.");
        return;
    }

    public final void onPresentAd(com.mobclix.android.sdk.MobclixFullScreenAdView p3)
    {
        this.a.onAdShown(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "Mobclix Interstitial ad successfully shown.");
        return;
    }

    public final String query()
    {
        android.util.Log.d("FlurryAgent", "Mobclix query callback.");
        return 0;
    }
}
