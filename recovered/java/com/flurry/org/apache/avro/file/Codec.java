package com.flurry.org.apache.avro.file;
abstract class Codec {

    Codec()
    {
        return;
    }

    abstract java.nio.ByteBuffer compress(java.nio.ByteBuffer p0);

    abstract java.nio.ByteBuffer decompress(java.nio.ByteBuffer p0);

    public abstract boolean equals(Object p0);

    abstract String getName();

    public abstract int hashCode();

    public String toString()
    {
        return this.getName();
    }
}
