package com.flurry.android;
final class bh extends com.flurry.android.aj {
    private String b;
    private ref.WeakReference c;

    bh(com.flurry.android.r p2, com.flurry.android.AdUnit p3)
    {
        super(p3);
        super.b = super.getClass().getSimpleName();
        super.c = new ref.WeakReference(p2);
        return;
    }

    final void a(android.content.Context p8, android.view.ViewGroup p9)
    {
        com.flurry.android.r v0_2 = ((com.flurry.android.r) this.c.get());
        if (v0_2 != null) {
            int v1_17 = com.flurry.android.FlurryAgent.b();
            com.flurry.android.x v4_0 = v1_17.d.a(v1_17, p8, p9, this.a);
            v4_0.removeAllViews();
            v0_2.initLayout(p8);
            if ((p9 != v4_0.getParent()) && (v4_0.getParent() == null)) {
                int v1_14;
                int v3_0 = p9.getChildCount();
                if ((v0_2.c != null) && (v0_2.c.c().size() >= 1)) {
                    int v1_12 = ((com.flurry.android.AdFrame) v0_2.c.c().get(0)).d().e().toString();
                    if (v1_12.length() == 3) {
                        if (v1_12.charAt(0) != 116) {
                            if (v1_12.charAt(0) == 98) {
                                v1_14 = p9.getChildCount();
                                p9.addView(v4_0, v1_14);
                                if (v0_2.getParent() == null) {
                                    v4_0.addView(v0_2);
                                }
                                v0_2.a(p9, v4_0);
                                v0_2.a("rendered", java.util.Collections.emptyMap());
                                return;
                            }
                        } else {
                            v1_14 = 0;
                        }
                    }
                    v1_14 = v3_0;
                } else {
                    v1_14 = v3_0;
                }
            }
        }
        return;
    }
}
