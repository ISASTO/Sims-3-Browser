package com.flurry.android;
final class ah {
    private static String a;

    static ah()
    {
        com.flurry.android.ah.a = "FlurryAgent";
        return;
    }

    ah()
    {
        return;
    }

    static boolean a(java.io.File p4)
    {
        int v0_3;
        int v0_0 = p4.getParentFile();
        if ((v0_0.mkdirs()) || (v0_0.exists())) {
            v0_3 = 1;
        } else {
            com.flurry.android.bm.b(com.flurry.android.ah.a, new StringBuilder().append("Unable to create persistent dir: ").append(v0_0).toString());
            v0_3 = 0;
        }
        return v0_3;
    }
}
