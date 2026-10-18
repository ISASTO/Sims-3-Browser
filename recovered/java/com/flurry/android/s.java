package com.flurry.android;
final class s implements android.content.DialogInterface$OnShowListener {
    private synthetic com.flurry.android.bf a;

    s(com.flurry.android.bf p1)
    {
        this.a = p1;
        return;
    }

    public final void onShow(android.content.DialogInterface p2)
    {
        if (com.flurry.android.ap.l(this.a.a) != null) {
            com.flurry.android.ap.l(this.a.a).hide();
        }
        return;
    }
}
