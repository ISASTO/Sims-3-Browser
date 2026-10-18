package com.flurry.org.apache.avro.io;
abstract class BinaryDecoder$ByteSource extends java.io.InputStream {
    protected com.flurry.org.apache.avro.io.BinaryDecoder$BufferAccessor ba;

    protected BinaryDecoder$ByteSource()
    {
        return;
    }

    protected void attach(int p3, com.flurry.org.apache.avro.io.BinaryDecoder p4)
    {
        com.flurry.org.apache.avro.io.BinaryDecoder$BufferAccessor v0_0 = new byte[p3];
        com.flurry.org.apache.avro.io.BinaryDecoder.access$302(p4, v0_0);
        com.flurry.org.apache.avro.io.BinaryDecoder.access$402(p4, 0);
        com.flurry.org.apache.avro.io.BinaryDecoder.access$602(p4, 0);
        com.flurry.org.apache.avro.io.BinaryDecoder.access$502(p4, 0);
        this.ba = new com.flurry.org.apache.avro.io.BinaryDecoder$BufferAccessor(p4, 0);
        return;
    }

    public int available()
    {
        return (this.ba.getLim() - this.ba.getPos());
    }

    protected void compactAndFill(byte[] p4, int p5, int p6, int p7)
    {
        System.arraycopy(p4, p5, p4, p6, p7);
        this.ba.setPos(p6);
        this.ba.setLimit((p7 + this.tryReadRaw(p4, (p6 + p7), (p4.length - p7))));
        return;
    }

    protected void detach()
    {
        this.ba.detach();
        return;
    }

    abstract boolean isEof();

    public int read(byte[] p8, int p9, int p10)
    {
        int v2 = this.ba.getLim();
        int v3_2 = this.ba.getPos();
        byte[] v0 = this.ba.getBuf();
        int v4 = (v2 - v3_2);
        if (v4 < p10) {
            System.arraycopy(v0, v3_2, p8, p9, v4);
            this.ba.setPos((v3_2 + v4));
            int v1 = (v4 + this.tryReadRaw(p8, (p9 + v4), (p10 - v4)));
            if (v1 != 0) {
                p10 = v1;
            } else {
                p10 = -1;
            }
        } else {
            System.arraycopy(v0, v3_2, p8, p9, p10);
            this.ba.setPos((v3_2 + p10));
        }
        return p10;
    }

    protected abstract void readRaw(byte[] p0, int p1, int p2);

    public long skip(long p8)
    {
        int v2 = this.ba.getLim();
        int v3_2 = this.ba.getPos();
        int v4 = (v2 - v3_2);
        if (((long) v4) <= p8) {
            this.ba.setPos(v2);
            p8 = (this.trySkipBytes((p8 - ((long) v4))) + ((long) v4));
        } else {
            this.ba.setPos(((int) (((long) v3_2) + p8)));
        }
        return p8;
    }

    protected abstract void skipSourceBytes(long p0);

    protected abstract int tryReadRaw(byte[] p0, int p1, int p2);

    protected abstract long trySkipBytes(long p0);
}
