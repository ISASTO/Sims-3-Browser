package com.flurry.org.apache.avro.io;
public class BinaryDecoder extends com.flurry.org.apache.avro.io.Decoder {
    private byte[] buf;
    private int limit;
    private int minPos;
    private int pos;
    private final com.flurry.org.apache.avro.util.Utf8 scratchUtf8;
    private com.flurry.org.apache.avro.io.BinaryDecoder$ByteSource source;

    protected BinaryDecoder()
    {
        this.source = 0;
        this.buf = 0;
        this.minPos = 0;
        this.pos = 0;
        this.limit = 0;
        this.scratchUtf8 = new com.flurry.org.apache.avro.util.Utf8();
        return;
    }

    BinaryDecoder(java.io.InputStream p3, int p4)
    {
        this.source = 0;
        this.buf = 0;
        this.minPos = 0;
        this.pos = 0;
        this.limit = 0;
        this.scratchUtf8 = new com.flurry.org.apache.avro.util.Utf8();
        this.configure(p3, p4);
        return;
    }

    BinaryDecoder(byte[] p3, int p4, int p5)
    {
        this.source = 0;
        this.buf = 0;
        this.minPos = 0;
        this.pos = 0;
        this.limit = 0;
        this.scratchUtf8 = new com.flurry.org.apache.avro.util.Utf8();
        this.configure(p3, p4, p5);
        return;
    }

    static synthetic byte[] access$300(com.flurry.org.apache.avro.io.BinaryDecoder p1)
    {
        return p1.buf;
    }

    static synthetic byte[] access$302(com.flurry.org.apache.avro.io.BinaryDecoder p0, byte[] p1)
    {
        p0.buf = p1;
        return p1;
    }

    static synthetic int access$400(com.flurry.org.apache.avro.io.BinaryDecoder p1)
    {
        return p1.pos;
    }

    static synthetic int access$402(com.flurry.org.apache.avro.io.BinaryDecoder p0, int p1)
    {
        p0.pos = p1;
        return p1;
    }

    static synthetic int access$500(com.flurry.org.apache.avro.io.BinaryDecoder p1)
    {
        return p1.limit;
    }

    static synthetic int access$502(com.flurry.org.apache.avro.io.BinaryDecoder p0, int p1)
    {
        p0.limit = p1;
        return p1;
    }

    static synthetic int access$602(com.flurry.org.apache.avro.io.BinaryDecoder p0, int p1)
    {
        p0.minPos = p1;
        return p1;
    }

    private void configureSource(int p2, com.flurry.org.apache.avro.io.BinaryDecoder$ByteSource p3)
    {
        if (this.source != null) {
            this.source.detach();
        }
        p3.attach(p2, this);
        this.source = p3;
        return;
    }

    private long doSkipItems()
    {
        long v2 = ((long) this.readInt());
        while (v2 < 0) {
            this.doSkipBytes(this.readLong());
            v2 = ((long) this.readInt());
        }
        return v2;
    }

    private void ensureBounds(int p6)
    {
        int v0 = (this.limit - this.pos);
        if (v0 < p6) {
            this.source.compactAndFill(this.buf, this.pos, this.minPos, v0);
        }
        return;
    }

    private long innerLongDecode(long p10)
    {
        int v1 = 1;
        int v0_4 = (this.buf[this.pos] & 255);
        long v10_1 = (p10 ^ ((((long) v0_4) & 127) << 28));
        if (v0_4 > 127) {
            int v2 = (1 + 1);
            int v0_0 = (this.buf[(this.pos + 1)] & 255);
            v10_1 ^= ((((long) v0_0) & 127) << 35);
            if (v0_0 <= 127) {
                v1 = v2;
            } else {
                v1 = (v2 + 1);
                int v0_1 = (this.buf[(this.pos + 2)] & 255);
                v10_1 ^= ((((long) v0_1) & 127) << 42);
                if (v0_1 > 127) {
                    v1++;
                    int v0_2 = (this.buf[(this.pos + 3)] & 255);
                    v10_1 ^= ((((long) v0_2) & 127) << 49);
                    if (v0_2 > 127) {
                        v1++;
                        int v0_3 = (this.buf[(this.pos + 4)] & 255);
                        v10_1 ^= ((((long) v0_3) & 127) << 56);
                        if (v0_3 > 127) {
                            v1++;
                            int v0_5 = (this.buf[(this.pos + 5)] & 255);
                            v10_1 ^= ((((long) v0_5) & 127) << 63);
                            if (v0_5 > 127) {
                                throw new java.io.IOException("Invalid long encoding");
                            }
                        }
                    }
                }
            }
        }
        this.pos = (this.pos + v1);
        return v10_1;
    }

    public long arrayNext()
    {
        return this.doReadItemCount();
    }

    com.flurry.org.apache.avro.io.BinaryDecoder configure(java.io.InputStream p3, int p4)
    {
        this.configureSource(p4, new com.flurry.org.apache.avro.io.BinaryDecoder$InputStreamByteSource(p3, 0));
        return this;
    }

    com.flurry.org.apache.avro.io.BinaryDecoder configure(byte[] p4, int p5, int p6)
    {
        this.configureSource(8192, new com.flurry.org.apache.avro.io.BinaryDecoder$ByteArrayByteSource(p4, p5, p6, 0));
        return this;
    }

    protected void doReadBytes(byte[] p4, int p5, int p6)
    {
        int v0 = (this.limit - this.pos);
        if (p6 > v0) {
            System.arraycopy(this.buf, this.pos, p4, p5, v0);
            int v5_1 = (p5 + v0);
            int v6_1 = (p6 - v0);
            this.pos = this.limit;
            this.source.readRaw(p4, v5_1, v6_1);
        } else {
            System.arraycopy(this.buf, this.pos, p4, p5, p6);
            this.pos = (this.pos + p6);
        }
        return;
    }

    protected long doReadItemCount()
    {
        long v0 = this.readLong();
        if (v0 < 0) {
            this.readLong();
            v0 = (- v0);
        }
        return v0;
    }

    protected void doSkipBytes(long p4)
    {
        int v0 = (this.limit - this.pos);
        if (p4 > ((long) v0)) {
            this.pos = 0;
            this.limit = 0;
            this.source.skipSourceBytes((p4 - ((long) v0)));
        } else {
            this.pos = ((int) (((long) this.pos) + p4));
        }
        return;
    }

    com.flurry.org.apache.avro.io.BinaryDecoder$BufferAccessor getBufferAccessor()
    {
        return new com.flurry.org.apache.avro.io.BinaryDecoder$BufferAccessor(this, 0);
    }

    public java.io.InputStream inputStream()
    {
        return this.source;
    }

    public boolean isEnd()
    {
        int v1 = 0;
        if ((this.limit - this.pos) <= 0) {
            if (!this.source.isEof()) {
                int v0 = this.source.tryReadRaw(this.buf, 0, this.buf.length);
                this.pos = 0;
                this.limit = v0;
                if (v0 == 0) {
                    v1 = 1;
                }
            } else {
                v1 = 1;
            }
        }
        return v1;
    }

    public long mapNext()
    {
        return this.doReadItemCount();
    }

    public long readArrayStart()
    {
        return this.doReadItemCount();
    }

    public boolean readBoolean()
    {
        int v1_0 = 1;
        if (this.limit == this.pos) {
            this.limit = this.source.tryReadRaw(this.buf, 0, this.buf.length);
            this.pos = 0;
            if (this.limit == 0) {
                throw new java.io.EOFException();
            }
        }
        byte v3_2 = this.buf;
        int v4_0 = this.pos;
        this.pos = (v4_0 + 1);
        if ((v3_2[v4_0] & 255) != 1) {
            v1_0 = 0;
        }
        return v1_0;
    }

    public java.nio.ByteBuffer readBytes(java.nio.ByteBuffer p5)
    {
        java.nio.ByteBuffer v1;
        int v0 = this.readInt();
        if ((p5 == null) || (v0 > p5.capacity())) {
            v1 = java.nio.ByteBuffer.allocate(v0);
        } else {
            v1 = p5;
            p5.clear();
        }
        this.doReadBytes(v1.array(), v1.position(), v0);
        v1.limit(v0);
        return v1;
    }

    public double readDouble()
    {
        this.ensureBounds(8);
        int v2 = ((((this.buf[this.pos] & 255) | ((this.buf[(this.pos + 1)] & 255) << 8)) | ((this.buf[(this.pos + 2)] & 255) << 16)) | ((this.buf[(this.pos + 3)] & 255) << 24));
        int v3 = ((((this.buf[(this.pos + 4)] & 255) | ((this.buf[(this.pos + 5)] & 255) << 8)) | ((this.buf[(this.pos + 6)] & 255) << 16)) | ((this.buf[(this.pos + 7)] & 255) << 24));
        if ((this.pos + 8) <= this.limit) {
            this.pos = (this.pos + 8);
            return Double.longBitsToDouble(((((long) v2) & 4294967295) | (((long) v3) << 32)));
        } else {
            throw new java.io.EOFException();
        }
    }

    public int readEnum()
    {
        return this.readInt();
    }

    public void readFixed(byte[] p1, int p2, int p3)
    {
        this.doReadBytes(p1, p2, p3);
        return;
    }

    public float readFloat()
    {
        this.ensureBounds(4);
        int v2 = ((((this.buf[this.pos] & 255) | ((this.buf[(this.pos + 1)] & 255) << 8)) | ((this.buf[(this.pos + 2)] & 255) << 16)) | ((this.buf[(this.pos + 3)] & 255) << 24));
        if ((this.pos + 4) <= this.limit) {
            this.pos = (this.pos + 4);
            return Float.intBitsToFloat(v2);
        } else {
            throw new java.io.EOFException();
        }
    }

    public int readIndex()
    {
        return this.readInt();
    }

    public int readInt()
    {
        this.ensureBounds(5);
        int v1 = 1;
        int v0_4 = (this.buf[this.pos] & 255);
        int v3 = (v0_4 & 127);
        if (v0_4 > 127) {
            int v2 = (1 + 1);
            int v0_0 = (this.buf[(this.pos + 1)] & 255);
            v3 ^= ((v0_0 & 127) << 7);
            if (v0_0 <= 127) {
                v1 = v2;
            } else {
                v1 = (v2 + 1);
                int v0_1 = (this.buf[(this.pos + 2)] & 255);
                v3 ^= ((v0_1 & 127) << 14);
                if (v0_1 > 127) {
                    v1++;
                    int v0_2 = (this.buf[(this.pos + 3)] & 255);
                    v3 ^= ((v0_2 & 127) << 21);
                    if (v0_2 > 127) {
                        v1++;
                        int v0_3 = (this.buf[(this.pos + 4)] & 255);
                        v3 ^= ((v0_3 & 127) << 28);
                        if (v0_3 > 127) {
                            throw new java.io.IOException("Invalid int encoding");
                        }
                    }
                }
            }
        }
        this.pos = (this.pos + v1);
        if (this.pos <= this.limit) {
            return ((v3 >> 1) ^ (- (v3 & 1)));
        } else {
            throw new java.io.EOFException();
        }
    }

    public long readLong()
    {
        long v1;
        this.ensureBounds(10);
        long v4_8 = this.buf;
        int v5_3 = this.pos;
        this.pos = (v5_3 + 1);
        int v0_3 = (v4_8[v5_3] & 255);
        int v3_3 = (v0_3 & 127);
        if (v0_3 <= 127) {
            v1 = ((long) v3_3);
        } else {
            long v4_1 = this.buf;
            int v5_0 = this.pos;
            this.pos = (v5_0 + 1);
            int v0_0 = (v4_1[v5_0] & 255);
            int v3_0 = (v3_3 ^ ((v0_0 & 127) << 7));
            if (v0_0 <= 127) {
                v1 = ((long) v3_0);
            } else {
                long v4_5 = this.buf;
                int v5_1 = this.pos;
                this.pos = (v5_1 + 1);
                int v0_1 = (v4_5[v5_1] & 255);
                int v3_1 = (v3_0 ^ ((v0_1 & 127) << 14));
                if (v0_1 <= 127) {
                    v1 = ((long) v3_1);
                } else {
                    long v4_10 = this.buf;
                    int v5_2 = this.pos;
                    this.pos = (v5_2 + 1);
                    int v0_2 = (v4_10[v5_2] & 255);
                    int v3_2 = (v3_1 ^ ((v0_2 & 127) << 21));
                    if (v0_2 <= 127) {
                        v1 = ((long) v3_2);
                    } else {
                        v1 = this.innerLongDecode(((long) v3_2));
                    }
                }
            }
        }
        if (this.pos <= this.limit) {
            return ((v1 >> 1) ^ (- (1 & v1)));
        } else {
            throw new java.io.EOFException();
        }
    }

    public long readMapStart()
    {
        return this.doReadItemCount();
    }

    public void readNull()
    {
        return;
    }

    public com.flurry.org.apache.avro.util.Utf8 readString(com.flurry.org.apache.avro.util.Utf8 p5)
    {
        com.flurry.org.apache.avro.util.Utf8 v1_1;
        int v0 = this.readInt();
        if (p5 == null) {
            v1_1 = new com.flurry.org.apache.avro.util.Utf8();
        } else {
            v1_1 = p5;
        }
        v1_1.setByteLength(v0);
        if (v0 != 0) {
            this.doReadBytes(v1_1.getBytes(), 0, v0);
        }
        return v1_1;
    }

    public String readString()
    {
        return this.readString(this.scratchUtf8).toString();
    }

    public long skipArray()
    {
        return this.doSkipItems();
    }

    public void skipBytes()
    {
        this.doSkipBytes(((long) this.readInt()));
        return;
    }

    public void skipFixed(int p3)
    {
        this.doSkipBytes(((long) p3));
        return;
    }

    public long skipMap()
    {
        return this.doSkipItems();
    }

    public void skipString()
    {
        this.doSkipBytes(((long) this.readInt()));
        return;
    }
}
