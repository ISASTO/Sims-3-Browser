package com.flurry.android;
final class ai extends android.os.AsyncTask {
    private final String a;
    private android.content.Context b;
    private String c;
    private synthetic com.flurry.android.bo d;

    public ai(com.flurry.android.bo p2, android.content.Context p3, String p4)
    {
        this.d = p2;
        this.a = this.getClass().getSimpleName();
        this.b = p3;
        this.c = p4;
        return;
    }

    private varargs String a()
    {
        String v0 = 0;
        StringBuilder v1_0 = 0;
        try {
            while (v1_0 < 5) {
                if (!android.net.Uri.parse(this.c).getScheme().equals("http")) {
                    if (!com.flurry.android.bo.a(this.b, this.c, "android.intent.action.VIEW")) {
                        break;
                    }
                    v0 = this.c;
                    break;
                } else {
                    if ((com.flurry.android.bo.c(this.b) != 1) || (com.flurry.android.bo.d(this.b))) {
                        try {
                            Thread.sleep(100);
                        } catch (String v2_8) {
                            v2_8.getMessage();
                        }
                    } else {
                        String v2_12 = com.flurry.android.ac.a(com.flurry.android.bo.c(this.d), this.c, 10000, 15000, 0);
                        if (v2_12 != null) {
                            String v3_4 = v2_12.getStatusLine().getStatusCode();
                            if (v3_4 != 200) {
                                if ((v3_4 < 300) || (v3_4 >= 400)) {
                                    new StringBuilder().append("Bad Response status code: ").append(v3_4).toString();
                                    break;
                                } else {
                                    new StringBuilder().append("NumRedirects: ").append((v1_0 + 1)).toString();
                                    if (v2_12.containsHeader("Location")) {
                                        this.c = v2_12.getFirstHeader("Location").getValue();
                                    }
                                }
                            } else {
                                new StringBuilder().append("Redirect URL found for: ").append(this.c).toString();
                                v0 = this.c;
                                break;
                            }
                        }
                    }
                    v1_0++;
                }
            }
        } catch (StringBuilder v1_11) {
            v1_11.printStackTrace();
        }
        return v0;
    }

    protected final bridge synthetic Object doInBackground(Object[] p2)
    {
        return this.a();
    }
}
