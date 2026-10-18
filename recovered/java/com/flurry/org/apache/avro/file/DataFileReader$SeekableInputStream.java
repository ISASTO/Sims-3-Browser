package com.flurry.org.apache.avro.file;
 class DataFileReader$SeekableInputStream extends java.io.InputStream implements com.flurry.org.apache.avro.file.SeekableInput {
    private com.flurry.org.apache.avro.file.SeekableInput in;
    private final byte[] oneByte;

    DataFileReader$SeekableInputStream(com.flurry.org.apache.avro.file.SeekableInput p2)
    {
        byte[] v0_1 = new byte[1];
        this.oneByte = v0_1;
        this.in = p2;
        return;
    }

    public int available()
    {
        int v2_1;
        long v0 = (this.in.length() - this.in.tell());
        if (v0 <= 2147483647) {
            v2_1 = ((int) v0);
        } else {
            v2_1 = 2147483647;
        }
        return v2_1;
    }

    public void close()
    {
        this.in.close();
        super.close();
        return;
    }

    public long length()
    {
        return this.in.length();
    }

    public int read()
    {
        int v0 = this.read(this.oneByte, 0, 1);
        if (v0 == 1) {
            v0 = (this.oneByte[0] & 255);
        }
        return v0;
    }

    public int read(byte[] p4)
    {
        return this.in.read(p4, 0, p4.length);
    }

    public int read(byte[] p2, int p3, int p4)
    {
        return this.in.read(p2, p3, p4);
    }

    public void seek(long p4)
    {
        if (p4 >= 0) {
            this.in.seek(p4);
            return;
        } else {
            throw new java.io.IOException(new StringBuilder().append("Illegal seek: ").append(p4).toString());
        }
    }

    public long skip(long p9)
    {
        long v6_3;
        long v2 = this.in.tell();
        long v4 = (this.in.length() - v2);
        if (v4 <= p9) {
            this.in.seek(v4);
            v6_3 = (this.in.tell() - v2);
        } else {
            this.in.seek(p9);
            v6_3 = (this.in.tell() - v2);
        }
        return v6_3;
    }

    public long tell()
    {
        return this.in.tell();
    }
}
