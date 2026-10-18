package com.flurry.android;
public interface FlurryAdListener {

    public abstract void onAdClicked(String p0);

    public abstract void onAdClosed(String p0);

    public abstract void onAdOpened(String p0);

    public abstract void onApplicationExit(String p0);

    public abstract void onRenderFailed(String p0);

    public abstract boolean shouldDisplayAd(String p0, com.flurry.android.FlurryAdType p1);

    public abstract void spaceDidFailToReceiveAd(String p0);

    public abstract void spaceDidReceiveAd(String p0);
}
