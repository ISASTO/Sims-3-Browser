package com.flurry.android;
final class ap extends com.flurry.android.r implements android.content.DialogInterface$OnKeyListener, android.media.MediaPlayer$OnCompletionListener, android.media.MediaPlayer$OnErrorListener, android.media.MediaPlayer$OnPreparedListener, com.flurry.android.ao {
    private java.util.List A;
    private final String e;
    private android.app.ProgressDialog f;
    private com.flurry.android.az g;
    private android.webkit.WebView h;
    private android.webkit.WebChromeClient i;
    private android.view.View j;
    private int k;
    private android.webkit.WebChromeClient$CustomViewCallback l;
    private android.app.Dialog m;
    private android.widget.FrameLayout n;
    private android.app.Dialog o;
    private android.widget.FrameLayout p;
    private android.app.AlertDialog q;
    private java.util.List r;
    private boolean s;
    private java.util.Map t;
    private java.util.Map u;
    private android.content.Context v;
    private android.app.Activity w;
    private com.flurry.android.bo x;
    private com.flurry.android.aa y;
    private String z;

    ap(android.content.Context p4, com.flurry.android.bo p5, com.flurry.android.bl p6, com.flurry.android.AdUnit p7, int p8)
    {
        java.util.LinkedList v0_0 = 1;
        super(p4, p5, p6);
        super.e = super.getClass().getSimpleName();
        super.z = 0;
        super.v = p4;
        if ((p4 instanceof android.app.Activity)) {
            super.w = ((android.app.Activity) p4);
        }
        super.setClickable(1);
        super.c = p7;
        super.d = p8;
        super.b = p6;
        if (super.c != null) {
            super.r = super.c.c();
            if (super.c.d().intValue() != 1) {
                v0_0 = 0;
            }
            super.s = v0_0;
            if (super.s) {
                super.u = new java.util.HashMap();
                super.t = new java.util.HashMap();
                super.u.put(p6.b(), p6);
                super.t.put(((com.flurry.android.AdFrame) p7.c().get(0)).f().toString(), p7);
            }
            super.x = p5;
            super.y = super.x.c;
            super.c = super.c;
            super.b = super.b;
            super.A = new java.util.LinkedList();
        }
        return;
    }

    static synthetic int a(com.flurry.android.ap p0, int p1)
    {
        p0.k = p1;
        return p1;
    }

    static synthetic android.app.Dialog a(com.flurry.android.ap p0, android.app.Dialog p1)
    {
        p0.m = p1;
        return p1;
    }

    static synthetic android.view.View a(com.flurry.android.ap p0, android.view.View p1)
    {
        p0.j = p1;
        return p1;
    }

    static synthetic android.webkit.WebChromeClient$CustomViewCallback a(com.flurry.android.ap p0, android.webkit.WebChromeClient$CustomViewCallback p1)
    {
        p0.l = p1;
        return p1;
    }

    static synthetic android.widget.FrameLayout a(com.flurry.android.ap p0, android.widget.FrameLayout p1)
    {
        p0.n = p1;
        return p1;
    }

    static synthetic com.flurry.android.AdUnit a(com.flurry.android.ap p1, String p2)
    {
        return p1.b(p2);
    }

    private com.flurry.android.bl a(String p3)
    {
        com.flurry.android.bl v0_1;
        if (this.u != null) {
            v0_1 = ((com.flurry.android.bl) this.u.get(p3));
            if (v0_1 == null) {
                v0_1 = com.flurry.android.ac.a(this.x, p3);
                this.u.put(p3, v0_1);
            }
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    private static String a(java.util.List p4)
    {
        StringBuilder v1_1 = new StringBuilder();
        v1_1.append("\'{\"adComponents\":[");
        java.util.Iterator v2 = p4.iterator();
        while (v2.hasNext()) {
            v1_1.append(com.flurry.android.ac.d(((com.flurry.android.AdFrame) ((com.flurry.android.AdUnit) v2.next()).c().get(0)).c().toString()));
            if (v2.hasNext()) {
                v1_1.append(",");
            }
        }
        v1_1.append("]}\'");
        return v1_1.toString();
    }

    private java.util.List a(int p7, int p8)
    {
        java.util.List v2 = this.y.a(this.c.a().toString(), p8);
        java.util.Iterator v3 = v2.iterator();
        while (v3.hasNext()) {
            com.flurry.android.AdUnit v0_3 = ((com.flurry.android.AdUnit) v3.next());
            if (v0_3.c().size() > 0) {
                this.t.put(((com.flurry.android.AdFrame) v0_3.c().get(0)).f().toString(), v0_3);
            }
        }
        return v2;
    }

    static synthetic java.util.List a(com.flurry.android.ap p1)
    {
        return p1.r;
    }

    static synthetic android.webkit.WebView b(com.flurry.android.ap p1)
    {
        return p1.h;
    }

    private com.flurry.android.AdUnit b(String p2)
    {
        com.flurry.android.AdUnit v0_3;
        if (this.t != null) {
            v0_3 = ((com.flurry.android.AdUnit) this.t.get(p2));
        } else {
            v0_3 = 0;
        }
        return v0_3;
    }

    static synthetic com.flurry.android.bl b(com.flurry.android.ap p1, String p2)
    {
        return p1.a(p2);
    }

    static synthetic boolean c(com.flurry.android.ap p1)
    {
        return p1.s;
    }

    static synthetic String d(com.flurry.android.ap p1)
    {
        return p1.e;
    }

    static synthetic java.util.List e(com.flurry.android.ap p1)
    {
        return p1.A;
    }

    private void e()
    {
        if (!this.d().equals("takeover")) {
            this.x.b(this.c.a().toString());
        } else {
            try {
                ((android.app.Activity) this.v).finish();
                this.a("adClosed", java.util.Collections.emptyMap(), this.c, this.b, this.d, 0);
            } catch (StringBuilder v0_4) {
                new StringBuilder().append("caught class cast exception: ").append(v0_4).toString();
            }
        }
        return;
    }

    static synthetic android.content.Context f(com.flurry.android.ap p1)
    {
        return p1.v;
    }

    private String f()
    {
        return ((com.flurry.android.AdFrame) this.r.get(this.d)).b().toString();
    }

    static synthetic android.app.Activity g(com.flurry.android.ap p1)
    {
        return p1.w;
    }

    static synthetic android.view.View h(com.flurry.android.ap p1)
    {
        return p1.j;
    }

    static synthetic android.webkit.WebChromeClient i(com.flurry.android.ap p1)
    {
        return p1.i;
    }

    static synthetic android.widget.FrameLayout j(com.flurry.android.ap p1)
    {
        return p1.n;
    }

    static synthetic android.app.Dialog k(com.flurry.android.ap p1)
    {
        return p1.m;
    }

    static synthetic android.app.Dialog l(com.flurry.android.ap p1)
    {
        return p1.o;
    }

    static synthetic android.webkit.WebChromeClient$CustomViewCallback m(com.flurry.android.ap p1)
    {
        return p1.l;
    }

    static synthetic int n(com.flurry.android.ap p1)
    {
        return p1.k;
    }

    static synthetic com.flurry.android.az o(com.flurry.android.ap p1)
    {
        return p1.g;
    }

    public final void a(com.flurry.android.y p9, com.flurry.android.bo p10, int p11)
    {
        android.widget.FrameLayout v0_0 = p9.a;
        int v3_0 = p9.c;
        android.widget.FrameLayout$LayoutParams v2_11 = p9.b;
        if (p11 <= 10) {
            new StringBuilder().append("performAction(action=").append(v0_0).append(",params=").append(p9.b).append(",triggering event=").append(v3_0.a).append(")").toString();
            if (!v0_0.equals("nextAdUnit")) {
                if (!v0_0.equals("nextFrame")) {
                    if (!v0_0.equals("closeAd")) {
                        if (!v0_0.equals("notifyUser")) {
                            if (!v0_0.equals("loadAdComponents")) {
                                if (!v0_0.equals("doExpand")) {
                                    if (!v0_0.equals("doCollapse")) {
                                        this.a.a(p9, p10, p11);
                                    } else {
                                        android.webkit.WebView v1_93 = ((com.flurry.android.AdFrame) this.r.get(this.d)).d().a().intValue();
                                        android.widget.FrameLayout v0_195 = ((com.flurry.android.AdFrame) this.r.get(this.d)).d().b().intValue();
                                        android.webkit.WebView v1_94 = com.flurry.android.ac.a(this.v, v1_93);
                                        android.widget.FrameLayout$LayoutParams v2_55 = com.flurry.android.ac.a(this.v, v0_195);
                                        if (this.z != null) {
                                            this.z = 0;
                                            this.initLayout(this.v);
                                        }
                                        try {
                                            if ((((com.flurry.android.x) this.getParent()) != null) && (this.o != null)) {
                                                new StringBuilder().append("collapse(").append(v1_94).append(",").append(v2_55).append(")").toString();
                                                if ((this.o != null) && (this.o.isShowing())) {
                                                    this.o.hide();
                                                    this.o.setOnDismissListener(0);
                                                    this.o.dismiss();
                                                }
                                                this.o = 0;
                                                if (this.p != null) {
                                                    if ((this.h != null) && (-1 != this.p.indexOfChild(this.h))) {
                                                        this.p.removeView(this.h);
                                                    }
                                                    this.p = 0;
                                                }
                                                if ((this.h != null) && (this.h.getParent() == null)) {
                                                    this.addView(this.h);
                                                }
                                            }
                                        } catch (android.widget.FrameLayout v0_21) {
                                            new StringBuilder().append("action doCollapse failed:").append(v0_21.getMessage()).toString();
                                        }
                                    }
                                } else {
                                    android.widget.FrameLayout$LayoutParams v2_8;
                                    android.webkit.WebView v1_13;
                                    android.webkit.WebView v1_11 = com.flurry.android.ac.a(this.v);
                                    android.widget.FrameLayout v0_27 = com.flurry.android.ac.b(this.v);
                                    if ((!p9.c.b.containsKey("width")) || (!p9.c.b.containsKey("height"))) {
                                        v2_8 = v1_11;
                                        v1_13 = v0_27;
                                    } else {
                                        try {
                                            v2_8 = com.flurry.android.ac.a(this.v, Integer.parseInt(((String) p9.c.b.get("width"))));
                                            v1_13 = com.flurry.android.ac.a(this.v, Integer.parseInt(((String) p9.c.b.get("height"))));
                                        } catch (android.widget.FrameLayout v0_39) {
                                            v0_39.getMessage();
                                            v2_8 = com.flurry.android.ac.a(this.v);
                                            v1_13 = com.flurry.android.ac.b(this.v);
                                        }
                                    }
                                    new StringBuilder().append("expand to width = ").append(v2_8).append(" height = ").append(v1_13).toString();
                                    try {
                                        if ((((com.flurry.android.x) this.getParent()) != null) && (this.o == null)) {
                                            new StringBuilder().append("expand(").append(v2_8).append(",").append(v1_13).append(")").toString();
                                            if ((this.h != null) && (-1 != this.indexOfChild(this.h))) {
                                                this.removeView(this.h);
                                            }
                                            if (this.p == null) {
                                                this.p = new android.widget.FrameLayout(this.v);
                                                this.p.setBackgroundColor(-16777216);
                                                if ((this.h != null) && (this.h.getParent() == null)) {
                                                    this.p.addView(this.h, new android.widget.FrameLayout$LayoutParams(-1, -1, 17));
                                                }
                                            }
                                            if (this.o == null) {
                                                this.o = new android.app.Dialog(this.v, 16973834);
                                                this.o.setContentView(this.p, new android.view.ViewGroup$LayoutParams(-1, -1));
                                                this.o.setOnDismissListener(new com.flurry.android.au(this));
                                                this.o.setCancelable(1);
                                                this.o.show();
                                            }
                                        }
                                    } catch (android.widget.FrameLayout v0_80) {
                                        v0_80.getMessage();
                                    }
                                    if (p9.c.b.containsKey("url")) {
                                        this.z = ((String) p9.c.b.get("url"));
                                        this.initLayout(this.v);
                                    }
                                }
                            } else {
                                android.webkit.WebView v1_37 = 1;
                                android.widget.FrameLayout v0_86 = 3;
                                if ((v2_11.containsKey("min")) && (v2_11.containsKey("max"))) {
                                    try {
                                        v1_37 = Integer.parseInt(((String) v2_11.get("min")));
                                        v0_86 = Integer.parseInt(((String) v2_11.get("max")));
                                    } catch (android.widget.FrameLayout v0) {
                                        v1_37 = 1;
                                        v0_86 = 3;
                                    }
                                }
                                this.c.a().toString();
                                android.widget.FrameLayout v0_93 = this.a(v1_37, v0_86);
                                v0_93.add(this.c);
                                if (v0_93.size() <= 0) {
                                    this.a("renderFailed", java.util.Collections.emptyMap(), this.c, this.b, this.d, 0);
                                } else {
                                    this.c.a().toString();
                                    this.h.loadUrl(new StringBuilder().append("javascript:(function() {var multiadwraps=document.getElementsByClassName(\'multiAdWrap\');if(multiadwraps.length>0){var template=document.getElementsByClassName(\'multiAdWrap\')[0];var compiled=Hogan.compile(template.innerHTML);template.innerHTML=\'\';template.innerHTML=compiled.render(JSON.parse(").append(com.flurry.android.ap.a(v0_93)).append("));}})();").toString());
                                    this.h.loadUrl("javascript:flurryadapter.callComplete();");
                                    java.util.Iterator v7 = v0_93.iterator();
                                    while (v7.hasNext()) {
                                        int v3_20 = ((com.flurry.android.AdUnit) v7.next());
                                        android.widget.FrameLayout$LayoutParams v2_24 = new java.util.HashMap();
                                        v2_24.put("guid", ((com.flurry.android.AdFrame) v3_20.c().get(0)).f().toString());
                                        this.a("rendered", v2_24, v3_20, this.a(((com.flurry.android.AdFrame) v3_20.c().get(0)).f().toString()), 0, 0);
                                    }
                                    if (!this.a(this.h)) {
                                        this.addView(this.h);
                                    }
                                }
                            }
                        } else {
                            android.widget.FrameLayout v0_117;
                            android.webkit.WebView v1_56;
                            android.widget.FrameLayout$LayoutParams v2_25;
                            int v4_13 = new android.app.AlertDialog$Builder(this.v);
                            if ((!v2_11.containsKey("message")) || ((!v2_11.containsKey("confirmDisplay")) || (!v2_11.containsKey("cancelDisplay")))) {
                                v0_117 = "Are you sure?";
                                v1_56 = "Cancel";
                                v2_25 = "OK";
                            } else {
                                v0_117 = ((String) v2_11.get("message"));
                                v1_56 = ((String) v2_11.get("confirmDisplay"));
                                v2_25 = ((String) v2_11.get("cancelDisplay"));
                            }
                            v4_13.setMessage(v0_117).setCancelable(0).setPositiveButton(v2_25, new com.flurry.android.av(this, v3_0, p11)).setNegativeButton(v1_56, new com.flurry.android.ar(this, v3_0, p11));
                            this.q = v4_13.create();
                            if ((this.g != null) && (this.b() == 3)) {
                                this.g.pause();
                            }
                            this.q.show();
                        }
                    } else {
                        this.e();
                    }
                } else {
                    android.webkit.WebView v1_62 = (this.d + 1);
                    android.widget.FrameLayout v0_131 = ((String) v2_11.get("offset"));
                    if (v0_131 != null) {
                        if (!v0_131.equals("next")) {
                            if (v0_131.equals("current")) {
                                return;
                            } else {
                                try {
                                    v1_62 = Integer.parseInt(v0_131);
                                } catch (android.widget.FrameLayout v0_133) {
                                    new StringBuilder().append("caught: ").append(v0_133.getMessage()).toString();
                                }
                            }
                        } else {
                            v1_62 = (this.d + 1);
                        }
                    }
                    if (this.s) {
                        android.widget.FrameLayout v0_142 = ((String) p9.c.b.get("guid"));
                        if (v0_142 != null) {
                            this.c = this.b(v0_142);
                            this.r = this.c.c();
                            this.b = p9.c.e;
                            if (this.d().equals("takeover")) {
                                this.x.a(this.c);
                                this.x.b(this.b);
                            }
                            this.d = v1_62;
                            this.s = 0;
                            this.initLayout(this.v);
                        }
                    } else {
                        if ((v1_62 != this.d) && (v1_62 < this.r.size())) {
                            android.widget.FrameLayout v0_162 = ((com.flurry.android.AdFrame) this.c.c().get(v1_62));
                            android.widget.FrameLayout$LayoutParams v2_40 = this.d();
                            android.widget.FrameLayout v0_166 = v0_162.d().d().toString();
                            if (v0_166.equals(v2_40)) {
                                this.d = v1_62;
                                this.initLayout(this.v);
                            } else {
                                if (v0_166.equals("takeover")) {
                                    this.x.b(this.b);
                                    this.x.a(this.c);
                                    android.widget.FrameLayout v0_172 = new android.content.Intent();
                                    v0_172.putExtra("frameIndex", v1_62);
                                    v0_172.setClass(this.v, com.flurry.android.FlurryFullscreenTakeoverActivity);
                                    this.v.startActivity(v0_172);
                                }
                            }
                        }
                    }
                }
            } else {
                try {
                    android.widget.FrameLayout v0_174 = ((com.flurry.android.x) this.getParent());
                } catch (android.widget.FrameLayout v0_177) {
                    v0_177.toString();
                    this.e();
                }
                if (v0_174 != null) {
                    try {
                        android.webkit.WebView v1_73 = Integer.parseInt(((String) p9.b.get("delay")));
                    } catch (android.webkit.WebView v1) {
                        v1_73 = 0;
                    }
                    v0_174.a((v1_73 * 1000));
                    this.a.d.a(v0_174);
                }
            }
            if ((this.A.contains(p9.c.a)) && (this.h != null)) {
                this.h.loadUrl(new StringBuilder().append("javascript:flurryadapter.callComplete(\'").append(p9.c.a).append("\');").toString());
                this.A.remove(p9.c.a);
            }
        } else {
            new StringBuilder().append("Maximum depth for event/action loop exceeded when performing action:").append(v0_0).append(",").append(v2_11).append(",triggered by:").append(v3_0.a).toString();
        }
        return;
    }

    final void a(String p9, java.util.Map p10, com.flurry.android.AdUnit p11, com.flurry.android.bl p12, int p13, int p14)
    {
        new StringBuilder().append("fireEvent(event=").append(p9).append(",params=").append(p10).append(")").toString();
        this.a.a(new com.flurry.android.bj(p9, p10, this.v, p11, p12, p13), this, p14);
        return;
    }

    final boolean a()
    {
        int v2_2;
        int v0 = 1;
        if (this.o == null) {
            v2_2 = 0;
        } else {
            v2_2 = 1;
        }
        if (v2_2 != 0) {
            v0 = 0;
        } else {
            int v2_0;
            if (this.m == null) {
                v2_0 = 0;
            } else {
                v2_0 = 1;
            }
            if (v2_0 != 0) {
            }
        }
        return v0;
    }

    final boolean a(android.view.View p2)
    {
        int v0_1;
        int v0_0 = p2.getParent();
        if ((v0_0 == 0) || (v0_0 != this)) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    final int b()
    {
        return ((com.flurry.android.AdFrame) this.r.get(this.d)).a().intValue();
    }

    final String c()
    {
        return ((com.flurry.android.AdFrame) this.r.get(this.d)).c().toString();
    }

    final String d()
    {
        return ((com.flurry.android.AdFrame) this.r.get(this.d)).d().d().toString();
    }

    public final void initLayout(android.content.Context p9)
    {
        this.removeAllViews();
        try {
            if (this.b() == 3) {
                ((android.app.Activity) this.v).setRequestedOrientation(0);
            }
        } catch (android.webkit.WebView v0_7) {
            v0_7.toString();
        }
        this.setFocusable(1);
        this.setFocusableInTouchMode(1);
        switch (this.b()) {
            case 1:
            case 2:
                if (this.h == null) {
                    this.h = new android.webkit.WebView(p9);
                    this.h.setWebViewClient(new com.flurry.android.ax(this));
                    this.h.getSettings().setJavaScriptEnabled(1);
                    this.h.setVerticalScrollBarEnabled(0);
                    this.h.setHorizontalScrollBarEnabled(0);
                    this.h.setBackgroundColor(0);
                    this.i = new com.flurry.android.bf(this);
                    this.h.setWebChromeClient(this.i);
                }
                if (this.b() != 1) {
                    if (this.b() == 2) {
                        this.h.loadDataWithBaseURL("base://url/", this.f(), "text/html", "utf-8", "base://url/");
                    }
                } else {
                    if (this.z == null) {
                        this.h.loadUrl(this.f());
                    } else {
                        this.h.loadUrl(this.z);
                    }
                }
                this.h.setLayoutParams(new android.widget.RelativeLayout$LayoutParams(-1, -1));
                break;
            case 3:
                if (this.g == null) {
                    this.g = new com.flurry.android.az(p9);
                    this.g.setOnPreparedListener(this);
                    this.g.setOnCompletionListener(this);
                    this.g.setOnErrorListener(this);
                    this.g.setMediaController(new android.widget.MediaController(p9));
                }
                this.g.setVideoURI(android.net.Uri.parse(this.f()));
                com.flurry.android.bm.a(this.e, new StringBuilder().append("URI: ").append(android.net.Uri.parse(this.f()).toString()).toString());
                this.g.setLayoutParams(new android.widget.RelativeLayout$LayoutParams(-1, -1));
                this.addView(this.g);
                ((android.widget.RelativeLayout) this.g.getParent()).setGravity(17);
                this.f = new android.app.ProgressDialog(p9);
                this.f.setProgressStyle(0);
                this.f.setMessage("Loading...");
                this.f.setCancelable(1);
                this.f.setOnKeyListener(this);
                this.f.show();
                break;
            default:
                this.a("renderFailed", java.util.Collections.emptyMap(), this.c, this.b, this.d, 0);
        }
        return;
    }

    public final void onCompletion(android.media.MediaPlayer p8)
    {
        this.a("videoCompleted", java.util.Collections.emptyMap(), this.c, this.b, this.d, 0);
        return;
    }

    public final boolean onError(android.media.MediaPlayer p8, int p9, int p10)
    {
        if ((this.f != null) && (this.f.isShowing())) {
            this.f.dismiss();
        }
        this.a("renderFailed", java.util.Collections.emptyMap(), this.c, this.b, this.d, 0);
        this.removeView(this.g);
        return 0;
    }

    public final boolean onKey(android.content.DialogInterface p8, int p9, android.view.KeyEvent p10)
    {
        int v6 = 0;
        new StringBuilder().append("onkey,keycode=").append(p9).append(",event=").append(p10.getAction()).toString();
        if ((p8 == this.f) && ((p9 == 4) && (p10.getAction() == 0))) {
            this.a("adWillClose", java.util.Collections.emptyMap(), this.c, this.b, this.d, 0);
            p8.dismiss();
            v6 = 1;
        }
        return v6;
    }

    public final void onPrepared(android.media.MediaPlayer p8)
    {
        if (this.b() == 3) {
            if (this.f.isShowing()) {
                this.f.dismiss();
            }
            if ((this.q == null) || (!this.q.isShowing())) {
                this.g.start();
            }
            this.a("rendered", java.util.Collections.emptyMap(), this.c, this.b, this.d, 0);
            this.a("videoStart", java.util.Collections.emptyMap(), this.c, this.b, this.d, 0);
        }
        return;
    }

    public final void stop()
    {
        if (this.b() == 3) {
            if ((this.f != null) && (this.f.isShowing())) {
                this.f.dismiss();
            }
            if ((this.g != null) && (this.g.isPlaying())) {
                this.g.stopPlayback();
            }
        }
        if (((this.b() == 1) || (this.b() == 2)) && (this.h != null)) {
            if ((this.m != null) && (this.m.isShowing())) {
                this.m.hide();
                this.m.setOnDismissListener(0);
                this.m.dismiss();
            }
            this.m = 0;
            if ((this.j != null) && (this.i != null)) {
                this.i.onHideCustomView();
            }
            if ((this.o != null) && (this.o.isShowing())) {
                this.o.hide();
                this.o.setOnDismissListener(0);
                this.o.dismiss();
            }
            this.o = 0;
            this.h.loadUrl("javascript:if(window.mraid){window.mraid.close();};");
        }
        return;
    }
}
