package com.flurry.org.apache.avro.io;
 class BinaryData$Decoders {
    private final com.flurry.org.apache.avro.io.BinaryDecoder$BufferAccessor b1;
    private final com.flurry.org.apache.avro.io.BinaryDecoder$BufferAccessor b2;
    private final com.flurry.org.apache.avro.io.BinaryDecoder d1;
    private final com.flurry.org.apache.avro.io.BinaryDecoder d2;

    public BinaryData$Decoders()
    {
        byte[] v1_0 = new byte[0];
        this.d1 = new com.flurry.org.apache.avro.io.BinaryDecoder(v1_0, 0, 0);
        byte[] v1_1 = new byte[0];
        this.d2 = new com.flurry.org.apache.avro.io.BinaryDecoder(v1_1, 0, 0);
        this.b1 = this.d1.getBufferAccessor();
        this.b2 = this.d2.getBufferAccessor();
        return;
    }

    static synthetic com.flurry.org.apache.avro.io.BinaryDecoder access$000(com.flurry.org.apache.avro.io.BinaryData$Decoders p1)
    {
        return p1.d1;
    }

    static synthetic com.flurry.org.apache.avro.io.BinaryDecoder access$100(com.flurry.org.apache.avro.io.BinaryData$Decoders p1)
    {
        return p1.d2;
    }

    static synthetic com.flurry.org.apache.avro.io.BinaryDecoder$BufferAccessor access$200(com.flurry.org.apache.avro.io.BinaryData$Decoders p1)
    {
        return p1.b1;
    }

    static synthetic com.flurry.org.apache.avro.io.BinaryDecoder$BufferAccessor access$300(com.flurry.org.apache.avro.io.BinaryData$Decoders p1)
    {
        return p1.b2;
    }

    public void set(byte[] p2, int p3, int p4, byte[] p5, int p6, int p7)
    {
        this.d1.configure(p2, p3, p4);
        this.d2.configure(p5, p6, p7);
        return;
    }
}
