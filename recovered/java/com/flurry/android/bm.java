package com.flurry.android;
final class bm {
    private static boolean a;
    private static int b;

    static bm()
    {
        com.flurry.android.bm.a = 0;
        com.flurry.android.bm.b = 5;
        return;
    }

    bm()
    {
        return;
    }

    static int a(String p2, String p3)
    {
        if ((!com.flurry.android.bm.a) && (com.flurry.android.bm.b <= 3)) {
            int v0_2 = android.util.Log.d(p2, p3);
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    static int a(String p2, String p3, Throwable p4)
    {
        if ((!com.flurry.android.bm.a) && (com.flurry.android.bm.b <= 3)) {
            int v0_2 = android.util.Log.d(p2, p3, p4);
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    static void a()
    {
        com.flurry.android.bm.a = 1;
        return;
    }

    static void a(int p0)
    {
        com.flurry.android.bm.b = p0;
        return;
    }

    static boolean a(String p1)
    {
        return android.util.Log.isLoggable(p1, 3);
    }

    static int b(String p2, String p3)
    {
        if ((!com.flurry.android.bm.a) && (com.flurry.android.bm.b <= 6)) {
            int v0_2 = android.util.Log.e(p2, p3);
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    static int b(String p2, String p3, Throwable p4)
    {
        if ((!com.flurry.android.bm.a) && (com.flurry.android.bm.b <= 6)) {
            int v0_2 = android.util.Log.e(p2, p3, p4);
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    static void b()
    {
        com.flurry.android.bm.a = 0;
        return;
    }

    static int c(String p2, String p3)
    {
        if ((!com.flurry.android.bm.a) && (com.flurry.android.bm.b <= 4)) {
            int v0_2 = android.util.Log.i(p2, p3);
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    static int d(String p2, String p3)
    {
        if ((!com.flurry.android.bm.a) && (com.flurry.android.bm.b <= 5)) {
            int v0_2 = android.util.Log.w(p2, p3);
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }
}
