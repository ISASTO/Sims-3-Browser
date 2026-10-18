package com.flurry.org.codehaus.jackson.io;
public final class SegmentedStringWriter extends java.io.Writer {
    protected final com.flurry.org.codehaus.jackson.util.TextBuffer _buffer;

    public SegmentedStringWriter(com.flurry.org.codehaus.jackson.util.BufferRecycler p2)
    {
        this._buffer = new com.flurry.org.codehaus.jackson.util.TextBuffer(p2);
        return;
    }

    public java.io.Writer append(char p1)
    {
        this.write(p1);
        return this;
    }

    public java.io.Writer append(CharSequence p5)
    {
        String v0 = p5.toString();
        this._buffer.append(v0, 0, v0.length());
        return this;
    }

    public java.io.Writer append(CharSequence p5, int p6, int p7)
    {
        String v0 = p5.subSequence(p6, p7).toString();
        this._buffer.append(v0, 0, v0.length());
        return this;
    }

    public bridge synthetic Appendable append(char p2)
    {
        return this.append(p2);
    }

    public bridge synthetic Appendable append(CharSequence p2)
    {
        return this.append(p2);
    }

    public bridge synthetic Appendable append(CharSequence p2, int p3, int p4)
    {
        return this.append(p2, p3, p4);
    }

    public void close()
    {
        return;
    }

    public void flush()
    {
        return;
    }

    public String getAndClear()
    {
        String v0 = this._buffer.contentsAsString();
        this._buffer.releaseBuffers();
        return v0;
    }

    public void write(int p3)
    {
        this._buffer.append(((char) p3));
        return;
    }

    public void write(String p4)
    {
        this._buffer.append(p4, 0, p4.length());
        return;
    }

    public void write(String p4, int p5, int p6)
    {
        this._buffer.append(p4, 0, p4.length());
        return;
    }

    public void write(char[] p4)
    {
        this._buffer.append(p4, 0, p4.length);
        return;
    }

    public void write(char[] p2, int p3, int p4)
    {
        this._buffer.append(p2, p3, p4);
        return;
    }
}
