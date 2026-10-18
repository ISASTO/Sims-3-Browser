package com.flurry.org.codehaus.jackson.map.util;
public final class ObjectBuffer {
    static final int INITIAL_CHUNK_SIZE = 12;
    static final int MAX_CHUNK_SIZE = 262144;
    static final int SMALL_CHUNK_SIZE = 16384;
    private com.flurry.org.codehaus.jackson.map.util.ObjectBuffer$Node _bufferHead;
    private com.flurry.org.codehaus.jackson.map.util.ObjectBuffer$Node _bufferTail;
    private int _bufferedEntryCount;
    private Object[] _freeBuffer;

    public ObjectBuffer()
    {
        return;
    }

    protected final void _copyTo(Object p8, int p9, Object[] p10, int p11)
    {
        int v3_0 = 0;
        com.flurry.org.codehaus.jackson.map.util.ObjectBuffer$Node v2 = this._bufferHead;
        while (v2 != null) {
            Object[] v0 = v2.getData();
            int v1 = v0.length;
            System.arraycopy(v0, 0, p8, v3_0, v1);
            v3_0 += v1;
            v2 = v2.next();
        }
        System.arraycopy(p10, 0, p8, v3_0, p11);
        int v3_1 = (v3_0 + p11);
        if (v3_1 == p9) {
            return;
        } else {
            throw new IllegalStateException(new StringBuilder().append("Should have gotten ").append(p9).append(" entries, got ").append(v3_1).toString());
        }
    }

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

    public Object[] appendCompletedChunk(Object[] p4)
    {
        com.flurry.org.codehaus.jackson.map.util.ObjectBuffer$Node v1_1 = new com.flurry.org.codehaus.jackson.map.util.ObjectBuffer$Node(p4);
        if (this._bufferHead != null) {
            this._bufferTail.linkNext(v1_1);
            this._bufferTail = v1_1;
        } else {
            this._bufferTail = v1_1;
            this._bufferHead = v1_1;
        }
        int v0_0;
        int v0_1 = p4.length;
        this._bufferedEntryCount = (this._bufferedEntryCount + v0_1);
        if (v0_1 >= 16384) {
            v0_0 = (v0_1 + (v0_1 >> 2));
        } else {
            v0_0 = (v0_1 + v0_1);
        }
        Object[] v2_4 = new Object[v0_0];
        return v2_4;
    }

    public int bufferedSize()
    {
        return this._bufferedEntryCount;
    }

    public void completeAndClearBuffer(Object[] p6, int p7, java.util.List p8)
    {
        com.flurry.org.codehaus.jackson.map.util.ObjectBuffer$Node v3 = this._bufferHead;
        while (v3 != null) {
            Object[] v0 = v3.getData();
            int v1_0 = 0;
            int v2 = v0.length;
            while (v1_0 < v2) {
                p8.add(v0[v1_0]);
                v1_0++;
            }
            v3 = v3.next();
        }
        int v1_1 = 0;
        while (v1_1 < p7) {
            p8.add(p6[v1_1]);
            v1_1++;
        }
        return;
    }

    public Object[] completeAndClearBuffer(Object[] p4, int p5)
    {
        int v1 = (p5 + this._bufferedEntryCount);
        Object[] v0 = new Object[v1];
        this._copyTo(v0, v1, p4, p5);
        return v0;
    }

    public Object[] completeAndClearBuffer(Object[] p4, int p5, Class p6)
    {
        int v1 = (p5 + this._bufferedEntryCount);
        Object[] v0_1 = ((Object[]) ((Object[]) reflect.Array.newInstance(p6, v1)));
        this._copyTo(v0_1, v1, p4, p5);
        this._reset();
        return v0_1;
    }

    public int initialCapacity()
    {
        int v0_2;
        if (this._freeBuffer != null) {
            v0_2 = this._freeBuffer.length;
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    public Object[] resetAndStart()
    {
        Object[] v0_1;
        this._reset();
        if (this._freeBuffer != null) {
            v0_1 = this._freeBuffer;
        } else {
            v0_1 = new Object[12];
        }
        return v0_1;
    }
}
