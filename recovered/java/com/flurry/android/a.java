package com.flurry.android;
final class a extends com.flurry.android.an {
    final synthetic android.content.Context a;
    final synthetic com.flurry.android.FlurryAgent b;
    private synthetic boolean c;

    a(com.flurry.android.FlurryAgent p1, boolean p2, android.content.Context p3)
    {
        this.b = p1;
        this.c = p2;
        this.a = p3;
        return;
    }

    public final void a()
    {
        com.flurry.android.FlurryAgent.b(this.b);
        com.flurry.android.FlurryAgent.c(this.b);
        if (!this.c) {
            com.flurry.android.FlurryAgent.d(this.b).postDelayed(new com.flurry.android.u(this), com.flurry.android.FlurryAgent.e());
        }
        if (com.flurry.android.FlurryAgent.f()) {
            com.flurry.android.bm.a("FlurryAgent", "Attempting to persist AdLogs");
            com.flurry.android.FlurryAgent.e(this.b).k();
        }
        return;
    }
}
