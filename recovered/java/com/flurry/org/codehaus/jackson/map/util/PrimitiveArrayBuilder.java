package com.flurry.org.codehaus.jackson.map.util;
public abstract class PrimitiveArrayBuilder {
    static final int INITIAL_CHUNK_SIZE = 12;
    static final int MAX_CHUNK_SIZE = 262144;
    static final int SMALL_CHUNK_SIZE = 16384;
    com.flurry.org.codehaus.jackson.map.util.PrimitiveArrayBuilder$Node _bufferHead;
    com.flurry.org.codehaus.jackson.map.util.PrimitiveArrayBuilder$Node _bufferTail;
    int _bufferedEntryCount;
    Object _freeBuffer;

    protected PrimitiveArrayBuilder()
    {
        return;
    }

    protected abstract Object _constructArray(int p0);

    protected void _reset()
    {
        if (this._bufferTail != null) {
            this._freeBuffer = this._bufferTail.getData();
        }
        this._bufferTail = 0;
        this._bufferHead = 0;
        this._bufferedEntryCount = 0;
        return;
    }

    public final Object appendCompletedChunk(Object p4, int p5)
    {
        com.flurry.org.codehaus.jackson.map.util.PrimitiveArrayBuilder$Node v0_1 = new com.flurry.org.codehaus.jackson.map.util.PrimitiveArrayBuilder$Node(p4, p5);
        if (this._bufferHead != null) {
            this._bufferTail.linkNext(v0_1);
            this._bufferTail = v0_1;
        } else {
            this._bufferTail = v0_1;
            this._bufferHead = v0_1;
        }
        int v1_1;
        this._bufferedEntryCount = (this._bufferedEntryCount + p5);
        if (p5 >= 16384) {
            v1_1 = (p5 + (p5 >> 2));
        } else {
            v1_1 = (p5 + p5);
        }
        return this._constructArray(v1_1);
    }

    public Object completeAndClearBuffer(Object p8, int p9)
    {
        int v3 = (p9 + this._bufferedEntryCount);
        Object v2 = this._constructArray(v3);
        int v1_0 = 0;
        com.flurry.org.codehaus.jackson.map.util.PrimitiveArrayBuilder$Node v0 = this._bufferHead;
        while (v0 != null) {
            v1_0 = v0.copyData(v2, v1_0);
            v0 = v0.next();
        }
        System.arraycopy(p8, 0, v2, v1_0, p9);
        int v1_1 = (v1_0 + p9);
        if (v1_1 == v3) {
            return v2;
        } else {
            throw new IllegalStateException(new StringBuilder().append("Should have gotten ").append(v3).append(" entries, got ").append(v1_1).toString());
        }
    }

    public Object resetAndStart()
    {
        Object v0_1;
        this._reset();
        if (this._freeBuffer != null) {
            v0_1 = this._freeBuffer;
        } else {
            v0_1 = this._constructArray(12);
        }
        return v0_1;
    }
}
