package com.flurry.android;
final class ab extends com.flurry.android.AdNetworkView {
    private static boolean e;
    private com.google.ads.InterstitialAd f;

    ab(android.content.Context p5, com.flurry.android.bo p6, com.flurry.android.bl p7, com.flurry.android.AdCreative p8)
    {
        super(p5, p6, p7, p8);
        try {
            int v0_5 = p5.getPackageManager().getApplicationInfo(p5.getPackageName(), 128);
        } catch (String v1) {
            android.util.Log.d("FlurryAgent", "Cannot find manifest for app");
        }
        int v0_0 = v0_5.metaData;
        com.flurry.android.ab.sAdNetworkApiKey = v0_0.getString("com.flurry.admob.MY_AD_UNIT_ID");
        com.flurry.android.ab.sAdNetworkApiKey2 = v0_0.getString("com.flurry.admob.MYTEST_AD_DEVICE_ID");
        com.flurry.android.ab.e = v0_0.getBoolean("com.flurry.admob.test");
        if (com.flurry.android.ab.sAdNetworkApiKey == null) {
            android.util.Log.d("FlurryAgent", "com.flurry.admob.MY_AD_UNIT_ID not set in manifest");
        }
        super.setFocusable(1);
        return;
    }

    static synthetic com.google.ads.InterstitialAd a(com.flurry.android.ab p1)
    {
        return p1.f;
    }

    public final void initLayout(android.content.Context p7)
    {
        String v1_0 = 320;
        com.google.ads.AdRequest v0_0 = 50;
        int v5 = 1056964608;
        if (!this.fAdCreative.getFormat().equals("takeover")) {
            String v2_16;
            String v2_5 = p7.getResources().getDisplayMetrics();
            String v3_3 = ((int) (((float) v2_5.heightPixels) / v2_5.density));
            String v2_10 = ((int) (((float) v2_5.widthPixels) / v2_5.density));
            if ((v2_10 < com.google.ads.AdSize.IAB_LEADERBOARD.getWidth()) || (v3_3 < com.google.ads.AdSize.IAB_LEADERBOARD.getHeight())) {
                if ((v2_10 < com.google.ads.AdSize.IAB_BANNER.getWidth()) || (v3_3 < com.google.ads.AdSize.IAB_BANNER.getHeight())) {
                    if ((v2_10 < com.google.ads.AdSize.BANNER.getWidth()) || (v3_3 < com.google.ads.AdSize.BANNER.getHeight())) {
                        if ((v2_10 < com.google.ads.AdSize.IAB_MRECT.getWidth()) || (v3_3 < com.google.ads.AdSize.IAB_MRECT.getHeight())) {
                            android.util.Log.d("FlurryAgent", "Could not find Admob AdSize that matches size");
                            v2_16 = 0;
                        } else {
                            android.util.Log.d("FlurryAgent", "Determined Admob AdSize as IAB_MRECT");
                            v2_16 = com.google.ads.AdSize.IAB_MRECT;
                        }
                    } else {
                        android.util.Log.d("FlurryAgent", "Determined Admob AdSize as BANNER");
                        v2_16 = com.google.ads.AdSize.BANNER;
                    }
                } else {
                    android.util.Log.d("FlurryAgent", "Determined Admob AdSize as IAB_BANNER");
                    v2_16 = com.google.ads.AdSize.IAB_BANNER;
                }
            } else {
                android.util.Log.d("FlurryAgent", "Determined Admob AdSize as IAB_LEADERBOARD");
                v2_16 = com.google.ads.AdSize.IAB_LEADERBOARD;
            }
            if (v2_16 == null) {
                android.util.Log.d("FlurryAgent", "**********Could not load Admob Ad");
            } else {
                String v3_11 = new com.google.ads.AdView(((android.app.Activity) p7), v2_16, com.flurry.android.ab.sAdNetworkApiKey);
                // Both branches of the condition point to the same code.
                // if (!v2_16.equals(com.google.ads.AdSize.BANNER)) {
                    if (v2_16.equals(com.google.ads.AdSize.IAB_MRECT)) {
                        v1_0 = 300;
                        v0_0 = 250;
                    }
                    String v2_25 = this.getResources().getDisplayMetrics().density;
                    v3_11.setLayoutParams(new android.widget.LinearLayout$LayoutParams(((int) ((((float) v1_0) * v2_25) + v5)), ((int) ((((float) v0_0) * v2_25) + v5))));
                    v3_11.setGravity(14);
                    v3_11.setAdListener(new com.flurry.android.bg(this));
                    this.addView(v3_11);
                    com.google.ads.AdRequest v0_9 = new com.google.ads.AdRequest();
                    if (com.flurry.android.ab.e) {
                        android.util.Log.d("FlurryAgent", "Admob AdView set to Test Mode.");
                        v0_9.addTestDevice(com.google.ads.AdRequest.TEST_EMULATOR);
                        if ((com.flurry.android.ab.sAdNetworkApiKey2 != null) && (com.flurry.android.ab.sAdNetworkApiKey2 != "")) {
                            v0_9.addTestDevice(com.flurry.android.ab.sAdNetworkApiKey2);
                        }
                    }
                    v3_11.loadAd(v0_9);
                // }
            }
        } else {
            this.f = new com.google.ads.InterstitialAd(((android.app.Activity) p7), com.flurry.android.ab.sAdNetworkApiKey);
            this.f.setAdListener(new com.flurry.android.j(this));
            com.google.ads.AdRequest v0_15 = new com.google.ads.AdRequest();
            if (com.flurry.android.ab.e) {
                android.util.Log.d("FlurryAgent", "Admob AdView set to Test Mode.");
                v0_15.addTestDevice(com.google.ads.AdRequest.TEST_EMULATOR);
                if ((com.flurry.android.ab.sAdNetworkApiKey2 != null) && (com.flurry.android.ab.sAdNetworkApiKey2 != "")) {
                    v0_15.addTestDevice(com.flurry.android.ab.sAdNetworkApiKey2);
                }
            }
            this.f.loadAd(v0_15);
        }
        return;
    }
}
