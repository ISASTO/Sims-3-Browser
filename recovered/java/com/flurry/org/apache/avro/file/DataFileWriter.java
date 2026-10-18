package com.flurry.org.apache.avro.file;
public class DataFileWriter implements java.io.Closeable, java.io.Flushable {
    private long blockCount;
    private com.flurry.org.apache.avro.io.BinaryEncoder bufOut;
    private com.flurry.org.apache.avro.file.DataFileWriter$NonCopyingByteArrayOutputStream buffer;
    private com.flurry.org.apache.avro.file.Codec codec;
    private com.flurry.org.apache.avro.io.DatumWriter dout;
    private boolean isOpen;
    private final java.util.Map meta;
    private com.flurry.org.apache.avro.file.DataFileWriter$BufferedFileOutputStream out;
    private com.flurry.org.apache.avro.Schema schema;
    private byte[] sync;
    private int syncInterval;
    private com.flurry.org.apache.avro.io.BinaryEncoder vout;

    public DataFileWriter(com.flurry.org.apache.avro.io.DatumWriter p2)
    {
        this.meta = new java.util.HashMap();
        this.syncInterval = 16000;
        this.dout = p2;
        return;
    }

    private void assertNotOpen()
    {
        if (!this.isOpen) {
            return;
        } else {
            throw new com.flurry.org.apache.avro.AvroRuntimeException("already open");
        }
    }

    private void assertOpen()
    {
        if (this.isOpen) {
            return;
        } else {
            throw new com.flurry.org.apache.avro.AvroRuntimeException("not open");
        }
    }

    private int bufferInUse()
    {
        return (this.buffer.size() + this.bufOut.bytesBuffered());
    }

    private static byte[] generateSync()
    {
        try {
            java.security.MessageDigest v0 = java.security.MessageDigest.getInstance("MD5");
            v0.update(new StringBuilder().append(new java.rmi.server.UID()).append("@").append(System.currentTimeMillis()).toString().getBytes());
            return v0.digest();
        } catch (java.security.NoSuchAlgorithmException v1) {
            throw new RuntimeException(v1);
        }
    }

    private void init(java.io.OutputStream p8)
    {
        this.out = new com.flurry.org.apache.avro.file.DataFileWriter$BufferedFileOutputStream(this, p8);
        com.flurry.org.apache.avro.io.EncoderFactory v0_1 = new com.flurry.org.apache.avro.io.EncoderFactory();
        this.vout = v0_1.binaryEncoder(this.out, 0);
        this.dout.setSchema(this.schema);
        this.buffer = new com.flurry.org.apache.avro.file.DataFileWriter$NonCopyingByteArrayOutputStream(Math.min(((int) (((double) this.syncInterval) * 4608308318706860032)), 1073741822));
        this.bufOut = v0_1.binaryEncoder(this.buffer, 0);
        if (this.codec == null) {
            this.codec = com.flurry.org.apache.avro.file.CodecFactory.nullCodec().createInstance();
        }
        this.isOpen = 1;
        return;
    }

    public static boolean isReservedMeta(String p1)
    {
        return p1.startsWith("avro.");
    }

    private void resetBufferTo(int p4)
    {
        this.bufOut.flush();
        byte[] v0 = this.buffer.toByteArray();
        this.buffer.reset();
        this.buffer.write(v0, 0, p4);
        return;
    }

    private com.flurry.org.apache.avro.file.DataFileWriter setMetaInternal(String p3, String p4)
    {
        try {
            return this.setMetaInternal(p3, p4.getBytes("UTF-8"));
        } catch (java.io.UnsupportedEncodingException v0) {
            throw new RuntimeException(v0);
        }
    }

    private com.flurry.org.apache.avro.file.DataFileWriter setMetaInternal(String p2, byte[] p3)
    {
        this.assertNotOpen();
        this.meta.put(p2, p3);
        return this;
    }

    private void writeBlock()
    {
        if (this.blockCount > 0) {
            this.bufOut.flush();
            com.flurry.org.apache.avro.file.DataFileStream$DataBlock v0_0 = new com.flurry.org.apache.avro.file.DataFileStream$DataBlock(this.buffer.getByteArrayAsByteBuffer(), this.blockCount);
            v0_0.compressUsing(this.codec);
            v0_0.writeBlockTo(this.vout, this.sync);
            this.buffer.reset();
            this.blockCount = 0;
        }
        return;
    }

    private void writeIfBlockFull()
    {
        if (this.bufferInUse() >= this.syncInterval) {
            this.writeBlock();
        }
        return;
    }

    public void append(Object p8)
    {
        this.assertOpen();
        int v2 = this.bufferInUse();
        try {
            this.dout.write(p8, this.bufOut);
            this.blockCount = (this.blockCount + 1);
            this.writeIfBlockFull();
            return;
        } catch (java.io.IOException v0) {
            this.resetBufferTo(v2);
            throw new com.flurry.org.apache.avro.file.DataFileWriter$AppendWriteException(v0);
        } catch (RuntimeException v1) {
            this.resetBufferTo(v2);
            throw new com.flurry.org.apache.avro.file.DataFileWriter$AppendWriteException(v1);
        }
    }

    public void appendAllFrom(com.flurry.org.apache.avro.file.DataFileStream p7, boolean p8)
    {
        this.assertOpen();
        if (this.schema.equals(p7.getSchema())) {
            this.writeBlock();
            com.flurry.org.apache.avro.file.Codec v1 = p7.resolveCodec();
            com.flurry.org.apache.avro.file.DataFileStream$DataBlock v0 = 0;
            if ((!this.codec.equals(v1)) || (p8)) {
                while (p7.hasNextBlock()) {
                    v0 = p7.nextRawBlock(v0);
                    v0.decompressUsing(v1);
                    v0.compressUsing(this.codec);
                    v0.writeBlockTo(this.vout, this.sync);
                }
            } else {
                while (p7.hasNextBlock()) {
                    v0 = p7.nextRawBlock(v0);
                    v0.writeBlockTo(this.vout, this.sync);
                }
            }
            return;
        } else {
            throw new java.io.IOException(new StringBuilder().append("Schema from file ").append(p7).append(" does not match").toString());
        }
    }

    public void appendEncoded(java.nio.ByteBuffer p6)
    {
        this.assertOpen();
        int v0 = p6.position();
        this.bufOut.writeFixed(p6.array(), v0, (p6.limit() - v0));
        this.blockCount = (this.blockCount + 1);
        this.writeIfBlockFull();
        return;
    }

    public com.flurry.org.apache.avro.file.DataFileWriter appendTo(java.io.File p9)
    {
        this.assertNotOpen();
        if (p9.exists()) {
            java.io.RandomAccessFile v2_1 = new java.io.RandomAccessFile(p9, "r");
            com.flurry.org.apache.avro.file.DataFileReader v3_0 = new com.flurry.org.apache.avro.file.DataFileReader(new com.flurry.org.apache.avro.file.SeekableFileInput(v2_1.getFD()), new com.flurry.org.apache.avro.generic.GenericDatumReader());
            this.schema = v3_0.getSchema();
            this.sync = v3_0.getHeader().sync;
            this.meta.putAll(v3_0.getHeader().meta);
            byte[] v0_1 = ((byte[]) this.meta.get("avro.codec"));
            if (v0_1 == null) {
                this.codec = com.flurry.org.apache.avro.file.CodecFactory.nullCodec().createInstance();
            } else {
                this.codec = com.flurry.org.apache.avro.file.CodecFactory.fromString(new String(v0_1, "UTF-8")).createInstance();
            }
            v2_1.close();
            this.init(new java.io.FileOutputStream(p9, 1));
            return this;
        } else {
            throw new java.io.FileNotFoundException(new StringBuilder().append("Not found: ").append(p9).toString());
        }
    }

    public void close()
    {
        this.flush();
        this.out.close();
        this.isOpen = 0;
        return;
    }

    public com.flurry.org.apache.avro.file.DataFileWriter create(com.flurry.org.apache.avro.Schema p2, java.io.File p3)
    {
        return this.create(p2, new java.io.FileOutputStream(p3));
    }

    public com.flurry.org.apache.avro.file.DataFileWriter create(com.flurry.org.apache.avro.Schema p6, java.io.OutputStream p7)
    {
        this.assertNotOpen();
        this.schema = p6;
        this.setMetaInternal("avro.schema", p6.toString());
        this.sync = com.flurry.org.apache.avro.file.DataFileWriter.generateSync();
        this.init(p7);
        this.vout.writeFixed(com.flurry.org.apache.avro.file.DataFileConstants.MAGIC);
        this.vout.writeMapStart();
        this.vout.setItemCount(((long) this.meta.size()));
        java.util.Iterator v1 = this.meta.entrySet().iterator();
        while (v1.hasNext()) {
            java.util.Map$Entry v0_1 = ((java.util.Map$Entry) v1.next());
            this.vout.startItem();
            this.vout.writeString(((String) v0_1.getKey()));
            this.vout.writeBytes(((byte[]) v0_1.getValue()));
        }
        this.vout.writeMapEnd();
        this.vout.writeFixed(this.sync);
        this.vout.flush();
        return this;
    }

    public void flush()
    {
        this.sync();
        this.vout.flush();
        return;
    }

    public com.flurry.org.apache.avro.file.DataFileWriter setCodec(com.flurry.org.apache.avro.file.CodecFactory p3)
    {
        this.assertNotOpen();
        this.codec = p3.createInstance();
        this.setMetaInternal("avro.codec", this.codec.getName());
        return this;
    }

    public com.flurry.org.apache.avro.file.DataFileWriter setMeta(String p2, long p3)
    {
        return this.setMeta(p2, Long.toString(p3));
    }

    public com.flurry.org.apache.avro.file.DataFileWriter setMeta(String p3, String p4)
    {
        try {
            return this.setMeta(p3, p4.getBytes("UTF-8"));
        } catch (java.io.UnsupportedEncodingException v0) {
            throw new RuntimeException(v0);
        }
    }

    public com.flurry.org.apache.avro.file.DataFileWriter setMeta(String p4, byte[] p5)
    {
        if (!com.flurry.org.apache.avro.file.DataFileWriter.isReservedMeta(p4)) {
            return this.setMetaInternal(p4, p5);
        } else {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Cannot set reserved meta key: ").append(p4).toString());
        }
    }

    public com.flurry.org.apache.avro.file.DataFileWriter setSyncInterval(int p4)
    {
        if ((p4 >= 32) && (p4 <= 1073741824)) {
            this.syncInterval = p4;
            return this;
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("Invalid syncInterval value: ").append(p4).toString());
        }
    }

    public long sync()
    {
        this.assertOpen();
        this.writeBlock();
        return this.out.tell();
    }
}
