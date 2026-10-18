package com.flurry.org.apache.avro.io;
public class DirectBinaryEncoder extends com.flurry.org.apache.avro.io.BinaryEncoder {
    private final byte[] buf;
    private java.io.OutputStream out;

    DirectBinaryEncoder(java.io.OutputStream p2)
    {
        byte[] v0_1 = new byte[12];
        this.buf = v0_1;
        this.configure(p2);
        return;
    }

    public int bytesBuffered()
    {
        return 0;
    }

    com.flurry.org.apache.avro.io.DirectBinaryEncoder configure(java.io.OutputStream p3)
    {
        if (p3 != null) {
            this.out = p3;
            return this;
        } else {
            throw new NullPointerException("OutputStream cannot be null!");
        }
    }

    public void flush()
    {
        this.out.flush();
        return;
    }

    public void writeBoolean(boolean p3)
    {
        int v0;
        if (!p3) {
            v0 = 0;
        } else {
            v0 = 1;
        }
        this.out.write(v0);
        return;
    }

    public void writeDouble(double p5)
    {
        int v3 = 0;
        byte[] v0 = new byte[8];
        this.out.write(v0, v3, com.flurry.org.apache.avro.io.BinaryData.encodeDouble(p5, v0, v3));
        return;
    }

    public void writeFixed(byte[] p2, int p3, int p4)
    {
        this.out.write(p2, p3, p4);
        return;
    }

    public void writeFloat(float p5)
    {
        this.out.write(this.buf, 0, com.flurry.org.apache.avro.io.BinaryData.encodeFloat(p5, this.buf, 0));
        return;
    }

    public void writeInt(int p6)
    {
        int v1 = ((p6 << 1) ^ (p6 >> 31));
        if ((v1 & -128) != 0) {
            if ((v1 & -16384) != 0) {
                this.out.write(this.buf, 0, com.flurry.org.apache.avro.io.BinaryData.encodeInt(p6, this.buf, 0));
            } else {
                this.out.write((v1 | 128));
                this.out.write((v1 >> 7));
            }
        } else {
            this.out.write(v1);
        }
        return;
    }

    public void writeLong(long p10)
    {
        long v2 = ((p10 << 1) ^ (p10 >> 63));
        if ((-2147483648 & v2) != 0) {
            this.out.write(this.buf, 0, com.flurry.org.apache.avro.io.BinaryData.encodeLong(p10, this.buf, 0));
        } else {
            int v0 = ((int) v2);
            while ((v0 & -128) != 0) {
                this.out.write(((byte) ((v0 | 128) & 255)));
                v0 >>= 7;
            }
            this.out.write(((byte) v0));
        }
        return;
    }

    protected void writeZero()
    {
        this.out.write(0);
        return;
    }
}
