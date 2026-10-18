package com.flurry.android;
final class ag extends com.flurry.android.AdNetworkView {

    ag(android.content.Context p5, com.flurry.android.bo p6, com.flurry.android.bl p7, com.flurry.android.AdCreative p8)
    {
        super(p5, p6, p7, p8);
        try {
            int v0_4 = p5.getPackageManager().getApplicationInfo(p5.getPackageName(), 128);
        } catch (String v1) {
            android.util.Log.d("FlurryAgent", "Cannot find manifest for app");
        }
        int v0_1 = v0_4.metaData.getString("com.mobclix.APPLICATION_ID");
        com.flurry.android.ag.sAdNetworkApiKey = v0_1;
        if (v0_1 == 0) {
            android.util.Log.d("MobclixTestApp", "com.mobclix.APPLICATION_ID not set in manifest");
        }
        super.setFocusable(1);
        return;
    }

    public final void initLayout(android.content.Context p8)
    {
        long v1_0 = 250;
        int v6 = 1056964608;
        if (!this.fAdCreative.getFormat().equals("takeover")) {
            com.mobclix.android.sdk.MobclixIABRectangleMAdView v0_4;
            com.mobclix.android.sdk.MobclixIABRectangleMAdView v0_2 = this.fAdCreative.getHeight();
            boolean v5_1 = this.fAdCreative.getWidth();
            if ((v5_1 < 320) || (v0_2 < 50)) {
                if ((v5_1 < 300) || (v0_2 < 250)) {
                    android.util.Log.d("FlurryAgent", "Could not find Mobclix AdSize that matches size");
                    v0_4 = 0;
                } else {
                    android.util.Log.d("FlurryAgent", "Determined Mobclix AdSize as IAB_RECT");
                    v0_4 = new com.mobclix.android.sdk.MobclixIABRectangleMAdView(((android.app.Activity) p8));
                }
            } else {
                android.util.Log.d("FlurryAgent", "Determined Mobclix AdSize as BANNER");
                v0_4 = new com.mobclix.android.sdk.MobclixMMABannerXLAdView(((android.app.Activity) p8));
            }
            v0_4.addMobclixAdViewListener(new com.flurry.android.am(this));
            // Both branches of the condition point to the same code.
            // if (!(v0_4 instanceof com.mobclix.android.sdk.MobclixMMABannerXLAdView)) {
                int v2_1;
                if (!(v0_4 instanceof com.mobclix.android.sdk.MobclixIABRectangleMAdView)) {
                    v1_0 = 50;
                    v2_1 = 300;
                } else {
                    v2_1 = 320;
                }
                android.widget.LinearLayout$LayoutParams v3_3 = this.getResources().getDisplayMetrics().density;
                v0_4.setLayoutParams(new android.widget.LinearLayout$LayoutParams(((int) ((((float) v2_1) * v3_3) + v6)), ((int) ((((float) v1_0) * v3_3) + v6))));
                v0_4.setForegroundGravity(14);
                this.addView(v0_4);
                v0_4.setRefreshTime(-1);
            // }
        } else {
            com.mobclix.android.sdk.MobclixIABRectangleMAdView v0_12 = new com.mobclix.android.sdk.MobclixFullScreenAdView(((android.app.Activity) p8));
            v0_12.addMobclixAdViewListener(new com.flurry.android.ad(this));
            v0_12.requestAndDisplayAd();
        }
        return;
    }
}
