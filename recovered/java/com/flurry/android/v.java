package com.flurry.android;
final class v {
    private static String a;
    private com.flurry.android.bo b;

    static v()
    {
        com.flurry.android.v.a = "FlurryAgent";
        return;
    }

    v(com.flurry.android.bo p1)
    {
        this.b = p1;
        return;
    }

    private static boolean a(String p2, String p3)
    {
        return p3.equals(new StringBuilder().append("%{").append(p2).append("}").toString());
    }

    final String a(com.flurry.android.bl p6, com.flurry.android.AdUnit p7, String p8, String p9)
    {
        String v0_13;
        if (!com.flurry.android.v.a("fids", p9)) {
            if (!com.flurry.android.v.a("sid", p9)) {
                if (!com.flurry.android.v.a("lid", p9)) {
                    if (!com.flurry.android.v.a("guid", p9)) {
                        if (!com.flurry.android.v.a("ats", p9)) {
                            if (!com.flurry.android.v.a("apik", p9)) {
                                if (!com.flurry.android.v.a("hid", p9)) {
                                    if (!com.flurry.android.v.a("eso", p9)) {
                                        if (!com.flurry.android.v.a("uc", p9)) {
                                            com.flurry.android.bm.a(com.flurry.android.v.a, new StringBuilder().append("Unknown param: ").append(p9).toString());
                                            v0_13 = p8.replace(p9, "");
                                        } else {
                                            String v2_43 = this.b.i().entrySet().iterator();
                                            int v1_5 = "";
                                            while (v2_43.hasNext()) {
                                                String v0_60 = ((java.util.Map$Entry) v2_43.next());
                                                v1_5 = new StringBuilder().append(v1_5).append("c_").append(com.flurry.android.ac.b(((String) v0_60.getKey()))).append("=").append(com.flurry.android.ac.b(((String) v0_60.getValue()))).append("&").toString();
                                            }
                                            com.flurry.android.bm.a(com.flurry.android.v.a, new StringBuilder().append("Replacing param uc with: ").append(v1_5).toString());
                                            v0_13 = p8.replace(p9, v1_5);
                                            if ((v1_5.equals("")) && (v0_13.length() > 0)) {
                                                v0_13 = v0_13.substring(0, (v0_13.length() - 1));
                                            }
                                        }
                                    } else {
                                        String v0_10 = Long.toString((System.currentTimeMillis() - this.b.b()));
                                        com.flurry.android.bm.a(com.flurry.android.v.a, new StringBuilder().append("Replacing param eso with: ").append(v0_10).toString());
                                        v0_13 = p8.replace(p9, com.flurry.android.ac.b(v0_10));
                                    }
                                } else {
                                    String v0_15 = p7.a().toString();
                                    com.flurry.android.bm.a(com.flurry.android.v.a, new StringBuilder().append("Replacing param hid with: ").append(v0_15).toString());
                                    v0_13 = p8.replace(p9, com.flurry.android.ac.b(v0_15));
                                }
                            } else {
                                String v0_19 = this.b.c();
                                com.flurry.android.bm.a(com.flurry.android.v.a, new StringBuilder().append("Replacing param apik with: ").append(v0_19).toString());
                                v0_13 = p8.replace(p9, com.flurry.android.ac.b(v0_19));
                            }
                        } else {
                            String v0_23 = String.valueOf(System.currentTimeMillis());
                            com.flurry.android.bm.a(com.flurry.android.v.a, new StringBuilder().append("Replacing param ats with: ").append(v0_23).toString());
                            v0_13 = p8.replace(p9, com.flurry.android.ac.b(v0_23));
                        }
                    } else {
                        String v0_26 = p6.b();
                        com.flurry.android.bm.a(com.flurry.android.v.a, new StringBuilder().append("Replacing param guid with: ").append(v0_26).toString());
                        v0_13 = p8.replace(p9, com.flurry.android.ac.b(v0_26));
                    }
                } else {
                    String v0_30 = String.valueOf(p6.a());
                    com.flurry.android.bm.a(com.flurry.android.v.a, new StringBuilder().append("Replacing param lid with: ").append(v0_30).toString());
                    v0_13 = p8.replace(p9, com.flurry.android.ac.b(v0_30));
                }
            } else {
                String v0_35 = String.valueOf(this.b.b());
                com.flurry.android.bm.a(com.flurry.android.v.a, new StringBuilder().append("Replacing param sid with: ").append(v0_35).toString());
                v0_13 = p8.replace(p9, com.flurry.android.ac.b(v0_35));
            }
        } else {
            String v0_43 = new StringBuilder().append(0).append(":").append(this.b.e()).toString();
            com.flurry.android.bm.a(com.flurry.android.v.a, new StringBuilder().append("Replacing param fids with: ").append(v0_43).toString());
            v0_13 = p8.replace(p9, com.flurry.android.ac.b(v0_43));
        }
        return v0_13;
    }
}
