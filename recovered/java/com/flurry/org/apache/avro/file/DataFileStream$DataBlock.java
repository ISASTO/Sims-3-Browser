package com.flurry.org.apache.avro.file;
 class DataFileStream$DataBlock {
    private int blockSize;
    private byte[] data;
    private long numEntries;
    private int offset;

    private DataFileStream$DataBlock(long p2, int p4)
    {
        this.offset = 0;
        byte[] v0_1 = new byte[p4];
        this.data = v0_1;
        this.numEntries = p2;
        this.blockSize = p4;
        return;
    }

    synthetic DataFileStream$DataBlock(long p1, int p3, com.flurry.org.apache.avro.file.DataFileStream$1 p4)
    {
        this(p1, p3);
        return;
    }

    DataFileStream$DataBlock(java.nio.ByteBuffer p3, long p4)
    {
        this.offset = 0;
        this.data = p3.array();
        this.blockSize = p3.remaining();
        this.offset = (p3.arrayOffset() + p3.position());
        this.numEntries = p4;
        return;
    }

    static synthetic byte[] access$200(com.flurry.org.apache.avro.file.DataFileStream$DataBlock p1)
    {
        return p1.data;
    }

    static synthetic long access$402(com.flurry.org.apache.avro.file.DataFileStream$DataBlock p0, long p1)
    {
        p0.numEntries = p1;
        return p1;
    }

    static synthetic int access$500(com.flurry.org.apache.avro.file.DataFileStream$DataBlock p1)
    {
        return p1.blockSize;
    }

    static synthetic int access$502(com.flurry.org.apache.avro.file.DataFileStream$DataBlock p0, int p1)
    {
        p0.blockSize = p1;
        return p1;
    }

    void compressUsing(com.flurry.org.apache.avro.file.Codec p3)
    {
        java.nio.ByteBuffer v0 = p3.compress(this.getAsByteBuffer());
        this.data = v0.array();
        this.blockSize = v0.remaining();
        return;
    }

    void decompressUsing(com.flurry.org.apache.avro.file.Codec p3)
    {
        java.nio.ByteBuffer v0 = p3.decompress(this.getAsByteBuffer());
        this.data = v0.array();
        this.blockSize = v0.remaining();
        return;
    }

    java.nio.ByteBuffer getAsByteBuffer()
    {
        return java.nio.ByteBuffer.wrap(this.data, this.offset, this.blockSize);
    }

    int getBlockSize()
    {
        return this.blockSize;
    }

    byte[] getData()
    {
        return this.data;
    }

    long getNumEntries()
    {
        return this.numEntries;
    }

    void writeBlockTo(com.flurry.org.apache.avro.io.BinaryEncoder p4, byte[] p5)
    {
        p4.writeLong(this.numEntries);
        p4.writeLong(((long) this.blockSize));
        p4.writeFixed(this.data, this.offset, this.blockSize);
        p4.writeFixed(p5);
        p4.flush();
        return;
    }
}
