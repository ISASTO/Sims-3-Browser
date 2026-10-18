package com.flurry.android;
final class x extends android.widget.RelativeLayout {
    private com.flurry.android.bo a;
    private android.content.Context b;
    private String c;
    private com.flurry.android.FlurryAdSize d;
    private android.view.ViewGroup e;
    private int f;
    private boolean g;

    x(com.flurry.android.bo p7, android.content.Context p8, String p9, android.view.ViewGroup p10)
    {
        this(p7, p8, p9, p10, com.flurry.android.FlurryAdSize.BANNER_BOTTOM);
        return;
    }

    private x(com.flurry.android.bo p2, android.content.Context p3, String p4, android.view.ViewGroup p5, com.flurry.android.FlurryAdSize p6)
    {
        super(p3);
        super.a = p2;
        super.b = p3;
        super.c = p4;
        super.e = p5;
        super.f = 0;
        super.g = 0;
        super.d = p6;
        return;
    }

    final int a()
    {
        return this.f;
    }

    final void a(int p1)
    {
        this.f = p1;
        return;
    }

    final void a(boolean p1)
    {
        this.g = p1;
        return;
    }

    final boolean b()
    {
        return this.g;
    }

    final android.view.ViewGroup c()
    {
        return this.e;
    }

    final String d()
    {
        return this.c;
    }

    final com.flurry.android.r e()
    {
        int v0_0;
        if (this.getChildCount() >= 1) {
            try {
                v0_0 = ((com.flurry.android.r) this.getChildAt(0));
            } catch (int v0) {
                v0_0 = 0;
            }
        } else {
            v0_0 = 0;
        }
        return v0_0;
    }

    final void f()
    {
        com.flurry.android.bo v0_0 = this.e();
        if ((v0_0 != null) && (v0_0.a())) {
            this.a.a(this.b, this.c, this.d, this.e, 1);
        }
        return;
    }
}
