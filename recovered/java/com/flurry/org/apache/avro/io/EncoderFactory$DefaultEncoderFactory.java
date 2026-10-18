package com.flurry.org.apache.avro.io;
 class EncoderFactory$DefaultEncoderFactory extends com.flurry.org.apache.avro.io.EncoderFactory {

    private EncoderFactory$DefaultEncoderFactory()
    {
        return;
    }

    synthetic EncoderFactory$DefaultEncoderFactory(com.flurry.org.apache.avro.io.EncoderFactory$1 p1)
    {
        return;
    }

    public com.flurry.org.apache.avro.io.EncoderFactory configureBlockSize(int p3)
    {
        throw new com.flurry.org.apache.avro.AvroRuntimeException("Default EncoderFactory cannot be configured");
    }

    public com.flurry.org.apache.avro.io.EncoderFactory configureBufferSize(int p3)
    {
        throw new com.flurry.org.apache.avro.AvroRuntimeException("Default EncoderFactory cannot be configured");
    }
}
