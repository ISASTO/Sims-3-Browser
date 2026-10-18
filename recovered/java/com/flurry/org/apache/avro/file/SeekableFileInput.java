package com.flurry.org.apache.avro.file;
public class SeekableFileInput extends java.io.FileInputStream implements com.flurry.org.apache.avro.file.SeekableInput {

    public SeekableFileInput(java.io.File p1)
    {
        super(p1);
        return;
    }

    public SeekableFileInput(java.io.FileDescriptor p1)
    {
        super(p1);
        return;
    }

    public long length()
    {
        return this.getChannel().size();
    }

    public void seek(long p2)
    {
        this.getChannel().position(p2);
        return;
    }

    public long tell()
    {
        return this.getChannel().position();
    }
}
