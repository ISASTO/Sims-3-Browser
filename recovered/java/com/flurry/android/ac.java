package com.flurry.android;
final class ac {

    ac()
    {
        return;
    }

    static int a(android.content.Context p1)
    {
        return p1.getResources().getDisplayMetrics().widthPixels;
    }

    static int a(android.content.Context p2, int p3)
    {
        return Math.round((p2.getResources().getDisplayMetrics().density * ((float) p3)));
    }

    static com.flurry.android.bl a(com.flurry.android.bo p3, String p4)
    {
        long v1 = p3.b();
        p3.d();
        com.flurry.android.bl v0_1 = new com.flurry.android.bl(v1, p4);
        p3.a(v0_1);
        return v0_1;
    }

    static String a(String p2)
    {
        if (p2 != null) {
            if (p2.length() > 255) {
                p2 = p2.substring(0, 255);
            }
        } else {
            p2 = "";
        }
        return p2;
    }

    static org.apache.http.HttpResponse a(com.flurry.android.be p5, String p6, int p7, int p8, boolean p9)
    {
        try {
            Exception v1_2 = new org.apache.http.client.methods.HttpGet(p6);
            String v2_4 = new org.apache.http.params.BasicHttpParams();
            org.apache.http.params.HttpConnectionParams.setConnectionTimeout(v2_4, 10000);
            org.apache.http.params.HttpConnectionParams.setSoTimeout(v2_4, 15000);
            v2_4.setParameter("http.protocol.handle-redirects", Boolean.valueOf(p9));
            org.apache.http.HttpResponse v0 = p5.a(v2_4).execute(v1_2);
        } catch (Exception v1_3) {
            com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("Unknown host: ").append(v1_3.getMessage()).toString());
        } catch (Exception v1_1) {
            com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("Failed to hit URL: ").append(p6).toString(), v1_1);
        }
        return v0;
    }

    static void a(java.io.Closeable p1)
    {
        if (p1 != null) {
            try {
                p1.close();
            } catch (Throwable v0) {
            }
        }
        return;
    }

    static boolean a(long p3)
    {
        int v0 = 0;
        if (System.currentTimeMillis() <= p3) {
            v0 = 1;
        }
        return v0;
    }

    static boolean a(android.content.Context p2, android.content.Intent p3)
    {
        int v0_3;
        if (p2.getPackageManager().queryIntentActivities(p3, 65536).size() <= 0) {
            v0_3 = 0;
        } else {
            v0_3 = 1;
        }
        return v0_3;
    }

    static boolean a(android.content.Context p4, String p5)
    {
        int v0_1;
        int v0_3 = new android.content.Intent("android.intent.action.VIEW").setData(android.net.Uri.parse(p5));
        if (!com.flurry.android.ac.a(p4, v0_3)) {
            v0_1 = 0;
        } else {
            com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("Launching intent for ").append(p5).toString());
            p4.startActivity(v0_3);
            v0_1 = 1;
        }
        return v0_1;
    }

    static int b(android.content.Context p1)
    {
        return p1.getResources().getDisplayMetrics().heightPixels;
    }

    private static int b(android.content.Context p2, int p3)
    {
        return Math.round((((float) p3) / p2.getResources().getDisplayMetrics().density));
    }

    static String b(String p3)
    {
        try {
            String v0_1 = java.net.URLEncoder.encode(p3, "UTF-8");
        } catch (String v0) {
            com.flurry.android.bm.d("FlurryAgent", new StringBuilder().append("Cannot encode \'").append(p3).append("\'").toString());
            v0_1 = "";
        }
        return v0_1;
    }

    static int c(android.content.Context p1)
    {
        return com.flurry.android.ac.b(p1, com.flurry.android.ac.a(p1));
    }

    static byte[] c(String p4)
    {
        try {
            int v0_4 = java.security.MessageDigest.getInstance("SHA-1");
            v0_4.update(p4.getBytes(), 0, p4.length());
            int v0_1 = v0_4.digest();
        } catch (int v0_2) {
            com.flurry.android.bm.b("FlurryAgent", new StringBuilder().append("Unsupported SHA1: ").append(v0_2.getMessage()).toString());
            v0_1 = 0;
        }
        return v0_1;
    }

    static int d(android.content.Context p1)
    {
        return com.flurry.android.ac.b(p1, com.flurry.android.ac.b(p1));
    }

    static String d(String p2)
    {
        return p2.replace("\'", "\\\'");
    }

    static java.util.Map e(String p8)
    {
        java.util.HashMap v2_1 = new java.util.HashMap();
        if ((p8 != null) && (!p8.isEmpty())) {
            String[] v3 = p8.split("&");
            int v4 = v3.length;
            int v0_0 = 0;
            while (v0_0 < v4) {
                String v5_1 = v3[v0_0].split("=");
                if (!v5_1[0].equals("event")) {
                    v2_1.put(com.flurry.android.ac.f(v5_1[0]), com.flurry.android.ac.f(v5_1[1]));
                }
                v0_0++;
            }
        }
        return v2_1;
    }

    private static String f(String p3)
    {
        try {
            String v0_1 = java.net.URLDecoder.decode(p3, "UTF-8");
        } catch (String v0) {
            com.flurry.android.bm.d("FlurryAgent", new StringBuilder().append("Cannot decode \'").append(p3).append("\'").toString());
            v0_1 = "";
        }
        return v0_1;
    }
}
