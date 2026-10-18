package com.flurry.org.apache.avro.io;
 class BinaryDecoder$BufferAccessor {
    private byte[] buf;
    private final com.flurry.org.apache.avro.io.BinaryDecoder decoder;
    boolean detached;
    private int limit;
    private int pos;

    private BinaryDecoder$BufferAccessor(com.flurry.org.apache.avro.io.BinaryDecoder p2)
    {
        this.detached = 0;
        this.decoder = p2;
        return;
    }

    synthetic BinaryDecoder$BufferAccessor(com.flurry.org.apache.avro.io.BinaryDecoder p1, com.flurry.org.apache.avro.io.BinaryDecoder$1 p2)
    {
        this(p1);
        return;
    }

    void detach()
    {
        this.buf = com.flurry.org.apache.avro.io.BinaryDecoder.access$300(this.decoder);
        this.pos = com.flurry.org.apache.avro.io.BinaryDecoder.access$400(this.decoder);
        this.limit = com.flurry.org.apache.avro.io.BinaryDecoder.access$500(this.decoder);
        this.detached = 1;
        return;
    }

    byte[] getBuf()
    {
        byte[] v0_2;
        if (!this.detached) {
            v0_2 = com.flurry.org.apache.avro.io.BinaryDecoder.access$300(this.decoder);
        } else {
            v0_2 = this.buf;
        }
        return v0_2;
    }

    int getLim()
    {
        int v0_2;
        if (!this.detached) {
            v0_2 = com.flurry.org.apache.avro.io.BinaryDecoder.access$500(this.decoder);
        } else {
            v0_2 = this.limit;
        }
        return v0_2;
    }

    int getPos()
    {
        int v0_2;
        if (!this.detached) {
            v0_2 = com.flurry.org.apache.avro.io.BinaryDecoder.access$400(this.decoder);
        } else {
            v0_2 = this.pos;
        }
        return v0_2;
    }

    void setBuf(byte[] p3, int p4, int p5)
    {
        if (!this.detached) {
            com.flurry.org.apache.avro.io.BinaryDecoder.access$302(this.decoder, p3);
            com.flurry.org.apache.avro.io.BinaryDecoder.access$502(this.decoder, (p4 + p5));
            com.flurry.org.apache.avro.io.BinaryDecoder.access$402(this.decoder, p4);
            com.flurry.org.apache.avro.io.BinaryDecoder.access$602(this.decoder, p4);
        } else {
            this.buf = p3;
            this.limit = (p4 + p5);
            this.pos = p4;
        }
        return;
    }

    void setLimit(int p2)
    {
        if (!this.detached) {
            com.flurry.org.apache.avro.io.BinaryDecoder.access$502(this.decoder, p2);
        } else {
            this.limit = p2;
        }
        return;
    }

    void setPos(int p2)
    {
        if (!this.detached) {
            com.flurry.org.apache.avro.io.BinaryDecoder.access$402(this.decoder, p2);
        } else {
            this.pos = p2;
        }
        return;
    }
}
