package com.flurry.android;
final class bk extends com.flurry.android.aj {

    bk(com.flurry.android.AdUnit p1)
    {
        super(p1);
        return;
    }

    final void a(android.content.Context p4, android.view.ViewGroup p5)
    {
        String v0_1 = new android.content.Intent();
        v0_1.setClass(p4, com.flurry.android.FlurryFullscreenTakeoverActivity);
        v0_1.putExtra("frameIndex", 0);
        if (!com.flurry.android.ac.a(p4, v0_1)) {
            com.flurry.android.bm.b("FlurryAgent", "Unable to launch FlurryFullscreenTakeoverActivity. Fix by declaring this Activity in your AndroidManifest.xml");
        } else {
            p4.startActivity(v0_1);
        }
        return;
    }
}
