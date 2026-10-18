package com.flurry.org.apache.avro.file;
public class DataFileStream implements java.io.Closeable, java.lang.Iterable, java.util.Iterator {
    private boolean availableBlock;
    private com.flurry.org.apache.avro.file.DataFileStream$DataBlock block;
    java.nio.ByteBuffer blockBuffer;
    long blockCount;
    long blockRemaining;
    private long blockSize;
    private com.flurry.org.apache.avro.file.Codec codec;
    com.flurry.org.apache.avro.io.BinaryDecoder datumIn;
    private com.flurry.org.apache.avro.file.DataFileStream$Header header;
    private com.flurry.org.apache.avro.io.DatumReader reader;
    byte[] syncBuffer;
    com.flurry.org.apache.avro.io.BinaryDecoder vin;

    protected DataFileStream(com.flurry.org.apache.avro.io.DatumReader p3)
    {
        this.availableBlock = 0;
        this.datumIn = 0;
        byte[] v0_2 = new byte[16];
        this.syncBuffer = v0_2;
        this.block = 0;
        this.reader = p3;
        return;
    }

    public DataFileStream(java.io.InputStream p3, com.flurry.org.apache.avro.io.DatumReader p4)
    {
        this.availableBlock = 0;
        this.datumIn = 0;
        byte[] v0_2 = new byte[16];
        this.syncBuffer = v0_2;
        this.block = 0;
        this.reader = p4;
        this.initialize(p3);
        return;
    }

    protected void blockFinished()
    {
        return;
    }

    public void close()
    {
        this.vin.inputStream().close();
        return;
    }

    public long getBlockCount()
    {
        return this.blockCount;
    }

    public com.flurry.org.apache.avro.file.DataFileStream$Header getHeader()
    {
        return this.header;
    }

    public byte[] getMeta(String p2)
    {
        return ((byte[]) this.header.meta.get(p2));
    }

    public java.util.List getMetaKeys()
    {
        return com.flurry.org.apache.avro.file.DataFileStream$Header.access$100(this.header);
    }

    public long getMetaLong(String p3)
    {
        return Long.parseLong(this.getMetaString(p3));
    }

    public String getMetaString(String p5)
    {
        RuntimeException v2_0;
        byte[] v1 = this.getMeta(p5);
        if (v1 != null) {
            try {
                v2_0 = new String(v1, "UTF-8");
            } catch (java.io.UnsupportedEncodingException v0) {
                throw new RuntimeException(v0);
            }
        } else {
            v2_0 = 0;
        }
        return v2_0;
    }

    public com.flurry.org.apache.avro.Schema getSchema()
    {
        return this.header.schema;
    }

    public boolean hasNext()
    {
        int v2_0 = 0;
        try {
            if (this.blockRemaining != 0) {
                if (this.blockRemaining != 0) {
                    v2_0 = 1;
                }
            } else {
                if ((this.datumIn == null) || (this.datumIn.isEnd())) {
                    if (!this.hasNextBlock()) {
                    } else {
                        this.block = this.nextRawBlock(this.block);
                        this.block.decompressUsing(this.codec);
                        this.blockBuffer = this.block.getAsByteBuffer();
                        this.datumIn = com.flurry.org.apache.avro.io.DecoderFactory.get().binaryDecoder(this.blockBuffer.array(), (this.blockBuffer.arrayOffset() + this.blockBuffer.position()), this.blockBuffer.remaining(), this.datumIn);
                    }
                } else {
                    throw new java.io.IOException("Block read partially, the data may be corrupt");
                }
            }
        } catch (java.io.IOException v1) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v1);
        }
        return v2_0;
    }

    boolean hasNextBlock()
    {
        java.io.IOException v2_0 = 1;
        try {
            if (!this.availableBlock) {
                if (!this.vin.isEnd()) {
                    this.blockRemaining = this.vin.readLong();
                    this.blockSize = this.vin.readLong();
                    if ((this.blockSize <= 2147483647) && (this.blockSize >= 0)) {
                        this.blockCount = this.blockRemaining;
                        this.availableBlock = 1;
                    } else {
                        throw new java.io.IOException(new StringBuilder().append("Block size invalid or too large for this implementation: ").append(this.blockSize).toString());
                    }
                } else {
                    v2_0 = 0;
                }
            }
        } catch (java.io.IOException v0) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v0);
        }
        return v2_0;
    }

    void initialize(java.io.InputStream p15)
    {
        this.header = new com.flurry.org.apache.avro.file.DataFileStream$Header(0);
        this.vin = com.flurry.org.apache.avro.io.DecoderFactory.get().binaryDecoder(p15, this.vin);
        byte[] v7 = new byte[com.flurry.org.apache.avro.file.DataFileConstants.MAGIC.length];
        try {
            this.vin.readFixed(v7);
        } catch (java.io.IOException v1) {
            throw new java.io.IOException("Not a data file.");
        }
        if (java.util.Arrays.equals(com.flurry.org.apache.avro.file.DataFileConstants.MAGIC, v7)) {
            long v5 = this.vin.readMapStart();
            if (v5 > 0) {
                do {
                    long v2 = 0;
                    if (v2 >= v5) {
                        v5 = this.vin.mapNext();
                    } else {
                        String v4 = this.vin.readString(0).toString();
                        java.nio.ByteBuffer v8 = this.vin.readBytes(0);
                        byte[] v0 = new byte[v8.remaining()];
                        v8.get(v0);
                        this.header.meta.put(v4, v0);
                        com.flurry.org.apache.avro.file.DataFileStream$Header.access$100(this.header).add(v4);
                        v2++;
                        while (v2 < v5) {
                        }
                    }
                } while(v5 != 0);
            }
            this.vin.readFixed(this.header.sync);
            com.flurry.org.apache.avro.file.DataFileStream$Header.access$102(this.header, java.util.Collections.unmodifiableList(com.flurry.org.apache.avro.file.DataFileStream$Header.access$100(this.header)));
            this.header.schema = com.flurry.org.apache.avro.Schema.parse(this.getMetaString("avro.schema"), 0);
            this.codec = this.resolveCodec();
            this.reader.setSchema(this.header.schema);
            return;
        } else {
            throw new java.io.IOException("Not a data file.");
        }
    }

    void initialize(java.io.InputStream p3, com.flurry.org.apache.avro.file.DataFileStream$Header p4)
    {
        this.header = p4;
        this.codec = this.resolveCodec();
        this.reader.setSchema(p4.schema);
        return;
    }

    public java.util.Iterator iterator()
    {
        return this;
    }

    public Object next()
    {
        try {
            return this.next(0);
        } catch (java.io.IOException v0) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v0);
        }
    }

    public Object next(Object p8)
    {
        if (this.hasNext()) {
            Object v0 = this.reader.read(p8, this.datumIn);
            long v3_0 = (this.blockRemaining - 1);
            this.blockRemaining = v3_0;
            if (0 == v3_0) {
                this.blockFinished();
            }
            return v0;
        } else {
            throw new java.util.NoSuchElementException();
        }
    }

    public java.nio.ByteBuffer nextBlock()
    {
        if (this.hasNext()) {
            if (this.blockRemaining == this.blockCount) {
                this.blockRemaining = 0;
                this.datumIn = 0;
                return this.blockBuffer;
            } else {
                throw new IllegalStateException("Not at block start.");
            }
        } else {
            throw new java.util.NoSuchElementException();
        }
    }

    com.flurry.org.apache.avro.file.DataFileStream$DataBlock nextRawBlock(com.flurry.org.apache.avro.file.DataFileStream$DataBlock p6)
    {
        if (this.hasNextBlock()) {
            if ((p6 != null) && (com.flurry.org.apache.avro.file.DataFileStream$DataBlock.access$200(p6).length >= ((int) this.blockSize))) {
                com.flurry.org.apache.avro.file.DataFileStream$DataBlock.access$402(p6, this.blockRemaining);
                com.flurry.org.apache.avro.file.DataFileStream$DataBlock.access$502(p6, ((int) this.blockSize));
            } else {
                p6 = new com.flurry.org.apache.avro.file.DataFileStream$DataBlock(this.blockRemaining, ((int) this.blockSize), 0);
            }
            this.vin.readFixed(com.flurry.org.apache.avro.file.DataFileStream$DataBlock.access$200(p6), 0, com.flurry.org.apache.avro.file.DataFileStream$DataBlock.access$500(p6));
            this.vin.readFixed(this.syncBuffer);
            if (java.util.Arrays.equals(this.syncBuffer, this.header.sync)) {
                this.availableBlock = 0;
                return p6;
            } else {
                throw new java.io.IOException("Invalid sync!");
            }
        } else {
            throw new java.util.NoSuchElementException();
        }
    }

    public void remove()
    {
        throw new UnsupportedOperationException();
    }

    com.flurry.org.apache.avro.file.Codec resolveCodec()
    {
        com.flurry.org.apache.avro.file.Codec v1_1;
        String v0 = this.getMetaString("avro.codec");
        if (v0 == null) {
            v1_1 = com.flurry.org.apache.avro.file.CodecFactory.nullCodec().createInstance();
        } else {
            v1_1 = com.flurry.org.apache.avro.file.CodecFactory.fromString(v0).createInstance();
        }
        return v1_1;
    }
}
