package com.flurry.org.apache.avro.io;
public interface DatumReader {

    public abstract Object read(Object p0, com.flurry.org.apache.avro.io.Decoder p1);

    public abstract void setSchema(com.flurry.org.apache.avro.Schema p0);
}
