package com.flurry.org.apache.avro.file;
 class DataFileWriter$NonCopyingByteArrayOutputStream extends java.io.ByteArrayOutputStream {

    DataFileWriter$NonCopyingByteArrayOutputStream(int p1)
    {
        super(p1);
        return;
    }

    java.nio.ByteBuffer getByteArrayAsByteBuffer()
    {
        return java.nio.ByteBuffer.wrap(this.buf, 0, this.count);
    }
}
