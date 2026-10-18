package com.flurry.org.apache.avro.io;
 class BufferedBinaryEncoder$OutputStreamSink extends com.flurry.org.apache.avro.io.BufferedBinaryEncoder$ByteSink {
    private final java.io.OutputStream out;

    private BufferedBinaryEncoder$OutputStreamSink(java.io.OutputStream p1)
    {
        this.out = p1;
        return;
    }

    synthetic BufferedBinaryEncoder$OutputStreamSink(java.io.OutputStream p1, com.flurry.org.apache.avro.io.BufferedBinaryEncoder$1 p2)
    {
        this(p1);
        return;
    }

    protected void innerFlush()
    {
        this.out.flush();
        return;
    }

    protected void innerWrite(byte[] p2, int p3, int p4)
    {
        this.out.write(p2, p3, p4);
        return;
    }
}
