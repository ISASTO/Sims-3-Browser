package com.flurry.org.apache.avro.io;
 class DirectBinaryDecoder$ByteReader {
    final synthetic com.flurry.org.apache.avro.io.DirectBinaryDecoder this$0;

    private DirectBinaryDecoder$ByteReader(com.flurry.org.apache.avro.io.DirectBinaryDecoder p1)
    {
        this.this$0 = p1;
        return;
    }

    synthetic DirectBinaryDecoder$ByteReader(com.flurry.org.apache.avro.io.DirectBinaryDecoder p1, com.flurry.org.apache.avro.io.DirectBinaryDecoder$1 p2)
    {
        this(p1);
        return;
    }

    public java.nio.ByteBuffer read(java.nio.ByteBuffer p5, int p6)
    {
        if ((p5 == null) || (p6 > p5.capacity())) {
            java.nio.ByteBuffer v0 = java.nio.ByteBuffer.allocate(p6);
        } else {
            v0 = p5;
            p5.clear();
        }
        this.this$0.doReadBytes(v0.array(), v0.position(), p6);
        v0.limit(p6);
        return v0;
    }
}
