package com.flurry.android;
final class af implements com.inmobi.androidsdk.IMAdListener {
    private synthetic com.flurry.android.ae a;

    af(com.flurry.android.ae p1)
    {
        this.a = p1;
        return;
    }

    public final void onAdRequestCompleted(com.inmobi.androidsdk.IMAdView p3)
    {
        this.a.onAdFilled(java.util.Collections.emptyMap());
        this.a.onAdShown(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "InMobi imAdView ad request completed.");
        return;
    }

    public final void onAdRequestFailed(com.inmobi.androidsdk.IMAdView p3, com.inmobi.androidsdk.IMAdRequest$ErrorCode p4)
    {
        this.a.onAdUnFilled(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "InMobi imAdView ad request failed.");
        return;
    }

    public final void onDismissAdScreen(com.inmobi.androidsdk.IMAdView p3)
    {
        this.a.onAdClosed(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "InMobi imAdView dismiss ad.");
        return;
    }

    public final void onLeaveApplication(com.inmobi.androidsdk.IMAdView p3)
    {
        android.util.Log.d("FlurryAgent", "InMobi onLeaveApplication");
        return;
    }

    public final void onShowAdScreen(com.inmobi.androidsdk.IMAdView p3)
    {
        this.a.onAdClicked(java.util.Collections.emptyMap());
        android.util.Log.d("FlurryAgent", "InMobi imAdView ad shown.");
        return;
    }
}
