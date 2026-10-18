package com.flurry.org.apache.avro.io;
public abstract class BinaryEncoder extends com.flurry.org.apache.avro.io.Encoder {

    public BinaryEncoder()
    {
        return;
    }

    public abstract int bytesBuffered();

    public void setItemCount(long p3)
    {
        if (p3 > 0) {
            this.writeLong(p3);
        }
        return;
    }

    public void startItem()
    {
        return;
    }

    public void writeArrayEnd()
    {
        this.writeZero();
        return;
    }

    public void writeArrayStart()
    {
        return;
    }

    public void writeBytes(java.nio.ByteBuffer p5)
    {
        int v1 = p5.position();
        this.writeBytes(p5.array(), (p5.arrayOffset() + v1), (p5.limit() - v1));
        return;
    }

    public void writeBytes(byte[] p1, int p2, int p3)
    {
        if (p3 != 0) {
            this.writeInt(p3);
            this.writeFixed(p1, p2, p3);
        } else {
            this.writeZero();
        }
        return;
    }

    public void writeEnum(int p1)
    {
        this.writeInt(p1);
        return;
    }

    public void writeIndex(int p1)
    {
        this.writeInt(p1);
        return;
    }

    public void writeMapEnd()
    {
        this.writeZero();
        return;
    }

    public void writeMapStart()
    {
        return;
    }

    public void writeNull()
    {
        return;
    }

    public void writeString(com.flurry.org.apache.avro.util.Utf8 p4)
    {
        this.writeBytes(p4.getBytes(), 0, p4.getByteLength());
        return;
    }

    public void writeString(String p4)
    {
        if (p4.length() != 0) {
            byte[] v0 = p4.getBytes("UTF-8");
            this.writeInt(v0.length);
            this.writeFixed(v0, 0, v0.length);
        } else {
            this.writeZero();
        }
        return;
    }

    protected abstract void writeZero();
}
