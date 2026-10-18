package com.flurry.org.apache.avro.file;
public interface FileReader implements java.io.Closeable, java.lang.Iterable, java.util.Iterator {

    public abstract com.flurry.org.apache.avro.Schema getSchema();

    public abstract Object next(Object p0);

    public abstract boolean pastSync(long p0);

    public abstract void sync(long p0);

    public abstract long tell();
}
