package com.flurry.org.apache.avro.file;
public class SeekableByteArrayInput extends java.io.ByteArrayInputStream implements com.flurry.org.apache.avro.file.SeekableInput {

    public SeekableByteArrayInput(byte[] p1)
    {
        super(p1);
        return;
    }

    public long length()
    {
        return ((long) this.count);
    }

    public void seek(long p1)
    {
        this.reset();
        this.skip(p1);
        return;
    }

    public long tell()
    {
        return ((long) this.pos);
    }
}
