package com.flurry.android;
final class ae extends com.flurry.android.AdNetworkView {
    private static boolean e;

    ae(android.content.Context p5, com.flurry.android.bo p6, com.flurry.android.bl p7, com.flurry.android.AdCreative p8)
    {
        super(p5, p6, p7, p8);
        try {
            int v0_5 = p5.getPackageManager().getApplicationInfo(p5.getPackageName(), 128);
        } catch (String v1) {
            android.util.Log.d("FlurryAgent", "Cannot find manifest for app");
        }
        int v0_0 = v0_5.metaData;
        com.flurry.android.ae.sAdNetworkApiKey = v0_0.getString("com.flurry.inmobi.MY_APP_ID");
        com.flurry.android.ae.e = v0_0.getBoolean("com.flurry.inmobi.test");
        if (com.flurry.android.ae.sAdNetworkApiKey == null) {
            android.util.Log.d("FlurryAgent", "com.flurry.inmobi.MY_APP_ID not set in manifest");
        }
        super.setFocusable(1);
        return;
    }

    public final void initLayout(android.content.Context p9)
    {
        int v6 = 1056964608;
        String v1_10 = 320;
        com.inmobi.androidsdk.IMAdRequest v0_11 = 50;
        if (!this.fAdCreative.getFormat().equals("takeover")) {
            String v2_13;
            String v2_7 = p9.getResources().getDisplayMetrics();
            String v4_3 = ((int) (((float) v2_7.heightPixels) / v2_7.density));
            String v2_10 = ((int) (((float) v2_7.widthPixels) / v2_7.density));
            if ((v2_10 < 728) || (v4_3 < 90)) {
                if ((v2_10 < 468) || (v4_3 < 60)) {
                    if ((v2_10 < 320) || (v4_3 < 50)) {
                        if ((v2_10 < 300) || (v4_3 < 250)) {
                            if ((v2_10 < 120) || (v4_3 < 600)) {
                                android.util.Log.d("FlurryAgent", "Could not find InMobi AdSize that matches size");
                                v2_13 = -1;
                            } else {
                                android.util.Log.d("FlurryAgent", "Determined InMobi AdSize as 120x600");
                                v2_13 = 13;
                            }
                        } else {
                            android.util.Log.d("FlurryAgent", "Determined InMobi AdSize as 300x250");
                            v2_13 = 10;
                        }
                    } else {
                        android.util.Log.d("FlurryAgent", "Determined InMobi AdSize as 320x50");
                        v2_13 = 15;
                    }
                } else {
                    android.util.Log.d("FlurryAgent", "Determined InMobi AdSize as 468x60");
                    v2_13 = 12;
                }
            } else {
                android.util.Log.d("FlurryAgent", "Determined InMobi AdSize as 728x90");
                v2_13 = 11;
            }
            if (v2_13 == -1) {
                android.util.Log.d("FlurryAgent", "**********Could not load InMobi Ad");
            } else {
                String v4_11 = new com.inmobi.androidsdk.IMAdView(((android.app.Activity) p9), v2_13, com.flurry.android.ae.sAdNetworkApiKey);
                // Both branches of the condition point to the same code.
                // if (v2_13 != 15) {
                    if (v2_13 == 11) {
                        v1_10 = 728;
                        v0_11 = 90;
                    }
                    if (v2_13 == 12) {
                        v1_10 = 468;
                        v0_11 = 60;
                    }
                    if (v2_13 == 10) {
                        v1_10 = 300;
                        v0_11 = 250;
                    }
                    if (v2_13 == 13) {
                        v1_10 = 120;
                        v0_11 = 600;
                    }
                    String v2_23 = this.getResources().getDisplayMetrics().density;
                    v4_11.setLayoutParams(new android.widget.LinearLayout$LayoutParams(((int) ((((float) v1_10) * v2_23) + v6)), ((int) ((((float) v0_11) * v2_23) + v6))));
                    v4_11.setGravity(14);
                    v4_11.setIMAdListener(new com.flurry.android.af(this));
                    this.addView(v4_11);
                    com.inmobi.androidsdk.IMAdRequest v0_8 = new com.inmobi.androidsdk.IMAdRequest();
                    if (com.flurry.android.ae.e) {
                        android.util.Log.d("FlurryAgent", "InMobi AdView set to Test Mode.");
                        v0_8.setTestMode(1);
                    }
                    v4_11.setIMAdRequest(v0_8);
                    v4_11.setRefreshInterval(-1);
                    v4_11.loadNewAd();
                // }
            }
        } else {
            com.inmobi.androidsdk.IMAdRequest v0_10 = new com.inmobi.androidsdk.IMAdInterstitial(((android.app.Activity) p9), com.flurry.android.ae.sAdNetworkApiKey);
            v0_10.setImAdInterstitialListener(new com.flurry.android.m(this));
            String v1_9 = new com.inmobi.androidsdk.IMAdRequest();
            if (com.flurry.android.ae.e) {
                android.util.Log.d("FlurryAgent", "InMobi Interstitial set to Test Mode.");
                v1_9.setTestMode(1);
            }
            v0_10.loadNewAd(v1_9);
        }
        return;
    }
}
