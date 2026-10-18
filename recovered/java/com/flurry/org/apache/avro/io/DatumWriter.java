package com.flurry.org.apache.avro.io;
public interface DatumWriter {

    public abstract void setSchema(com.flurry.org.apache.avro.Schema p0);

    public abstract void write(Object p0, com.flurry.org.apache.avro.io.Encoder p1);
}
