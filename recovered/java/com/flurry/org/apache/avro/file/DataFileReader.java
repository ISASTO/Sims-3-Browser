package com.flurry.org.apache.avro.file;
public class DataFileReader extends com.flurry.org.apache.avro.file.DataFileStream implements com.flurry.org.apache.avro.file.FileReader {
    private long blockStart;
    private com.flurry.org.apache.avro.file.DataFileReader$SeekableInputStream sin;

    public DataFileReader(com.flurry.org.apache.avro.file.SeekableInput p2, com.flurry.org.apache.avro.io.DatumReader p3)
    {
        super(p3);
        super.sin = new com.flurry.org.apache.avro.file.DataFileReader$SeekableInputStream(p2);
        super.initialize(super.sin);
        super.blockFinished();
        return;
    }

    protected DataFileReader(com.flurry.org.apache.avro.file.SeekableInput p2, com.flurry.org.apache.avro.io.DatumReader p3, com.flurry.org.apache.avro.file.DataFileStream$Header p4)
    {
        super(p3);
        super.sin = new com.flurry.org.apache.avro.file.DataFileReader$SeekableInputStream(p2);
        super.initialize(super.sin, p4);
        return;
    }

    public DataFileReader(java.io.File p2, com.flurry.org.apache.avro.io.DatumReader p3)
    {
        this(new com.flurry.org.apache.avro.file.SeekableFileInput(p2), p3);
        return;
    }

    public static com.flurry.org.apache.avro.file.DataFileReader openReader(com.flurry.org.apache.avro.file.SeekableInput p3, com.flurry.org.apache.avro.io.DatumReader p4, com.flurry.org.apache.avro.file.DataFileStream$Header p5, boolean p6)
    {
        com.flurry.org.apache.avro.file.DataFileReader v0_1 = new com.flurry.org.apache.avro.file.DataFileReader(p3, p4, p5);
        if (!p6) {
            v0_1.seek(p3.tell());
        } else {
            v0_1.sync(p3.tell());
        }
        return v0_1;
    }

    public static com.flurry.org.apache.avro.file.FileReader openReader(com.flurry.org.apache.avro.file.SeekableInput p8, com.flurry.org.apache.avro.io.DatumReader p9)
    {
        if (p8.length() >= ((long) com.flurry.org.apache.avro.file.DataFileConstants.MAGIC.length)) {
            byte[] v1 = new byte[com.flurry.org.apache.avro.file.DataFileConstants.MAGIC.length];
            p8.seek(0);
            int v0 = 0;
            while (v0 < v1.length) {
                v0 = p8.read(v1, v0, (v1.length - v0));
            }
            java.io.IOException v2_9;
            p8.seek(0);
            if (!java.util.Arrays.equals(com.flurry.org.apache.avro.file.DataFileConstants.MAGIC, v1)) {
                if (!java.util.Arrays.equals(com.flurry.org.apache.avro.file.DataFileReader12.MAGIC, v1)) {
                    throw new java.io.IOException("Not an Avro data file");
                } else {
                    v2_9 = new com.flurry.org.apache.avro.file.DataFileReader12(p8, p9);
                }
            } else {
                v2_9 = new com.flurry.org.apache.avro.file.DataFileReader(p8, p9);
            }
            return v2_9;
        } else {
            throw new java.io.IOException("Not an Avro data file");
        }
    }

    public static com.flurry.org.apache.avro.file.FileReader openReader(java.io.File p1, com.flurry.org.apache.avro.io.DatumReader p2)
    {
        return com.flurry.org.apache.avro.file.DataFileReader.openReader(new com.flurry.org.apache.avro.file.SeekableFileInput(p1), p2);
    }

    protected void blockFinished()
    {
        this.blockStart = (this.sin.tell() - ((long) this.vin.inputStream().available()));
        return;
    }

    public boolean pastSync(long p5)
    {
        if ((this.blockStart < (16 + p5)) && (this.blockStart < this.sin.length())) {
            int v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public long previousSync()
    {
        return this.blockStart;
    }

    public void seek(long p4)
    {
        this.sin.seek(p4);
        this.vin = com.flurry.org.apache.avro.io.DecoderFactory.get().binaryDecoder(this.sin, this.vin);
        this.datumIn = 0;
        this.blockRemaining = 0;
        this.blockStart = p4;
        return;
    }

    public void sync(long p10)
    {
        this.seek(p10);
        if ((p10 != 0) || (this.getMeta("avro.sync") == null)) {
            int v1 = 0;
            try {
                java.io.InputStream v3 = this.vin.inputStream();
                this.vin.readFixed(this.syncBuffer);
            } catch (java.io.EOFException v5) {
                this.blockStart = this.sin.tell();
            }
            while(true) {
                int v4 = 0;
                if ((v4 < 16) && (this.getHeader().sync[v4] == this.syncBuffer[((v1 + v4) % 16)])) {
                    v4++;
                    while ((v4 >= 16) && (this.getHeader().sync[v4] == this.syncBuffer[((v1 + v4) % 16)])) {
                    }
                    if (v4 != 16) {
                        break;
                    }
                    this.blockStart = ((((long) v1) + p10) + 16);
                }
            }
            int v0 = v3.read();
            int v2 = (v1 + 1);
            try {
                this.syncBuffer[(v1 % 16)] = ((byte) v0);
            } catch (java.io.EOFException v5) {
            }
            if (v0 == -1) {
            } else {
                v1 = v2;
            }
        } else {
            this.initialize(this.sin);
        }
        return;
    }

    public long tell()
    {
        return this.sin.tell();
    }
}
