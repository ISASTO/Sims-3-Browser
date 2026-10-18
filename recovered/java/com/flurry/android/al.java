package com.flurry.android;
final class al extends com.flurry.android.AdNetworkView {
    private boolean e;

    al(android.content.Context p5, com.flurry.android.bo p6, com.flurry.android.bl p7, com.flurry.android.AdCreative p8)
    {
        super(p5, p6, p7, p8);
        try {
            int v0_4 = p5.getPackageManager().getApplicationInfo(p5.getPackageName(), 128);
        } catch (String v1) {
            android.util.Log.d("FlurryAgent", "Cannot find manifest for app");
        }
        int v0_1 = v0_4.metaData.getString("com.flurry.millennial.MYAPID");
        com.flurry.android.al.sAdNetworkApiKey = v0_1;
        if (v0_1 == 0) {
            android.util.Log.d("FlurryAgent", "com.flurry.millennial.MYAPID not set in manifest");
        }
        super.setFocusable(1);
        return;
    }

    static synthetic boolean a(com.flurry.android.al p1)
    {
        return p1.e;
    }

    public final void initLayout(android.content.Context p10)
    {
        com.flurry.android.ak v0_0 = 250;
        int v8 = 1056964608;
        if (!this.fAdCreative.getFormat().equals("takeover")) {
            boolean v4_4;
            boolean v4_2 = this.fAdCreative.getHeight();
            com.millennialmedia.android.MMAdView v5_1 = this.fAdCreative.getWidth();
            if ((v5_1 < 320) || (v4_2 < 50)) {
                if ((v5_1 < 300) || (v4_2 < 250)) {
                    android.util.Log.d("FlurryAgent", "Could not find Millennial AdSize that matches size");
                    v4_4 = 0;
                } else {
                    android.util.Log.d("FlurryAgent", "Determined Millennial AdSize as MMBannerAdRectangle");
                    v4_4 = "MMBannerAdRectangle";
                }
            } else {
                android.util.Log.d("FlurryAgent", "Determined Millennial AdSize as MMBannerAdBottom");
                v4_4 = "MMBannerAdBottom";
            }
            if (!v4_4) {
                android.util.Log.d("FlurryAgent", "**********Could not load Millennial Ad");
            } else {
                com.millennialmedia.android.MMAdView v5_6 = new com.millennialmedia.android.MMAdView(((android.app.Activity) p10), com.flurry.android.al.sAdNetworkApiKey, v4_4, 0);
                v5_6.setId(1897808289);
                // Both branches of the condition point to the same code.
                // if (!v4_4.equals("MMBannerAdBottom")) {
                    int v1_14;
                    if (!v4_4.equals("MMBannerAdRectangle")) {
                        v0_0 = 50;
                        v1_14 = 320;
                    } else {
                        v1_14 = 300;
                    }
                    android.widget.LinearLayout$LayoutParams v2_10 = this.getResources().getDisplayMetrics().density;
                    v5_6.setLayoutParams(new android.widget.LinearLayout$LayoutParams(((int) ((((float) v1_14) * v2_10) + v8)), ((int) ((((float) v0_0) * v2_10) + v8))));
                    v5_6.setListener(new com.flurry.android.ak(this));
                    this.addView(v5_6);
                // }
            }
        } else {
            com.flurry.android.ak v0_10 = new com.millennialmedia.android.MMAdView(((android.app.Activity) p10), com.flurry.android.al.sAdNetworkApiKey, "MMFullScreenAdTransition", 1, 0);
            v0_10.setId(1897808290);
            v0_10.setListener(new com.flurry.android.ay(this));
            v0_10.fetch();
            this.e = v0_10.display();
            if (!this.e) {
                android.util.Log.d("FlurryAgent", new StringBuilder().append("Millennial MMAdView Interstitial ad did not display immediately:").append(System.currentTimeMillis()).append(" ").append(this.e).toString());
            } else {
                android.util.Log.d("FlurryAgent", new StringBuilder().append("Millennial MMAdView Interstitial ad displayed immediately:").append(System.currentTimeMillis()).append(" ").append(this.e).toString());
            }
        }
        return;
    }
}
