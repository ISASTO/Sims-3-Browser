package com.flurry.org.apache.avro.io;
public abstract class Decoder {

    public Decoder()
    {
        return;
    }

    public abstract long arrayNext();

    public abstract long mapNext();

    public abstract long readArrayStart();

    public abstract boolean readBoolean();

    public abstract java.nio.ByteBuffer readBytes(java.nio.ByteBuffer p0);

    public abstract double readDouble();

    public abstract int readEnum();

    public void readFixed(byte[] p3)
    {
        this.readFixed(p3, 0, p3.length);
        return;
    }

    public abstract void readFixed(byte[] p0, int p1, int p2);

    public abstract float readFloat();

    public abstract int readIndex();

    public abstract int readInt();

    public abstract long readLong();

    public abstract long readMapStart();

    public abstract void readNull();

    public abstract com.flurry.org.apache.avro.util.Utf8 readString(com.flurry.org.apache.avro.util.Utf8 p0);

    public abstract String readString();

    public abstract long skipArray();

    public abstract void skipBytes();

    public abstract void skipFixed(int p0);

    public abstract long skipMap();

    public abstract void skipString();
}
