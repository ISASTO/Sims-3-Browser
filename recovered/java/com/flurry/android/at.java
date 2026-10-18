package com.flurry.android;
final class at {
    private static java.util.List a;
    private final String b;
    private final boolean c;
    private final long d;
    private final java.util.Map e;

    static at()
    {
        java.util.List v0_1 = new String[13];
        v0_1[0] = "requested";
        v0_1[1] = "filled";
        v0_1[2] = "unfilled";
        v0_1[3] = "rendered";
        v0_1[4] = "clicked";
        v0_1[5] = "videoStart";
        v0_1[6] = "videoCompleted";
        v0_1[7] = "videoProgressed";
        v0_1[8] = "sentToUrl";
        v0_1[9] = "adClosed";
        v0_1[10] = "adWillClose";
        v0_1[11] = "renderFailed";
        v0_1[12] = "requestAdComponents";
        com.flurry.android.at.a = java.util.Arrays.asList(v0_1);
        return;
    }

    at(java.io.DataInput p6)
    {
        this.b = p6.readUTF();
        this.c = p6.readBoolean();
        this.d = p6.readLong();
        this.e = new java.util.HashMap();
        short v1 = p6.readShort();
        short v0_2 = 0;
        while (v0_2 < v1) {
            this.e.put(p6.readUTF(), p6.readUTF());
            v0_2 = ((short) (v0_2 + 1));
        }
        return;
    }

    at(String p4, boolean p5, long p6, java.util.Map p8)
    {
        if (!com.flurry.android.at.a.contains(p4)) {
            com.flurry.android.bm.a("FlurryAgent", new StringBuilder().append("AdEvent initialized with unrecognized type: ").append(p4).toString());
        }
        this.b = p4;
        this.c = p5;
        this.d = p6;
        if (p8 != null) {
            this.e = p8;
        } else {
            this.e = new java.util.HashMap();
        }
        return;
    }

    final String a()
    {
        return this.b;
    }

    final void a(java.io.DataOutput p4)
    {
        p4.writeUTF(this.b);
        p4.writeBoolean(this.c);
        p4.writeLong(this.d);
        p4.writeShort(this.e.size());
        java.util.Iterator v2 = this.e.entrySet().iterator();
        while (v2.hasNext()) {
            String v0_6 = ((java.util.Map$Entry) v2.next());
            p4.writeUTF(((String) v0_6.getKey()));
            p4.writeUTF(((String) v0_6.getValue()));
        }
        return;
    }

    final boolean b()
    {
        return this.c;
    }

    final long c()
    {
        return this.d;
    }

    final java.util.Map d()
    {
        return this.e;
    }
}
