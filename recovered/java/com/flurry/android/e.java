package com.flurry.android;
final class e extends com.flurry.android.an {
    private synthetic android.content.Context a;
    private synthetic boolean b;
    private synthetic com.flurry.android.FlurryAgent c;

    e(com.flurry.android.FlurryAgent p1, android.content.Context p2, boolean p3)
    {
        this.c = p1;
        this.a = p2;
        this.b = p3;
        return;
    }

    public final void a()
    {
        if (!com.flurry.android.FlurryAgent.a(this.c)) {
            com.flurry.android.FlurryAgent.a(this.c, this.a);
        }
        com.flurry.android.FlurryAgent.a(this.c, this.a, this.b);
        return;
    }
}
