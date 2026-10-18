package com.flurry.org.apache.avro.io;
 class BinaryDecoder$InputStreamByteSource extends com.flurry.org.apache.avro.io.BinaryDecoder$ByteSource {
    private java.io.InputStream in;
    protected boolean isEof;

    private BinaryDecoder$InputStreamByteSource(java.io.InputStream p2)
    {
        this.isEof = 0;
        this.in = p2;
        return;
    }

    synthetic BinaryDecoder$InputStreamByteSource(java.io.InputStream p1, com.flurry.org.apache.avro.io.BinaryDecoder$1 p2)
    {
        this(p1);
        return;
    }

    public void close()
    {
        this.in.close();
        return;
    }

    public boolean isEof()
    {
        return this.isEof;
    }

    public int read()
    {
        int v1;
        if ((this.ba.getLim() - this.ba.getPos()) != 0) {
            int v0 = this.ba.getPos();
            v1 = (this.ba.getBuf()[v0] & 255);
            this.ba.setPos((v0 + 1));
        } else {
            v1 = this.in.read();
        }
        return v1;
    }

    protected void readRaw(byte[] p3, int p4, int p5)
    {
        while (p5 > 0) {
            int v0 = this.in.read(p3, p4, p5);
            if (v0 >= 0) {
                p5 -= v0;
                p4 += v0;
            } else {
                this.isEof = 1;
                throw new java.io.EOFException();
            }
        }
        return;
    }

    protected void skipSourceBytes(long p8)
    {
        int v2 = 0;
        while (p8 > 0) {
            long v0 = this.in.skip(p8);
            if (v0 <= 0) {
                if (v0 != 0) {
                    this.isEof = 1;
                    throw new java.io.EOFException();
                } else {
                    if (v2 == 0) {
                        v2 = 1;
                    } else {
                        this.isEof = 1;
                        throw new java.io.EOFException();
                    }
                }
            } else {
                p8 -= v0;
            }
        }
        return;
    }

    protected int tryReadRaw(byte[] p6, int p7, int p8)
    {
        int v1 = p8;
        while (v1 > 0) {
            try {
                int v2 = this.in.read(p6, p7, v1);
            } catch (java.io.EOFException v0) {
                this.isEof = 1;
                break;
            }
            if (v2 >= 0) {
                v1 -= v2;
                p7 += v2;
            } else {
                this.isEof = 1;
                break;
            }
        }
        return (p8 - v1);
    }

    protected long trySkipBytes(long p11)
    {
        long v1 = p11;
        int v5 = 0;
        try {
            while (v1 > 0) {
                long v3 = this.in.skip(p11);
                if (v3 <= 0) {
                    if (v3 != 0) {
                        this.isEof = 1;
                        break;
                    } else {
                        if (v5 == 0) {
                            v5 = 1;
                        } else {
                            this.isEof = 1;
                            break;
                        }
                    }
                } else {
                    v1 -= v3;
                }
            }
        } catch (java.io.EOFException v0) {
            this.isEof = 1;
        }
        return (p11 - v1);
    }
}
