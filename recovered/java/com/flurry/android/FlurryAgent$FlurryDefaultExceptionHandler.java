package com.flurry.android;
public class FlurryAgent$FlurryDefaultExceptionHandler implements java.lang.Thread$UncaughtExceptionHandler {
    private Thread$UncaughtExceptionHandler a;

    FlurryAgent$FlurryDefaultExceptionHandler()
    {
        this.a = Thread.getDefaultUncaughtExceptionHandler();
        return;
    }

    public void uncaughtException(Thread p4, Throwable p5)
    {
        try {
            com.flurry.android.FlurryAgent.d().a(p5);
        } catch (Thread$UncaughtExceptionHandler v0_1) {
            com.flurry.android.bm.b("FlurryAgent", "", v0_1);
        }
        if (this.a != null) {
            this.a.uncaughtException(p4, p5);
        }
        return;
    }
}
