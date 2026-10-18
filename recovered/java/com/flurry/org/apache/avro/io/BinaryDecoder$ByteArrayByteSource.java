package com.flurry.org.apache.avro.io;
 class BinaryDecoder$ByteArrayByteSource extends com.flurry.org.apache.avro.io.BinaryDecoder$ByteSource {
    private boolean compacted;
    private byte[] data;
    private int max;
    private int position;

    private BinaryDecoder$ByteArrayByteSource(byte[] p4, int p5, int p6)
    {
        this.compacted = 0;
        if ((p4.length >= 16) && (p6 >= 16)) {
            this.data = p4;
            this.position = p5;
            this.max = (p5 + p6);
        } else {
            int v0_0 = new byte[16];
            this.data = v0_0;
            System.arraycopy(p4, p5, this.data, 0, p6);
            this.position = 0;
            this.max = p6;
        }
        return;
    }

    synthetic BinaryDecoder$ByteArrayByteSource(byte[] p1, int p2, int p3, com.flurry.org.apache.avro.io.BinaryDecoder$1 p4)
    {
        this(p1, p2, p3);
        return;
    }

    protected void attach(int p3, com.flurry.org.apache.avro.io.BinaryDecoder p4)
    {
        com.flurry.org.apache.avro.io.BinaryDecoder.access$302(p4, this.data);
        com.flurry.org.apache.avro.io.BinaryDecoder.access$402(p4, this.position);
        com.flurry.org.apache.avro.io.BinaryDecoder.access$602(p4, this.position);
        com.flurry.org.apache.avro.io.BinaryDecoder.access$502(p4, this.max);
        this.ba = new com.flurry.org.apache.avro.io.BinaryDecoder$BufferAccessor(p4, 0);
        return;
    }

    public void close()
    {
        this.ba.setPos(this.ba.getLim());
        return;
    }

    protected void compactAndFill(byte[] p4, int p5, int p6, int p7)
    {
        if (!this.compacted) {
            byte[] v0 = new byte[(p7 + 16)];
            System.arraycopy(p4, p5, v0, 0, p7);
            this.ba.setBuf(v0, 0, p7);
            this.compacted = 1;
        }
        return;
    }

    public boolean isEof()
    {
        int v1_2;
        if ((this.ba.getLim() - this.ba.getPos()) != 0) {
            v1_2 = 0;
        } else {
            v1_2 = 1;
        }
        return v1_2;
    }

    public int read()
    {
        int v0;
        this.max = this.ba.getLim();
        this.position = this.ba.getPos();
        if (this.position < this.max) {
            com.flurry.org.apache.avro.io.BinaryDecoder$BufferAccessor v1_2 = this.ba.getBuf();
            int v2_0 = this.position;
            this.position = (v2_0 + 1);
            v0 = (v1_2[v2_0] & 255);
            this.ba.setPos(this.position);
        } else {
            v0 = -1;
        }
        return v0;
    }

    protected void readRaw(byte[] p3, int p4, int p5)
    {
        if (this.tryReadRaw(p3, p4, p5) >= p5) {
            return;
        } else {
            throw new java.io.EOFException();
        }
    }

    protected void skipSourceBytes(long p4)
    {
        if (this.trySkipBytes(p4) >= p4) {
            return;
        } else {
            throw new java.io.EOFException();
        }
    }

    protected int tryReadRaw(byte[] p2, int p3, int p4)
    {
        return 0;
    }

    protected long trySkipBytes(long p5)
    {
        this.max = this.ba.getLim();
        this.position = this.ba.getPos();
        long v0 = ((long) (this.max - this.position));
        if (v0 < p5) {
            this.position = ((int) (((long) this.position) + v0));
            this.ba.setPos(this.position);
            p5 = v0;
        } else {
            this.position = ((int) (((long) this.position) + p5));
            this.ba.setPos(this.position);
        }
        return p5;
    }
}
