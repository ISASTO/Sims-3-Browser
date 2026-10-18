package com.flurry.android;
final class q implements android.content.DialogInterface$OnDismissListener {
    private synthetic com.flurry.android.bf a;

    q(com.flurry.android.bf p1)
    {
        this.a = p1;
        return;
    }

    public final void onDismiss(android.content.DialogInterface p2)
    {
        if ((com.flurry.android.ap.h(this.a.a) != null) && (com.flurry.android.ap.i(this.a.a) != null)) {
            com.flurry.android.ap.i(this.a.a).onHideCustomView();
        }
        return;
    }
}
