package com.flurry.org.apache.avro.file;
 class DeflateCodec extends com.flurry.org.apache.avro.file.Codec {
    private int compressionLevel;
    private java.util.zip.Deflater deflater;
    private java.util.zip.Inflater inflater;
    private boolean nowrap;
    private java.io.ByteArrayOutputStream outputBuffer;

    public DeflateCodec(int p2)
    {
        this.nowrap = 1;
        this.compressionLevel = p2;
        return;
    }

    private java.util.zip.Deflater getDeflater()
    {
        if (this.deflater == null) {
            this.deflater = new java.util.zip.Deflater(this.compressionLevel, this.nowrap);
        }
        this.deflater.reset();
        return this.deflater;
    }

    private java.util.zip.Inflater getInflater()
    {
        if (this.inflater == null) {
            this.inflater = new java.util.zip.Inflater(this.nowrap);
        }
        this.inflater.reset();
        return this.inflater;
    }

    private java.io.ByteArrayOutputStream getOutputBuffer(int p2)
    {
        if (this.outputBuffer == null) {
            this.outputBuffer = new java.io.ByteArrayOutputStream(p2);
        }
        this.outputBuffer.reset();
        return this.outputBuffer;
    }

    private void writeAndClose(java.nio.ByteBuffer p6, java.io.OutputStream p7)
    {
        try {
            p7.write(p6.array(), (p6.arrayOffset() + p6.position()), p6.remaining());
            p7.close();
            return;
        } catch (Throwable v3_0) {
            p7.close();
            throw v3_0;
        }
    }

    java.nio.ByteBuffer compress(java.nio.ByteBuffer p5)
    {
        java.io.ByteArrayOutputStream v0 = this.getOutputBuffer(p5.remaining());
        this.writeAndClose(p5, new java.util.zip.DeflaterOutputStream(v0, this.getDeflater()));
        return java.nio.ByteBuffer.wrap(v0.toByteArray());
    }

    java.nio.ByteBuffer decompress(java.nio.ByteBuffer p5)
    {
        java.io.ByteArrayOutputStream v0 = this.getOutputBuffer(p5.remaining());
        this.writeAndClose(p5, new java.util.zip.InflaterOutputStream(v0, this.getInflater()));
        return java.nio.ByteBuffer.wrap(v0.toByteArray());
    }

    public boolean equals(Object p6)
    {
        int v1 = 1;
        if (this != p6) {
            if (this.getClass() == p6.getClass()) {
                if (this.nowrap != ((com.flurry.org.apache.avro.file.DeflateCodec) p6).nowrap) {
                    v1 = 0;
                }
            } else {
                v1 = 0;
            }
        }
        return v1;
    }

    String getName()
    {
        return "deflate";
    }

    public int hashCode()
    {
        int v0_1;
        if (!this.nowrap) {
            v0_1 = 1;
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    public String toString()
    {
        return new StringBuilder().append(this.getName()).append("-").append(this.compressionLevel).toString();
    }
}
