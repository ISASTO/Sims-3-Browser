package com.flurry.org.apache.avro.file;
 class LengthLimitedInputStream extends java.io.FilterInputStream {
    private long remaining;

    protected LengthLimitedInputStream(java.io.InputStream p1, long p2)
    {
        super(p1);
        super.remaining = p2;
        return;
    }

    private int remainingInt()
    {
        return ((int) Math.min(this.remaining, 2147483647));
    }

    public int available()
    {
        return Math.min(super.available(), this.remainingInt());
    }

    public int read()
    {
        int v0;
        if (this.remaining <= 0) {
            v0 = -1;
        } else {
            v0 = super.read();
            if (v0 != -1) {
                this.remaining = (this.remaining - 1);
            }
        }
        return v0;
    }

    public int read(byte[] p3)
    {
        return this.read(p3, 0, p3.length);
    }

    public int read(byte[] p7, int p8, int p9)
    {
        int v0;
        if (this.remaining != 0) {
            if (((long) p9) > this.remaining) {
                p9 = this.remainingInt();
            }
            v0 = super.read(p7, p8, p9);
            if (v0 != -1) {
                this.remaining = (this.remaining - ((long) v0));
            }
        } else {
            v0 = -1;
        }
        return v0;
    }

    public long skip(long p5)
    {
        long v0 = super.skip(Math.min(this.remaining, p5));
        this.remaining = (this.remaining - v0);
        return v0;
    }
}
