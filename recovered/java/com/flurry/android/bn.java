package com.flurry.android;
final class bn {
    private static String a;
    private static Runnable f;
    private java.util.Map b;
    private java.util.Map c;
    private java.util.Map d;
    private android.content.Context e;

    static bn()
    {
        com.flurry.android.bn.a = "FlurryAgent";
        return;
    }

    bn(android.content.Context p2)
    {
        this.b = new java.util.HashMap();
        this.c = new java.util.HashMap();
        this.d = new java.util.HashMap();
        this.e = p2;
        return;
    }

    final declared_synchronized com.flurry.android.x a(com.flurry.android.bo p4, android.content.Context p5, android.view.ViewGroup p6, String p7)
    {
        try {
            com.flurry.android.x v0_5;
            com.flurry.android.x v0_3 = ((ref.WeakReference) this.c.get(p7));
        } catch (com.flurry.android.x v0_1) {
            throw v0_1;
        }
        if (v0_3 != null) {
            v0_5 = ((com.flurry.android.x) v0_3.get());
        } else {
            v0_5 = new com.flurry.android.x(p4, p5, p7, p6);
            this.c.put(p7, new ref.WeakReference(v0_5));
        }
        return v0_5;
    }

    final declared_synchronized com.flurry.android.x a(String p2)
    {
        try {
            int v0_2;
            if (!this.c.containsKey(p2)) {
                v0_2 = 0;
            } else {
                v0_2 = ((com.flurry.android.x) ((ref.WeakReference) this.c.get(p2)).get());
            }
        } catch (int v0_3) {
            throw v0_3;
        }
        return v0_2;
    }

    final declared_synchronized void a()
    {
        try {
            com.flurry.android.x v0_5 = ((java.util.List) this.d.get(this.e));
        } catch (com.flurry.android.x v0_3) {
            throw v0_3;
        }
        if (v0_5 != null) {
            java.util.Iterator v1_1 = v0_5.iterator();
            while (v1_1.hasNext()) {
                com.flurry.android.x v0_2 = ((com.flurry.android.x) v1_1.next());
                if ((v0_2.a() > 0) && (!v0_2.b())) {
                    this.a(v0_2);
                }
            }
        }
        return;
    }

    final declared_synchronized void a(android.content.Context p2)
    {
        try {
            this.e = p2;
            return;
        } catch (Throwable v0) {
            throw v0;
        }
    }

    final declared_synchronized void a(com.flurry.android.x p4)
    {
        try {
            com.flurry.android.bn.f = new com.flurry.android.as(this, p4);
        } catch (int v0_3) {
            throw v0_3;
        }
        if (!p4.b()) {
            p4.postDelayed(com.flurry.android.bn.f, ((long) p4.a()));
            p4.a(1);
        }
        return;
    }

    final declared_synchronized void a(String p2, com.flurry.android.aj p3)
    {
        try {
            this.b.put(p2, p3);
            return;
        } catch (Throwable v0_1) {
            throw v0_1;
        }
    }

    final declared_synchronized void b(com.flurry.android.x p3)
    {
        try {
            p3.a(0);
            new StringBuilder().append("Rotating banner for adSpace: ").append(p3.d()).toString();
            p3.f();
        } catch (Throwable v0_3) {
            throw v0_3;
        }
        if (p3.a() > 0) {
            this.a(p3);
        }
        return;
    }

    final declared_synchronized void b(String p2)
    {
        try {
            this.c.remove(p2);
            return;
        } catch (Throwable v0_1) {
            throw v0_1;
        }
    }

    final declared_synchronized com.flurry.android.aj c(String p2)
    {
        try {
            com.flurry.android.ba v0_2 = ((com.flurry.android.aj) this.b.get(p2));
        } catch (com.flurry.android.ba v0_4) {
            throw v0_4;
        }
        if (v0_2 == null) {
            v0_2 = new com.flurry.android.ba();
        }
        return v0_2;
    }

    final declared_synchronized void d(String p2)
    {
        try {
            if (this.b.containsKey(p2)) {
                this.b.remove(p2);
            }
        } catch (java.util.Map v0_3) {
            throw v0_3;
        }
        return;
    }
}
