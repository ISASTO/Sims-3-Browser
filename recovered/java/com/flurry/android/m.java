package com.flurry.android;
final class m implements com.inmobi.androidsdk.IMAdInterstitialListener {
    private synthetic com.flurry.android.ae a;

    m(com.flurry.android.ae p1)
    {
        this.a = p1;
        return;
    }

    public final void onAdRequestFailed(com.inmobi.androidsdk.IMAdInterstitial p3, com.inmobi.androidsdk.IMAdRequest$ErrorCode p4)
    {
        this.a.onAdUnFilled(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "InMobi imAdView ad request failed.");
        return;
    }

    public final void onAdRequestLoaded(com.inmobi.androidsdk.IMAdInterstitial p3)
    {
        this.a.onAdFilled(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "InMobi Interstitial ad request completed.");
        if (com.inmobi.androidsdk.IMAdInterstitial$State.READY.equals(p3.getState())) {
            this.a.onAdShown(java.util.Collections.emptyMap());
            p3.show();
        }
        return;
    }

    public final void onDismissAdScreen(com.inmobi.androidsdk.IMAdInterstitial p3)
    {
        this.a.onAdClosed(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "InMobi Interstitial ad dismissed.");
        return;
    }

    public final void onLeaveApplication(com.inmobi.androidsdk.IMAdInterstitial p3)
    {
        android.util.Log.d("FlurryAgent", "InMobi onLeaveApplication");
        return;
    }

    public final void onShowAdScreen(com.inmobi.androidsdk.IMAdInterstitial p3)
    {
        android.util.Log.d("FlurryAgent", "InMobi Interstitial ad shown.");
        return;
    }
}
