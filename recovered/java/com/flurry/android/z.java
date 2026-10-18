package com.flurry.android;
final class z {
    private com.flurry.android.bo a;

    z(com.flurry.android.bo p1)
    {
        this.a = p1;
        return;
    }

    final java.util.List a(java.util.List p12)
    {
        java.util.concurrent.CopyOnWriteArrayList v2_1 = new java.util.concurrent.CopyOnWriteArrayList();
        java.util.Iterator v3 = p12.iterator();
        while (v3.hasNext()) {
            com.flurry.android.bo v0_1 = ((com.flurry.android.bl) v3.next());
            com.flurry.android.SdkAdLog v4_1 = new com.flurry.android.SdkAdLog();
            v4_1.a(Long.valueOf(v0_1.c()));
            v4_1.a(v0_1.b());
            java.util.concurrent.CopyOnWriteArrayList v5_2 = new java.util.concurrent.CopyOnWriteArrayList();
            try {
                java.util.Iterator v6 = v0_1.d().iterator();
            } catch (Object v1_12) {
                throw v1_12;
            }
            while (v6.hasNext()) {
                Object v1_5 = ((com.flurry.android.at) v6.next());
                if (v1_5.b()) {
                    com.flurry.android.SdkAdEvent v7_2 = new com.flurry.android.SdkAdEvent();
                    v7_2.a(v1_5.a());
                    v7_2.a(Long.valueOf(v1_5.c()));
                    Object v1_6 = v1_5.d();
                    java.util.HashMap v8_4 = new java.util.HashMap();
                    java.util.Iterator v9 = v1_6.entrySet().iterator();
                    while (v9.hasNext()) {
                        Object v1_10 = ((java.util.Map$Entry) v9.next());
                        v8_4.put(v1_10.getKey(), v1_10.getValue());
                    }
                    v7_2.a(v8_4);
                    v5_2.add(v7_2);
                }
            }
            v4_1.a(v5_2);
            v2_1.add(v4_1);
        }
        this.a.a(p12);
        return v2_1;
    }
}
