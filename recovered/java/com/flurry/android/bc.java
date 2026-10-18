package com.flurry.android;
final class bc extends com.flurry.android.an {
    private synthetic String a;
    private synthetic com.flurry.android.InstallReceiver b;

    bc(com.flurry.android.InstallReceiver p1, String p2)
    {
        this.b = p1;
        this.a = p2;
        return;
    }

    public final void a()
    {
        Object v2_0 = 0;
        try {
            StringBuilder v1_14 = com.flurry.android.InstallReceiver.a(this.b).getParentFile();
            new StringBuilder().append("dir is...").append(v1_14.toString()).toString();
        } catch (StringBuilder v1_3) {
            com.flurry.android.bm.b("InstallReceiver", "", v1_3);
            com.flurry.android.ac.a(v2_0);
            return;
        } catch (StringBuilder v1_13) {
            com.flurry.android.ac.a(v2_0);
            throw v1_13;
        }
        if ((v1_14.mkdirs()) || (v1_14.exists())) {
            String v3_5 = new java.io.FileOutputStream(com.flurry.android.InstallReceiver.a(this.b));
            try {
                v3_5.write(this.a.getBytes());
                java.util.Iterator v4_1 = com.flurry.android.InstallReceiver.a(com.flurry.android.InstallReceiver.a(com.flurry.android.InstallReceiver.a(this.b))).entrySet().iterator();
            } catch (StringBuilder v1_3) {
                v2_0 = v3_5;
            } catch (StringBuilder v1_13) {
                v2_0 = v3_5;
            }
            while (v4_1.hasNext()) {
                Object v2_1 = ((java.util.Map$Entry) v4_1.next());
                new StringBuilder().append("entry: ").append(((String) v2_1.getKey())).append("=").append(v2_1.getValue()).toString();
            }
            com.flurry.android.ac.a(v3_5);
            return;
        } else {
            com.flurry.android.bm.b("InstallReceiver", new StringBuilder().append("Unable to create persistent dir: ").append(v1_14).toString());
            com.flurry.android.ac.a(0);
            return;
        }
    }
}
