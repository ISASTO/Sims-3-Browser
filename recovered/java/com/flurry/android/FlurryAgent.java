package com.flurry.android;
public final class FlurryAgent implements android.location.LocationListener {
    private static java.util.Map Z;
    private static final String[] a;
    private static volatile String b;
    private static volatile String c;
    private static volatile String d;
    private static final com.flurry.android.FlurryAgent e;
    private static long f;
    private static boolean g;
    private static boolean h;
    private static boolean i;
    private static boolean j;
    private static android.location.Criteria k;
    private static boolean l;
    private static java.util.concurrent.atomic.AtomicInteger n;
    private static java.util.concurrent.atomic.AtomicInteger o;
    private java.util.List A;
    private android.location.LocationManager B;
    private String C;
    private java.util.Map D;
    private boolean E;
    private long F;
    private java.util.List G;
    private long H;
    private long I;
    private long J;
    private String K;
    private String L;
    private byte M;
    private String N;
    private byte O;
    private Long P;
    private int Q;
    private android.location.Location R;
    private java.util.Map S;
    private java.util.List T;
    private boolean U;
    private int V;
    private java.util.List W;
    private int X;
    private java.util.Map Y;
    private java.util.Map aa;
    private com.flurry.android.bo ab;
    private com.flurry.android.be ac;
    private com.flurry.android.ah ad;
    private final android.os.Handler m;
    private java.io.File p;
    private java.io.File q;
    private java.io.File r;
    private volatile boolean s;
    private volatile boolean t;
    private long u;
    private java.util.Map v;
    private String w;
    private String x;
    private String y;
    private boolean z;

    static FlurryAgent()
    {
        java.util.concurrent.atomic.AtomicInteger v0_10 = new String[2];
        v0_10[0] = "9774d56d682e549c";
        v0_10[1] = "dead00beef";
        com.flurry.android.FlurryAgent.a = v0_10;
        com.flurry.android.FlurryAgent.b = 0;
        com.flurry.android.FlurryAgent.c = "http://data.flurry.com/aap.do";
        com.flurry.android.FlurryAgent.d = "https://data.flurry.com/aap.do";
        com.flurry.android.FlurryAgent.e = new com.flurry.android.FlurryAgent();
        com.flurry.android.FlurryAgent.f = 10000;
        com.flurry.android.FlurryAgent.g = 1;
        com.flurry.android.FlurryAgent.h = 0;
        com.flurry.android.FlurryAgent.i = 0;
        com.flurry.android.FlurryAgent.j = 1;
        com.flurry.android.FlurryAgent.k = 0;
        com.flurry.android.FlurryAgent.l = 0;
        com.flurry.android.FlurryAgent.n = new java.util.concurrent.atomic.AtomicInteger(0);
        com.flurry.android.FlurryAgent.o = new java.util.concurrent.atomic.AtomicInteger(0);
        return;
    }

    private FlurryAgent()
    {
        this.q = 0;
        this.r = 0;
        this.s = 0;
        this.t = 0;
        this.v = new java.util.WeakHashMap();
        this.z = 1;
        this.D = new java.util.HashMap();
        this.G = new java.util.ArrayList();
        this.K = "";
        this.L = "";
        this.M = -1;
        this.N = "";
        this.O = -1;
        this.S = new java.util.HashMap();
        this.T = new java.util.ArrayList();
        this.W = new java.util.ArrayList();
        this.ab = new com.flurry.android.bo();
        this.ac = new com.flurry.android.be();
        this.ad = new com.flurry.android.ah();
        android.os.Looper v0_22 = new android.os.HandlerThread("FlurryAgent");
        v0_22.start();
        this.m = new android.os.Handler(v0_22.getLooper());
        return;
    }

    private static double a(double p4)
    {
        return (((double) Math.round((p4 * 4652007308841189376))) / 4652007308841189376);
    }

    private static String a(java.io.File p7)
    {
        String v0_0 = 0;
        try {
            int v3_1 = new java.io.FileInputStream(p7);
            try {
                Throwable v2_0 = new StringBuffer();
                try {
                    Throwable v1_2 = new byte[1024];
                } catch (Throwable v1_1) {
                    com.flurry.android.bm.b("FlurryAgent", "Error when loading persistent file", v1_1);
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

    private void a(android.content.Context p7)
    {
        if (!com.flurry.android.FlurryAgent.l) {
            if (!this.ab.g()) {
                com.flurry.android.bm.a("FlurryAgent", "Initializing Flurry Ads");
                String v0_1 = new com.flurry.android.p();
                v0_1.a = this.w;
                v0_1.b = this.ac;
                v0_1.c = this.ad;
                v0_1.d = this.K;
                v0_1.e = this.L;
                this.ab.a(p7, v0_1);
                this.ab.l();
                if (com.flurry.android.FlurryAgent.Z != null) {
                    this.ab.c(com.flurry.android.FlurryAgent.Z);
                }
                com.flurry.android.bm.a("FlurryAgent", "Flurry Ads initialized");
            }
            this.ab.a(p7, this.H, this.I);
            com.flurry.android.FlurryAgent.l = 1;
        }
        return;
    }

    private declared_synchronized void a(android.content.Context p10, String p11)
    {
        try {
            if ((this.w != null) && (!this.w.equals(p11))) {
                com.flurry.android.bm.b("FlurryAgent", new StringBuilder().append("onStartSession called with different api keys: ").append(this.w).append(" and ").append(p11).toString());
            }
        } catch (String v1_56) {
            throw v1_56;
        }
        if (((android.content.Context) this.v.put(p10, p10)) != null) {
            com.flurry.android.bm.d("FlurryAgent", "onStartSession called with duplicate context, use a specific Activity or Service as context instead of using a global context");
        }
        if (!this.s) {
            com.flurry.android.bm.a("FlurryAgent", "Initializing Flurry session");
            com.flurry.android.FlurryAgent.n.set(0);
            com.flurry.android.FlurryAgent.o.set(0);
            this.w = p11;
            this.q = p10.getFileStreamPath(new StringBuilder().append(".flurryagent.").append(Integer.toString(this.w.hashCode(), 16)).toString());
            this.p = p10.getFileStreamPath(".flurryb.");
            this.r = p10.getFileStreamPath(".flurryinstallreceiver.");
            if (com.flurry.android.FlurryAgent.j) {
                Thread.setDefaultUncaughtExceptionHandler(new com.flurry.android.FlurryAgent$FlurryDefaultExceptionHandler());
            }
            Long v7_6 = p10.getApplicationContext();
            if (this.y == null) {
                this.y = com.flurry.android.FlurryAgent.d(v7_6);
            }
            String v1_82 = v7_6.getPackageName();
            if ((this.x != null) && (!this.x.equals(v1_82))) {
                com.flurry.android.bm.b("FlurryAgent", new StringBuilder().append("onStartSession called from different application packages: ").append(this.x).append(" and ").append(v1_82).toString());
            }
            this.x = v1_82;
            String v1_1 = android.os.SystemClock.elapsedRealtime();
            if ((v1_1 - this.u) <= com.flurry.android.FlurryAgent.f) {
                com.flurry.android.bm.a("FlurryAgent", "Continuing previous session");
                if (!this.G.isEmpty()) {
                    this.G.remove((this.G.size() - 1));
                }
                if (com.flurry.android.FlurryAgent.l) {
                    this.ab.a(p10);
                }
            } else {
                com.flurry.android.bm.a("FlurryAgent", "New session");
                this.H = System.currentTimeMillis();
                this.I = v1_1;
                this.J = -1;
                this.N = "";
                this.Q = 0;
                this.R = 0;
                this.L = java.util.TimeZone.getDefault().getID();
                this.K = new StringBuilder().append(java.util.Locale.getDefault().getLanguage()).append("_").append(java.util.Locale.getDefault().getCountry()).toString();
                this.S = new java.util.HashMap();
                this.T = new java.util.ArrayList();
                this.U = 1;
                this.W = new java.util.ArrayList();
                this.V = 0;
                this.X = 0;
                if (com.flurry.android.FlurryAgent.l) {
                    this.ab.a(p10, this.H, this.I);
                }
                this.a(new com.flurry.android.e(this, v7_6, this.z));
                if ((p10 instanceof android.app.Activity)) {
                    android.os.Bundle v4_1 = ((android.app.Activity) p10).getIntent().getExtras();
                    if (v4_1 != null) {
                        com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("Launch Options Bundle is present ").append(v4_1.toString()).toString());
                        this.aa = new java.util.HashMap();
                        java.util.Iterator v5_2 = v4_1.keySet().iterator();
                        while (v5_2.hasNext()) {
                            String v2_22 = ((String) v5_2.next());
                            if (this.aa.get(v2_22) == null) {
                                this.aa.put(v2_22, new java.util.ArrayList());
                            }
                            String v3_23;
                            Boolean v6_0 = v4_1.get(v2_22);
                            if (!v6_0.getClass().isInstance("")) {
                                if (!v6_0.getClass().isInstance(Integer.valueOf(0))) {
                                    if (!v6_0.getClass().isInstance(Long.valueOf(0))) {
                                        if (!v6_0.getClass().isInstance(Boolean.valueOf(0))) {
                                            v3_23 = "";
                                        } else {
                                            v3_23 = Boolean.toString(v4_1.getBoolean(v2_22));
                                        }
                                    } else {
                                        v3_23 = Long.toString(v4_1.getLong(v2_22));
                                    }
                                } else {
                                    v4_1.getInt(v2_22);
                                    v3_23 = Integer.toString(0);
                                }
                            } else {
                                v3_23 = v4_1.getString(v2_22);
                            }
                            ((java.util.List) this.aa.get(v2_22)).add(v3_23);
                            com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("Launch options Key: ").append(v2_22).append(". Its value: ").append(v3_23).toString());
                        }
                    }
                }
            }
            this.s = 1;
        }
        return;
    }

    private declared_synchronized void a(android.content.Context p6, boolean p7)
    {
        try {
            if ((p6 != null) && (((android.content.Context) this.v.remove(p6)) == null)) {
                com.flurry.android.bm.d("FlurryAgent", "onEndSession called without context from corresponding onStartSession");
            }
        } catch (int v0_11) {
            throw v0_11;
        }
        if ((this.s) && (this.v.isEmpty())) {
            int v0_4;
            com.flurry.android.bm.a("FlurryAgent", "Ending session");
            this.n();
            if (p6 != null) {
                v0_4 = p6.getApplicationContext();
            } else {
                v0_4 = 0;
            }
            if (p6 != null) {
                com.flurry.android.a v1_1 = v0_4.getPackageName();
                if (!this.x.equals(v1_1)) {
                    com.flurry.android.bm.b("FlurryAgent", new StringBuilder().append("onEndSession called from different application package, expected: ").append(this.x).append(" actual: ").append(v1_1).toString());
                }
            }
            com.flurry.android.a v1_4 = android.os.SystemClock.elapsedRealtime();
            this.u = v1_4;
            this.J = (v1_4 - this.I);
            if (this.o() == null) {
                com.flurry.android.bm.b("FlurryAgent", "Not creating report because of bad Android ID or generated ID is null");
            }
            this.a(new com.flurry.android.a(this, p7, v0_4));
            if (com.flurry.android.FlurryAgent.l) {
                this.ab.a();
            }
            this.s = 0;
        }
        return;
    }

    static synthetic void a(com.flurry.android.FlurryAgent p0, android.content.Context p1)
    {
        p0.b(p1);
        return;
    }

    static synthetic void a(com.flurry.android.FlurryAgent p3, android.content.Context p4, boolean p5)
    {
        java.nio.ByteBuffer v0_0 = 0;
        try {
            if (!p5) {
                p3.R = v0_0;
                java.nio.ByteBuffer v0_4 = com.flurry.android.FlurryAgent.f(p4);
                if (v0_4 != null) {
                    p3.D.put(Integer.valueOf(com.flurry.android.bo.b), java.nio.ByteBuffer.wrap(v0_4));
                }
                p3.k();
            } else {
                v0_0 = p3.e(p4);
            }
        } catch (java.nio.ByteBuffer v0_2) {
            com.flurry.android.bm.b("FlurryAgent", "", v0_2);
        }
        return;
    }

    private void a(com.flurry.android.an p2)
    {
        this.m.post(p2);
        return;
    }

    private declared_synchronized void a(java.io.DataInputStream p6)
    {
        int v0_0 = 0;
        try {
            String v1_5 = p6.readUnsignedShort();
        } catch (int v0_4) {
            throw v0_4;
        }
        if (v1_5 <= 2) {
            if (v1_5 < 2) {
                com.flurry.android.bm.d("FlurryAgent", new StringBuilder().append("Deleting old file version: ").append(v1_5).toString());
            } else {
                String v1_4 = p6.readUTF();
                com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("Loading API key: ").append(com.flurry.android.FlurryAgent.c(this.w)).toString());
                if (!v1_4.equals(this.w)) {
                    com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("Api keys do not match, old: ").append(com.flurry.android.FlurryAgent.c(v1_4)).append(", new: ").append(com.flurry.android.FlurryAgent.c(this.w)).toString());
                } else {
                    String v1_11 = p6.readUTF();
                    if (this.o() == null) {
                        com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("Loading phoneId: ").append(v1_11).toString());
                    }
                    this.d(v1_11);
                    this.E = p6.readBoolean();
                    this.F = p6.readLong();
                    com.flurry.android.bm.a("FlurryAgent", "Loading session reports");
                    while(true) {
                        String v1_15 = p6.readUnsignedShort();
                        if (v1_15 == null) {
                            break;
                        }
                        String v1_17 = new byte[v1_15];
                        p6.readFully(v1_17);
                        this.G.add(0, v1_17);
                        v0_0++;
                        com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("Session report added: ").append(v0_0).toString());
                    }
                    com.flurry.android.bm.a("FlurryAgent", "Persistent file loaded");
                    this.t = 1;
                }
            }
            return;
        } else {
            com.flurry.android.bm.b("FlurryAgent", new StringBuilder().append("Unknown agent file version: ").append(v1_5).toString());
            throw new java.io.IOException(new StringBuilder().append("Unknown agent file version: ").append(v1_5).toString());
        }
    }

    private declared_synchronized void a(String p6)
    {
        try {
            long v1_2 = this.T.iterator();
        } catch (com.flurry.android.aq v0_1) {
            throw v0_1;
        }
        while (v1_2.hasNext()) {
            com.flurry.android.aq v0_4 = ((com.flurry.android.aq) v1_2.next());
            if (v0_4.a(p6)) {
                v0_4.a((android.os.SystemClock.elapsedRealtime() - this.I));
                break;
            }
        }
        return;
    }

    private declared_synchronized void a(String p9, String p10, String p11)
    {
        try {
            if (this.W != null) {
                if ((p9 == null) || (!"uncaught".equals(p9))) {
                    java.util.List v1_13 = 0;
                } else {
                    v1_13 = 1;
                }
                this.Q = (this.Q + 1);
                if (this.W.size() >= 50) {
                    if (v1_13 == null) {
                        com.flurry.android.bm.a("FlurryAgent", "Max errors logged. No more errors logged.");
                    } else {
                        int v7 = 0;
                        while (v7 < this.W.size()) {
                            com.flurry.android.bb v0_6 = ((com.flurry.android.bb) this.W.get(v7));
                            if ((v0_6.b() == null) || ("uncaught".equals(v0_6.b()))) {
                                v7++;
                            } else {
                                this.W.set(v7, new com.flurry.android.bb(com.flurry.android.FlurryAgent.o.incrementAndGet(), Long.valueOf(System.currentTimeMillis()).longValue(), p9, p10, p11));
                                break;
                            }
                        }
                    }
                } else {
                    com.flurry.android.bb v0_15 = new com.flurry.android.bb(com.flurry.android.FlurryAgent.o.incrementAndGet(), Long.valueOf(System.currentTimeMillis()).longValue(), p9, p10, p11);
                    this.W.add(v0_15);
                    com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("Error logged: ").append(v0_15.b()).toString());
                }
            } else {
                com.flurry.android.bm.b("FlurryAgent", new StringBuilder().append("onError called before onStartSession.  Error: ").append(p9).toString());
            }
        } catch (com.flurry.android.bb v0_20) {
            throw v0_20;
        }
        return;
    }

    private declared_synchronized void a(String p9, java.util.Map p10, boolean p11)
    {
        try {
            if (this.T != null) {
                long v4 = (android.os.SystemClock.elapsedRealtime() - this.I);
                int v2_4 = com.flurry.android.ac.a(p9);
                if (v2_4.length() != 0) {
                    String v0_14 = ((com.flurry.android.l) this.S.get(v2_4));
                    if (v0_14 != null) {
                        v0_14.a = (v0_14.a + 1);
                        com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("Event count incremented: ").append(v2_4).toString());
                    } else {
                        if (this.S.size() >= 100) {
                            if (com.flurry.android.bm.a("FlurryAgent")) {
                                com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("Too many different events. Event not counted: ").append(v2_4).toString());
                            }
                        } else {
                            String v0_24 = new com.flurry.android.l();
                            v0_24.a = 1;
                            this.S.put(v2_4, v0_24);
                            com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("Event count incremented: ").append(v2_4).toString());
                        }
                    }
                    if ((!com.flurry.android.FlurryAgent.g) || ((this.T.size() >= 200) || (this.V >= 16000))) {
                        this.U = 0;
                    } else {
                        String v3_4;
                        if (p10 != null) {
                            v3_4 = p10;
                        } else {
                            v3_4 = java.util.Collections.emptyMap();
                        }
                        if (v3_4.size() <= 10) {
                            String v0_33 = new com.flurry.android.aq(com.flurry.android.FlurryAgent.n.incrementAndGet(), v2_4, v3_4, v4, p11);
                            if ((v0_33.a().length + this.V) > 16000) {
                                this.V = 16000;
                                this.U = 0;
                                com.flurry.android.bm.a("FlurryAgent", "Event Log size exceeded. No more event details logged.");
                            } else {
                                this.T.add(v0_33);
                                this.V = (v0_33.a().length + this.V);
                                com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("Logged event: ").append(v2_4).toString());
                            }
                        } else {
                            if (com.flurry.android.bm.a("FlurryAgent")) {
                                com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("MaxEventParams exceeded: ").append(v3_4.size()).toString());
                            }
                        }
                    }
                }
            } else {
                com.flurry.android.bm.b("FlurryAgent", new StringBuilder().append("onEvent called before onStartSession.  Event: ").append(p9).toString());
            }
        } catch (String v0_15) {
            throw v0_15;
        }
        return;
    }

    static boolean a()
    {
        if ((!com.flurry.android.FlurryAgent.e.t) || (!com.flurry.android.FlurryAgent.e.s)) {
            int v0_4 = 0;
        } else {
            v0_4 = 1;
        }
        return v0_4;
    }

    static synthetic boolean a(com.flurry.android.FlurryAgent p1)
    {
        return p1.t;
    }

    private boolean a(byte[] p6)
    {
        boolean v0_4;
        boolean v0_3 = com.flurry.android.FlurryAgent.j();
        if (v0_3) {
            try {
                v0_4 = this.a(p6, v0_3);
            } catch (boolean v0_6) {
                com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("Sending report exception: ").append(v0_6.getMessage()).toString());
                v0_4 = 0;
            }
            if ((!v0_4) && ((com.flurry.android.FlurryAgent.b == null) && ((com.flurry.android.FlurryAgent.h) && (!com.flurry.android.FlurryAgent.i)))) {
                com.flurry.android.FlurryAgent.i = 1;
                String v3_2 = com.flurry.android.FlurryAgent.j();
                if (v3_2 != null) {
                    try {
                        v0_4 = this.a(p6, v3_2);
                    } catch (Exception v1) {
                    }
                } else {
                    v0_4 = 0;
                }
            }
        } else {
            v0_4 = 0;
        }
        return v0_4;
    }

    private boolean a(byte[] p7, String p8)
    {
        Throwable v0_0 = 1;
        if (!"local".equals(p8)) {
            com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("Sending report to: ").append(p8).toString());
            String v2_1 = new org.apache.http.entity.ByteArrayEntity(p7);
            v2_1.setContentType("application/octet-stream");
            StringBuilder v3_5 = new org.apache.http.client.methods.HttpPost(p8);
            v3_5.setEntity(v2_1);
            String v2_4 = new org.apache.http.params.BasicHttpParams();
            org.apache.http.params.HttpConnectionParams.setConnectionTimeout(v2_4, 10000);
            org.apache.http.params.HttpConnectionParams.setSoTimeout(v2_4, 15000);
            v3_5.getParams().setBooleanParameter("http.protocol.expect-continue", 0);
            String v2_9 = this.ac.a(v2_4).execute(v3_5).getStatusLine().getStatusCode();
            try {
                if (v2_9 != 200) {
                    com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("Report failed. HTTP response: ").append(v2_9).toString());
                    v0_0 = 0;
                } else {
                    com.flurry.android.bm.a("FlurryAgent", "Report successful");
                    this.E = 1;
                    this.G.removeAll(this.A);
                }
            } catch (Throwable v0_2) {
                throw v0_2;
            }
            this.A = 0;
        }
        return v0_0;
    }

    static com.flurry.android.bo b()
    {
        return com.flurry.android.FlurryAgent.e.ab;
    }

    private static java.util.Map b(String p8)
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
                com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("Invalid referrer Element: ").append(v4[v1_11]).append(" in referrer tag ").append(p8).toString());
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

    private declared_synchronized void b(android.content.Context p9)
    {
        try {
            int v3_0 = this.c(p9);
        } catch (String v0_2) {
            throw v0_2;
        }
        if (!this.q.exists()) {
            com.flurry.android.bm.c("FlurryAgent", "Agent cache file doesn\'t exist.");
        } else {
            com.flurry.android.bm.c("FlurryAgent", new StringBuilder().append("loading persistent data: ").append(this.q.getAbsolutePath()).toString());
            try {
                String v1_14 = new java.io.DataInputStream(new java.io.FileInputStream(this.q));
                try {
                    if (v1_14.readUnsignedShort() != 46586) {
                        com.flurry.android.bm.a("FlurryAgent", "Unexpected file type");
                    } else {
                        this.a(v1_14);
                    }
                } catch (String v0_7) {
                    com.flurry.android.bm.b("FlurryAgent", "Error when loading persistent file", v0_7);
                    com.flurry.android.ac.a(v1_14);
                    try {
                        if (!this.t) {
                            if (!this.q.delete()) {
                                com.flurry.android.bm.b("FlurryAgent", "Cannot delete persistence file");
                            } else {
                                com.flurry.android.bm.a("FlurryAgent", "Deleted persistence file");
                            }
                        }
                    } catch (String v0_17) {
                        com.flurry.android.bm.b("FlurryAgent", "", v0_17);
                    }
                }
                com.flurry.android.ac.a(v1_14);
            } catch (String v0_7) {
                v1_14 = 0;
            } catch (String v0_6) {
                v1_14 = 0;
                com.flurry.android.ac.a(v1_14);
                throw v0_6;
            } catch (String v0_6) {
            }
        }
        if (!this.t) {
            this.E = 0;
            this.F = this.H;
            this.t = 1;
        }
        String v0_1;
        if (v3_0 != 0) {
            v0_1 = v3_0;
        } else {
            v0_1 = new StringBuilder().append("ID").append(Long.toString((Double.doubleToLongBits(Math.random()) + (37 * (System.nanoTime() + ((long) (this.w.hashCode() * 37))))), 16)).toString();
            com.flurry.android.bm.c("FlurryAgent", "Generated id");
        }
        this.d(v0_1);
        this.ab.a(this.C);
        this.ab.a(this.D);
        if ((!v0_1.startsWith("AND")) && (!this.p.exists())) {
            this.b(p9, v0_1);
        }
        this.l();
        return;
    }

    private declared_synchronized void b(android.content.Context p5, String p6)
    {
        try {
            this.p = p5.getFileStreamPath(".flurryb.");
        } catch (Throwable v0_6) {
            throw v0_6;
        }
        if (com.flurry.android.ah.a(this.p)) {
            try {
                int v1_2 = new java.io.DataOutputStream(new java.io.FileOutputStream(this.p));
                try {
                    v1_2.writeInt(1);
                    v1_2.writeUTF(p6);
                } catch (Throwable v0_4) {
                    com.flurry.android.bm.b("FlurryAgent", "Error when saving b file", v0_4);
                    com.flurry.android.ac.a(v1_2);
                }
                com.flurry.android.ac.a(v1_2);
            } catch (Throwable v0_4) {
                v1_2 = 0;
            } catch (Throwable v0_3) {
                com.flurry.android.ac.a(v1_2);
                throw v0_3;
            }
        }
        return;
    }

    static synthetic void b(com.flurry.android.FlurryAgent p0)
    {
        p0.g();
        return;
    }

    static synthetic void b(com.flurry.android.FlurryAgent p4, android.content.Context p5)
    {
        try {
        } catch (int v0_4) {
            com.flurry.android.bm.b("FlurryAgent", "", v0_4);
            return;
        }
        int v0_2;
        int v0_5 = (android.os.SystemClock.elapsedRealtime() - p4.u);
        if ((p4.s) || ((v0_5 <= com.flurry.android.FlurryAgent.f) || (p4.G.size() <= 0))) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        if (v0_2 == 0) {
            return;
        } else {
            p4.k();
            return;
        }
    }

    static String c()
    {
        return com.flurry.android.FlurryAgent.e.w;
    }

    private String c(android.content.Context p8)
    {
        Throwable v1_0 = 0;
        Throwable v0_0 = this.o();
        if (v0_0 == null) {
            String v3_3 = android.provider.Settings$System.getString(p8.getContentResolver(), "android_id");
            if ((v3_3 != null) && ((v3_3.length() > 0) && (!v3_3.equals("null")))) {
                String v4_0 = com.flurry.android.FlurryAgent.a;
                int v2_3 = 0;
                while (v2_3 < v4_0.length) {
                    if (!v3_3.equals(v4_0[v2_3])) {
                        v2_3++;
                    }
                }
                v1_0 = 1;
            }
            if (v1_0 == null) {
                Throwable v1_2 = p8.getFileStreamPath(".flurryb.");
                if (v1_2.exists()) {
                    try {
                        int v2_6 = new java.io.DataInputStream(new java.io.FileInputStream(v1_2));
                        try {
                            v2_6.readInt();
                            v0_0 = v2_6.readUTF();
                            com.flurry.android.ac.a(v2_6);
                        } catch (Throwable v1_3) {
                            com.flurry.android.bm.b("FlurryAgent", "Error when loading b file", v1_3);
                            com.flurry.android.ac.a(v2_6);
                        }
                    } catch (Throwable v1_3) {
                        v2_6 = 0;
                    } catch (Throwable v0_1) {
                        v2_6 = 0;
                        com.flurry.android.ac.a(v2_6);
                        throw v0_1;
                    } catch (Throwable v0_1) {
                    }
                }
            } else {
                v0_0 = new StringBuilder().append("AND").append(v3_3).toString();
            }
        }
        return v0_0;
    }

    private static String c(String p3)
    {
        if ((p3 != null) && (p3.length() > 4)) {
            StringBuilder v1_2 = new StringBuilder();
            String v0_4 = 0;
            while (v0_4 < (p3.length() - 4)) {
                v1_2.append(42);
                v0_4++;
            }
            v1_2.append(p3.substring((p3.length() - 4)));
            p3 = v1_2.toString();
        }
        return p3;
    }

    static synthetic void c(com.flurry.android.FlurryAgent p0)
    {
        p0.m();
        return;
    }

    public static void clearTargetingKeywords()
    {
        if (com.flurry.android.FlurryAgent.l) {
            com.flurry.android.FlurryAgent.e.ab.f();
        }
        return;
    }

    public static void clearUserCookies()
    {
        if (!com.flurry.android.FlurryAgent.l) {
            com.flurry.android.FlurryAgent.Z = 0;
        } else {
            com.flurry.android.FlurryAgent.e.ab.h();
        }
        return;
    }

    static synthetic android.os.Handler d(com.flurry.android.FlurryAgent p1)
    {
        return p1.m;
    }

    static synthetic com.flurry.android.FlurryAgent d()
    {
        return com.flurry.android.FlurryAgent.e;
    }

    private static String d(android.content.Context p3)
    {
        try {
            String v0_2;
            String v0_4 = 億.getPackageInfo(p3.getPackageManager(), p3.getPackageName(), 0);
        } catch (String v0_3) {
            com.flurry.android.bm.b("FlurryAgent", "", v0_3);
            v0_2 = "Unknown";
            return v0_2;
        }
        if (v0_4.versionName == null) {
            if (v0_4.versionCode == 0) {
            } else {
                v0_2 = Integer.toString(v0_4.versionCode);
                return v0_2;
            }
        } else {
            v0_2 = v0_4.versionName;
            return v0_2;
        }
    }

    private declared_synchronized void d(String p2)
    {
        if (p2 != null) {
            try {
                this.C = p2;
            } catch (Throwable v0) {
                throw v0;
            }
        }
        return;
    }

    public static void displayAd(android.content.Context p3, String p4, android.view.ViewGroup p5)
    {
        if (p3 != null) {
            if (p4 != null) {
                if (p4.length() != 0) {
                    com.flurry.android.FlurryAgent.e.a(p3);
                    try {
                        com.flurry.android.FlurryAgent.e.ab.b(p3, p4, p5);
                    } catch (Throwable v0_0) {
                        com.flurry.android.bm.b("FlurryAgent", "", v0_0);
                    }
                } else {
                    com.flurry.android.bm.b("FlurryAgent", "Ad space name passed to displayAd was empty.");
                }
            } else {
                com.flurry.android.bm.b("FlurryAgent", "Ad space name passed to displayAd was null.");
            }
        } else {
            com.flurry.android.bm.b("FlurryAgent", "Context passed to displayAd was null.");
        }
        return;
    }

    static synthetic long e()
    {
        return com.flurry.android.FlurryAgent.f;
    }

    private android.location.Location e(android.content.Context p8)
    {
        if ((p8.checkCallingOrSelfPermission("android.permission.ACCESS_FINE_LOCATION") != 0) && (p8.checkCallingOrSelfPermission("android.permission.ACCESS_COARSE_LOCATION") != 0)) {
            android.location.Location v0_5 = 0;
        } else {
            android.location.Location v0_2 = ((android.location.LocationManager) p8.getSystemService("location"));
            try {
                if (this.B != null) {
                    v0_2 = this.B;
                } else {
                    this.B = v0_2;
                }
            } catch (android.location.Location v0_3) {
                throw v0_3;
            }
            String v1_1 = com.flurry.android.FlurryAgent.k;
            if (v1_1 == null) {
                v1_1 = new android.location.Criteria();
            }
            String v1_3 = v0_2.getBestProvider(v1_1, 1);
            if (v1_3 == null) {
            } else {
                v0_2.requestLocationUpdates(v1_3, 0, 0, this, android.os.Looper.getMainLooper());
                v0_5 = v0_2.getLastKnownLocation(v1_3);
            }
        }
        return v0_5;
    }

    static synthetic com.flurry.android.bo e(com.flurry.android.FlurryAgent p1)
    {
        return p1.ab;
    }

    public static void enableTestAds(boolean p1)
    {
        com.flurry.android.FlurryAgent.e.ab.a(p1);
        return;
    }

    public static void endTimedEvent(String p4)
    {
        try {
            com.flurry.android.FlurryAgent.e.a(p4);
        } catch (Throwable v0_1) {
            com.flurry.android.bm.b("FlurryAgent", new StringBuilder().append("Failed to signify the end of event: ").append(p4).toString(), v0_1);
        }
        return;
    }

    static synthetic boolean f()
    {
        return com.flurry.android.FlurryAgent.l;
    }

    private static byte[] f(android.content.Context p4)
    {
        try {
            String v0_2;
            if (p4.checkCallingOrSelfPermission("android.permission.READ_PHONE_STATE") != 0) {
                v0_2 = 0;
            } else {
                String v0_9 = ((android.telephony.TelephonyManager) p4.getSystemService("phone"));
                if (v0_9 == null) {
                } else {
                    String v0_1 = v0_9.getDeviceId();
                    if ((v0_1 == null) || (v0_1.trim().length() <= 0)) {
                    } else {
                        v0_2 = com.flurry.android.ac.c(v0_1);
                        if ((v0_2 == null) || (v0_2.length != 20)) {
                            com.flurry.android.bm.b("FlurryAgent", new StringBuilder().append("sha1 is not 20 bytes long: ").append(java.util.Arrays.toString(v0_2)).toString());
                        }
                    }
                }
            }
        } catch (String v0) {
        }
        return v0_2;
    }

    public static void fetchAd(android.content.Context p3, String p4, android.view.ViewGroup p5, com.flurry.android.FlurryAdSize p6)
    {
        if (p3 != null) {
            if (p4 != null) {
                if (p4.length() != 0) {
                    com.flurry.android.FlurryAgent.e.a(p3);
                    try {
                        com.flurry.android.FlurryAgent.e.ab.a(p3, p4, p5, p6);
                    } catch (Throwable v0_0) {
                        com.flurry.android.bm.b("FlurryAgent", "", v0_0);
                    }
                } else {
                    com.flurry.android.bm.b("FlurryAgent", "Ad space name passed to fetchAd was empty.");
                }
            } else {
                com.flurry.android.bm.b("FlurryAgent", "Ad space name passed to fetchAd was null.");
            }
        } else {
            com.flurry.android.bm.b("FlurryAgent", "Context passed to fetchAd was null.");
        }
        return;
    }

    private declared_synchronized void g()
    {
        byte[] v2_0 = 0;
        try {
            java.io.ByteArrayOutputStream v7_1 = new java.io.ByteArrayOutputStream();
            String v3_1 = new java.io.DataOutputStream(v7_1);
            try {
                java.util.List v1_36;
                v3_1.writeShort(1);
                v3_1.writeUTF(this.y);
                v3_1.writeLong(this.H);
                v3_1.writeLong(this.J);
                v3_1.writeLong(0);
                v3_1.writeUTF(this.K);
                v3_1.writeUTF(this.L);
                v3_1.writeByte(this.M);
            } catch (java.util.List v1_22) {
                v2_0 = v3_1;
                try {
                    com.flurry.android.bm.b("FlurryAgent", "", v1_22);
                } catch (java.util.List v1_21) {
                    v3_1 = v2_0;
                    com.flurry.android.ac.a(v3_1);
                    throw v1_21;
                }
                com.flurry.android.ac.a(v2_0);
                return;
            } catch (java.util.List v1_21) {
            }
            if (this.N != null) {
                v1_36 = this.N;
            } else {
                v1_36 = "";
            }
            v3_1.writeUTF(v1_36);
            if (this.R != null) {
                v3_1.writeBoolean(1);
                v3_1.writeDouble(com.flurry.android.FlurryAgent.a(this.R.getLatitude()));
                v3_1.writeDouble(com.flurry.android.FlurryAgent.a(this.R.getLongitude()));
                v3_1.writeFloat(this.R.getAccuracy());
            } else {
                v3_1.writeBoolean(0);
            }
            v3_1.writeInt(this.X);
            v3_1.writeByte(-1);
            v3_1.writeByte(-1);
            v3_1.writeByte(this.O);
            if (this.P != null) {
                v3_1.writeBoolean(1);
                v3_1.writeLong(this.P.longValue());
            } else {
                v3_1.writeBoolean(0);
            }
            v3_1.writeShort(this.S.size());
            int v5_1 = this.S.entrySet().iterator();
            while (v5_1.hasNext()) {
                byte[] v2_4 = ((java.util.Map$Entry) v5_1.next());
                v3_1.writeUTF(((String) v2_4.getKey()));
                v3_1.writeInt(((com.flurry.android.l) v2_4.getValue()).a);
            }
            v3_1.writeShort(this.T.size());
            byte[] v2_5 = this.T.iterator();
            while (v2_5.hasNext()) {
                v3_1.write(((com.flurry.android.aq) v2_5.next()).a());
            }
            v3_1.writeBoolean(this.U);
            byte[] v2_3 = 0;
            int v5_0 = 0;
            int v6 = 0;
            while (v2_3 < this.W.size()) {
                v6 += ((com.flurry.android.bb) this.W.get(v2_3)).a().length;
                if (v6 > 16000) {
                    break;
                }
                v5_0++;
                v2_3++;
            }
            v3_1.writeInt(this.Q);
            v3_1.writeShort(v5_0);
            byte[] v2_1 = 0;
            while (v2_1 < v5_0) {
                v3_1.write(((com.flurry.android.bb) this.W.get(v2_1)).a());
                v2_1++;
            }
            v3_1.writeShort(0);
            v3_1.writeShort(0);
            this.G.add(v7_1.toByteArray());
            com.flurry.android.ac.a(v3_1);
            return;
        } catch (java.util.List v1_22) {
        } catch (java.util.List v1_21) {
            v3_1 = 0;
        } catch (java.util.List v1_24) {
            throw v1_24;
        }
    }

    public static boolean getAd(android.content.Context p8, String p9, android.view.ViewGroup p10, com.flurry.android.FlurryAdSize p11, long p12)
    {
        int v0_1;
        if (p8 != null) {
            if (p9 != null) {
                if (p9.length() != 0) {
                    if (p10 != null) {
                        com.flurry.android.FlurryAgent.e.a(p8);
                        try {
                            v0_1 = com.flurry.android.FlurryAgent.e.ab.a(p8, p9, p11, p10, p12);
                        } catch (int v0_2) {
                            com.flurry.android.bm.b("FlurryAgent", "", v0_2);
                            v0_1 = 0;
                        }
                    } else {
                        com.flurry.android.bm.b("FlurryAgent", "ViewGroup passed to getAd was null.");
                        v0_1 = 0;
                    }
                } else {
                    com.flurry.android.bm.b("FlurryAgent", "Ad space name passed to getAd was empty.");
                    v0_1 = 0;
                }
            } else {
                com.flurry.android.bm.b("FlurryAgent", "Ad space name passed to getAd was null.");
                v0_1 = 0;
            }
        } else {
            com.flurry.android.bm.b("FlurryAgent", "Context passed to getAd was null.");
            v0_1 = 0;
        }
        return v0_1;
    }

    public static int getAgentVersion()
    {
        return 140;
    }

    public static boolean getForbidPlaintextFallback()
    {
        return 0;
    }

    public static String getPhoneId()
    {
        return com.flurry.android.FlurryAgent.e.o();
    }

    public static boolean getUseHttps()
    {
        return com.flurry.android.FlurryAgent.h;
    }

    private declared_synchronized void h()
    {
        try {
            this.X = (this.X + 1);
            return;
        } catch (Throwable v0_2) {
            throw v0_2;
        }
    }

    private declared_synchronized byte[] i()
    {
        try {
            com.flurry.android.CrcMessageDigest v5_1 = new com.flurry.android.CrcMessageDigest();
            java.io.ByteArrayOutputStream v6_1 = new java.io.ByteArrayOutputStream();
            java.security.DigestOutputStream v7_1 = new java.security.DigestOutputStream(v6_1, v5_1);
            String v3_0 = new java.io.DataOutputStream(v7_1);
            try {
                v3_0.writeShort(25);
                v3_0.writeShort(0);
                v3_0.writeLong(0);
                v3_0.writeShort(0);
                v3_0.writeShort(3);
                v3_0.writeShort(140);
                v3_0.writeLong(System.currentTimeMillis());
                v3_0.writeUTF(this.w);
                v3_0.writeUTF(this.y);
                v3_0.writeShort((this.D.size() + 1));
                v3_0.writeShort(0);
                v3_0.writeUTF(this.o());
            } catch (StringBuilder v0_9) {
                java.util.List v1_7 = v3_0;
                try {
                    com.flurry.android.bm.b("FlurryAgent", "Error when generating report", v0_9);
                } catch (StringBuilder v0_1) {
                    v3_0 = v1_7;
                    com.flurry.android.ac.a(v3_0);
                    throw v0_1;
                }
                com.flurry.android.ac.a(v1_7);
                StringBuilder v0_23 = 0;
                return v0_23;
            } catch (StringBuilder v0_1) {
            }
            if (!this.D.isEmpty()) {
                int v8_6 = this.D.entrySet().iterator();
                while (v8_6.hasNext()) {
                    StringBuilder v0_52 = ((java.util.Map$Entry) v8_6.next());
                    v3_0.writeShort(((Integer) v0_52.getKey()).intValue());
                    StringBuilder v0_56 = ((java.nio.ByteBuffer) v0_52.getValue()).array();
                    v3_0.writeShort(v0_56.length);
                    v3_0.write(v0_56);
                }
            }
            StringBuilder v0_84;
            v3_0.writeByte(0);
            v3_0.writeLong(this.F);
            v3_0.writeLong(this.H);
            v3_0.writeShort(6);
            v3_0.writeUTF("device.model");
            v3_0.writeUTF(android.os.Build.MODEL);
            v3_0.writeUTF("build.brand");
            v3_0.writeUTF(android.os.Build.BRAND);
            v3_0.writeUTF("build.id");
            v3_0.writeUTF(android.os.Build.ID);
            v3_0.writeUTF("version.release");
            v3_0.writeUTF(android.os.Build$VERSION.RELEASE);
            v3_0.writeUTF("build.device");
            v3_0.writeUTF(android.os.Build.DEVICE);
            v3_0.writeUTF("build.product");
            v3_0.writeUTF(android.os.Build.PRODUCT);
            if (this.Y == null) {
                v0_84 = 0;
            } else {
                v0_84 = this.Y.keySet().size();
            }
            new StringBuilder().append("refMapSize is:  ").append(v0_84).toString();
            if (v0_84 == null) {
                new StringBuilder().append("Referrer file Name if it exists:  ").append(this.r).toString();
                this.l();
            }
            v3_0.writeShort(v0_84);
            if (this.Y != null) {
                int v8_2 = this.Y.entrySet().iterator();
                while (v8_2.hasNext()) {
                    StringBuilder v0_40 = ((java.util.Map$Entry) v8_2.next());
                    new StringBuilder().append("Referrer Entry:  ").append(((String) v0_40.getKey())).append("=").append(v0_40.getValue()).toString();
                    v3_0.writeUTF(((String) v0_40.getKey()));
                    new StringBuilder().append("referrer key is :").append(((String) v0_40.getKey())).toString();
                    v3_0.writeShort(((java.util.List) v0_40.getValue()).size());
                    java.util.List v1_40 = ((java.util.List) v0_40.getValue()).iterator();
                    while (v1_40.hasNext()) {
                        StringBuilder v0_49 = ((String) v1_40.next());
                        v3_0.writeUTF(v0_49);
                        new StringBuilder().append("referrer value is :").append(v0_49).toString();
                    }
                }
            }
            StringBuilder v0_10;
            v3_0.writeBoolean(0);
            v3_0.writeBoolean(0);
            if (this.aa == null) {
                v0_10 = 0;
            } else {
                v0_10 = this.aa.keySet().size();
            }
            new StringBuilder().append("optionsMapSize is:  ").append(v0_10).toString();
            v3_0.writeShort(v0_10);
            if (this.aa != null) {
                int v8_4 = this.aa.entrySet().iterator();
                while (v8_4.hasNext()) {
                    StringBuilder v0_30 = ((java.util.Map$Entry) v8_4.next());
                    new StringBuilder().append("Launch Options Key:  ").append(((String) v0_30.getKey())).toString();
                    v3_0.writeUTF(((String) v0_30.getKey()));
                    v3_0.writeShort(((java.util.List) v0_30.getValue()).size());
                    java.util.List v1_22 = ((java.util.List) v0_30.getValue()).iterator();
                    while (v1_22.hasNext()) {
                        StringBuilder v0_36 = ((String) v1_22.next());
                        v3_0.writeUTF(v0_36);
                        new StringBuilder().append("Launch Options value is :").append(v0_36).toString();
                    }
                }
            }
            int v8_5 = this.G.size();
            v3_0.writeShort(v8_5);
            java.util.List v1_10 = 0;
            while (v1_10 < v8_5) {
                v3_0.write(((byte[]) this.G.get(v1_10)));
                v1_10++;
            }
            this.A = new java.util.ArrayList(this.G);
            v7_1.on(0);
            v3_0.write(v5_1.getDigest());
            v3_0.close();
            v0_23 = v6_1.toByteArray();
            com.flurry.android.ac.a(v3_0);
            return v0_23;
        } catch (StringBuilder v0_9) {
            v1_7 = 0;
        } catch (StringBuilder v0_1) {
            v3_0 = 0;
        } catch (StringBuilder v0_46) {
            throw v0_46;
        }
    }

    public static void initializeAds(android.content.Context p3)
    {
        if (p3 != null) {
            com.flurry.android.FlurryAgent.e.a(p3);
            try {
                com.flurry.android.FlurryAgent.e.ab.b(p3);
            } catch (Throwable v0_4) {
                com.flurry.android.bm.b("FlurryAgent", "", v0_4);
            }
        } else {
            com.flurry.android.bm.b("FlurryAgent", "Context passed to initializeAds was null.");
        }
        return;
    }

    public static boolean isAdAvailable(android.content.Context p7, String p8, com.flurry.android.FlurryAdSize p9, long p10)
    {
        int v0_0;
        if (p7 != null) {
            if (p8 != null) {
                if (p8.length() != 0) {
                    com.flurry.android.FlurryAgent.e.a(p7);
                    try {
                        v0_0 = com.flurry.android.FlurryAgent.e.ab.a(p7, p8, p9, p10);
                    } catch (int v0_1) {
                        com.flurry.android.bm.b("FlurryAgent", "", v0_1);
                        v0_0 = 0;
                    }
                } else {
                    com.flurry.android.bm.b("FlurryAgent", "Ad space name passed to isAdAvailable was empty.");
                    v0_0 = 0;
                }
            } else {
                com.flurry.android.bm.b("FlurryAgent", "Ad space name passed to isAdAvailable was null.");
                v0_0 = 0;
            }
        } else {
            com.flurry.android.bm.b("FlurryAgent", "Context passed to isAdAvailable was null.");
            v0_0 = 0;
        }
        return v0_0;
    }

    protected static boolean isCaptureUncaughtExceptions()
    {
        return com.flurry.android.FlurryAgent.j;
    }

    private static String j()
    {
        String v0_3;
        if (com.flurry.android.FlurryAgent.b == null) {
            if (!com.flurry.android.FlurryAgent.i) {
                if (!com.flurry.android.FlurryAgent.h) {
                    v0_3 = com.flurry.android.FlurryAgent.c;
                } else {
                    v0_3 = com.flurry.android.FlurryAgent.d;
                }
            } else {
                v0_3 = com.flurry.android.FlurryAgent.c;
            }
        } else {
            v0_3 = com.flurry.android.FlurryAgent.b;
        }
        return v0_3;
    }

    private void k()
    {
        try {
            com.flurry.android.bm.a("FlurryAgent", "generating report");
            String v0_11 = this.i();
        } catch (String v0_10) {
            com.flurry.android.bm.a("FlurryAgent", "", v0_10);
            return;
        } catch (String v0_9) {
            com.flurry.android.bm.b("FlurryAgent", "", v0_9);
            return;
        }
        if (v0_11 == null) {
            com.flurry.android.bm.a("FlurryAgent", "Error generating report");
            return;
        } else {
            if (!this.a(v0_11)) {
                return;
            } else {
                String v0_5;
                StringBuilder vtmp7 = new StringBuilder().append("Done sending ");
                if (!this.s) {
                    v0_5 = "";
                } else {
                    v0_5 = "initial ";
                }
                com.flurry.android.bm.a("FlurryAgent", vtmp7.append(v0_5).append("agent report").toString());
                this.m();
                return;
            }
        }
    }

    private void l()
    {
        if (this.r.exists()) {
            com.flurry.android.bm.c("FlurryAgent", new StringBuilder().append("Loading referrer info from file:  ").append(this.r.getAbsolutePath()).toString());
            java.util.Map v0_3 = com.flurry.android.FlurryAgent.a(this.r);
            if (v0_3 != null) {
                this.Y = com.flurry.android.FlurryAgent.b(v0_3);
            }
        }
        return;
    }

    public static void logEvent(String p4)
    {
        try {
            com.flurry.android.FlurryAgent.e.a(p4, 0, 0);
        } catch (Throwable v0_1) {
            com.flurry.android.bm.b("FlurryAgent", new StringBuilder().append("Failed to log event: ").append(p4).toString(), v0_1);
        }
        return;
    }

    public static void logEvent(String p4, java.util.Map p5)
    {
        try {
            com.flurry.android.FlurryAgent.e.a(p4, p5, 0);
        } catch (Throwable v0_1) {
            com.flurry.android.bm.b("FlurryAgent", new StringBuilder().append("Failed to log event: ").append(p4).toString(), v0_1);
        }
        return;
    }

    public static void logEvent(String p4, java.util.Map p5, boolean p6)
    {
        try {
            com.flurry.android.FlurryAgent.e.a(p4, p5, p6);
        } catch (Throwable v0_1) {
            com.flurry.android.bm.b("FlurryAgent", new StringBuilder().append("Failed to log event: ").append(p4).toString(), v0_1);
        }
        return;
    }

    public static void logEvent(String p4, boolean p5)
    {
        try {
            com.flurry.android.FlurryAgent.e.a(p4, 0, p5);
        } catch (Throwable v0_1) {
            com.flurry.android.bm.b("FlurryAgent", new StringBuilder().append("Failed to log event: ").append(p4).toString(), v0_1);
        }
        return;
    }

    private declared_synchronized void m()
    {
        try {
            if (com.flurry.android.ah.a(this.q)) {
                java.io.DataOutputStream v1_0 = new java.io.DataOutputStream(new java.io.FileOutputStream(this.q));
                try {
                    v1_0.writeShort(46586);
                    v1_0.writeShort(2);
                    v1_0.writeUTF(this.w);
                    v1_0.writeUTF(this.o());
                    v1_0.writeBoolean(this.E);
                    v1_0.writeLong(this.F);
                    int v2_2 = (this.G.size() - 1);
                } catch (int v0_3) {
                    com.flurry.android.bm.b("FlurryAgent", "", v0_3);
                    com.flurry.android.ac.a(v1_0);
                }
                while (v2_2 >= 0) {
                    int v0_14 = ((byte[]) this.G.get(v2_2));
                    StringBuilder v3_0 = v0_14.length;
                    if (((v3_0 + 2) + v1_0.size()) <= 50000) {
                        v1_0.writeShort(v3_0);
                        v1_0.write(v0_14);
                        v2_2--;
                    } else {
                        com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("discarded sessions: ").append(v2_2).toString());
                        break;
                    }
                }
                v1_0.writeShort(0);
                com.flurry.android.ac.a(v1_0);
            } else {
                com.flurry.android.ac.a(0);
            }
        } catch (int v0_3) {
            v1_0 = 0;
        } catch (int v0_21) {
            throw v0_21;
        } catch (int v0_2) {
            com.flurry.android.ac.a(v1_0);
            throw v0_2;
        }
        return;
    }

    private declared_synchronized void n()
    {
        try {
            if (this.B != null) {
                this.B.removeUpdates(this);
            }
        } catch (android.location.LocationManager v0_2) {
            throw v0_2;
        }
        return;
    }

    private declared_synchronized String o()
    {
        try {
            return this.C;
        } catch (Throwable v0_1) {
            throw v0_1;
        }
    }

    public static void onEndSession(android.content.Context p3)
    {
        if (p3 != null) {
            try {
                com.flurry.android.FlurryAgent.e.a(p3, 0);
            } catch (Throwable v0_2) {
                com.flurry.android.bm.b("FlurryAgent", "", v0_2);
            }
            return;
        } else {
            throw new NullPointerException("Null context");
        }
    }

    public static void onError(String p3, String p4, String p5)
    {
        try {
            com.flurry.android.FlurryAgent.e.a(p3, p4, p5);
        } catch (Throwable v0_1) {
            com.flurry.android.bm.b("FlurryAgent", "", v0_1);
        }
        return;
    }

    public static void onEvent(String p3)
    {
        try {
            com.flurry.android.FlurryAgent.e.a(p3, 0, 0);
        } catch (Throwable v0_1) {
            com.flurry.android.bm.b("FlurryAgent", "", v0_1);
        }
        return;
    }

    public static void onEvent(String p3, java.util.Map p4)
    {
        try {
            com.flurry.android.FlurryAgent.e.a(p3, p4, 0);
        } catch (Throwable v0_1) {
            com.flurry.android.bm.b("FlurryAgent", "", v0_1);
        }
        return;
    }

    public static void onPageView()
    {
        try {
            com.flurry.android.FlurryAgent.e.h();
        } catch (Throwable v0_1) {
            com.flurry.android.bm.b("FlurryAgent", "", v0_1);
        }
        return;
    }

    public static void onStartSession(android.content.Context p3, String p4)
    {
        if (p3 != null) {
            if ((p4 != null) && (p4.length() != 0)) {
                try {
                    com.flurry.android.FlurryAgent.e.a(p3, p4);
                } catch (Throwable v0_6) {
                    com.flurry.android.bm.b("FlurryAgent", "", v0_6);
                }
                return;
            } else {
                throw new IllegalArgumentException("Api key not specified");
            }
        } else {
            throw new NullPointerException("Null context");
        }
    }

    public static void removeAd(android.content.Context p3, String p4, android.view.ViewGroup p5)
    {
        if (p3 != null) {
            if (p4 != null) {
                if (p4.length() != 0) {
                    if (p5 != null) {
                        try {
                            com.flurry.android.FlurryAgent.e.ab.b(p4);
                        } catch (Throwable v0_7) {
                            com.flurry.android.bm.b("FlurryAgent", "", v0_7);
                        }
                    } else {
                        com.flurry.android.bm.b("FlurryAgent", "ViewGroup passed to removeAd was null.");
                    }
                } else {
                    com.flurry.android.bm.b("FlurryAgent", "Ad space name passed to removeAd was empty.");
                }
            } else {
                com.flurry.android.bm.b("FlurryAgent", "Ad space name passed to removeAd was null.");
            }
        } else {
            com.flurry.android.bm.b("FlurryAgent", "Context passed to removeAd was null.");
        }
        return;
    }

    public static void sendAdLogsToServer()
    {
        com.flurry.android.FlurryAgent.e.ab.j();
        return;
    }

    public static void setAdListener(com.flurry.android.FlurryAdListener p1)
    {
        com.flurry.android.FlurryAgent.e.ab.a(p1);
        return;
    }

    public static void setAdLogUrl(String p1)
    {
        p1.endsWith(".do");
        com.flurry.android.FlurryAgent.e.ab.d(p1);
        return;
    }

    public static void setAdServerUrl(String p1)
    {
        p1.endsWith(".do");
        com.flurry.android.FlurryAgent.e.ab.c(p1);
        return;
    }

    public static void setAge(int p7)
    {
        if ((p7 > 0) && (p7 < 110)) {
            com.flurry.android.FlurryAgent.e.P = Long.valueOf(new java.util.Date(new java.util.Date((System.currentTimeMillis() - (((long) p7) * 31449600000))).getYear(), 1, 1).getTime());
        }
        return;
    }

    public static void setCaptureUncaughtExceptions(boolean p3)
    {
        try {
            if (!com.flurry.android.FlurryAgent.e.s) {
                com.flurry.android.FlurryAgent.j = p3;
            } else {
                com.flurry.android.bm.b("FlurryAgent", "Cannot setCaptureUncaughtExceptions after onStartSession");
            }
        } catch (String v0_3) {
            throw v0_3;
        }
        return;
    }

    public static void setContinueSessionMillis(long p3)
    {
        if (p3 >= 5000) {
            try {
                com.flurry.android.FlurryAgent.f = p3;
            } catch (Throwable v0_2) {
                throw v0_2;
            }
        } else {
            com.flurry.android.bm.b("FlurryAgent", new StringBuilder().append("Invalid time set for session resumption: ").append(p3).toString());
        }
        return;
    }

    public static void setCustomAdNetworkHandler(com.flurry.android.ICustomAdNetworkHandler p1)
    {
        com.flurry.android.FlurryAgent.e.ab.a(p1);
        return;
    }

    public static void setGender(byte p2)
    {
        switch (p2) {
            case 0:
            case 1:
                com.flurry.android.FlurryAgent.e.O = p2;
                break;
            default:
                com.flurry.android.FlurryAgent.e.O = -1;
        }
        return;
    }

    public static void setLocation(float p1, float p2)
    {
        com.flurry.android.FlurryAgent.e.ab.a(p1, p2);
        return;
    }

    public static void setLocationCriteria(android.location.Criteria p2)
    {
        try {
            com.flurry.android.FlurryAgent.k = p2;
            return;
        } catch (Throwable v0) {
            throw v0;
        }
    }

    public static void setLogEnabled(boolean p2)
    {
        try {
            if (!p2) {
                com.flurry.android.bm.a();
            } else {
                com.flurry.android.bm.b();
            }
        } catch (Throwable v0) {
            throw v0;
        }
        return;
    }

    public static void setLogEvents(boolean p2)
    {
        try {
            com.flurry.android.FlurryAgent.g = p2;
            return;
        } catch (Throwable v0) {
            throw v0;
        }
    }

    public static void setLogLevel(int p2)
    {
        try {
            com.flurry.android.bm.a(p2);
            return;
        } catch (Throwable v0) {
            throw v0;
        }
    }

    public static void setReportLocation(boolean p2)
    {
        try {
            com.flurry.android.FlurryAgent.e.z = p2;
            return;
        } catch (Throwable v0_1) {
            throw v0_1;
        }
    }

    public static void setReportUrl(String p1)
    {
        p1.endsWith(".do");
        com.flurry.android.FlurryAgent.b = p1;
        return;
    }

    public static void setTargetingKeywords(java.util.Map p1)
    {
        com.flurry.android.FlurryAgent.e.ab.b(p1);
        return;
    }

    public static void setUseHttps(boolean p0)
    {
        com.flurry.android.FlurryAgent.h = p0;
        return;
    }

    public static void setUserCookies(java.util.Map p1)
    {
        if (!com.flurry.android.FlurryAgent.l) {
            com.flurry.android.FlurryAgent.Z = p1;
        } else {
            com.flurry.android.FlurryAgent.e.ab.c(p1);
        }
        return;
    }

    public static void setUserId(String p3)
    {
        try {
            com.flurry.android.FlurryAgent.e.N = com.flurry.android.ac.a(p3);
            return;
        } catch (Throwable v0_1) {
            throw v0_1;
        }
    }

    public static void setVersionName(String p2)
    {
        try {
            com.flurry.android.FlurryAgent.e.y = p2;
            return;
        } catch (Throwable v0_1) {
            throw v0_1;
        }
    }

    final void a(Throwable p7)
    {
        p7.printStackTrace();
        int v0_0 = "";
        int v1_0 = p7.getStackTrace();
        if ((v1_0 == 0) || (v1_0.length <= 0)) {
            if (p7.getMessage() != null) {
                v0_0 = p7.getMessage();
            }
        } else {
            String v2_1 = new StringBuilder();
            if (p7.getMessage() != null) {
                v2_1.append(new StringBuilder().append(" (").append(p7.getMessage()).append(")\n").toString());
            }
            int v0_8 = 0;
            while (v0_8 < v1_0.length) {
                if (v0_8 != 0) {
                    v2_1.append(10);
                }
                int v3_5 = v1_0[v0_8];
                v2_1.append(v3_5.getClassName()).append(".").append(v3_5.getMethodName()).append(":").append(v3_5.getLineNumber());
                v0_8++;
            }
            v0_0 = v2_1.toString();
        }
        com.flurry.android.FlurryAgent.onError("uncaught", v0_0, p7.getClass().toString());
        this.v.clear();
        this.a(0, 1);
        return;
    }

    public final declared_synchronized void onLocationChanged(android.location.Location p4)
    {
        try {
            this.R = p4;
            this.n();
        } catch (Throwable v0_0) {
            com.flurry.android.bm.b("FlurryAgent", "", v0_0);
        } catch (Throwable v0_1) {
            throw v0_1;
        }
        return;
    }

    public final void onProviderDisabled(String p1)
    {
        return;
    }

    public final void onProviderEnabled(String p1)
    {
        return;
    }

    public final void onStatusChanged(String p1, int p2, android.os.Bundle p3)
    {
        return;
    }
}
