package com.flurry.android;
final class aq {
    private int a;
    private String b;
    private java.util.Map c;
    private long d;
    private boolean e;
    private long f;

    public aq(int p1, String p2, java.util.Map p3, long p4, boolean p6)
    {
        this.a = p1;
        this.b = p2;
        this.c = p3;
        this.d = p4;
        this.e = p6;
        return;
    }

    public final void a(long p5)
    {
        this.f = (p5 - this.d);
        com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("Ended event \'").append(this.b).append("\' (").append(this.d).append(") after ").append(this.f).append("ms").toString());
        return;
    }

    public final boolean a(String p5)
    {
        if ((!this.e) || ((this.f != 0) || (!this.b.equals(p5)))) {
            int v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public final byte[] a()
    {
        try {
            java.io.ByteArrayOutputStream v3_1 = new java.io.ByteArrayOutputStream();
            int v2_1 = new java.io.DataOutputStream(v3_1);
            try {
                v2_1.writeShort(this.a);
                v2_1.writeUTF(this.b);
            } catch (String v0) {
                String v1_3 = v2_1;
                try {
                    String v0_17 = new byte[0];
                    com.flurry.android.ac.a(v1_3);
                } catch (String v0_15) {
                    v2_1 = v1_3;
                    com.flurry.android.ac.a(v2_1);
                    throw v0_15;
                }
                return v0_17;
            } catch (String v0_15) {
            }
            if (this.c != null) {
                v2_1.writeShort(this.c.size());
                java.util.Iterator v4 = this.c.entrySet().iterator();
                while (v4.hasNext()) {
                    String v0_10 = ((java.util.Map$Entry) v4.next());
                    v2_1.writeUTF(com.flurry.android.ac.a(((String) v0_10.getKey())));
                    v2_1.writeUTF(com.flurry.android.ac.a(((String) v0_10.getValue())));
                }
            } else {
                v2_1.writeShort(0);
            }
            v2_1.writeLong(this.d);
            v2_1.writeLong(this.f);
            v2_1.flush();
            v0_17 = v3_1.toByteArray();
            com.flurry.android.ac.a(v2_1);
            return v0_17;
        } catch (String v1) {
            v1_3 = 0;
        } catch (String v1_4) {
            v2_1 = 0;
            v0_15 = v1_4;
        }
    }
}
