package com.flurry.org.apache.avro.file;
 class DataFileWriter$BufferedFileOutputStream extends java.io.BufferedOutputStream {
    private long position;
    final synthetic com.flurry.org.apache.avro.file.DataFileWriter this$0;

    public DataFileWriter$BufferedFileOutputStream(com.flurry.org.apache.avro.file.DataFileWriter p2, java.io.OutputStream p3)
    {
        this.this$0 = p2;
        super(0);
        super.out = new com.flurry.org.apache.avro.file.DataFileWriter$BufferedFileOutputStream$PositionFilter(super, p3);
        return;
    }

    static synthetic long access$014(com.flurry.org.apache.avro.file.DataFileWriter$BufferedFileOutputStream p2, long p3)
    {
        long v0_1 = (p2.position + p3);
        p2.position = v0_1;
        return v0_1;
    }

    public long tell()
    {
        return (this.position + ((long) this.count));
    }
}
