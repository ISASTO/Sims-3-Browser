package com.flurry.org.apache.avro.io;
public class DecoderFactory {
    static final int DEFAULT_BUFFER_SIZE = 8192;
    private static final com.flurry.org.apache.avro.io.DecoderFactory DEFAULT_FACTORY;
    int binaryDecoderBufferSize;

    static DecoderFactory()
    {
        com.flurry.org.apache.avro.io.DecoderFactory.DEFAULT_FACTORY = new com.flurry.org.apache.avro.io.DecoderFactory$DefaultDecoderFactory(0);
        return;
    }

    public DecoderFactory()
    {
        this.binaryDecoderBufferSize = 8192;
        return;
    }

    public static com.flurry.org.apache.avro.io.DecoderFactory defaultFactory()
    {
        return com.flurry.org.apache.avro.io.DecoderFactory.get();
    }

    public static com.flurry.org.apache.avro.io.DecoderFactory get()
    {
        return com.flurry.org.apache.avro.io.DecoderFactory.DEFAULT_FACTORY;
    }

    public com.flurry.org.apache.avro.io.BinaryDecoder binaryDecoder(java.io.InputStream p3, com.flurry.org.apache.avro.io.BinaryDecoder p4)
    {
        if ((p4 != null) && (p4.getClass().equals(com.flurry.org.apache.avro.io.BinaryDecoder))) {
            com.flurry.org.apache.avro.io.BinaryDecoder v0_1 = p4.configure(p3, this.binaryDecoderBufferSize);
        } else {
            v0_1 = new com.flurry.org.apache.avro.io.BinaryDecoder(p3, this.binaryDecoderBufferSize);
        }
        return v0_1;
    }

    public com.flurry.org.apache.avro.io.BinaryDecoder binaryDecoder(byte[] p3, int p4, int p5, com.flurry.org.apache.avro.io.BinaryDecoder p6)
    {
        if ((p6 != null) && (p6.getClass().equals(com.flurry.org.apache.avro.io.BinaryDecoder))) {
            com.flurry.org.apache.avro.io.BinaryDecoder v0_0 = p6.configure(p3, p4, p5);
        } else {
            v0_0 = new com.flurry.org.apache.avro.io.BinaryDecoder(p3, p4, p5);
        }
        return v0_0;
    }

    public com.flurry.org.apache.avro.io.BinaryDecoder binaryDecoder(byte[] p3, com.flurry.org.apache.avro.io.BinaryDecoder p4)
    {
        return this.binaryDecoder(p3, 0, p3.length, p4);
    }

    public com.flurry.org.apache.avro.io.DecoderFactory configureDecoderBufferSize(int p2)
    {
        if (p2 < 32) {
            p2 = 32;
        }
        if (p2 > 16777216) {
            p2 = 16777216;
        }
        this.binaryDecoderBufferSize = p2;
        return this;
    }

    public com.flurry.org.apache.avro.io.BinaryDecoder createBinaryDecoder(java.io.InputStream p2, com.flurry.org.apache.avro.io.BinaryDecoder p3)
    {
        return this.binaryDecoder(p2, p3);
    }

    public com.flurry.org.apache.avro.io.BinaryDecoder createBinaryDecoder(byte[] p3, int p4, int p5, com.flurry.org.apache.avro.io.BinaryDecoder p6)
    {
        if ((p6 != null) && (p6.getClass().equals(com.flurry.org.apache.avro.io.BinaryDecoder))) {
            com.flurry.org.apache.avro.io.BinaryDecoder v0_0 = p6.configure(p3, p4, p5);
        } else {
            v0_0 = new com.flurry.org.apache.avro.io.BinaryDecoder(p3, p4, p5);
        }
        return v0_0;
    }

    public com.flurry.org.apache.avro.io.BinaryDecoder createBinaryDecoder(byte[] p3, com.flurry.org.apache.avro.io.BinaryDecoder p4)
    {
        return this.binaryDecoder(p3, 0, p3.length, p4);
    }

    public com.flurry.org.apache.avro.io.BinaryDecoder directBinaryDecoder(java.io.InputStream p3, com.flurry.org.apache.avro.io.BinaryDecoder p4)
    {
        if ((p4 != null) && (p4.getClass().equals(com.flurry.org.apache.avro.io.DirectBinaryDecoder))) {
            com.flurry.org.apache.avro.io.DirectBinaryDecoder v0_1 = ((com.flurry.org.apache.avro.io.DirectBinaryDecoder) p4).configure(p3);
        } else {
            v0_1 = new com.flurry.org.apache.avro.io.DirectBinaryDecoder(p3);
        }
        return v0_1;
    }

    public int getConfiguredBufferSize()
    {
        return this.binaryDecoderBufferSize;
    }

    public com.flurry.org.apache.avro.io.JsonDecoder jsonDecoder(com.flurry.org.apache.avro.Schema p2, java.io.InputStream p3)
    {
        return new com.flurry.org.apache.avro.io.JsonDecoder(p2, p3);
    }

    public com.flurry.org.apache.avro.io.JsonDecoder jsonDecoder(com.flurry.org.apache.avro.Schema p2, String p3)
    {
        return new com.flurry.org.apache.avro.io.JsonDecoder(p2, p3);
    }

    public com.flurry.org.apache.avro.io.ResolvingDecoder resolvingDecoder(com.flurry.org.apache.avro.Schema p2, com.flurry.org.apache.avro.Schema p3, com.flurry.org.apache.avro.io.Decoder p4)
    {
        return new com.flurry.org.apache.avro.io.ResolvingDecoder(p2, p3, p4);
    }

    public com.flurry.org.apache.avro.io.ValidatingDecoder validatingDecoder(com.flurry.org.apache.avro.Schema p2, com.flurry.org.apache.avro.io.Decoder p3)
    {
        return new com.flurry.org.apache.avro.io.ValidatingDecoder(p2, p3);
    }
}
