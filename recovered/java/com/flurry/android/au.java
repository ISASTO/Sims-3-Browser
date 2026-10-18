package com.flurry.android;
final class au implements android.content.DialogInterface$OnDismissListener {
    private synthetic com.flurry.android.ap a;

    au(com.flurry.android.ap p1)
    {
        this.a = p1;
        return;
    }

    public final void onDismiss(android.content.DialogInterface p3)
    {
        if (com.flurry.android.ap.b(this.a) != null) {
            com.flurry.android.ap.b(this.a).loadUrl("javascript:if(window.mraid){window.mraid.close();};");
        }
        return;
    }
}
