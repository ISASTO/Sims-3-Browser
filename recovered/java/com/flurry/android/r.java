package com.flurry.android;
abstract class r extends android.widget.RelativeLayout {
    com.flurry.android.bo a;
    com.flurry.android.bl b;
    com.flurry.android.AdUnit c;
    int d;
    private android.content.Context e;

    r(android.content.Context p2)
    {
        super(p2);
        super.a(p2, 0, 0);
        return;
    }

    r(android.content.Context p1, com.flurry.android.bo p2, com.flurry.android.bl p3)
    {
        super(p1);
        super.a(p1, p2, p3);
        return;
    }

    private void a(android.content.Context p1, com.flurry.android.bo p2, com.flurry.android.bl p3)
    {
        this.e = p1;
        this.a = p2;
        this.b = p3;
        return;
    }

    final void a(android.view.ViewGroup p8, com.flurry.android.x p9)
    {
        if ((this.c != null) && (this.c.c().size() >= 1)) {
            int v1_12 = ((com.flurry.android.AdFrame) this.c.c().get(0)).d();
            android.widget.RelativeLayout$LayoutParams v0_1 = 0;
            if (!(p8 instanceof android.widget.LinearLayout)) {
                if (!(p8 instanceof android.widget.AbsoluteLayout)) {
                    if (!(p8 instanceof android.widget.FrameLayout)) {
                        if ((p8 instanceof android.widget.RelativeLayout)) {
                            v0_1 = new android.widget.RelativeLayout$LayoutParams(com.flurry.android.ac.a(this.e, v1_12.a().intValue()), com.flurry.android.ac.a(this.e, v1_12.b().intValue()));
                            int v1_15 = v1_12.e().toString().split("-");
                            if (v1_15.length == 2) {
                                if (!v1_15[0].equals("b")) {
                                    if (!v1_15[0].equals("t")) {
                                        if (v1_15[0].equals("m")) {
                                            v0_1.addRule(15);
                                        }
                                    } else {
                                        v0_1.addRule(10);
                                    }
                                } else {
                                    v0_1.addRule(12);
                                }
                                if (!v1_15[1].equals("c")) {
                                    if (!v1_15[1].equals("l")) {
                                        if (v1_15[1].equals("r")) {
                                            v0_1.addRule(11);
                                        }
                                    } else {
                                        v0_1.addRule(9);
                                    }
                                } else {
                                    v0_1.addRule(14);
                                }
                            }
                        }
                    } else {
                        v0_1 = new android.widget.FrameLayout$LayoutParams(com.flurry.android.ac.a(this.e, v1_12.a().intValue()), com.flurry.android.ac.a(this.e, v1_12.b().intValue()), 0);
                    }
                } else {
                    v0_1 = new android.widget.AbsoluteLayout$LayoutParams(com.flurry.android.ac.a(this.e, v1_12.a().intValue()), com.flurry.android.ac.a(this.e, v1_12.b().intValue()), 0, 0);
                }
            } else {
                v0_1 = new android.widget.LinearLayout$LayoutParams(com.flurry.android.ac.a(this.e, v1_12.a().intValue()), com.flurry.android.ac.a(this.e, v1_12.b().intValue()));
            }
            if (v0_1 == null) {
                new StringBuilder().append("Ad space layout and alignment from the server is being ignored for ViewGroup subclass ").append(p8.getClass().getSimpleName()).toString();
            } else {
                p9.setLayoutParams(v0_1);
            }
        }
        return;
    }

    final void a(String p9, java.util.Map p10)
    {
        new StringBuilder().append("AppSpotBannerView.onEvent ").append(p9).toString();
        this.a.a(this.b, p9, 1, p10);
        if (this.c != null) {
            this.a.a(new com.flurry.android.bj(p9, p10, this.e, this.c, this.b, this.d), this.a, 0);
        }
        return;
    }

    boolean a()
    {
        int v0_4;
        if (!((com.flurry.android.AdFrame) this.c.c().get(this.d)).d().d().toString().equals("takeover")) {
            v0_4 = 1;
        } else {
            v0_4 = 0;
        }
        return v0_4;
    }

    public abstract void initLayout(android.content.Context p0);

    public void stop()
    {
        return;
    }
}
