package com.flurry.org.apache.avro.file;
public interface SeekableInput implements java.io.Closeable {

    public abstract long length();

    public abstract int read(byte[] p0, int p1, int p2);

    public abstract void seek(long p0);

    public abstract long tell();
}
