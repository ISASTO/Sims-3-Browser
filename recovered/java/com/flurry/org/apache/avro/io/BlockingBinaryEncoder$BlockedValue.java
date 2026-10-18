package com.flurry.org.apache.avro.io;
 class BlockingBinaryEncoder$BlockedValue {
    static final synthetic boolean $assertionsDisabled;
    public int items;
    public long itemsLeftToWrite;
    public int lastFullItem;
    public int start;
    public com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State state;
    public com.flurry.org.apache.avro.Schema$Type type;

    static BlockingBinaryEncoder$BlockedValue()
    {
        int v0_2;
        if (com.flurry.org.apache.avro.io.BlockingBinaryEncoder.desiredAssertionStatus()) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue.$assertionsDisabled = v0_2;
        return;
    }

    public BlockingBinaryEncoder$BlockedValue()
    {
        this.type = 0;
        this.state = com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.ROOT;
        this.lastFullItem = 0;
        this.start = 0;
        this.items = 1;
        return;
    }

    public boolean check(com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue p4, int p5)
    {
        if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue.$assertionsDisabled) || ((this.state != com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.ROOT) || (this.type == null))) {
            if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue.$assertionsDisabled) || ((this.state == com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.ROOT) || ((this.type == com.flurry.org.apache.avro.Schema$Type.ARRAY) || (this.type == com.flurry.org.apache.avro.Schema$Type.MAP)))) {
                if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue.$assertionsDisabled) || (this.items >= 0)) {
                    if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue.$assertionsDisabled) || ((this.items != 0) || (this.start == p5))) {
                        if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue.$assertionsDisabled) || ((1 < this.items) || (this.start == this.lastFullItem))) {
                            if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue.$assertionsDisabled) || ((this.items <= 1) || (this.start <= this.lastFullItem))) {
                                if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue.$assertionsDisabled) || (this.lastFullItem <= p5)) {
                                    switch (com.flurry.org.apache.avro.io.BlockingBinaryEncoder$1.$SwitchMap$org$apache$avro$io$BlockingBinaryEncoder$BlockedValue$State[this.state.ordinal()]) {
                                        case 1:
                                            if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue.$assertionsDisabled) || (this.start == 0)) {
                                                if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue.$assertionsDisabled) || (p4 == null)) {
                                                } else {
                                                    throw new AssertionError();
                                                }
                                            } else {
                                                throw new AssertionError();
                                            }
                                            break;
                                        case 2:
                                            if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue.$assertionsDisabled) || (this.start >= 0)) {
                                                if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue.$assertionsDisabled) || (p4.lastFullItem <= this.start)) {
                                                    if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue.$assertionsDisabled) || (1 <= p4.items)) {
                                                    } else {
                                                        throw new AssertionError();
                                                    }
                                                } else {
                                                    throw new AssertionError();
                                                }
                                            } else {
                                                throw new AssertionError();
                                            }
                                            break;
                                        case 3:
                                            if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue.$assertionsDisabled) || (this.start == 0)) {
                                                if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue.$assertionsDisabled) || (this.items == 1)) {
                                                    if ((com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue.$assertionsDisabled) || ((p4.state == com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.ROOT) || (p4.state == com.flurry.org.apache.avro.io.BlockingBinaryEncoder$BlockedValue$State.OVERFLOW))) {
                                                    } else {
                                                        throw new AssertionError();
                                                    }
                                                } else {
                                                    throw new AssertionError();
                                                }
                                            } else {
                                                throw new AssertionError();
                                            }
                                            break;
                                    }
                                    return 0;
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
}
