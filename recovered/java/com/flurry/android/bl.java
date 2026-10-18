package com.flurry.android;
final class bl {
    private static int a;
    private final int b;
    private final long c;
    private final String d;
    private java.util.List e;

    static bl()
    {
        com.flurry.android.bl.a = 1;
        return;
    }

    bl(long p3, String p5)
    {
        java.util.ArrayList v0_0 = com.flurry.android.bl.a;
        com.flurry.android.bl.a = (v0_0 + 1);
        this.b = v0_0;
        this.c = p3;
        this.d = p5;
        this.e = new java.util.ArrayList();
        return;
    }

    bl(java.io.DataInput p5)
    {
        this.b = p5.readInt();
        this.c = p5.readLong();
        this.d = p5.readUTF();
        this.e = new java.util.ArrayList();
        short v1 = p5.readShort();
        short v0_2 = 0;
        while (v0_2 < v1) {
            this.e.add(new com.flurry.android.at(p5));
            v0_2 = ((short) (v0_2 + 1));
        }
        return;
    }

    final int a()
    {
        return this.b;
    }

    final void a(com.flurry.android.at p2)
    {
        this.e.add(p2);
        return;
    }

    final void a(java.io.DataOutput p3)
    {
        p3.writeInt(this.b);
        p3.writeLong(this.c);
        p3.writeUTF(this.d);
        p3.writeShort(this.e.size());
        java.util.Iterator v1 = this.e.iterator();
        while (v1.hasNext()) {
            ((com.flurry.android.at) v1.next()).a(p3);
        }
        return;
    }

    final String b()
    {
        return this.d;
    }

    final long c()
    {
        return this.c;
    }

    final java.util.List d()
    {
        return this.e;
    }
}
