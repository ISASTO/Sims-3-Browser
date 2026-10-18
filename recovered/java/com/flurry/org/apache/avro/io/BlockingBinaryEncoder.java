package com.flurry.org.apache.avro.io;
public class BlockingBinaryEncoder extends com.flurry.org.apache.avro.io.BufferedBinaryEncoder {
    static final synthetic boolean $assertionsDisabled = False;
    private static final int STACK_STEP = 10;
    private com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue[] blockStack;
    private byte[] buf;
    private byte[] headerBuffer;
    private int pos;
    private int stackTop;

    static BlockingBinaryEncoder()
    {
        int v0_2;
        if (com.flurry.org.apache.avro.io.BlockingBinaryEncoder.desiredAssertionStatus()) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled = v0_2;
        return;
    }

    BlockingBinaryEncoder(java.io.OutputStream p5, int p6, int p7)
    {
        super(p5, p7);
        super.stackTop = -1;
        AssertionError v1_11 = new byte[12];
        super.headerBuffer = v1_11;
        AssertionError v1_12 = new byte[p6];
        super.buf = v1_12;
        super.pos = 0;
        AssertionError v1_0 = new com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue[0];
        super.blockStack = v1_0;
        super.expandStack();
        AssertionError v1_1 = super.blockStack;
        int v2_1 = (super.stackTop + 1);
        super.stackTop = v2_1;
        com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue v0 = v1_1[v2_1];
        v0.type = 0;
        v0.state = com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.ROOT;
        v0.lastFullItem = 0;
        v0.start = 0;
        v0.items = 1;
        if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (super.check())) {
            return;
        } else {
            throw new AssertionError();
        }
    }

    private boolean check()
    {
        if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (this.buf != null)) {
            if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (this.pos >= 0)) {
                if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (this.pos <= this.buf.length)) {
                    if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (this.blockStack != null)) {
                        com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue v1 = 0;
                        int v0 = 0;
                        while (v0 <= this.stackTop) {
                            com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue v2 = this.blockStack[v0];
                            v2.check(v1, this.pos);
                            v1 = v2;
                            v0++;
                        }
                        return 1;
                    } else {
                        throw new AssertionError();
                    }
                } else {
                    throw new AssertionError(new StringBuilder().append(this.pos).append(" ").append(this.buf.length).toString());
                }
            } else {
                throw new AssertionError();
            }
        } else {
            throw new AssertionError();
        }
    }

    private void compact()
    {
        if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (this.check())) {
            com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue v4 = 0;
            int v1 = 1;
            while (v1 <= this.stackTop) {
                v4 = this.blockStack[v1];
                if (v4.state == com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.REGULAR) {
                    break;
                }
                v1++;
            }
            if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (v4 != null)) {
                super.writeFixed(this.buf, 0, v4.start);
                if (1 < v4.items) {
                    super.writeInt((- (v4.items - 1)));
                    super.writeInt((v4.lastFullItem - v4.start));
                    super.writeFixed(this.buf, v4.start, (v4.lastFullItem - v4.start));
                    v4.start = v4.lastFullItem;
                    v4.items = 1;
                }
                com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue v3_0;
                super.writeInt(1);
                if ((v1 + 1) > this.stackTop) {
                    v3_0 = 0;
                } else {
                    v3_0 = this.blockStack[(v1 + 1)];
                }
                int v0;
                if (v3_0 != null) {
                    v0 = v3_0.start;
                } else {
                    v0 = this.pos;
                }
                super.writeFixed(this.buf, v4.lastFullItem, (v0 - v4.lastFullItem));
                System.arraycopy(this.buf, v0, this.buf, 0, (this.pos - v0));
                int v2 = (v1 + 1);
                while (v2 <= this.stackTop) {
                    com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue v3_1 = this.blockStack[v2];
                    v3_1.start = (v3_1.start - v0);
                    v3_1.lastFullItem = (v3_1.lastFullItem - v0);
                    v2++;
                }
                this.pos = (this.pos - v0);
                if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (v4.items == 1)) {
                    v4.lastFullItem = 0;
                    v4.start = 0;
                    v4.state = com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.OVERFLOW;
                    if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (this.check())) {
                        return;
                    } else {
                        throw new AssertionError();
                    }
                } else {
                    throw new AssertionError();
                }
            } else {
                throw new AssertionError();
            }
        } else {
            throw new AssertionError();
        }
    }

    private void doWriteBytes(byte[] p3, int p4, int p5)
    {
        if (p5 >= this.buf.length) {
            this.ensureBounds(this.buf.length);
            if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || ((this.blockStack[this.stackTop].state == com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.ROOT) || (this.blockStack[this.stackTop].state == com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.OVERFLOW))) {
                this.write(p3, p4, p5);
            } else {
                throw new AssertionError();
            }
        } else {
            this.ensureBounds(p5);
            System.arraycopy(p3, p4, this.buf, this.pos, p5);
            this.pos = (this.pos + p5);
        }
        return;
    }

    private void endBlockedValue()
    {
        while ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (this.check())) {
            com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue v3 = this.blockStack[this.stackTop];
            if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (v3.state != com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.ROOT)) {
                if (v3.state == com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.OVERFLOW) {
                    this.finishOverflow();
                }
                if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (v3.state == com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.REGULAR)) {
                    if (v3.items > 0) {
                        int v0 = (this.pos - v3.start);
                        if ((v3.start != 0) || (this.blockStack[(this.stackTop - 1)].state == com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.REGULAR)) {
                            int v1_1 = (0 + com.flurry.org.apache.avro.io.BinaryData.encodeInt((- v3.items), this.headerBuffer, 0));
                            int v1_2 = (v1_1 + com.flurry.org.apache.avro.io.BinaryData.encodeInt(v0, this.headerBuffer, v1_1));
                            if (this.buf.length < (this.pos + v1_2)) {
                                this.compact();
                            } else {
                                this.pos = (this.pos + v1_2);
                                int v2 = v3.start;
                                System.arraycopy(this.buf, v2, this.buf, (v2 + v1_2), v0);
                                System.arraycopy(this.headerBuffer, 0, this.buf, v2, v1_2);
                            }
                        } else {
                            super.writeInt((- v3.items));
                            super.writeInt(v0);
                        }
                    }
                    this.stackTop = (this.stackTop - 1);
                    this.ensureBounds(1);
                    AssertionError v4_31 = this.buf;
                    byte[] v5_13 = this.pos;
                    this.pos = (v5_13 + 1);
                    v4_31[v5_13] = 0;
                    if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (this.check())) {
                        if (this.blockStack[this.stackTop].state == com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.ROOT) {
                            this.flush();
                        }
                        return;
                    } else {
                        throw new AssertionError();
                    }
                } else {
                    throw new AssertionError();
                }
            } else {
                throw new AssertionError();
            }
        }
        throw new AssertionError();
    }

    private void ensureBounds(int p4)
    {
        while (this.buf.length < (this.pos + p4)) {
            if (this.blockStack[this.stackTop].state != com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.REGULAR) {
                super.writeFixed(this.buf, 0, this.pos);
                this.pos = 0;
            } else {
                this.compact();
            }
        }
        return;
    }

    private void expandStack()
    {
        int v1 = this.blockStack.length;
        this.blockStack = ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue[]) java.util.Arrays.copyOf(this.blockStack, (this.blockStack.length + 10)));
        int v0 = v1;
        while (v0 < this.blockStack.length) {
            this.blockStack[v0] = new com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue();
            v0++;
        }
        return;
    }

    private void finishOverflow()
    {
        com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue v0 = this.blockStack[this.stackTop];
        if (v0.state == com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.OVERFLOW) {
            if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (this.check())) {
                super.writeFixed(this.buf, 0, this.pos);
                this.pos = 0;
                v0.state = com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.REGULAR;
                v0.lastFullItem = 0;
                v0.start = 0;
                v0.items = 0;
                if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (this.check())) {
                    return;
                } else {
                    throw new AssertionError();
                }
            } else {
                throw new AssertionError();
            }
        } else {
            throw new IllegalStateException("Not an overflow block");
        }
    }

    private void write(byte[] p4, int p5, int p6)
    {
        if (this.blockStack[this.stackTop].state != com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.ROOT) {
            if ((!com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) && (!this.check())) {
                throw new AssertionError();
            }
            while (this.buf.length < (this.pos + p6)) {
                if (this.blockStack[this.stackTop].state != com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.REGULAR) {
                    super.writeFixed(this.buf, 0, this.pos);
                    this.pos = 0;
                    if (this.buf.length <= p6) {
                        super.writeFixed(p4, p5, p6);
                        p6 = 0;
                    }
                } else {
                    this.compact();
                }
            }
            System.arraycopy(p4, p5, this.buf, this.pos, p6);
            this.pos = (this.pos + p6);
        } else {
            super.writeFixed(p4, p5, p6);
        }
        if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (this.check())) {
            return;
        } else {
            throw new AssertionError();
        }
    }

    public int bytesBuffered()
    {
        return (this.pos + super.bytesBuffered());
    }

    com.flurry.org.apache.avro.io.BlockingBinaryEncoder configure(java.io.OutputStream p2, int p3, int p4)
    {
        super.configure(p2, p4);
        this.pos = 0;
        this.stackTop = 0;
        if ((this.buf == null) || (this.buf.length != p3)) {
            AssertionError v0_8 = new byte[p3];
            this.buf = v0_8;
        }
        if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (this.check())) {
            return this;
        } else {
            throw new AssertionError();
        }
    }

    public void flush()
    {
        com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue v0 = this.blockStack[this.stackTop];
        if (v0.state != com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.ROOT) {
            while (v0.state != com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.OVERFLOW) {
                this.compact();
            }
        } else {
            super.writeFixed(this.buf, 0, this.pos);
            this.pos = 0;
        }
        super.flush();
        if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (this.check())) {
            return;
        } else {
            throw new AssertionError();
        }
    }

    public void setItemCount(long p6)
    {
        com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue v0 = this.blockStack[this.stackTop];
        if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || ((v0.type == com.flurry.org.apache.avro.Schema$Type.ARRAY) || (v0.type == com.flurry.org.apache.avro.Schema$Type.MAP))) {
            if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (v0.itemsLeftToWrite == 0)) {
                v0.itemsLeftToWrite = p6;
                if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (this.check())) {
                    return;
                } else {
                    throw new AssertionError();
                }
            } else {
                throw new AssertionError();
            }
        } else {
            throw new AssertionError();
        }
    }

    public void startItem()
    {
        if (this.blockStack[this.stackTop].state == com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.OVERFLOW) {
            this.finishOverflow();
        }
        com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue v0 = this.blockStack[this.stackTop];
        v0.items = (v0.items + 1);
        v0.lastFullItem = this.pos;
        v0.itemsLeftToWrite = (v0.itemsLeftToWrite - 1);
        if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (this.check())) {
            return;
        } else {
            throw new AssertionError();
        }
    }

    public void writeArrayEnd()
    {
        com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue v0 = this.blockStack[this.stackTop];
        if (v0.type == com.flurry.org.apache.avro.Schema$Type.ARRAY) {
            if (v0.itemsLeftToWrite == 0) {
                this.endBlockedValue();
                if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (this.check())) {
                    return;
                } else {
                    throw new AssertionError();
                }
            } else {
                throw new com.flurry.org.apache.avro.AvroTypeException("Failed to write expected number of array elements.");
            }
        } else {
            throw new com.flurry.org.apache.avro.AvroTypeException("Called writeArrayEnd outside of an array.");
        }
    }

    public void writeArrayStart()
    {
        if ((this.stackTop + 1) == this.blockStack.length) {
            this.expandStack();
        }
        AssertionError v1_10 = this.blockStack;
        int v2_3 = (this.stackTop + 1);
        this.stackTop = v2_3;
        com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue v0 = v1_10[v2_3];
        v0.type = com.flurry.org.apache.avro.Schema$Type.ARRAY;
        v0.state = com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.REGULAR;
        AssertionError v1_4 = this.pos;
        v0.lastFullItem = v1_4;
        v0.start = v1_4;
        v0.items = 0;
        if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (this.check())) {
            return;
        } else {
            throw new AssertionError();
        }
    }

    public void writeBoolean(boolean p4)
    {
        this.ensureBounds(1);
        this.pos = (this.pos + com.flurry.org.apache.avro.io.BinaryData.encodeBoolean(p4, this.buf, this.pos));
        return;
    }

    public void writeDouble(double p4)
    {
        this.ensureBounds(8);
        this.pos = (this.pos + com.flurry.org.apache.avro.io.BinaryData.encodeDouble(p4, this.buf, this.pos));
        return;
    }

    public void writeFixed(byte[] p1, int p2, int p3)
    {
        this.doWriteBytes(p1, p2, p3);
        return;
    }

    public void writeFloat(float p4)
    {
        this.ensureBounds(4);
        this.pos = (this.pos + com.flurry.org.apache.avro.io.BinaryData.encodeFloat(p4, this.buf, this.pos));
        return;
    }

    public void writeIndex(int p4)
    {
        this.ensureBounds(5);
        this.pos = (this.pos + com.flurry.org.apache.avro.io.BinaryData.encodeInt(p4, this.buf, this.pos));
        return;
    }

    public void writeInt(int p4)
    {
        this.ensureBounds(5);
        this.pos = (this.pos + com.flurry.org.apache.avro.io.BinaryData.encodeInt(p4, this.buf, this.pos));
        return;
    }

    public void writeLong(long p4)
    {
        this.ensureBounds(10);
        this.pos = (this.pos + com.flurry.org.apache.avro.io.BinaryData.encodeLong(p4, this.buf, this.pos));
        return;
    }

    public void writeMapEnd()
    {
        com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue v0 = this.blockStack[this.stackTop];
        if (v0.type == com.flurry.org.apache.avro.Schema$Type.MAP) {
            if (v0.itemsLeftToWrite == 0) {
                this.endBlockedValue();
                if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (this.check())) {
                    return;
                } else {
                    throw new AssertionError();
                }
            } else {
                throw new com.flurry.org.apache.avro.AvroTypeException("Failed to read write expected number of array elements.");
            }
        } else {
            throw new com.flurry.org.apache.avro.AvroTypeException("Called writeMapEnd outside of a map.");
        }
    }

    public void writeMapStart()
    {
        if ((this.stackTop + 1) == this.blockStack.length) {
            this.expandStack();
        }
        AssertionError v1_10 = this.blockStack;
        int v2_3 = (this.stackTop + 1);
        this.stackTop = v2_3;
        com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue v0 = v1_10[v2_3];
        v0.type = com.flurry.org.apache.avro.Schema$Type.MAP;
        v0.state = com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.REGULAR;
        AssertionError v1_4 = this.pos;
        v0.lastFullItem = v1_4;
        v0.start = v1_4;
        v0.items = 0;
        if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder.$assertionsDisabled) || (this.check())) {
            return;
        } else {
            throw new AssertionError();
        }
    }

    protected void writeZero()
    {
        this.ensureBounds(1);
        byte[] v0_1 = this.buf;
        int v1 = this.pos;
        this.pos = (v1 + 1);
        v0_1[v1] = 0;
        return;
    }
}
