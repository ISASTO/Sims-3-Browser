package com.flurry.org.codehaus.jackson.io;
abstract class BaseReader extends java.io.Reader {
    protected static final int LAST_VALID_UNICODE_CHAR = 1114111;
    protected static final char NULL_BYTE;
    protected static final char NULL_CHAR;
    protected byte[] _buffer;
    protected final com.flurry.org.codehaus.jackson.io.IOContext _context;
    protected java.io.InputStream _in;
    protected int _length;
    protected int _ptr;
    protected char[] _tmpBuf;

    protected BaseReader(com.flurry.org.codehaus.jackson.io.IOContext p2, java.io.InputStream p3, byte[] p4, int p5, int p6)
    {
        this._tmpBuf = 0;
        this._context = p2;
        this._in = p3;
        this._buffer = p4;
        this._ptr = p5;
        this._length = p6;
        return;
    }

    public void close()
    {
        java.io.InputStream v0 = this._in;
        if (v0 != null) {
            this._in = 0;
            this.freeBuffers();
            v0.close();
        }
        return;
    }

    public final void freeBuffers()
    {
        byte[] v0 = this._buffer;
        if (v0 != null) {
            this._buffer = 0;
            this._context.releaseReadIOBuffer(v0);
        }
        return;
    }

    public int read()
    {
        if (this._tmpBuf == null) {
            char v0_3 = new char[1];
            this._tmpBuf = v0_3;
        }
        char v0_1;
        if (this.read(this._tmpBuf, 0, 1) >= 1) {
            v0_1 = this._tmpBuf[0];
        } else {
            v0_1 = -1;
        }
        return v0_1;
    }

    protected void reportBounds(char[] p4, int p5, int p6)
    {
        throw new ArrayIndexOutOfBoundsException(new StringBuilder().append("read(buf,").append(p5).append(",").append(p6).append("), cbuf[").append(p4.length).append("]").toString());
    }

    protected void reportStrangeStream()
    {
        throw new java.io.IOException("Strange I/O stream, returned 0 bytes on read");
    }
}
