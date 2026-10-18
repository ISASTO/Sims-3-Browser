package com.flurry.android;
final class g extends com.flurry.android.AdNetworkView {

    g(android.content.Context p5, com.flurry.android.bo p6, com.flurry.android.bl p7, com.flurry.android.AdCreative p8)
    {
        super(p5, p6, p7, p8);
        try {
            int v0_4 = p5.getPackageManager().getApplicationInfo(p5.getPackageName(), 128);
        } catch (String v1) {
            android.util.Log.d("FlurryAgent", "Cannot find manifest for app");
        }
        int v0_1 = v0_4.metaData.getString("com.flurry.jumptap.PUBLISHER_ID");
        com.flurry.android.g.sAdNetworkApiKey = v0_1;
        if (v0_1 == 0) {
            android.util.Log.d("FlurryAgent", "com.flurry.jumptap.PUBLISHER_ID not set in manifest");
        }
        super.setFocusable(1);
        return;
    }

    public final void initLayout(android.content.Context p5)
    {
        if (!this.fAdCreative.getFormat().equals("takeover")) {
            String v2_0 = com.jumptap.adtag.JtAdWidgetSettingsFactory.createWidgetSettings();
            v2_0.setPublisherId(com.flurry.android.g.sAdNetworkApiKey);
            v2_0.setRefreshPeriod(0);
            v2_0.setShouldSendLocation(0);
            try {
                com.flurry.android.aw v1_1 = new com.jumptap.adtag.JtAdView(((android.app.Activity) p5), v2_0);
            } catch (com.flurry.android.w v0) {
                android.util.Log.d("FlurryAgent", "Jumptap JtException when creating ad object.");
            }
            v1_1.setAdViewListener(new com.flurry.android.w(this));
            this.addView(v1_1);
        } else {
            String v2_2 = com.jumptap.adtag.JtAdWidgetSettingsFactory.createWidgetSettings();
            v2_2.setPublisherId(com.flurry.android.g.sAdNetworkApiKey);
            v2_2.setRefreshPeriod(0);
            v2_2.setShouldSendLocation(0);
            try {
                com.flurry.android.w v0_9 = new com.jumptap.adtag.JtAdInterstitial(((android.app.Activity) p5), v2_2);
            } catch (com.flurry.android.w v0) {
                android.util.Log.d("FlurryAgent", "Jumptap JtException when creating ad object.");
                v0_9 = 0;
            }
            v0_9.setAdViewListener(new com.flurry.android.aw(this));
            v0_9.showAsPopup();
        }
        return;
    }
}
