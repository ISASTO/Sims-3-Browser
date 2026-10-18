package com.flurry.org.apache.avro.io;
 class DirectBinaryDecoder extends com.flurry.org.apache.avro.io.BinaryDecoder {
    private final byte[] buf;
    private com.flurry.org.apache.avro.io.DirectBinaryDecoder$ByteReader byteReader;
    private java.io.InputStream in;

    DirectBinaryDecoder(java.io.InputStream p2)
    {
        byte[] v0_1 = new byte[8];
        this.buf = v0_1;
        this.configure(p2);
        return;
    }

    com.flurry.org.apache.avro.io.DirectBinaryDecoder configure(java.io.InputStream p3)
    {
        com.flurry.org.apache.avro.io.DirectBinaryDecoder$ByteReader v0_2;
        this.in = p3;
        if (!(p3 instanceof com.flurry.org.apache.avro.util.ByteBufferInputStream)) {
            v0_2 = new com.flurry.org.apache.avro.io.DirectBinaryDecoder$ByteReader(this, 0);
        } else {
            v0_2 = new com.flurry.org.apache.avro.io.DirectBinaryDecoder$ReuseByteReader(this, ((com.flurry.org.apache.avro.util.ByteBufferInputStream) p3));
        }
        this.byteReader = v0_2;
        return this;
    }

    protected void doReadBytes(byte[] p3, int p4, int p5)
    {
        while(true) {
            int v0 = this.in.read(p3, p4, p5);
            if ((v0 == p5) || (p5 == 0)) {
                break;
            }
            if (v0 >= 0) {
                p4 += v0;
                p5 -= v0;
            } else {
                throw new java.io.EOFException();
            }
        }
        return;
    }

    protected void doSkipBytes(long p6)
    {
        while (p6 > 0) {
            long v0 = this.in.skip(p6);
            if (v0 > 0) {
                p6 -= v0;
            } else {
                throw new java.io.EOFException();
            }
        }
        return;
    }

    public java.io.InputStream inputStream()
    {
        return this.in;
    }

    public boolean isEnd()
    {
        throw new UnsupportedOperationException();
    }

    public boolean readBoolean()
    {
        int v1_0 = 1;
        int v0 = this.in.read();
        if (v0 >= 0) {
            if (v0 != 1) {
                v1_0 = 0;
            }
            return v1_0;
        } else {
            throw new java.io.EOFException();
        }
    }

    public java.nio.ByteBuffer readBytes(java.nio.ByteBuffer p3)
    {
        return this.byteReader.read(p3, this.readInt());
    }

    public double readDouble()
    {
        long v7 = 255;
        this.doReadBytes(this.buf, 0, 8);
        return Double.longBitsToDouble(((((((((((long) this.buf[0]) & v7) | ((((long) this.buf[1]) & v7) << 8)) | ((((long) this.buf[2]) & 255) << 16)) | ((((long) this.buf[3]) & v7) << 24)) | ((((long) this.buf[4]) & 255) << 32)) | ((((long) this.buf[5]) & v7) << 40)) | ((((long) this.buf[6]) & 255) << 48)) | ((((long) this.buf[7]) & 255) << 56)));
    }

    public float readFloat()
    {
        this.doReadBytes(this.buf, 0, 4);
        return Float.intBitsToFloat(((((this.buf[0] & 255) | ((this.buf[1] & 255) << 8)) | ((this.buf[2] & 255) << 16)) | ((this.buf[3] & 255) << 24)));
    }

    public int readInt()
    {
        int v1 = 0;
        int v2 = 0;
        do {
            int v0 = this.in.read();
            if (v0 < 0) {
                throw new java.io.EOFException();
            } else {
                v1 |= ((v0 & 127) << v2);
                if ((v0 & 128) != 0) {
                    v2 += 7;
                } else {
                    return ((v1 >> 1) ^ (- (v1 & 1)));
                }
            }
        } while(v2 < 32);
        throw new java.io.IOException("Invalid int encoding");
    }

    public long readLong()
    {
        long v1 = 0;
        int v3 = 0;
        do {
            int v0 = this.in.read();
            if (v0 < 0) {
                throw new java.io.EOFException();
            } else {
                v1 |= ((((long) v0) & 127) << v3);
                if ((v0 & 128) != 0) {
                    v3 += 7;
                } else {
                    return ((v1 >> 1) ^ (- (1 & v1)));
                }
            }
        } while(v3 < 64);
        throw new java.io.IOException("Invalid long encoding");
    }
}
