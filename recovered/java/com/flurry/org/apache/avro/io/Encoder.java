package com.flurry.org.apache.avro.io;
public abstract class Encoder implements java.io.Flushable {

    public Encoder()
    {
        return;
    }

    public abstract void setItemCount(long p0);

    public abstract void startItem();

    public abstract void writeArrayEnd();

    public abstract void writeArrayStart();

    public abstract void writeBoolean(boolean p0);

    public abstract void writeBytes(java.nio.ByteBuffer p0);

    public void writeBytes(byte[] p3)
    {
        this.writeBytes(p3, 0, p3.length);
        return;
    }

    public abstract void writeBytes(byte[] p0, int p1, int p2);

    public abstract void writeDouble(double p0);

    public abstract void writeEnum(int p0);

    public void writeFixed(byte[] p3)
    {
        this.writeFixed(p3, 0, p3.length);
        return;
    }

    public abstract void writeFixed(byte[] p0, int p1, int p2);

    public abstract void writeFloat(float p0);

    public abstract void writeIndex(int p0);

    public abstract void writeInt(int p0);

    public abstract void writeLong(long p0);

    public abstract void writeMapEnd();

    public abstract void writeMapStart();

    public abstract void writeNull();

    public abstract void writeString(com.flurry.org.apache.avro.util.Utf8 p0);

    public void writeString(CharSequence p2)
    {
        if (!(p2 instanceof com.flurry.org.apache.avro.util.Utf8)) {
            this.writeString(p2.toString());
        } else {
            this.writeString(((com.flurry.org.apache.avro.util.Utf8) p2));
        }
        return;
    }

    public void writeString(String p2)
    {
        this.writeString(new com.flurry.org.apache.avro.util.Utf8(p2));
        return;
    }
}
