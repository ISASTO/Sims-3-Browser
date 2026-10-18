package com.flurry.org.apache.avro.io;
public class EncoderFactory {
    private static final int DEFAULT_BLOCK_BUFFER_SIZE = 65536;
    private static final int DEFAULT_BUFFER_SIZE = 2048;
    private static final com.flurry.org.apache.avro.io.EncoderFactory DEFAULT_FACTORY = None;
    private static final int MAX_BLOCK_BUFFER_SIZE = 1073741824;
    private static final int MIN_BLOCK_BUFFER_SIZE = 64;
    protected int binaryBlockSize;
    protected int binaryBufferSize;

    static EncoderFactory()
    {
        com.flurry.org.apache.avro.io.EncoderFactory.DEFAULT_FACTORY = new com.flurry.org.apache.avro.io.EncoderFactory$DefaultEncoderFactory(0);
        return;
    }

    public EncoderFactory()
    {
        this.binaryBufferSize = 2048;
        this.binaryBlockSize = 65536;
        return;
    }

    public static com.flurry.org.apache.avro.io.EncoderFactory get()
    {
        return com.flurry.org.apache.avro.io.EncoderFactory.DEFAULT_FACTORY;
    }

    public com.flurry.org.apache.avro.io.BinaryEncoder binaryEncoder(java.io.OutputStream p3, com.flurry.org.apache.avro.io.BinaryEncoder p4)
    {
        if ((p4 != null) && (p4.getClass().equals(com.flurry.org.apache.avro.io.BufferedBinaryEncoder))) {
            com.flurry.org.apache.avro.io.BufferedBinaryEncoder v0_0 = ((com.flurry.org.apache.avro.io.BufferedBinaryEncoder) p4).configure(p3, this.binaryBufferSize);
        } else {
            v0_0 = new com.flurry.org.apache.avro.io.BufferedBinaryEncoder(p3, this.binaryBufferSize);
        }
        return v0_0;
    }

    public com.flurry.org.apache.avro.io.BinaryEncoder blockingBinaryEncoder(java.io.OutputStream p4, com.flurry.org.apache.avro.io.BinaryEncoder p5)
    {
        if ((p5 != null) && (p5.getClass().equals(com.flurry.org.apache.avro.io.BlockingBinaryEncoder))) {
            com.flurry.org.apache.avro.io.BlockingBinaryEncoder v0_0 = ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder) p5).configure(p4, this.binaryBlockSize, 32);
        } else {
            v0_0 = new com.flurry.org.apache.avro.io.BlockingBinaryEncoder(p4, this.binaryBlockSize, 32);
        }
        return v0_0;
    }

    public com.flurry.org.apache.avro.io.EncoderFactory configureBlockSize(int p2)
    {
        if (p2 < 64) {
            p2 = 64;
        }
        if (p2 > 1073741824) {
            p2 = 1073741824;
        }
        this.binaryBufferSize = p2;
        return this;
    }

    public com.flurry.org.apache.avro.io.EncoderFactory configureBufferSize(int p2)
    {
        if (p2 < 32) {
            p2 = 32;
        }
        if (p2 > 16777216) {
            p2 = 16777216;
        }
        this.binaryBufferSize = p2;
        return this;
    }

    public com.flurry.org.apache.avro.io.BinaryEncoder directBinaryEncoder(java.io.OutputStream p3, com.flurry.org.apache.avro.io.BinaryEncoder p4)
    {
        if ((p4 != null) && (p4.getClass().equals(com.flurry.org.apache.avro.io.DirectBinaryEncoder))) {
            com.flurry.org.apache.avro.io.DirectBinaryEncoder v0_1 = ((com.flurry.org.apache.avro.io.DirectBinaryEncoder) p4).configure(p3);
        } else {
            v0_1 = new com.flurry.org.apache.avro.io.DirectBinaryEncoder(p3);
        }
        return v0_1;
    }

    public int getBlockSize()
    {
        return this.binaryBlockSize;
    }

    public int getBufferSize()
    {
        return this.binaryBufferSize;
    }

    public com.flurry.org.apache.avro.io.JsonEncoder jsonEncoder(com.flurry.org.apache.avro.Schema p2, com.flurry.org.codehaus.jackson.JsonGenerator p3)
    {
        return new com.flurry.org.apache.avro.io.JsonEncoder(p2, p3);
    }

    public com.flurry.org.apache.avro.io.JsonEncoder jsonEncoder(com.flurry.org.apache.avro.Schema p2, java.io.OutputStream p3)
    {
        return new com.flurry.org.apache.avro.io.JsonEncoder(p2, p3);
    }

    public com.flurry.org.apache.avro.io.ValidatingEncoder validatingEncoder(com.flurry.org.apache.avro.Schema p2, com.flurry.org.apache.avro.io.Encoder p3)
    {
        return new com.flurry.org.apache.avro.io.ValidatingEncoder(p2, p3);
    }
}
