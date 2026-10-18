package com.flurry.android;
public final class InstallReceiver extends android.content.BroadcastReceiver {
    private final android.os.Handler a;
    private java.io.File b;

    public InstallReceiver()
    {
        this.b = 0;
        android.os.Looper v0_2 = new android.os.HandlerThread("InstallReceiver");
        v0_2.start();
        this.a = new android.os.Handler(v0_2.getLooper());
        return;
    }

    static synthetic java.io.File a(com.flurry.android.InstallReceiver p1)
    {
        return p1.b;
    }

    static synthetic String a(java.io.File p1)
    {
        return com.flurry.android.InstallReceiver.b(p1);
    }

    static java.util.Map a(String p8)
    {
        java.util.HashMap v3_1 = new java.util.HashMap();
        String[] v4 = p8.split("&");
        int v5 = v4.length;
        String v1_11 = 0;
        while (v1_11 < v5) {
            String v0_4 = v4[v1_11].split("=");
            if (v0_4.length == 2) {
                String v6_3 = java.net.URLDecoder.decode(v0_4[0]);
                String v7_2 = java.net.URLDecoder.decode(v0_4[1]);
                if (v3_1.get(v6_3) == null) {
                    v3_1.put(v6_3, new java.util.ArrayList());
                }
                ((java.util.List) v3_1.get(v6_3)).add(v7_2);
            } else {
                com.flurry.android.bm.a("InstallReceiver", new StringBuilder().append("Invalid referrer Element: ").append(v4[v1_11]).append(" in referrer tag ").append(p8).toString());
            }
            v1_11++;
        }
        String v0_0 = new StringBuilder();
        if (v3_1.get("utm_source") == null) {
            v0_0.append("Campaign Source is missing.\n");
        }
        if (v3_1.get("utm_medium") == null) {
            v0_0.append("Campaign Medium is missing.\n");
        }
        if (v3_1.get("utm_campaign") == null) {
            v0_0.append("Campaign Name is missing.\n");
        }
        if (v0_0.length() > 0) {
            android.util.Log.w("Detected missing referrer keys", v0_0.toString());
        }
        return v3_1;
    }

    private static String b(java.io.File p7)
    {
        String v0_0 = 0;
        try {
            int v3_1 = new java.io.FileInputStream(p7);
            try {
                Throwable v2_0 = new StringBuffer();
                try {
                    Throwable v1_2 = new byte[1024];
                } catch (Throwable v1_1) {
                    com.flurry.android.bm.b("InstallReceiver", "Error when loading persistent file", v1_1);
                    com.flurry.android.ac.a(v3_1);
                    if (v2_0 != null) {
                        v0_0 = v2_0.toString();
                    }
                    return v0_0;
                }
                while(true) {
                    int v4_0 = v3_1.read(v1_2);
                    if (v4_0 <= 0) {
                        break;
                    }
                    v2_0.append(new String(v1_2, 0, v4_0));
                }
                com.flurry.android.ac.a(v3_1);
            } catch (Throwable v1_1) {
                v2_0 = 0;
            }
        } catch (Throwable v1_1) {
            v2_0 = 0;
            v3_1 = 0;
        } catch (Throwable v1_3) {
            v3_1 = 0;
            String v0_1 = v1_3;
            com.flurry.android.ac.a(v3_1);
            throw v0_1;
        } catch (String v0_1) {
        }
    }

    private declared_synchronized void b(String p3)
    {
        try {
            this.a.post(new com.flurry.android.bc(this, p3));
            return;
        } catch (Throwable v0_2) {
            throw v0_2;
        }
    }

    public final void onReceive(android.content.Context p5, android.content.Intent p6)
    {
        com.flurry.android.bm.c("InstallReceiver", new StringBuilder().append("Received an Install nofication of ").append(p6.getAction()).toString());
        this.b = p5.getFileStreamPath(".flurryinstallreceiver.");
        com.flurry.android.bm.c("InstallReceiver", new StringBuilder().append("fInstallReceiverFile is ").append(this.b).toString());
        if (com.flurry.android.FlurryAgent.isCaptureUncaughtExceptions()) {
            Thread.setDefaultUncaughtExceptionHandler(new com.flurry.android.FlurryAgent$FlurryDefaultExceptionHandler());
        }
        String v0_8 = p6.getExtras().getString("referrer");
        com.flurry.android.bm.c("InstallReceiver", new StringBuilder().append("Received an Install referrer of ").append(v0_8).toString());
        if ((v0_8 != null) && ("com.android.vending.INSTALL_REFERRER".equals(p6.getAction()))) {
            if (!v0_8.contains("=")) {
                com.flurry.android.bm.c("InstallReceiver", new StringBuilder().append("referrer is before decoding: ").append(v0_8).toString());
                v0_8 = java.net.URLDecoder.decode(v0_8);
                com.flurry.android.bm.c("InstallReceiver", new StringBuilder().append("referrer is: ").append(v0_8).toString());
            }
            this.b(v0_8);
        } else {
            com.flurry.android.bm.c("InstallReceiver", "referrer is null");
        }
        return;
    }
}
