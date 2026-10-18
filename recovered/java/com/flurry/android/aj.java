package com.flurry.android;
abstract class aj {
    protected String a;

    aj(com.flurry.android.AdUnit p2)
    {
        if (p2 != null) {
            this.a = p2.a().toString();
        }
        return;
    }

    abstract void a(android.content.Context p0, android.view.ViewGroup p1);
}
