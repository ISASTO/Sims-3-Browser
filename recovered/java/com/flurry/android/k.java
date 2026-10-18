package com.flurry.android;
final class k extends android.os.AsyncTask {
    private synthetic com.flurry.android.bo a;

    k(com.flurry.android.bo p1)
    {
        this.a = p1;
        return;
    }

    private varargs Void a()
    {
        try {
            if (com.flurry.android.bo.a(this.a).exists()) {
                try {
                    String v1_2 = new java.io.DataInputStream(new java.io.FileInputStream(com.flurry.android.bo.a(this.a)));
                    try {
                        if (v1_2.readUnsignedShort() == 46586) {
                            this.a.a(v1_2);
                        }
                    } catch (boolean v0_3) {
                        com.flurry.android.bm.b(com.flurry.android.bo.a, "Error when loading persistent file", v0_3);
                        com.flurry.android.ac.a(v1_2);
                    }
                    com.flurry.android.ac.a(v1_2);
                    try {
                        // Both branches of the condition point to the same code.
                        // if ((!com.flurry.android.bo.b(this.a)) && (com.flurry.android.bo.a(this.a).delete())) {
                        // }
                    } catch (boolean v0_10) {
                        com.flurry.android.bm.b(com.flurry.android.bo.a, "", v0_10);
                    }
                } catch (boolean v0_3) {
                    v1_2 = 0;
                } catch (boolean v0_2) {
                    v1_2 = 0;
                    com.flurry.android.ac.a(v1_2);
                    throw v0_2;
                } catch (boolean v0_2) {
                }
            }
        } catch (boolean v0_7) {
            v0_7.printStackTrace();
        }
        return 0;
    }

    protected final bridge synthetic Object doInBackground(Object[] p2)
    {
        return this.a();
    }
}
