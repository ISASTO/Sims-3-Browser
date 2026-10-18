package com.flurry.android;
abstract class an implements java.lang.Runnable {

    public an()
    {
        return;
    }

    public abstract void a();

    public final void run()
    {
        try {
            this.a();
        } catch (Throwable v0) {
            v0.printStackTrace();
            com.flurry.android.bm.b("FlurryAgent", "", v0);
        }
        return;
    }
}
