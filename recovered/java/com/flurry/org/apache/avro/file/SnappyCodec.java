package com.flurry.org.apache.avro.file;
 class SnappyCodec extends com.flurry.org.apache.avro.file.Codec {
    private java.util.zip.CRC32 crc32;

    private SnappyCodec()
    {
        this.crc32 = new java.util.zip.CRC32();
        return;
    }

    synthetic SnappyCodec(com.flurry.org.apache.avro.file.SnappyCodec$1 p1)
    {
        return;
    }

    java.nio.ByteBuffer compress(java.nio.ByteBuffer p8)
    {
        java.nio.ByteBuffer v0 = java.nio.ByteBuffer.allocate((org.xerial.snappy.Snappy.maxCompressedLength(p8.remaining()) + 4));
        int v1 = org.xerial.snappy.Snappy.compress(p8.array(), p8.position(), p8.remaining(), v0.array(), 0);
        this.crc32.reset();
        this.crc32.update(p8.array(), p8.position(), p8.remaining());
        v0.putInt(v1, ((int) this.crc32.getValue()));
        v0.limit((v1 + 4));
        return v0;
    }

    java.nio.ByteBuffer decompress(java.nio.ByteBuffer p8)
    {
        java.nio.ByteBuffer v0 = java.nio.ByteBuffer.allocate(org.xerial.snappy.Snappy.uncompressedLength(p8.array(), p8.position(), (p8.remaining() - 4)));
        int v1 = org.xerial.snappy.Snappy.uncompress(p8.array(), p8.position(), (p8.remaining() - 4), v0.array(), 0);
        v0.limit(v1);
        this.crc32.reset();
        this.crc32.update(v0.array(), 0, v1);
        if (p8.getInt((p8.limit() - 4)) == ((int) this.crc32.getValue())) {
            return v0;
        } else {
            throw new java.io.IOException("Checksum failure");
        }
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
        return "snappy";
    }

    public int hashCode()
    {
        return this.getName().hashCode();
    }
}
