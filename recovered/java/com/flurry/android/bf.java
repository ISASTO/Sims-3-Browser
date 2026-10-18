package com.flurry.android;
final class bf extends android.webkit.WebChromeClient {
    final synthetic com.flurry.android.ap a;

    synthetic bf(com.flurry.android.ap p2)
    {
        this(p2, 0);
        return;
    }

    private bf(com.flurry.android.ap p1, byte p2)
    {
        this.a = p1;
        return;
    }

    public final void onHideCustomView()
    {
        if ((com.flurry.android.ap.g(this.a) != null) && (com.flurry.android.ap.h(this.a) != null)) {
            if (com.flurry.android.ap.l(this.a) != null) {
                com.flurry.android.ap.l(this.a).show();
            }
            ((android.widget.FrameLayout) com.flurry.android.ap.g(this.a).getWindow().getDecorView()).removeView(com.flurry.android.ap.j(this.a));
            com.flurry.android.ap.j(this.a).removeView(com.flurry.android.ap.h(this.a));
            if ((com.flurry.android.ap.k(this.a) != null) && (com.flurry.android.ap.k(this.a).isShowing())) {
                com.flurry.android.ap.k(this.a).hide();
                com.flurry.android.ap.k(this.a).setOnDismissListener(0);
                com.flurry.android.ap.k(this.a).dismiss();
            }
            com.flurry.android.ap.a(this.a, 0);
            com.flurry.android.ap.m(this.a).onCustomViewHidden();
            com.flurry.android.ap.g(this.a).setRequestedOrientation(com.flurry.android.ap.n(this.a));
            com.flurry.android.ap.a(this.a, 0);
            com.flurry.android.ap.a(this.a, 0);
            com.flurry.android.ap.a(this.a, 0);
        }
        return;
    }

    public final void onShowCustomView(android.view.View p6, int p7, android.webkit.WebChromeClient$CustomViewCallback p8)
    {
        if (com.flurry.android.ap.g(this.a) != null) {
            if ((com.flurry.android.ap.h(this.a) == null) || (com.flurry.android.ap.i(this.a) == null)) {
                com.flurry.android.ap.a(this.a, p6);
                com.flurry.android.ap.a(this.a, p7);
                com.flurry.android.ap.a(this.a, p8);
                com.flurry.android.ap.a(this.a, new android.widget.FrameLayout(com.flurry.android.ap.f(this.a)));
                com.flurry.android.ap.j(this.a).setBackgroundColor(-16777216);
                com.flurry.android.ap.j(this.a).addView(com.flurry.android.ap.h(this.a), new android.widget.FrameLayout$LayoutParams(-1, -1, 17));
                ((android.widget.FrameLayout) com.flurry.android.ap.g(this.a).getWindow().getDecorView()).addView(com.flurry.android.ap.j(this.a), -1, -1);
                if (com.flurry.android.ap.k(this.a) == null) {
                    com.flurry.android.ap.a(this.a, new com.flurry.android.t(this, com.flurry.android.ap.f(this.a), 16973841));
                    com.flurry.android.ap.k(this.a).getWindow().setType(1000);
                    com.flurry.android.ap.k(this.a).setOnShowListener(new com.flurry.android.s(this));
                    com.flurry.android.ap.k(this.a).setOnDismissListener(new com.flurry.android.q(this));
                    com.flurry.android.ap.k(this.a).setCancelable(1);
                    com.flurry.android.ap.k(this.a).show();
                }
                com.flurry.android.ap.g(this.a).setRequestedOrientation(p7);
            } else {
                com.flurry.android.ap.i(this.a).onHideCustomView();
            }
        }
        return;
    }

    public final void onShowCustomView(android.view.View p2, android.webkit.WebChromeClient$CustomViewCallback p3)
    {
        if (com.flurry.android.ap.g(this.a) != null) {
            this.onShowCustomView(p2, com.flurry.android.ap.g(this.a).getRequestedOrientation(), p3);
        }
        return;
    }
}
