package com.flurry.org.apache.avro.io;
abstract class BufferedBinaryEncoder$ByteSink {

    protected BufferedBinaryEncoder$ByteSink()
    {
        return;
    }

    protected abstract void innerFlush();

    protected abstract void innerWrite(byte[] p0, int p1, int p2);
}
