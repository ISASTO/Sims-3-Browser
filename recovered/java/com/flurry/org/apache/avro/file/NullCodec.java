package com.flurry.org.apache.avro.file;
final class NullCodec extends com.flurry.org.apache.avro.file.Codec {
    private static final com.flurry.org.apache.avro.file.NullCodec INSTANCE;
    public static final com.flurry.org.apache.avro.file.CodecFactory OPTION;

    static NullCodec()
    {
        com.flurry.org.apache.avro.file.NullCodec.INSTANCE = new com.flurry.org.apache.avro.file.NullCodec();
        com.flurry.org.apache.avro.file.NullCodec.OPTION = new com.flurry.org.apache.avro.file.NullCodec$Option();
        return;
    }

    NullCodec()
    {
        return;
    }

    static synthetic com.flurry.org.apache.avro.file.NullCodec access$000()
    {
        return com.flurry.org.apache.avro.file.NullCodec.INSTANCE;
    }

    java.nio.ByteBuffer compress(java.nio.ByteBuffer p1)
    {
        return p1;
    }

    java.nio.ByteBuffer decompress(java.nio.ByteBuffer p1)
    {
        return p1;
    }

    public boolean equals(Object p4)
    {
        int v0 = 1;
        if ((this != p4) && (this.getClass() != p4.getClass())) {
            v0 = 0;
        }
        return v0;
    }

    String getName()
    {
        return "null";
    }

    public int hashCode()
    {
        return 2;
    }
}
