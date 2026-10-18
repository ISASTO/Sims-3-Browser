package com.flurry.android;
final class aa {
    private java.util.Map a;

    aa()
    {
        this.a = new java.util.HashMap();
        return;
    }

    final declared_synchronized com.flurry.android.AdUnit a(String p6)
    {
        try {
            com.flurry.android.AdUnit v0_1;
            com.flurry.android.AdUnit v0_5 = ((java.util.List) this.a.get(p6));
        } catch (com.flurry.android.AdUnit v0_3) {
            throw v0_3;
        }
        if (v0_5 == null) {
            v0_1 = 0;
        } else {
            java.util.Iterator v2 = v0_5.iterator();
            while (v2.hasNext()) {
                v0_1 = ((com.flurry.android.AdUnit) v2.next());
                if ((com.flurry.android.ac.a(v0_1.b().longValue())) && (v0_1.c().size() > 0)) {
                    v2.remove();
                }
            }
        }
        return v0_1;
    }

    final declared_synchronized java.util.List a(String p6, int p7)
    {
        try {
            java.util.ArrayList v1_1 = new java.util.ArrayList();
            com.flurry.android.AdUnit v0_7 = ((java.util.List) this.a.get(p6));
        } catch (com.flurry.android.AdUnit v0_5) {
            throw v0_5;
        }
        if (v0_7 != null) {
            java.util.Iterator v2 = v0_7.iterator();
            while ((v2.hasNext()) && (v1_1.size() <= p7)) {
                com.flurry.android.AdUnit v0_3 = ((com.flurry.android.AdUnit) v2.next());
                if ((com.flurry.android.ac.a(v0_3.b().longValue())) && ((v0_3.d().intValue() == 1) && (v0_3.c().size() > 0))) {
                    v1_1.add(v0_3);
                    v2.remove();
                }
            }
        }
        return v1_1;
    }

    final declared_synchronized void a(java.util.List p5)
    {
        try {
            java.util.Iterator v2 = p5.iterator();
        } catch (java.util.Map v0_0) {
            throw v0_0;
        }
        while (v2.hasNext()) {
            java.util.Map v0_4 = ((com.flurry.android.AdUnit) v2.next());
            String v3 = v0_4.a().toString();
            java.util.ArrayList v1_3 = ((java.util.List) this.a.get(v3));
            if (v1_3 == null) {
                v1_3 = new java.util.ArrayList();
            }
            v1_3.add(v0_4);
            this.a.put(v3, v1_3);
        }
        return;
    }

    final declared_synchronized boolean b(String p5)
    {
        try {
            int v0_3;
            int v0_9 = ((java.util.List) this.a.get(p5));
        } catch (int v0_2) {
            throw v0_2;
        }
        if ((v0_9 == 0) || (v0_9.isEmpty())) {
            v0_3 = 0;
        } else {
            java.util.Iterator v1_1 = v0_9.iterator();
            while (v1_1.hasNext()) {
                if (com.flurry.android.ac.a(((com.flurry.android.AdUnit) v1_1.next()).b().longValue())) {
                    v0_3 = 1;
                }
            }
        }
        return v0_3;
    }
}
