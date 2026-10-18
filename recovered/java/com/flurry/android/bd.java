package com.flurry.android;
final class bd extends android.widget.RelativeLayout implements android.view.View$OnClickListener {
    private final String a;
    private android.webkit.WebView b;
    private android.widget.ImageView c;
    private android.widget.ImageView d;
    private android.widget.ImageView e;

    public bd(android.content.Context p8, String p9)
    {
        super(p8);
        super.a = super.getClass().getSimpleName();
        super.b = new android.webkit.WebView(p8);
        super.b.getSettings().setJavaScriptEnabled(1);
        super.b.getSettings().setUseWideViewPort(1);
        if (com.flurry.android.VersionUtil.SDK_INT >= 7) {
            super.b.getSettings().setLoadWithOverviewMode(1);
        }
        super.b.getSettings().setBuiltInZoomControls(1);
        if (com.flurry.android.VersionUtil.SDK_INT >= 11) {
            super.b.getSettings().setDisplayZoomControls(0);
        }
        super.b.setWebViewClient(new com.flurry.android.b(super));
        super.b.loadUrl(p9);
        super.c = new android.widget.ImageView(p8);
        super.c.setId(0);
        super.c.setImageDrawable(super.getResources().getDrawable(17301560));
        super.c.setOnClickListener(super);
        super.d = new android.widget.ImageView(p8);
        super.d.setId(1);
        super.d.setImageDrawable(super.getResources().getDrawable(17301580));
        super.d.setOnClickListener(super);
        super.e = new android.widget.ImageView(p8);
        super.e.setId(2);
        super.e.setImageDrawable(super.getResources().getDrawable(17301565));
        super.e.setOnClickListener(super);
        super.setLayoutParams(new android.view.ViewGroup$LayoutParams(-1, -1));
        super.addView(super.b);
        android.widget.RelativeLayout$LayoutParams v0_40 = new android.widget.RelativeLayout$LayoutParams(-2, -2);
        v0_40.addRule(14);
        super.addView(super.c, v0_40);
        android.widget.RelativeLayout$LayoutParams v0_0 = new android.widget.RelativeLayout$LayoutParams(-2, -2);
        v0_0.addRule(9);
        super.addView(super.d, v0_0);
        android.widget.RelativeLayout$LayoutParams v0_2 = new android.widget.RelativeLayout$LayoutParams(-2, -2);
        v0_2.addRule(11);
        super.addView(super.e, v0_2);
        return;
    }

    public final void onClick(android.view.View p2)
    {
        switch (p2.getId()) {
            case 0:
                try {
                    ((android.app.Activity) this.getContext()).finish();
                } catch (ClassCastException v0_1) {
                    v0_1.toString();
                }
                break;
            case 1:
                this.b.goBack();
                break;
            case 2:
                this.b.goForward();
                break;
        }
        return;
    }
}
