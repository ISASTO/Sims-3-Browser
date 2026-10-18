package com.flurry.android;
final class t extends android.app.Dialog {
    private synthetic com.flurry.android.bf a;

    t(com.flurry.android.bf p1, android.content.Context p2, int p3)
    {
        this.a = p1;
        super(p2, p3);
        return;
    }

    public final boolean dispatchTouchEvent(android.view.MotionEvent p3)
    {
        boolean v0_0 = 0;
        if (com.flurry.android.ap.g(this.a.a) != null) {
            v0_0 = com.flurry.android.ap.g(this.a.a).dispatchTouchEvent(p3);
        }
        return v0_0;
    }

    public final boolean dispatchTrackballEvent(android.view.MotionEvent p3)
    {
        boolean v0_0 = 0;
        if (com.flurry.android.ap.g(this.a.a) != null) {
            v0_0 = com.flurry.android.ap.g(this.a.a).dispatchTrackballEvent(p3);
        }
        return v0_0;
    }
}
