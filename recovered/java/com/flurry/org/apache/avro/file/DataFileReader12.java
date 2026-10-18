package com.flurry.org.apache.avro.file;
public class DataFileReader12 implements com.flurry.org.apache.avro.file.FileReader, java.io.Closeable {
    private static final String CODEC = "codec";
    private static final String COUNT = "count";
    private static final long FOOTER_BLOCK = 255;
    static final byte[] MAGIC = None;
    private static final String NULL_CODEC = "null";
    private static final String SCHEMA = "schema";
    private static final String SYNC = "sync";
    private static final int SYNC_INTERVAL = 16000;
    private static final int SYNC_SIZE = 16;
    private static final byte VERSION;
    private long blockCount;
    private long blockStart;
    private long count;
    private com.flurry.org.apache.avro.file.DataFileReader$SeekableInputStream in;
    private java.util.Map meta;
    private Object peek;
    private com.flurry.org.apache.avro.io.DatumReader reader;
    private com.flurry.org.apache.avro.Schema schema;
    private byte[] sync;
    private byte[] syncBuffer;
    private com.flurry.org.apache.avro.io.BinaryDecoder vin;

    static DataFileReader12()
    {
        byte[] v0_1 = new byte[4];
        v0_1 = {79, 98, 106, 0};
        com.flurry.org.apache.avro.file.DataFileReader12.MAGIC = v0_1;
        return;
    }

    public DataFileReader12(com.flurry.org.apache.avro.file.SeekableInput p18, com.flurry.org.apache.avro.io.DatumReader p19)
    {
        com.flurry.org.apache.avro.file.DataFileReader12 v17_1 = ;
v17_1.meta = new java.util.HashMap();
        java.io.IOException v14_36 = new byte[16];
        v17_1.sync = v14_36;
        java.io.IOException v14_1 = new byte[16];
        v17_1.syncBuffer = v14_1;
        v17_1.in = new com.flurry.org.apache.avro.file.DataFileReader$SeekableInputStream(p18);
        byte[] v12 = new byte[4];
        v17_1.in.read(v12);
        if (java.util.Arrays.equals(com.flurry.org.apache.avro.file.DataFileReader12.MAGIC, v12)) {
            long v10 = v17_1.in.length();
            v17_1.in.seek((v10 - 4));
            v17_1.seek((v10 - ((long) ((((v17_1.in.read() << 24) + (v17_1.in.read() << 16)) + (v17_1.in.read() << 8)) + v17_1.in.read()))));
            long v8 = v17_1.vin.readMapStart();
            if (v8 > 0) {
                do {
                    long v5 = 0;
                    if (v5 >= v8) {
                        v8 = v17_1.vin.mapNext();
                    } else {
                        String v7 = v17_1.vin.readString(0).toString();
                        java.nio.ByteBuffer v13 = v17_1.vin.readBytes(0);
                        byte[] v2 = new byte[v13.remaining()];
                        v13.get(v2);
                        v17_1.meta.put(v7, v2);
                        v5++;
                        while (v5 < v8) {
                        }
                    }
                } while(v8 != 0);
            }
            v17_1.sync = v17_1.getMeta("sync");
            v17_1.count = v17_1.getMetaLong("count");
            String v3 = v17_1.getMetaString("codec");
            if ((v3 == null) || (v3.equals("null"))) {
                v17_1.schema = com.flurry.org.apache.avro.Schema.parse(v17_1.getMetaString("schema"));
                v17_1.reader = p19;
                p19.setSchema(v17_1.schema);
                v17_1.seek(((long) com.flurry.org.apache.avro.file.DataFileReader12.MAGIC.length));
                return;
            } else {
                throw new java.io.IOException(new StringBuilder().append("Unknown codec: ").append(v3).toString());
            }
        } else {
            throw new java.io.IOException("Not a data file.");
        }
    }

    private void skipSync()
    {
        this.vin.readFixed(this.syncBuffer);
        if (java.util.Arrays.equals(this.syncBuffer, this.sync)) {
            return;
        } else {
            throw new java.io.IOException("Invalid sync!");
        }
    }

    public declared_synchronized void close()
    {
        try {
            this.in.close();
            return;
        } catch (Throwable v0_1) {
            throw v0_1;
        }
    }

    public declared_synchronized byte[] getMeta(String p2)
    {
        try {
            return ((byte[]) this.meta.get(p2));
        } catch (Throwable v0_3) {
            throw v0_3;
        }
    }

    public declared_synchronized long getMetaLong(String p3)
    {
        try {
            return Long.parseLong(this.getMetaString(p3));
        } catch (Throwable v0_2) {
            throw v0_2;
        }
    }

    public declared_synchronized String getMetaString(String p5)
    {
        try {
            RuntimeException v2_1;
            byte[] v1 = this.getMeta(p5);
        } catch (RuntimeException v2_0) {
            throw v2_0;
        }
        if (v1 != null) {
            try {
                v2_1 = new String(v1, "UTF-8");
            } catch (java.io.UnsupportedEncodingException v0) {
                throw new RuntimeException(v0);
            }
        } else {
            v2_1 = 0;
        }
        return v2_1;
    }

    public com.flurry.org.apache.avro.Schema getSchema()
    {
        return this.schema;
    }

    public boolean hasNext()
    {
        int v0 = 1;
        if ((this.peek == null) && (this.blockCount == 0)) {
            this.peek = this.next();
            if (this.peek == null) {
                v0 = 0;
            }
        }
        return v0;
    }

    public java.util.Iterator iterator()
    {
        return this;
    }

    public Object next()
    {
        Object v1;
        if (this.peek == null) {
            try {
                v1 = this.next(0);
            } catch (java.io.IOException v0) {
                throw new RuntimeException(v0);
            }
        } else {
            v1 = this.peek;
            this.peek = 0;
        }
        return v1;
    }

    public declared_synchronized Object next(Object p5)
    {
        try {
            while (this.blockCount == 0) {
                if (this.in.tell() != this.in.length()) {
                    this.skipSync();
                    this.blockCount = this.vin.readLong();
                    if (this.blockCount == -1) {
                        this.seek((this.vin.readLong() + this.in.tell()));
                    }
                } else {
                    long v0_1 = 0;
                }
                return v0_1;
            }
        } catch (long v0_10) {
            throw v0_10;
        }
        this.blockCount = (this.blockCount - 1);
        v0_1 = this.reader.read(p5, this.vin);
        return v0_1;
    }

    public boolean pastSync(long p5)
    {
        if ((this.blockStart < (16 + p5)) && (this.blockStart < this.in.length())) {
            int v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public void remove()
    {
        throw new UnsupportedOperationException();
    }

    public declared_synchronized void seek(long p4)
    {
        try {
            this.in.seek(p4);
            this.blockCount = 0;
            this.blockStart = p4;
            this.vin = com.flurry.org.apache.avro.io.DecoderFactory.get().binaryDecoder(this.in, this.vin);
            return;
        } catch (Throwable v0_2) {
            throw v0_2;
        }
    }

    public declared_synchronized void sync(long p9)
    {
        try {
            if ((this.in.tell() + 16) < this.in.length()) {
                this.in.seek(p9);
                this.vin.readFixed(this.syncBuffer);
                int v0 = 0;
                while (this.in.tell() < this.in.length()) {
                    int v1 = 0;
                    while ((v1 < this.sync.length) && (this.sync[v1] == this.syncBuffer[((v0 + v1) % this.sync.length)])) {
                        v1++;
                    }
                    if (v1 != this.sync.length) {
                        this.syncBuffer[(v0 % this.sync.length)] = ((byte) this.in.read());
                        v0++;
                    } else {
                        this.seek((this.in.tell() - 16));
                    }
                }
                this.seek(this.in.length());
            } else {
                this.seek(this.in.length());
            }
        } catch (byte[] v2_22) {
            throw v2_22;
        }
        return;
    }

    public long tell()
    {
        return this.in.tell();
    }
}
