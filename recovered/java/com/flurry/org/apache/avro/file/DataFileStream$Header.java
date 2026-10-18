package com.flurry.org.apache.avro.file;
public final class DataFileStream$Header {
    java.util.Map meta;
    private transient java.util.List metaKeyList;
    com.flurry.org.apache.avro.Schema schema;
    byte[] sync;

    private DataFileStream$Header()
    {
        this.meta = new java.util.HashMap();
        this.metaKeyList = new java.util.ArrayList();
        byte[] v0_5 = new byte[16];
        this.sync = v0_5;
        return;
    }

    synthetic DataFileStream$Header(com.flurry.org.apache.avro.file.DataFileStream$1 p1)
    {
        return;
    }

    static synthetic java.util.List access$100(com.flurry.org.apache.avro.file.DataFileStream$Header p1)
    {
        return p1.metaKeyList;
    }

    static synthetic java.util.List access$102(com.flurry.org.apache.avro.file.DataFileStream$Header p0, java.util.List p1)
    {
        p0.metaKeyList = p1;
        return p1;
    }
}
