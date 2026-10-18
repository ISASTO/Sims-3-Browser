package com.flurry.android;
final class bb {
    private int a;
    private long b;
    private String c;
    private String d;
    private String e;

    public bb(int p1, long p2, String p4, String p5, String p6)
    {
        this.a = p1;
        this.b = p2;
        this.c = p4;
        this.d = p5;
        this.e = p6;
        return;
    }

    public final byte[] a()
    {
        try {
            java.io.ByteArrayOutputStream v2_1 = new java.io.ByteArrayOutputStream();
            int v1_0 = new java.io.DataOutputStream(v2_1);
            try {
                v1_0.writeShort(this.a);
                v1_0.writeLong(this.b);
                v1_0.writeUTF(this.c);
                v1_0.writeUTF(this.d);
                v1_0.writeUTF(this.e);
                v1_0.flush();
                byte[] v0_5 = v2_1.toByteArray();
                com.flurry.android.ac.a(v1_0);
            } catch (byte[] v0) {
                v0_5 = new byte[0];
                com.flurry.android.ac.a(v1_0);
            }
            return v0_5;
        } catch (int v1) {
            v1_0 = 0;
        } catch (int v1_2) {
            v1_0 = 0;
            byte[] v0_7 = v1_2;
            com.flurry.android.ac.a(v1_0);
            throw v0_7;
        } catch (byte[] v0_7) {
        }
    }

    public final String b()
    {
        return this.c;
    }
}
