package com.flurry.org.codehaus.jackson.io;
public final class MergedStream extends java.io.InputStream {
    byte[] _buffer;
    protected final com.flurry.org.codehaus.jackson.io.IOContext _context;
    final int _end;
    final java.io.InputStream _in;
    int _ptr;

    public MergedStream(com.flurry.org.codehaus.jackson.io.IOContext p1, java.io.InputStream p2, byte[] p3, int p4, int p5)
    {
        this._context = p1;
        this._in = p2;
        this._buffer = p3;
        this._ptr = p4;
        this._end = p5;
        return;
    }

    private void freeMergedBuffer()
    {
        byte[] v0 = this._buffer;
        if (v0 != null) {
            this._buffer = 0;
            if (this._context != null) {
                this._context.releaseReadIOBuffer(v0);
            }
        }
        return;
    }

    public int available()
    {
        int v0_2;
        if (this._buffer == null) {
            v0_2 = this._in.available();
        } else {
            v0_2 = (this._end - this._ptr);
        }
        return v0_2;
    }

    public void close()
    {
        this.freeMergedBuffer();
        this._in.close();
        return;
    }

    public void mark(int p2)
    {
        if (this._buffer == null) {
            this._in.mark(p2);
        }
        return;
    }

    public boolean markSupported()
    {
        if ((this._buffer != null) || (!this._in.markSupported())) {
            int v0_3 = 0;
        } else {
            v0_3 = 1;
        }
        return v0_3;
    }

    public int read()
    {
        int v0;
        if (this._buffer == null) {
            v0 = this._in.read();
        } else {
            java.io.InputStream v1_3 = this._buffer;
            int v2_1 = this._ptr;
            this._ptr = (v2_1 + 1);
            v0 = (v1_3[v2_1] & 255);
            if (this._ptr >= this._end) {
                this.freeMergedBuffer();
            }
        }
        return v0;
    }

    public int read(byte[] p3)
    {
        return this.read(p3, 0, p3.length);
    }

    public int read(byte[] p4, int p5, int p6)
    {
        int v1_6;
        if (this._buffer == null) {
            v1_6 = this._in.read(p4, p5, p6);
        } else {
            int v0 = (this._end - this._ptr);
            if (p6 > v0) {
                p6 = v0;
            }
            System.arraycopy(this._buffer, this._ptr, p4, p5, p6);
            this._ptr = (this._ptr + p6);
            if (this._ptr >= this._end) {
                this.freeMergedBuffer();
            }
            v1_6 = p6;
        }
        return v1_6;
    }

    public void reset()
    {
        if (this._buffer == null) {
            this._in.reset();
        }
        return;
    }

    public long skip(long p6)
    {
        long v3_7;
        long v1 = 0;
        if (this._buffer == null) {
            if (p6 > 0) {
                v1 += this._in.skip(p6);
            }
            v3_7 = v1;
        } else {
            int v0 = (this._end - this._ptr);
            if (((long) v0) <= p6) {
                this.freeMergedBuffer();
                v1 = (0 + ((long) v0));
                p6 -= ((long) v0);
            } else {
                this._ptr = (this._ptr + ((int) p6));
                v3_7 = p6;
            }
        }
        return v3_7;
    }
}
