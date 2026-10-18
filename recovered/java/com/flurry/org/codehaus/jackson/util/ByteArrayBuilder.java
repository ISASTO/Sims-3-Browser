package com.flurry.org.codehaus.jackson.util;
public final class ByteArrayBuilder extends java.io.OutputStream {
    static final int DEFAULT_BLOCK_ARRAY_SIZE = 40;
    private static final int INITIAL_BLOCK_SIZE = 500;
    private static final int MAX_BLOCK_SIZE = 262144;
    private static final byte[] NO_BYTES;
    private final com.flurry.org.codehaus.jackson.util.BufferRecycler _bufferRecycler;
    private byte[] _currBlock;
    private int _currBlockPtr;
    private final java.util.LinkedList _pastBlocks;
    private int _pastLen;

    static ByteArrayBuilder()
    {
        byte[] v0_1 = new byte[0];
        com.flurry.org.codehaus.jackson.util.ByteArrayBuilder.NO_BYTES = v0_1;
        return;
    }

    public ByteArrayBuilder()
    {
        this(0);
        return;
    }

    public ByteArrayBuilder(int p2)
    {
        this(0, p2);
        return;
    }

    public ByteArrayBuilder(com.flurry.org.codehaus.jackson.util.BufferRecycler p2)
    {
        this(p2, 500);
        return;
    }

    public ByteArrayBuilder(com.flurry.org.codehaus.jackson.util.BufferRecycler p2, int p3)
    {
        this._pastBlocks = new java.util.LinkedList();
        this._bufferRecycler = p2;
        if (p2 != null) {
            this._currBlock = p2.allocByteBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType.WRITE_CONCAT_BUFFER);
        } else {
            byte[] v0_1 = new byte[p3];
            this._currBlock = v0_1;
        }
        return;
    }

    private void _allocMore()
    {
        this._pastLen = (this._pastLen + this._currBlock.length);
        int v0 = Math.max((this._pastLen >> 1), 1000);
        if (v0 > 262144) {
            v0 = 262144;
        }
        this._pastBlocks.add(this._currBlock);
        int v1_3 = new byte[v0];
        this._currBlock = v1_3;
        this._currBlockPtr = 0;
        return;
    }

    public void append(int p4)
    {
        if (this._currBlockPtr >= this._currBlock.length) {
            this._allocMore();
        }
        byte[] v0_1 = this._currBlock;
        int v1_2 = this._currBlockPtr;
        this._currBlockPtr = (v1_2 + 1);
        v0_1[v1_2] = ((byte) p4);
        return;
    }

    public void appendThreeBytes(int p4)
    {
        if ((this._currBlockPtr + 2) >= this._currBlock.length) {
            this.append((p4 >> 16));
            this.append((p4 >> 8));
            this.append(p4);
        } else {
            int v0_2 = this._currBlock;
            int v1_0 = this._currBlockPtr;
            this._currBlockPtr = (v1_0 + 1);
            v0_2[v1_0] = ((byte) (p4 >> 16));
            int v0_3 = this._currBlock;
            int v1_1 = this._currBlockPtr;
            this._currBlockPtr = (v1_1 + 1);
            v0_3[v1_1] = ((byte) (p4 >> 8));
            int v0_4 = this._currBlock;
            int v1_3 = this._currBlockPtr;
            this._currBlockPtr = (v1_3 + 1);
            v0_4[v1_3] = ((byte) p4);
        }
        return;
    }

    public void appendTwoBytes(int p4)
    {
        if ((this._currBlockPtr + 1) >= this._currBlock.length) {
            this.append((p4 >> 8));
            this.append(p4);
        } else {
            int v0_4 = this._currBlock;
            int v1_3 = this._currBlockPtr;
            this._currBlockPtr = (v1_3 + 1);
            v0_4[v1_3] = ((byte) (p4 >> 8));
            int v0_2 = this._currBlock;
            int v1_0 = this._currBlockPtr;
            this._currBlockPtr = (v1_0 + 1);
            v0_2[v1_0] = ((byte) p4);
        }
        return;
    }

    public void close()
    {
        return;
    }

    public byte[] completeAndCoalesce(int p2)
    {
        this._currBlockPtr = p2;
        return this.toByteArray();
    }

    public byte[] finishCurrentSegment()
    {
        this._allocMore();
        return this._currBlock;
    }

    public void flush()
    {
        return;
    }

    public byte[] getCurrentSegment()
    {
        return this._currBlock;
    }

    public int getCurrentSegmentLength()
    {
        return this._currBlockPtr;
    }

    public void release()
    {
        this.reset();
        if ((this._bufferRecycler != null) && (this._currBlock != null)) {
            this._bufferRecycler.releaseByteBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType.WRITE_CONCAT_BUFFER, this._currBlock);
            this._currBlock = 0;
        }
        return;
    }

    public void reset()
    {
        this._pastLen = 0;
        this._currBlockPtr = 0;
        if (!this._pastBlocks.isEmpty()) {
            this._pastBlocks.clear();
        }
        return;
    }

    public byte[] resetAndGetFirstSegment()
    {
        this.reset();
        return this._currBlock;
    }

    public void setCurrentSegmentLength(int p1)
    {
        this._currBlockPtr = p1;
        return;
    }

    public byte[] toByteArray()
    {
        byte[] v4;
        int v5 = (this._pastLen + this._currBlockPtr);
        if (v5 != 0) {
            v4 = new byte[v5];
            int v3_1 = 0;
            java.util.Iterator v1 = this._pastBlocks.iterator();
            while (v1.hasNext()) {
                byte[] v0_1 = ((byte[]) v1.next());
                int v2 = v0_1.length;
                System.arraycopy(v0_1, 0, v4, v3_1, v2);
                v3_1 += v2;
            }
            System.arraycopy(this._currBlock, 0, v4, v3_1, this._currBlockPtr);
            int v3_0 = (v3_1 + this._currBlockPtr);
            if (v3_0 == v5) {
                if (!this._pastBlocks.isEmpty()) {
                    this.reset();
                }
            } else {
                throw new RuntimeException(new StringBuilder().append("Internal error: total len assumed to be ").append(v5).append(", copied ").append(v3_0).append(" bytes").toString());
            }
        } else {
            v4 = com.flurry.org.codehaus.jackson.util.ByteArrayBuilder.NO_BYTES;
        }
        return v4;
    }

    public void write(int p1)
    {
        this.append(p1);
        return;
    }

    public void write(byte[] p3)
    {
        this.write(p3, 0, p3.length);
        return;
    }

    public void write(byte[] p5, int p6, int p7)
    {
        while(true) {
            int v1 = Math.min((this._currBlock.length - this._currBlockPtr), p7);
            if (v1 > 0) {
                System.arraycopy(p5, p6, this._currBlock, this._currBlockPtr, v1);
                p6 += v1;
                this._currBlockPtr = (this._currBlockPtr + v1);
                p7 -= v1;
            }
            if (p7 <= 0) {
                break;
            }
            this._allocMore();
        }
        return;
    }
}
