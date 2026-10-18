package com.flurry.org.apache.avro.util;
public class ByteBufferOutputStream extends java.io.OutputStream {
    public static final int BUFFER_SIZE = 8192;
    private java.util.List buffers;

    public ByteBufferOutputStream()
    {
        this.reset();
        return;
    }

    public void append(java.util.List p4)
    {
        java.util.Iterator v1 = p4.iterator();
        while (v1.hasNext()) {
            java.nio.ByteBuffer v0_0 = ((java.nio.ByteBuffer) v1.next());
            v0_0.position(v0_0.limit());
        }
        this.buffers.addAll(p4);
        return;
    }

    public java.util.List getBufferList()
    {
        java.util.List v2 = this.buffers;
        this.reset();
        java.util.Iterator v1 = v2.iterator();
        while (v1.hasNext()) {
            ((java.nio.ByteBuffer) v1.next()).flip();
        }
        return v2;
    }

    public void prepend(java.util.List p5)
    {
        java.util.Iterator v1 = p5.iterator();
        while (v1.hasNext()) {
            java.nio.ByteBuffer v0_1 = ((java.nio.ByteBuffer) v1.next());
            v0_1.position(v0_1.limit());
        }
        this.buffers.addAll(0, p5);
        return;
    }

    public void reset()
    {
        this.buffers = new java.util.LinkedList();
        this.buffers.add(java.nio.ByteBuffer.allocate(8192));
        return;
    }

    public void write(int p4)
    {
        java.nio.ByteBuffer v0_0 = ((java.nio.ByteBuffer) this.buffers.get((this.buffers.size() - 1)));
        if (v0_0.remaining() < 1) {
            v0_0 = java.nio.ByteBuffer.allocate(8192);
            this.buffers.add(v0_0);
        }
        v0_0.put(((byte) p4));
        return;
    }

    public void write(java.nio.ByteBuffer p2)
    {
        this.buffers.add(p2);
        return;
    }

    public void write(byte[] p5, int p6, int p7)
    {
        java.nio.ByteBuffer v0_0 = ((java.nio.ByteBuffer) this.buffers.get((this.buffers.size() - 1)));
        int v1 = v0_0.remaining();
        while (p7 > v1) {
            v0_0.put(p5, p6, v1);
            p7 -= v1;
            p6 += v1;
            v0_0 = java.nio.ByteBuffer.allocate(8192);
            this.buffers.add(v0_0);
            v1 = v0_0.remaining();
        }
        v0_0.put(p5, p6, p7);
        return;
    }

    public void writeBuffer(java.nio.ByteBuffer p5)
    {
        if (p5.remaining() >= 8192) {
            java.nio.ByteBuffer v0 = p5.duplicate();
            v0.position(p5.limit());
            this.buffers.add(v0);
        } else {
            this.write(p5.array(), p5.position(), p5.remaining());
        }
        return;
    }
}
