package com.flurry.org.apache.avro.file;
 class DataFileWriter$BufferedFileOutputStream$PositionFilter extends java.io.FilterOutputStream {
    final synthetic com.flurry.org.apache.avro.file.DataFileWriter$BufferedFileOutputStream this$1;

    public DataFileWriter$BufferedFileOutputStream$PositionFilter(com.flurry.org.apache.avro.file.DataFileWriter$BufferedFileOutputStream p1, java.io.OutputStream p2)
    {
        this.this$1 = p1;
        super(p2);
        return;
    }

    public void write(byte[] p4, int p5, int p6)
    {
        this.out.write(p4, p5, p6);
        com.flurry.org.apache.avro.file.DataFileWriter$BufferedFileOutputStream.access$014(this.this$1, ((long) p6));
        return;
    }
}
