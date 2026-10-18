package com.flurry.android;
final class bo implements com.flurry.android.ao {
    static String a;
    static int b;
    private static java.util.List e;
    private static com.flurry.org.apache.avro.io.DecoderFactory f;
    private static com.flurry.android.z g;
    private long A;
    private long B;
    private java.util.Map C;
    private String D;
    private android.os.Handler E;
    private com.flurry.android.ICustomAdNetworkHandler F;
    private com.flurry.android.FlurryAdListener G;
    private volatile boolean H;
    private volatile java.util.List I;
    private volatile java.util.Map J;
    private volatile java.util.List K;
    private volatile java.util.List L;
    private volatile boolean M;
    private java.util.Map N;
    private com.flurry.android.AdUnit O;
    private final java.util.Map P;
    private final java.util.Set Q;
    com.flurry.android.aa c;
    com.flurry.android.bn d;
    private com.flurry.android.be h;
    private com.flurry.android.v i;
    private android.view.Display j;
    private boolean k;
    private java.io.File l;
    private String m;
    private String n;
    private String o;
    private String p;
    private boolean q;
    private volatile String r;
    private volatile String s;
    private volatile float t;
    private volatile float u;
    private volatile java.util.Map v;
    private com.flurry.android.bl w;
    private com.flurry.android.AdUnit x;
    private String y;
    private long z;

    static bo()
    {
        com.flurry.android.bo.a = "FlurryAgent";
        com.flurry.android.bo.b = 5;
        return;
    }

    bo()
    {
        this.k = 0;
        this.l = 0;
        this.q = 1;
        this.r = 0;
        this.s = 0;
        this.I = new java.util.concurrent.CopyOnWriteArrayList();
        this.J = new java.util.HashMap();
        this.K = new java.util.ArrayList();
        this.L = new java.util.ArrayList();
        this.M = 0;
        com.flurry.android.v v0_15 = new java.util.HashMap();
        v0_15.put("open", "directOpen");
        v0_15.put("expand", "doExpand");
        v0_15.put("collapse", "doCollapse");
        this.P = java.util.Collections.unmodifiableMap(v0_15);
        com.flurry.android.v v0_18 = new java.util.HashSet();
        int v1_4 = new String[5];
        v1_4[0] = "closeAd";
        v1_4[1] = "processRedirect";
        v1_4[2] = "nextFrame";
        v1_4[3] = "nextAdUnit";
        v1_4[4] = "notifyUser";
        v0_18.addAll(java.util.Arrays.asList(v1_4));
        this.Q = java.util.Collections.unmodifiableSet(v0_18);
        com.flurry.android.v v0_21 = new android.os.HandlerThread("FlurryAdThread");
        v0_21.start();
        this.E = new android.os.Handler(v0_21.getLooper());
        this.c = new com.flurry.android.aa();
        com.flurry.android.v v0_27 = new Integer[6];
        v0_27[0] = Integer.valueOf(0);
        v0_27[1] = Integer.valueOf(1);
        v0_27[2] = Integer.valueOf(2);
        v0_27[3] = Integer.valueOf(3);
        v0_27[4] = Integer.valueOf(4);
        v0_27[5] = Integer.valueOf(5);
        com.flurry.android.bo.e = java.util.Arrays.asList(v0_27);
        com.flurry.android.bo.f = new com.flurry.org.apache.avro.io.DecoderFactory();
        com.flurry.android.bo.g = new com.flurry.android.z(this);
        this.i = new com.flurry.android.v(this);
        return;
    }

    private static int a(byte[] p1)
    {
        int v0_1 = new com.flurry.android.CrcMessageDigest();
        v0_1.update(p1);
        return v0_1.getChecksum();
    }

    private declared_synchronized com.flurry.android.at a(String p7, boolean p8, java.util.Map p9)
    {
        try {
            return new com.flurry.android.at(p7, p8, this.d(), p9);
        } catch (Throwable v0_2) {
            throw v0_2;
        }
    }

    private com.flurry.android.bl a(String p4, String p5, boolean p6)
    {
        com.flurry.android.bl v0_3 = ((com.flurry.android.bl) this.J.get(p4));
        if (v0_3 == null) {
            v0_3 = com.flurry.android.ac.a(this, p4);
        }
        return this.a(v0_3, p5, 1, 0);
    }

    private static com.flurry.org.apache.avro.specific.SpecificRecordBase a(byte[] p4, Class p5)
    {
        try {
            int v0_2 = ((com.flurry.org.apache.avro.specific.SpecificRecordBase) new com.flurry.org.apache.avro.specific.SpecificDatumReader(p5).read(0, com.flurry.android.bo.f.binaryDecoder(new java.io.ByteArrayInputStream(p4), 0)));
        } catch (int v0_6) {
            new StringBuilder().append("ClassCastException in parseAvroBinary:").append(v0_6.getMessage()).toString();
            v0_2 = 0;
        } catch (int v0_3) {
            new StringBuilder().append("IOException in parseAvroBinary:").append(v0_3.getMessage()).toString();
            v0_2 = 0;
        }
        return v0_2;
    }

    static synthetic java.io.File a(com.flurry.android.bo p1)
    {
        return p1.l;
    }

    private String a(com.flurry.android.bl p5, com.flurry.android.AdUnit p6, com.flurry.android.y p7, String p8)
    {
        java.util.regex.Pattern v1 = java.util.regex.Pattern.compile(".*?(%\\{\\w+\\}).*?");
        java.util.regex.Matcher v0_2 = v1.matcher(p8);
        while (v0_2.matches()) {
            p8 = this.i.a(p5, p6, p8, v0_2.group(1));
            v0_2 = v1.matcher(p8);
        }
        return p8;
    }

    private static java.util.List a(com.flurry.android.AdFrame p9, com.flurry.android.bj p10)
    {
        java.util.ArrayList v2_1 = new java.util.ArrayList();
        String v3 = p10.a;
        java.util.Iterator v4 = p9.e().iterator();
        while (v4.hasNext()) {
            com.flurry.android.y v0_1 = ((com.flurry.android.Callback) v4.next());
            if (v0_1.a().toString().equals(v3)) {
                java.util.Iterator v5 = v0_1.b().iterator();
                while (v5.hasNext()) {
                    com.flurry.android.y v0_6 = ((CharSequence) v5.next());
                    java.util.HashMap v6_1 = new java.util.HashMap();
                    com.flurry.android.y v0_7 = v0_6.toString();
                    java.util.Map v7_0 = v0_7.indexOf(63);
                    if (v7_0 != -1) {
                        com.flurry.android.y v1_6 = v0_7.substring(0, v7_0);
                        com.flurry.android.y v0_8 = v0_7.substring((v7_0 + 1));
                        if (v0_8.contains("%{eventParams}")) {
                            v0_8 = v0_8.replace("%{eventParams}", "");
                            v6_1.putAll(p10.b);
                        }
                        v6_1.putAll(com.flurry.android.ac.e(v0_8));
                        v0_7 = v1_6;
                    }
                    v2_1.add(new com.flurry.android.y(v0_7, v6_1, p10));
                }
            }
        }
        return v2_1;
    }

    private void a(android.content.Context p3, String p4, boolean p5)
    {
        if (this.o()) {
            this.E.post(new com.flurry.android.c(this, p4, p3, p5));
        }
        return;
    }

    private declared_synchronized void a(com.flurry.android.SdkLogResponse p3)
    {
        try {
            if (p3.a().toString().equals("success")) {
                this.I.removeAll(this.K);
            }
        } catch (java.util.List v0_1) {
            throw v0_1;
        }
        return;
    }

    private declared_synchronized void a(java.util.List p6, java.io.DataOutputStream p7)
    {
        try {
            int v2 = p6.size();
            int v1 = 0;
        } catch (String v0_8) {
            throw v0_8;
        }
        while (v1 < v2) {
            try {
                ((com.flurry.android.bl) p6.get(v1)).a(p7);
            } catch (String v0) {
                com.flurry.android.bm.a(com.flurry.android.bo.a, new StringBuilder().append("unable to convert adLog to byte[]: ").append(((com.flurry.android.bl) p6.get(v1)).b()).toString());
            }
            v1++;
        }
        return;
    }

    static boolean a(android.content.Context p2, String p3, String p4)
    {
        boolean v0_1 = new android.content.Intent(p4);
        v0_1.setData(android.net.Uri.parse(p3));
        return com.flurry.android.ac.a(p2, v0_1);
    }

    private boolean a(byte[] p5, String p6)
    {
        String v0_17;
        if (p6 != null) {
            String v0_5;
            if (!p6.equals("/v3/getAds.do")) {
                String v0_2;
                String v1_6 = new StringBuilder();
                if (this.s == null) {
                    if (!com.flurry.android.FlurryAgent.getUseHttps()) {
                        v0_2 = "http://adlog.flurry.com";
                    } else {
                        v0_2 = "https://adlog.flurry.com";
                    }
                } else {
                    v0_2 = this.s;
                }
                v0_5 = v1_6.append(v0_2).append(p6).toString();
            } else {
                String v0_8;
                String v1_1 = new StringBuilder();
                if (this.r == null) {
                    if (!com.flurry.android.FlurryAgent.getUseHttps()) {
                        v0_8 = "http://ads.flurry.com";
                    } else {
                        v0_8 = "https://ads.flurry.com";
                    }
                } else {
                    v0_8 = this.r;
                }
                v0_5 = v1_1.append(v0_8).append(p6).toString();
            }
            String v0_12 = this.b(p5, v0_5);
            try {
                if ((v0_12 != null) && (p6.equals("/postAdLog.do"))) {
                    this.b(v0_12);
                }
            } catch (String v0_13) {
                com.flurry.android.bm.b(com.flurry.android.bo.a, new StringBuilder().append("IOException: ").append(v0_13.toString()).toString());
            }
            v0_17 = 1;
        } else {
            v0_17 = 0;
        }
        return v0_17;
    }

    private static byte[] a(java.io.InputStream p4)
    {
        byte[] v0_1 = new java.io.ByteArrayOutputStream();
        byte[] v1_1 = new byte[128];
        while(true) {
            int v2 = p4.read(v1_1);
            if (v2 == -1) {
                break;
            }
            v0_1.write(v1_1, 0, v2);
        }
        return v0_1.toByteArray();
    }

    private void b(byte[] p4)
    {
        String v0_5 = ((com.flurry.android.SdkLogResponse) com.flurry.android.bo.a(p4, com.flurry.android.SdkLogResponse));
        if (v0_5 != null) {
            new StringBuilder().append("got an AdLogResponse:").append(v0_5).toString();
            if (!v0_5.a().toString().equals("success")) {
                java.util.Iterator v1_4 = v0_5.b().iterator();
                while (v1_4.hasNext()) {
                    com.flurry.android.bm.b(com.flurry.android.bo.a, ((CharSequence) v1_4.next()).toString());
                }
            } else {
                this.a(v0_5);
            }
        }
        return;
    }

    static synthetic boolean b(com.flurry.android.bo p1)
    {
        return p1.k;
    }

    private byte[] b(String p6, int p7, int p8, boolean p9, com.flurry.android.FlurryAdSize p10)
    {
        com.flurry.android.AdRequest v1_21 = com.flurry.android.AdRequest.a().setApiKey(this.y).setAdSpaceName("").setBindings(com.flurry.android.bo.e).setAdReportedIds(this.q()).setLocation(com.flurry.android.Location.a().setLat(this.t).setLon(this.u).build()).setTestDevice(this.M).setAgentVersion(Integer.toString(com.flurry.android.FlurryAgent.getAgentVersion())).setSessionId(this.z).setAdViewContainer(com.flurry.android.AdViewContainer.a().setScreenHeight(this.j.getHeight()).setScreenWidth(this.j.getWidth()).setViewHeight(p8).setViewWidth(p7).build()).setLocale(this.m).setTimezone(this.n).setOsVersion(this.o).setDevicePlatform(this.p).build();
        if (!p9) {
            v1_21.a(p6);
        } else {
            v1_21.a(Boolean.valueOf(p9));
        }
        if (p10 != null) {
            v1_21.a(com.flurry.android.TestAds.a().setAdspacePlacement(p10.a()).build());
        }
        if (this.N != null) {
            java.io.ByteArrayOutputStream v2_15 = new java.util.HashMap();
            com.flurry.org.apache.avro.io.BinaryEncoder v3_2 = this.N.entrySet().iterator();
            while (v3_2.hasNext()) {
                byte[] v0_11 = ((java.util.Map$Entry) v3_2.next());
                v2_15.put(v0_11.getKey(), v0_11.getValue());
            }
            v1_21.a(v2_15);
        }
        new StringBuilder().append("Got ad request  ").append(v1_21).toString();
        byte[] v0_6 = new com.flurry.org.apache.avro.specific.SpecificDatumWriter(com.flurry.android.AdRequest);
        java.io.ByteArrayOutputStream v2_4 = new java.io.ByteArrayOutputStream();
        com.flurry.org.apache.avro.io.BinaryEncoder v3_1 = com.flurry.org.apache.avro.io.EncoderFactory.get().directBinaryEncoder(v2_4, 0);
        try {
            v0_6.write(v1_21, v3_1);
            v3_1.flush();
            byte[] v0_7 = v2_4.toByteArray();
        } catch (byte[] v0_8) {
            v0_8.getMessage();
            v0_7 = new byte[0];
        }
        return v0_7;
    }

    private byte[] b(byte[] p8, String p9)
    {
        boolean v1_1 = new org.apache.http.entity.ByteArrayEntity(p8);
        v1_1.setContentType("avro/binary");
        byte[] v0_5 = new org.apache.http.client.methods.HttpPost(p9);
        v0_5.setEntity(v1_1);
        v0_5.setHeader("accept", "avro/binary");
        v0_5.setHeader("FM-Checksum", Integer.toString(com.flurry.android.bo.a(p8)));
        String v2_2 = new org.apache.http.params.BasicHttpParams();
        org.apache.http.params.HttpConnectionParams.setConnectionTimeout(v2_2, 10000);
        org.apache.http.params.HttpConnectionParams.setSoTimeout(v2_2, 15000);
        v0_5.getParams().setBooleanParameter("http.protocol.expect-continue", 0);
        try {
            byte[] v0_0;
            String v2_4 = this.h.a(v2_2).execute(v0_5);
            byte[] v0_3 = v2_4.getStatusLine().getStatusCode();
        } catch (byte[] v0_11) {
            com.flurry.android.bm.b(com.flurry.android.bo.a, new StringBuilder().append("IOException: ").append(v0_11.toString()).toString());
            v0_0 = 0;
            return v0_0;
        }
        if ((v0_3 != 200) || ((v2_4.getEntity() == null) || (v2_4.getEntity().getContentLength() == 0))) {
            com.flurry.android.bm.b(com.flurry.android.bo.a, new StringBuilder().append("Request failed with HTTP ").append(v0_3).toString());
        } else {
            com.flurry.android.bm.c(com.flurry.android.bo.a, "Request successful");
            v0_0 = com.flurry.android.bo.a(v2_4.getEntity().getContent());
            v1_1.consumeContent();
            boolean v1_4 = Integer.toString(com.flurry.android.bo.a(v0_0));
            if ((v2_4.containsHeader("FM-Checksum")) && (!v2_4.getFirstHeader("FM-Checksum").getValue().equals(v1_4))) {
            } else {
                return v0_0;
            }
        }
    }

    static synthetic com.flurry.android.be c(com.flurry.android.bo p1)
    {
        return p1.h;
    }

    static synthetic boolean c(android.content.Context p1)
    {
        return com.flurry.android.bo.f(p1);
    }

    static synthetic boolean d(android.content.Context p1)
    {
        return com.flurry.android.bo.e(p1);
    }

    private static boolean e(android.content.Context p1)
    {
        return ((android.app.KeyguardManager) p1.getSystemService("keyguard")).inKeyguardRestrictedInputMode();
    }

    private static boolean f(android.content.Context p3)
    {
        int v0_3;
        if (p3.checkCallingOrSelfPermission("android.permission.ACCESS_NETWORK_STATE") == 0) {
            int v0_1 = ((android.net.ConnectivityManager) p3.getSystemService("connectivity")).getActiveNetworkInfo();
            if ((v0_1 == 0) || ((!v0_1.isConnected()) && (!v0_1.isRoaming()))) {
                v0_3 = 0;
            } else {
                v0_3 = 1;
            }
            if (v0_3 == 0) {
                com.flurry.android.bm.d(com.flurry.android.bo.a, "No connectivity found.");
            }
        } else {
            v0_3 = 1;
        }
        return v0_3;
    }

    private boolean f(String p2)
    {
        return this.c.b(p2);
    }

    private com.flurry.android.aj g(String p2)
    {
        return this.d.c(p2);
    }

    private void h(String p2)
    {
        this.d.d(p2);
        return;
    }

    private boolean o()
    {
        if (!this.H) {
            com.flurry.android.bm.d(com.flurry.android.bo.a, "Flurry Ads not initialized");
        }
        if (this.D == null) {
            com.flurry.android.bm.d(com.flurry.android.bo.a, "Cannot identify UDID.");
        }
        return this.H;
    }

    private byte[] p()
    {
        byte[] v0_0 = 0;
        java.io.IOException v1_2 = this.q();
        java.io.ByteArrayOutputStream v3_6 = com.flurry.android.bo.g.a(this.I);
        if (v3_6.size() != 0) {
            java.io.IOException v1_5 = com.flurry.android.SdkLogRequest.a().setApiKey(this.y).setAdReportedIds(v1_2).setSdkAdLogs(v3_6).setTestDevice(0).setAgentTimestamp(System.currentTimeMillis()).build();
            new StringBuilder().append("Got ad log request:").append(v1_5.toString()).toString();
            com.flurry.org.apache.avro.specific.SpecificDatumWriter v2_9 = new com.flurry.org.apache.avro.specific.SpecificDatumWriter(com.flurry.android.SdkLogRequest);
            java.io.ByteArrayOutputStream v3_5 = new java.io.ByteArrayOutputStream();
            com.flurry.org.apache.avro.io.BinaryEncoder v4_2 = com.flurry.org.apache.avro.io.EncoderFactory.get().directBinaryEncoder(v3_5, 0);
            try {
                v2_9.write(v1_5, v4_2);
                v4_2.flush();
                v0_0 = v3_5.toByteArray();
            } catch (java.io.IOException v1_6) {
                v1_6.getMessage();
            }
        } else {
        }
        return v0_0;
    }

    private java.util.List q()
    {
        java.util.ArrayList v2_1 = new java.util.ArrayList();
        v2_1.add(com.flurry.android.AdReportedId.a().setId(java.nio.ByteBuffer.wrap(this.D.getBytes())).setType(0).build());
        java.util.Iterator v3 = this.C.entrySet().iterator();
        while (v3.hasNext()) {
            com.flurry.android.AdReportedId v0_8 = ((java.util.Map$Entry) v3.next());
            v2_1.add(com.flurry.android.AdReportedId.a().setId(((java.nio.ByteBuffer) v0_8.getValue())).setType(((Integer) v0_8.getKey()).intValue()).build());
        }
        return v2_1;
    }

    final declared_synchronized com.flurry.android.bl a(com.flurry.android.bl p2, String p3, boolean p4, java.util.Map p5)
    {
        try {
        } catch (com.flurry.android.at v0_5) {
            throw v0_5;
        }
        if (!this.I.contains(p2)) {
            this.I.add(p2);
        }
        p2.a(this.a(p3, p4, p5));
        return p2;
    }

    final java.util.List a(String p5, int p6, int p7, boolean p8, com.flurry.android.FlurryAdSize p9)
    {
        java.util.List v0_9;
        String v1_0 = this.b(p5, p6, p7, p8, p9);
        if ((v1_0 != null) && (v1_0.length >= 1)) {
            java.util.List v0_0;
            if (this.r == null) {
                if (!com.flurry.android.FlurryAgent.getUseHttps()) {
                    v0_0 = "http://ads.flurry.com/v3/getAds.do";
                } else {
                    v0_0 = "https://ads.flurry.com/v3/getAds.do";
                }
            } else {
                v0_0 = new StringBuilder().append(this.r).append("/v3/getAds.do").toString();
            }
            java.util.List v0_5 = this.b(v1_0, v0_0);
            if ((v0_5 != null) && (v0_5.length >= 1)) {
                java.util.List v0_7 = ((com.flurry.android.AdResponse) com.flurry.android.bo.a(v0_5, com.flurry.android.AdResponse));
                if (v0_7 != null) {
                    new StringBuilder().append("adResponse: ").append(v0_7).toString();
                    if (v0_7.b().size() <= 0) {
                        if ((v0_7.a() != null) && (v0_7.a().size() != 0)) {
                            v0_9 = v0_7.a();
                        } else {
                            com.flurry.android.bm.b(com.flurry.android.bo.a, "Ad server responded but sent no ad units.");
                            v0_9 = java.util.Collections.emptyList();
                        }
                    } else {
                        com.flurry.android.bm.b(com.flurry.android.bo.a, "Ad server responded with the following error(s):");
                        String v1_14 = v0_7.b().iterator();
                        while (v1_14.hasNext()) {
                            com.flurry.android.bm.b(com.flurry.android.bo.a, ((CharSequence) v1_14.next()).toString());
                        }
                        v0_9 = java.util.Collections.emptyList();
                    }
                } else {
                    v0_9 = java.util.Collections.emptyList();
                }
            } else {
                v0_9 = java.util.Collections.emptyList();
            }
        } else {
            v0_9 = java.util.Collections.emptyList();
        }
        return v0_9;
    }

    final void a()
    {
        this.d.a(0);
        this.j();
        return;
    }

    final void a(float p1, float p2)
    {
        this.t = p1;
        this.u = p2;
        return;
    }

    final void a(android.content.Context p2)
    {
        this.d.a(p2);
        this.d.a();
        return;
    }

    final void a(android.content.Context p3, long p4, long p6)
    {
        this.z = p4;
        this.A = p6;
        this.B = 0;
        this.d.a(p3);
        return;
    }

    final void a(android.content.Context p4, com.flurry.android.p p5)
    {
        if (!this.H) {
            this.y = p5.a;
            this.d = new com.flurry.android.bn(p4);
            this.H = 1;
        }
        this.h = p5.b;
        this.m = p5.d;
        this.n = p5.e;
        this.o = android.os.Build$VERSION.RELEASE;
        this.p = android.os.Build.DEVICE;
        this.j = ((android.view.WindowManager) p4.getSystemService("window")).getDefaultDisplay();
        this.l = p4.getFileStreamPath(new StringBuilder().append(".flurryadlog.").append(Integer.toString(this.y.hashCode(), 16)).toString());
        this.q = com.flurry.android.bo.a(p4, new StringBuilder().append("market://details?id=").append(p4.getPackageName()).toString(), "android.intent.action.VIEW");
        this.v = new java.util.HashMap();
        return;
    }

    final void a(android.content.Context p16, String p17)
    {
        com.flurry.android.AdUnit v5_0 = this.c.a(p17);
        if (v5_0 != null) {
            if (this.G != null) {
                this.G.spaceDidReceiveAd(p17.toString());
            }
            int v1_5;
            com.flurry.android.ba v13_1 = new com.flurry.android.ba();
            this.O = v5_0;
            int v1_8 = v5_0.c();
            if (v1_8.size() <= 0) {
                v1_5 = new com.flurry.android.ba();
            } else {
                int v8_6 = ((com.flurry.android.AdFrame) v1_8.get(0));
                String v11_1 = v8_6.a().intValue();
                String v10_1 = v8_6.c().toString();
                String v9_1 = v8_6.d().d().toString();
                com.flurry.android.AdCreative v6_3 = this.a(v8_6.f().toString(), "requested", 1);
                this.a(new com.flurry.android.bj("filled", java.util.Collections.emptyMap(), p16, v5_0, v6_3, 0), this, 1);
                if (this.O != null) {
                    int v4_1;
                    com.flurry.android.AdCreative v6_4;
                    int v1_68;
                    String v2_31;
                    String v3_4;
                    if (this.O == v5_0) {
                        v4_1 = v6_3;
                        v1_68 = v8_6;
                        v2_31 = v9_1;
                        v3_4 = v10_1;
                        v6_4 = v11_1;
                    } else {
                        com.flurry.android.AdCreative v6_5 = this.O;
                        v1_68 = ((com.flurry.android.AdFrame) v6_5.c().get(0));
                        com.flurry.android.AdUnit v5_1 = v1_68.a().intValue();
                        v3_4 = v1_68.c().toString();
                        v2_31 = v1_68.d().d().toString();
                        v4_1 = this.a(v1_68.f().toString(), "requested", 1);
                        v5_0 = v6_5;
                        v6_4 = v5_1;
                    }
                    new StringBuilder().append("Processing ad request for binding: ").append(v6_4).append(", networkType: ").append(v3_4).append(", format: ").append(v2_31).toString();
                    if ((v5_0.d().intValue() != 1) && ((v6_4 != 2) && ((v6_4 != 1) && (v6_4 != 3)))) {
                        if (v6_4 != 4) {
                            new StringBuilder().append("Do not support binding: ").append(v6_4).toString();
                            v1_5 = v13_1;
                        } else {
                            int v1_21;
                            int v1_6 = v1_68.d();
                            com.flurry.android.AdCreative v6_1 = new com.flurry.android.AdCreative(v1_6.b().intValue(), v1_6.a().intValue(), v1_6.d().toString(), v1_6.c().toString(), v1_6.e().toString());
                            if (!v3_4.equalsIgnoreCase("Admob")) {
                                if (!v3_4.equalsIgnoreCase("Millennial Media")) {
                                    if (!v3_4.equalsIgnoreCase("InMobi")) {
                                        if (!v3_4.equalsIgnoreCase("Mobclix")) {
                                            if (!v3_4.equalsIgnoreCase("Jumptap")) {
                                                int v1_19 = this.F;
                                                if (v1_19 == 0) {
                                                    com.flurry.android.bm.d(com.flurry.android.bo.a, "No CustomAdNetworkHandler set");
                                                    v1_21 = 0;
                                                } else {
                                                    v1_21 = v1_19.getAdFromNetwork(p16, v6_1, v3_4);
                                                    if (v1_21 == 0) {
                                                        com.flurry.android.bm.d(com.flurry.android.bo.a, "CustomAdNetworkHandler returned null banner view");
                                                    } else {
                                                        v1_21.a = this;
                                                        v1_21.b = v4_1;
                                                        v1_21.d = 0;
                                                        v1_21.c = v5_0;
                                                    }
                                                }
                                            } else {
                                                new StringBuilder().append("Retrieving BannerView for:").append(v3_4).toString();
                                                v1_21 = new com.flurry.android.g(p16, this, v4_1, v6_1);
                                                v1_21.d = 0;
                                                v1_21.c = v5_0;
                                            }
                                        } else {
                                            new StringBuilder().append("Retrieving BannerView for:").append(v3_4).toString();
                                            v1_21 = new com.flurry.android.ag(p16, this, v4_1, v6_1);
                                            v1_21.d = 0;
                                            v1_21.c = v5_0;
                                        }
                                    } else {
                                        new StringBuilder().append("Retrieving BannerView for:").append(v3_4).toString();
                                        v1_21 = new com.flurry.android.ae(p16, this, v4_1, v6_1);
                                        v1_21.d = 0;
                                        v1_21.c = v5_0;
                                    }
                                } else {
                                    new StringBuilder().append("Retrieving BannerView for:").append(v3_4).toString();
                                    v1_21 = new com.flurry.android.al(p16, this, v4_1, v6_1);
                                    v1_21.d = 0;
                                    v1_21.c = v5_0;
                                }
                            } else {
                                new StringBuilder().append("Retrieving BannerView for:").append(v3_4).toString();
                                v1_21 = new com.flurry.android.ab(p16, this, v4_1, v6_1);
                                v1_21.d = 0;
                                v1_21.c = v5_0;
                            }
                            v1_5 = new com.flurry.android.bh(v1_21, v5_0);
                        }
                    } else {
                        if (!v2_31.equals("takeover")) {
                            v1_5 = new com.flurry.android.bh(new com.flurry.android.ap(p16, this, v4_1, v5_0, 0), v5_0);
                        } else {
                            this.w = v4_1;
                            this.x = v5_0;
                            v1_5 = new com.flurry.android.bk(v5_0);
                        }
                    }
                } else {
                    v1_5 = new com.flurry.android.ba();
                }
            }
            this.d.a(p17, v1_5);
        } else {
            if (this.G != null) {
                this.G.spaceDidFailToReceiveAd(p17.toString());
            }
        }
        return;
    }

    final void a(android.content.Context p9, String p10, android.view.ViewGroup p11, com.flurry.android.FlurryAdSize p12)
    {
        if ((!this.f(p10)) || (com.flurry.android.bo.e(p9))) {
            if (!com.flurry.android.bo.e(p9)) {
                Void[] v1_1 = new Void[0];
                new com.flurry.android.n(this, p9, p10, p12, p11, 1, 0).execute(v1_1);
            }
        } else {
            this.a(p9, p10);
        }
        return;
    }

    final void a(com.flurry.android.AdUnit p1)
    {
        this.x = p1;
        return;
    }

    final void a(com.flurry.android.FlurryAdListener p1)
    {
        if (p1 != null) {
            this.G = p1;
        }
        return;
    }

    final void a(com.flurry.android.ICustomAdNetworkHandler p1)
    {
        if (p1 != null) {
            this.F = p1;
        }
        return;
    }

    public final void a(com.flurry.android.bj p8, com.flurry.android.ao p9, int p10)
    {
        new StringBuilder().append("onEvent:event=").append(p8.a).append(",params=").append(p8.b).toString();
        String v2_4 = com.flurry.android.bo.a(((com.flurry.android.AdFrame) p8.d.c().get(p8.f)), p8);
        if (v2_4.isEmpty()) {
            java.util.Map v3_3 = this.P.entrySet().iterator();
            while (v3_3.hasNext()) {
                String v0_34 = ((java.util.Map$Entry) v3_3.next());
                if (((String) v0_34.getKey()).equals(p8.a)) {
                    v2_4.add(new com.flurry.android.y(((String) v0_34.getValue()), p8.b, p8));
                }
            }
        }
        if (p8.a.equals("adWillClose")) {
            if (!p8.a.equals("clicked")) {
                if (this.G != null) {
                    this.G.onAdClosed(p8.d.a().toString());
                }
            } else {
                if (this.G != null) {
                    this.G.onAdClicked(p8.d.a().toString());
                    this.G.onAdClosed(p8.d.a().toString());
                }
            }
            java.util.Map v3_4 = v2_4.iterator();
            while (v3_4.hasNext()) {
                if (this.Q.contains(((com.flurry.android.y) v3_4.next()).a)) {
                    String v0_55 = 1;
                }
                if (v0_55 == null) {
                    v2_4.add(new com.flurry.android.y("closeAd", java.util.Collections.emptyMap(), p8));
                }
            }
            v0_55 = 0;
        }
        if ((p8.a.equals("renderFailed")) && (this.G != null)) {
            this.G.onRenderFailed(p8.d.a().toString());
        }
        if ((p8.a.equals("clicked")) && (this.G != null)) {
            this.G.onAdClicked(p8.d.a().toString());
            this.G.onAdOpened(p8.d.a().toString());
        }
        java.util.Set v4_0 = v2_4.iterator();
        String v1_11 = 0;
        while (v4_0.hasNext()) {
            java.util.Map v3_1;
            String v2_3 = ((com.flurry.android.y) v4_0.next());
            if (!v2_3.a.equals("logEvent")) {
                v3_1 = v1_11;
            } else {
                v2_3.b.put("__sendToServer", "true");
                v3_1 = v2_3;
            }
            if (v2_3.a.equals("loadAdComponents")) {
                java.util.Iterator v5 = v2_3.c.b.entrySet().iterator();
                while (v5.hasNext()) {
                    String v0_29 = ((java.util.Map$Entry) v5.next());
                    v2_3.b.put(((String) v0_29.getKey()).toString(), ((String) v0_29.getValue()).toString());
                }
            }
            p9.a(v2_3, this, (p10 + 1));
            v1_11 = v3_1;
        }
        if (v1_11 == null) {
            String v0_13 = new java.util.HashMap();
            v0_13.put("__sendToServer", "false");
            p9.a(new com.flurry.android.y("logEvent", v0_13, p8), this, (p10 + 1));
        }
        return;
    }

    final declared_synchronized void a(com.flurry.android.bl p3)
    {
        try {
            if (this.I.size() < 32767) {
                this.I.add(p3);
                this.J.put(p3.b(), p3);
            }
        } catch (java.util.Map v0_1) {
            throw v0_1;
        }
        return;
    }

    public final void a(com.flurry.android.y p8, com.flurry.android.bo p9, int p10)
    {
        com.flurry.android.aa v1_0 = 1;
        new StringBuilder().append("performAction:action=").append(p8.a).append(",params=").append(p8.b).append(",triggering event=").append(p8.c.a).toString();
        com.flurry.android.bn v0_51 = p8.a;
        com.flurry.android.x v3_12 = p8.c.c;
        String v5_1 = p8.c.e;
        long v4_10 = p8.c.d;
        if (p10 <= 10) {
            if (!v0_51.equals("directOpen")) {
                if (!v0_51.equals("processRedirect")) {
                    if (!v0_51.equals("verifyUrl")) {
                        if (!v0_51.equals("launchPackage")) {
                            if (!v0_51.equals("sendUrlAsync")) {
                                if (!v0_51.equals("sendAdLogs")) {
                                    if (!v0_51.equals("logEvent")) {
                                        if (!v0_51.equals("nextFrame")) {
                                            if (!v0_51.equals("nextAdUnit")) {
                                                new StringBuilder().append("Unknown action:").append(v0_51).append(",triggered by:").append(p8.c.a).toString();
                                            } else {
                                                com.flurry.android.x v3_19 = this.d.a(v4_10.a().toString());
                                                if (v3_19 == null) {
                                                    this.O = this.c.a(p8.c.d.a().toString());
                                                } else {
                                                    com.flurry.android.bn v0_6;
                                                    if (!p8.b.containsKey("delay")) {
                                                        v0_6 = 30;
                                                    } else {
                                                        try {
                                                            v0_6 = Long.parseLong(((String) p8.b.get("delay")));
                                                        } catch (com.flurry.android.bn v0) {
                                                            new StringBuilder().append("caught NumberFormatException with delay parameter in nextAdUnit:").append(((String) p8.b.get("delay"))).toString();
                                                        }
                                                    }
                                                    v3_19.a(((int) (v0_6 * 1000)));
                                                    this.d.a(v3_19);
                                                }
                                            }
                                        }
                                    } else {
                                        if ((!p8.b.containsKey("__sendToServer")) || (!((String) p8.b.get("__sendToServer")).equals("true"))) {
                                            com.flurry.android.bn v0_24 = 0;
                                        } else {
                                            v0_24 = 1;
                                        }
                                        p8.b.remove("__sendToServer");
                                        this.a(p8.c.e, p8.c.a, v0_24, p8.b);
                                    }
                                } else {
                                    this.j();
                                }
                            } else {
                                if (p8.b.containsKey("url")) {
                                    if (this.G != null) {
                                        this.G.onApplicationExit(v4_10.a().toString());
                                    }
                                    com.flurry.android.bn v0_33 = this.a(v5_1, v4_10, p8, ((String) p8.b.get("url")));
                                    new StringBuilder().append("url after is: ").append(v0_33).toString();
                                    this.E.post(new com.flurry.android.d(this, v3_12, v0_33));
                                }
                            }
                        } else {
                            if (p8.b.containsKey("package")) {
                                com.flurry.android.bn v0_40 = ((String) p8.b.get("package"));
                                com.flurry.android.aa v1_18 = v3_12.getPackageManager().getLaunchIntentForPackage(v0_40);
                                if ((v1_18 == null) || (!com.flurry.android.ac.a(v3_12, v1_18))) {
                                    this.a(v3_12, new StringBuilder().append("https://play.google.com/store/apps/details?id=").append(v0_40).toString(), 0);
                                } else {
                                    v3_12.startActivity(v1_18);
                                }
                            }
                        }
                    } else {
                        if (p8.b.containsKey("url")) {
                            com.flurry.android.bn v0_49 = v3_12.getPackageManager().getLaunchIntentForPackage(((String) p8.b.get("url")));
                            if ((v0_49 == null) || (!com.flurry.android.ac.a(v3_12, v0_49))) {
                                v1_0 = 0;
                            }
                            com.flurry.android.aa v1_22;
                            if (v1_0 == null) {
                                v1_22 = "urlNotVerified";
                            } else {
                                v1_22 = "urlVerified";
                            }
                            p9.a(new com.flurry.android.bj(v1_22, java.util.Collections.emptyMap(), p8.c.c, v4_10, v5_1, p8.c.f), this, (p10 + 1));
                        }
                    }
                } else {
                    if (p8.b.containsKey("url")) {
                        if (this.G != null) {
                            this.G.onApplicationExit(v4_10.a().toString());
                        }
                        com.flurry.android.bn v0_60 = ((String) p8.b.get("url"));
                        if (!v0_60.startsWith("http")) {
                            this.a(v3_12, v0_60, 0);
                        } else {
                            long v4_8 = this.a(v5_1, v4_10, p8, v0_60);
                            try {
                                String v5_3 = new Void[0];
                                com.flurry.android.bn v0_65 = ((String) new com.flurry.android.ai(this, v3_12, v4_8).execute(v5_3).get());
                            } catch (com.flurry.android.bn v0_67) {
                                v0_67.printStackTrace();
                                v0_65 = "";
                            } catch (com.flurry.android.bn v0_66) {
                                v0_66.printStackTrace();
                                v0_65 = "";
                            }
                            if (v0_65 == null) {
                                com.flurry.android.bm.d(com.flurry.android.bo.a, new StringBuilder().append("Redirect URL could not be found for: ").append(v4_8).toString());
                            } else {
                                this.a(v3_12, v0_65, 1);
                            }
                        }
                    }
                }
            } else {
                if (!p8.c.b.containsKey("url")) {
                    com.flurry.android.bm.b(com.flurry.android.bo.a, new StringBuilder().append("failed to perform directOpen action: no url in ").append(p8.c.a).toString());
                } else {
                    com.flurry.android.bn v0_77 = ((String) p8.c.b.get("url"));
                    if (!v0_77.startsWith("market://")) {
                        com.flurry.android.aa v1_39 = new android.content.Intent();
                        v1_39.setClass(v3_12, com.flurry.android.FlurryFullscreenTakeoverActivity);
                        v1_39.putExtra("url", v0_77);
                        if (!com.flurry.android.ac.a(v3_12, v1_39)) {
                            com.flurry.android.bm.d(com.flurry.android.bo.a, "Can\'t start FlurryFullscreenTakeoverActivity, was it declared in the manifest? Falling back to default browser");
                            com.flurry.android.ac.a(v3_12, v0_77);
                        } else {
                            v3_12.startActivity(v1_39);
                            if (this.G != null) {
                                this.G.onAdOpened(v4_10.a().toString());
                            }
                        }
                    } else {
                        if (this.G != null) {
                            this.G.onApplicationExit(v4_10.a().toString());
                        }
                        this.b(v3_12, v0_77);
                    }
                }
            }
        } else {
            new StringBuilder().append("Maximum depth for event/action loop exceeded when performing action:").append(v0_51).append(",").append(p8.b).append(",triggered by:").append(p8.c.a).toString();
        }
        return;
    }

    final declared_synchronized void a(java.io.DataInputStream p4)
    {
        try {
            while (p4.readUnsignedShort() != 0) {
                this.I.add(new com.flurry.android.bl(p4));
            }
        } catch (Throwable v0_2) {
            throw v0_2;
        }
        this.k = 1;
        return;
    }

    final void a(String p1)
    {
        this.D = p1;
        return;
    }

    final void a(java.util.List p1)
    {
        this.K = p1;
        return;
    }

    final void a(java.util.Map p1)
    {
        this.C = p1;
        return;
    }

    final void a(boolean p1)
    {
        this.M = p1;
        return;
    }

    final boolean a(android.content.Context p3, String p4, android.view.ViewGroup p5)
    {
        int v0_0;
        this.a(p3, p4);
        if (!(this.g(p4) instanceof com.flurry.android.ba)) {
            if (this.G != null) {
                this.G.spaceDidReceiveAd(p4.toString());
            }
            this.b(p3, p4, p5);
            v0_0 = 1;
        } else {
            if (this.G != null) {
                this.G.spaceDidFailToReceiveAd(p4.toString());
            }
            v0_0 = 0;
        }
        return v0_0;
    }

    final boolean a(android.content.Context p8, String p9, com.flurry.android.FlurryAdSize p10, long p11)
    {
        int v1 = 0;
        if (!this.f(p9)) {
            boolean v0_4;
            if (com.flurry.android.FlurryAgent.a()) {
                v0_4 = 0;
            } else {
                v0_4 = 500;
            }
            this.E.postDelayed(new com.flurry.android.h(this, p8, p9, p10), ((long) v0_4));
            long v3_1 = System.currentTimeMillis();
            while (com.flurry.android.ac.a((v3_1 + p11))) {
                if (this.f(p9)) {
                    v1 = 1;
                    break;
                }
            }
        } else {
            v1 = 1;
        }
        return v1;
    }

    final boolean a(android.content.Context p9, String p10, com.flurry.android.FlurryAdSize p11, android.view.ViewGroup p12, long p13)
    {
        boolean v0_12;
        if (this.f(p10)) {
            if (com.flurry.android.bo.e(p9)) {
                v0_12 = 0;
            } else {
                v0_12 = this.a(p9, p10, p12);
            }
        } else {
            if ((!com.flurry.android.bo.f(p9)) || (com.flurry.android.bo.e(p9))) {
                if ((!com.flurry.android.bo.f(p9)) && (this.G != null)) {
                    this.G.spaceDidFailToReceiveAd(p10.toString());
                }
            } else {
                int v6;
                if (p13 != 0) {
                    v6 = 0;
                } else {
                    v6 = 1;
                }
                int v7;
                if (p13 != 0) {
                    v7 = 0;
                } else {
                    v7 = 1;
                }
                Void[] v1_7 = new Void[0];
                new com.flurry.android.n(this, p9, p10, p11, p12, v6, v7).execute(v1_7);
                if (p13 > 0) {
                    boolean v0_11 = System.currentTimeMillis();
                    while (com.flurry.android.ac.a((v0_11 + p13))) {
                        if (this.f(p10)) {
                            v0_12 = this.a(p9, p10, p12);
                        }
                        return v0_12;
                    }
                }
            }
            v0_12 = 0;
        }
        return v0_12;
    }

    final long b()
    {
        return this.z;
    }

    final void b(android.content.Context p6)
    {
        com.flurry.android.bm.c(com.flurry.android.bo.a, "Initializing ads -- requesting ads with precaching enabled on the server");
        int v0_1 = 0;
        if (!com.flurry.android.FlurryAgent.a()) {
            v0_1 = 500;
        }
        this.E.postDelayed(new com.flurry.android.f(this, p6), ((long) v0_1));
        return;
    }

    final void b(android.content.Context p5, String p6)
    {
        if (!p6.startsWith("market://details?id=")) {
            com.flurry.android.bm.d(com.flurry.android.bo.a, new StringBuilder().append("Unexpected Google Play url scheme: ").append(p6).toString());
        } else {
            Exception v0_3 = p6.substring("market://details?id=".length());
            if (!this.q) {
                com.flurry.android.ac.a(p5, new StringBuilder().append("https://market.android.com/details?id=").append(v0_3).toString());
            } else {
                try {
                    com.flurry.android.ac.a(p5, p6);
                } catch (Exception v0_7) {
                    com.flurry.android.bm.b(com.flurry.android.bo.a, new StringBuilder().append("Cannot launch Google Play url ").append(p6).toString(), v0_7);
                }
            }
        }
        return;
    }

    final void b(android.content.Context p5, String p6, android.view.ViewGroup p7)
    {
        com.flurry.android.aj v0 = this.g(p6);
        if (v0 != null) {
            if (this.G != null) {
                if (!(v0 instanceof com.flurry.android.bh)) {
                    this.G.shouldDisplayAd(p6.toString(), com.flurry.android.FlurryAdType.WEB_TAKEOVER);
                    this.G.onAdOpened(p6.toString());
                } else {
                    this.G.shouldDisplayAd(p6.toString(), com.flurry.android.FlurryAdType.WEB_BANNER);
                }
            }
            v0.a(p5, p7);
        }
        return;
    }

    final void b(com.flurry.android.bl p1)
    {
        this.w = p1;
        return;
    }

    final void b(String p3)
    {
        if (this.o()) {
            com.flurry.android.bn v0_3 = this.d.a(p3);
            if (v0_3 != null) {
                android.view.ViewGroup v1_1 = v0_3.e();
                if (v1_1 != null) {
                    v1_1.stop();
                }
                android.view.ViewGroup v1_0 = v0_3.c();
                if (v1_0 != null) {
                    v0_3.removeAllViews();
                    v1_0.removeView(v0_3);
                }
                this.h(p3);
                this.d.b(p3);
            } else {
                this.h(p3);
            }
        }
        return;
    }

    final void b(java.util.List p2)
    {
        this.c.a(p2);
        return;
    }

    final void b(java.util.Map p1)
    {
        if (p1 != null) {
            this.N = p1;
        }
        return;
    }

    final String c()
    {
        return this.y;
    }

    final void c(String p1)
    {
        this.r = p1;
        return;
    }

    final void c(java.util.Map p5)
    {
        if ((p5 != null) && (p5.size() > 0)) {
            java.util.Iterator v1 = p5.entrySet().iterator();
            while (v1.hasNext()) {
                Object v0_1 = ((java.util.Map$Entry) v1.next());
                this.v.put(v0_1.getKey(), v0_1.getValue());
            }
        }
        return;
    }

    final boolean c(android.content.Context p7, String p8)
    {
        int v0 = 1;
        String v2_0 = 0;
        while (v2_0 < 5) {
            if ((com.flurry.android.bo.f(p7) != 1) || (com.flurry.android.bo.e(p7))) {
                try {
                    Thread.sleep(100);
                } catch (InterruptedException v3_2) {
                    v3_2.getMessage();
                }
            } else {
                InterruptedException v3_4 = com.flurry.android.ac.a(this.h, p8, 10000, 15000, 1);
                if ((v3_4 != null) && (v3_4.getStatusLine().getStatusCode() == 200)) {
                    new StringBuilder().append("URL hit succeeded for: ").append(p8).toString();
                    return v0;
                }
            }
            v2_0++;
        }
        v0 = 0;
        return v0;
    }

    final declared_synchronized long d()
    {
        try {
            long v0_3 = (android.os.SystemClock.elapsedRealtime() - this.A);
        } catch (long v0_1) {
            throw v0_1;
        }
        if (v0_3 <= this.B) {
            v0_3 = (this.B + 1);
            this.B = v0_3;
        }
        this.B = v0_3;
        return this.B;
    }

    final void d(String p1)
    {
        this.s = p1;
        return;
    }

    final String e()
    {
        return this.D;
    }

    final void e(String p2)
    {
        byte[] v0 = this.p();
        if (v0 != null) {
            this.a(v0, p2);
        }
        return;
    }

    final void f()
    {
        this.N = 0;
        return;
    }

    final boolean g()
    {
        return this.H;
    }

    final void h()
    {
        this.v.clear();
        return;
    }

    final java.util.Map i()
    {
        return this.v;
    }

    final declared_synchronized void j()
    {
        try {
            this.E.post(new com.flurry.android.i(this));
            return;
        } catch (Throwable v0_2) {
            throw v0_2;
        }
    }

    final declared_synchronized void k()
    {
        try {
            if (com.flurry.android.ah.a(this.l)) {
                java.io.DataOutputStream v1_0 = new java.io.DataOutputStream(new java.io.FileOutputStream(this.l));
                try {
                    v1_0.writeShort(46586);
                } catch (Throwable v0_3) {
                    com.flurry.android.bm.b(com.flurry.android.bo.a, "", v0_3);
                    com.flurry.android.ac.a(v1_0);
                }
                this.a(this.I, v1_0);
                v1_0.writeShort(0);
                com.flurry.android.ac.a(v1_0);
            } else {
                com.flurry.android.ac.a(0);
            }
        } catch (Throwable v0_3) {
            v1_0 = 0;
        } catch (Throwable v0_9) {
            throw v0_9;
        } catch (Throwable v0_2) {
            com.flurry.android.ac.a(v1_0);
            throw v0_2;
        }
        return;
    }

    final declared_synchronized void l()
    {
        try {
            Void[] v1_1 = new Void[0];
            new com.flurry.android.k(this).execute(v1_1);
            return;
        } catch (Throwable v0_2) {
            throw v0_2;
        }
    }

    final com.flurry.android.bl m()
    {
        return this.w;
    }

    final com.flurry.android.AdUnit n()
    {
        return this.x;
    }
}
