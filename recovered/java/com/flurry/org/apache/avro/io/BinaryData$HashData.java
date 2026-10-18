package com.flurry.org.apache.avro.io;
 class BinaryData$HashData {
    private final com.flurry.org.apache.avro.io.BinaryDecoder$BufferAccessor bytes;
    private final com.flurry.org.apache.avro.io.BinaryDecoder decoder;

    public BinaryData$HashData()
    {
        byte[] v1 = new byte[0];
        this.decoder = new com.flurry.org.apache.avro.io.BinaryDecoder(v1, 0, 0);
        this.bytes = this.decoder.getBufferAccessor();
        return;
    }

    static synthetic com.flurry.org.apache.avro.io.BinaryDecoder access$400(com.flurry.org.apache.avro.io.BinaryData$HashData p1)
    {
        return p1.decoder;
    }

    static synthetic com.flurry.org.apache.avro.io.BinaryDecoder$BufferAccessor access$500(com.flurry.org.apache.avro.io.BinaryData$HashData p1)
    {
        return p1.bytes;
    }

    public void set(byte[] p2, int p3, int p4)
    {
        this.decoder.configure(p2, p3, p4);
        return;
    }
}
