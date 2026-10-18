package com.flurry.org.apache.avro.io;
 class DirectBinaryDecoder$ReuseByteReader extends com.flurry.org.apache.avro.io.DirectBinaryDecoder$ByteReader {
    private final com.flurry.org.apache.avro.util.ByteBufferInputStream bbi;
    final synthetic com.flurry.org.apache.avro.io.DirectBinaryDecoder this$0;

    public DirectBinaryDecoder$ReuseByteReader(com.flurry.org.apache.avro.io.DirectBinaryDecoder p2, com.flurry.org.apache.avro.util.ByteBufferInputStream p3)
    {
        this.this$0 = p2;
        super(p2, 0);
        super.bbi = p3;
        return;
    }

    public java.nio.ByteBuffer read(java.nio.ByteBuffer p2, int p3)
    {
        java.nio.ByteBuffer v0_1;
        if (p2 == null) {
            v0_1 = this.bbi.readBuffer(p3);
        } else {
            v0_1 = super.read(p2, p3);
        }
        return v0_1;
    }
}
