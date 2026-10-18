package com.flurry.android;
final class av implements android.content.DialogInterface$OnClickListener {
    private synthetic com.flurry.android.bj a;
    private synthetic int b;
    private synthetic com.flurry.android.ap c;

    av(com.flurry.android.ap p1, com.flurry.android.bj p2, int p3)
    {
        this.c = p1;
        this.a = p2;
        this.b = p3;
        return;
    }

    public final void onClick(android.content.DialogInterface p8, int p9)
    {
        java.util.HashMap v2_1 = new java.util.HashMap();
        v2_1.put("sourceEvent", this.a.a);
        this.c.a("userConfirmed", v2_1, this.c.c, this.c.b, this.c.d, (this.b + 1));
        p8.dismiss();
        if ((com.flurry.android.ap.o(this.c) != null) && (this.c.b() == 3)) {
            com.flurry.android.ap.o(this.c).start();
        }
        return;
    }
}
