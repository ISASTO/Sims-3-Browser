package com.flurry.android;
final class n extends android.os.AsyncTask {
    private android.content.Context a;
    private String b;
    private com.flurry.android.FlurryAdSize c;
    private android.view.ViewGroup d;
    private boolean e;
    private boolean f;
    private synthetic com.flurry.android.bo g;

    public n(com.flurry.android.bo p1, android.content.Context p2, String p3, com.flurry.android.FlurryAdSize p4, android.view.ViewGroup p5, boolean p6, boolean p7)
    {
        this.g = p1;
        this.a = p2;
        this.b = p3;
        this.c = p4;
        this.d = p5;
        this.e = p7;
        this.f = p6;
        return;
    }

    private varargs java.util.List a()
    {
        try {
            java.util.List v0_1 = this.g.a(this.b, this.d.getWidth(), this.d.getHeight(), 0, this.c);
        } catch (java.util.List v0_2) {
            v0_2.printStackTrace();
            v0_1 = java.util.Collections.emptyList();
        }
        return v0_1;
    }

    protected final bridge synthetic Object doInBackground(Object[] p2)
    {
        return this.a();
    }

    protected final bridge synthetic void onPostExecute(Object p5)
    {
        try {
            this.g.c.a(((java.util.List) p5));
        } catch (com.flurry.android.bo v0_5) {
            v0_5.printStackTrace();
            return;
        }
        if ((!this.f) || (this.e)) {
            if ((!this.f) || (!this.e)) {
                return;
            } else {
                this.g.a(this.a, this.b, this.d);
                return;
            }
        } else {
            this.g.a(this.a, this.b);
            return;
        }
    }
}
