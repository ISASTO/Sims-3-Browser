package com.flurry.org.apache.avro.file;
 class DeflateCodec$Option extends com.flurry.org.apache.avro.file.CodecFactory {
    private int compressionLevel;

    DeflateCodec$Option(int p1)
    {
        this.compressionLevel = p1;
        return;
    }

    protected com.flurry.org.apache.avro.file.Codec createInstance()
    {
        return new com.flurry.org.apache.avro.file.DeflateCodec(this.compressionLevel);
    }
}
