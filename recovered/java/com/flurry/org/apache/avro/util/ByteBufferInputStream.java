package com.flurry.org.apache.avro.util;
public class ByteBufferInputStream extends java.io.InputStream {
    private java.util.List buffers;
    private int current;

    public ByteBufferInputStream(java.util.List p1)
    {
        this.buffers = p1;
        return;
    }

    private java.nio.ByteBuffer getBuffer()
    {
        while (this.current < this.buffers.size()) {
            java.nio.ByteBuffer v0_1 = ((java.nio.ByteBuffer) this.buffers.get(this.current));
            if (!v0_1.hasRemaining()) {
                this.current = (this.current + 1);
            } else {
                return v0_1;
            }
        }
        throw new java.io.EOFException();
    }

    public int read()
    {
        return (this.getBuffer().get() & 255);
    }

    public int read(byte[] p3, int p4, int p5)
    {
        int v1;
        if (p5 != 0) {
            java.nio.ByteBuffer v0 = this.getBuffer();
            v1 = v0.remaining();
            if (p5 <= v1) {
                v0.get(p3, p4, p5);
                v1 = p5;
            } else {
                v0.get(p3, p4, v1);
            }
        } else {
            v1 = 0;
        }
        return v1;
    }

    public java.nio.ByteBuffer readBuffer(int p6)
    {
        java.nio.ByteBuffer v0;
        if (p6 != 0) {
            v0 = this.getBuffer();
            if (v0.remaining() != p6) {
                java.nio.ByteBuffer v1 = java.nio.ByteBuffer.allocate(p6);
                int v2 = 0;
                while (v2 < p6) {
                    v2 += this.read(v1.array(), v2, (p6 - v2));
                }
                v0 = v1;
            } else {
                this.current = (this.current + 1);
            }
        } else {
            v0 = java.nio.ByteBuffer.allocate(0);
        }
        return v0;
    }
}
