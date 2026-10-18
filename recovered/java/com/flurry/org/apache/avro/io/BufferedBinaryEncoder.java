package com.flurry.org.apache.avro.io;
public class BufferedBinaryEncoder extends com.flurry.org.apache.avro.io.BinaryEncoder {
    private byte[] buf;
    private int bulkLimit;
    private int pos;
    private com.flurry.org.apache.avro.io.BufferedBinaryEncoder$ByteSink sink;

    BufferedBinaryEncoder(java.io.OutputStream p1, int p2)
    {
        this.configure(p1, p2);
        return;
    }

    private void ensureBounds(int p4)
    {
        if ((this.buf.length - this.pos) < p4) {
            this.flushBuffer();
        }
        return;
    }

    private void flushBuffer()
    {
        if (this.pos > 0) {
            this.sink.innerWrite(this.buf, 0, this.pos);
            this.pos = 0;
        }
        return;
    }

    private void writeByte(int p4)
    {
        if (this.pos == this.buf.length) {
            this.flushBuffer();
        }
        byte[] v0_1 = this.buf;
        int v1_2 = this.pos;
        this.pos = (v1_2 + 1);
        v0_1[v1_2] = ((byte) (p4 & 255));
        return;
    }

    public int bytesBuffered()
    {
        return this.pos;
    }

    com.flurry.org.apache.avro.io.BufferedBinaryEncoder configure(java.io.OutputStream p5, int p6)
    {
        if (p5 != null) {
            if ((this.sink != null) && (this.pos > 0)) {
                try {
                    this.flushBuffer();
                } catch (java.io.IOException v0) {
                    throw new com.flurry.org.apache.avro.AvroRuntimeException("Failure flushing old output", v0);
                }
            }
            this.sink = new com.flurry.org.apache.avro.io.BufferedBinaryEncoder$OutputStreamSink(p5, 0);
            this.pos = 0;
            if ((this.buf == null) || (this.buf.length != p6)) {
                int v1_8 = new byte[p6];
                this.buf = v1_8;
            }
            this.bulkLimit = (this.buf.length >> 1);
            if (this.bulkLimit > 512) {
                this.bulkLimit = 512;
            }
            return this;
        } else {
            throw new NullPointerException("OutputStream cannot be null!");
        }
    }

    public void flush()
    {
        this.flushBuffer();
        this.sink.innerFlush();
        return;
    }

    public void writeBoolean(boolean p4)
    {
        if (this.buf.length == this.pos) {
            this.flushBuffer();
        }
        this.pos = (this.pos + com.flurry.org.apache.avro.io.BinaryData.encodeBoolean(p4, this.buf, this.pos));
        return;
    }

    public void writeDouble(double p4)
    {
        this.ensureBounds(8);
        this.pos = (this.pos + com.flurry.org.apache.avro.io.BinaryData.encodeDouble(p4, this.buf, this.pos));
        return;
    }

    public void writeFixed(byte[] p3, int p4, int p5)
    {
        if (p5 <= this.bulkLimit) {
            this.ensureBounds(p5);
            System.arraycopy(p3, p4, this.buf, this.pos, p5);
            this.pos = (this.pos + p5);
        } else {
            this.flushBuffer();
            this.sink.innerWrite(p3, p4, p5);
        }
        return;
    }

    public void writeFloat(float p4)
    {
        this.ensureBounds(4);
        this.pos = (this.pos + com.flurry.org.apache.avro.io.BinaryData.encodeFloat(p4, this.buf, this.pos));
        return;
    }

    public void writeInt(int p4)
    {
        this.ensureBounds(5);
        this.pos = (this.pos + com.flurry.org.apache.avro.io.BinaryData.encodeInt(p4, this.buf, this.pos));
        return;
    }

    public void writeLong(long p4)
    {
        this.ensureBounds(10);
        this.pos = (this.pos + com.flurry.org.apache.avro.io.BinaryData.encodeLong(p4, this.buf, this.pos));
        return;
    }

    protected void writeZero()
    {
        this.writeByte(0);
        return;
    }
}
