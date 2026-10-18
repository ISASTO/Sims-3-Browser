package com.flurry.android;
final class c extends com.flurry.android.an {
    private synthetic String a;
    private synthetic android.content.Context b;
    private synthetic boolean c;
    private synthetic com.flurry.android.bo d;

    c(com.flurry.android.bo p1, String p2, android.content.Context p3, boolean p4)
    {
        this.d = p1;
        this.a = p2;
        this.b = p3;
        this.c = p4;
        return;
    }

    public final void a()
    {
        if (this.a == null) {
            com.flurry.android.bm.d(com.flurry.android.bo.a, new StringBuilder().append("Unable to launch intent for: ").append(this.a).toString());
        } else {
            if (!this.a.startsWith("market://")) {
                if (!this.a.startsWith("http")) {
                    if (!com.flurry.android.ac.a(this.b, this.a)) {
                        com.flurry.android.bm.d(com.flurry.android.bo.a, new StringBuilder().append("Failed to launch intent for:").append(this.a).toString());
                    }
                } else {
                    String v0_12 = new android.content.Intent(this.b, com.flurry.android.FlurryFullscreenTakeoverActivity);
                    v0_12.putExtra("url", this.a);
                    if ((!this.c) || (!com.flurry.android.ac.a(this.b, v0_12))) {
                        com.flurry.android.bm.b(com.flurry.android.bo.a, "Unable to launch FlurryFullscreenTakeoverActivity, falling back to browser. Fix by declaring this Activity in your AndroidManifest.xml");
                        com.flurry.android.ac.a(this.b, this.a);
                    } else {
                        this.b.startActivity(v0_12);
                    }
                }
            } else {
                this.d.b(this.b, this.a);
            }
        }
        return;
    }
}
