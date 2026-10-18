package com.flurry.org.codehaus.jackson.util;
public class BufferRecycler {
    public static final int DEFAULT_WRITE_CONCAT_BUFFER_LEN = 2000;
    protected final byte[][] _byteBuffers;
    protected final char[][] _charBuffers;

    public BufferRecycler()
    {
        char[][] v0_2 = new byte[][com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType.values().length];
        this._byteBuffers = v0_2;
        char[][] v0_5 = new char[][com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.values().length];
        this._charBuffers = v0_5;
        return;
    }

    private final byte[] balloc(int p2)
    {
        byte[] v0 = new byte[p2];
        return v0;
    }

    private final char[] calloc(int p2)
    {
        char[] v0 = new char[p2];
        return v0;
    }

    public final byte[] allocByteBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType p5)
    {
        int v1 = p5.ordinal();
        byte[] v0 = this._byteBuffers[v1];
        if (v0 != null) {
            this._byteBuffers[v1] = 0;
        } else {
            v0 = this.balloc(com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType.access$000(p5));
        }
        return v0;
    }

    public final char[] allocCharBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType p2)
    {
        return this.allocCharBuffer(p2, 0);
    }

    public final char[] allocCharBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType p5, int p6)
    {
        if (com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.access$100(p5) > p6) {
            p6 = com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.access$100(p5);
        }
        int v1 = p5.ordinal();
        char[] v0 = this._charBuffers[v1];
        if ((v0 != null) && (v0.length >= p6)) {
            this._charBuffers[v1] = 0;
        } else {
            v0 = this.calloc(p6);
        }
        return v0;
    }

    public final void releaseByteBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType p3, byte[] p4)
    {
        this._byteBuffers[p3.ordinal()] = p4;
        return;
    }

    public final void releaseCharBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType p3, char[] p4)
    {
        this._charBuffers[p3.ordinal()] = p4;
        return;
    }
}
