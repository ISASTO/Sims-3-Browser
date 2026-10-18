package com.flurry.org.apache.avro.io;
public abstract class ParsingEncoder extends com.flurry.org.apache.avro.io.Encoder {
    private long[] counts;
    protected int pos;

    public ParsingEncoder()
    {
        int v0_1 = new long[10];
        this.counts = v0_1;
        this.pos = -1;
        return;
    }

    protected final int depth()
    {
        return this.pos;
    }

    protected final void pop()
    {
        if (this.counts[this.pos] == 0) {
            this.pos = (this.pos - 1);
            return;
        } else {
            throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Incorrect number of items written. ").append(this.counts[this.pos]).append(" more required.").toString());
        }
    }

    protected final void push()
    {
        if (this.pos == this.counts.length) {
            this.counts = java.util.Arrays.copyOf(this.counts, (this.pos + 10));
        }
        long[] v0_1 = this.counts;
        int v1_2 = (this.pos + 1);
        this.pos = v1_2;
        v0_1[v1_2] = 0;
        return;
    }

    public void setItemCount(long p5)
    {
        if (this.counts[this.pos] == 0) {
            this.counts[this.pos] = p5;
            return;
        } else {
            throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Incorrect number of items written. ").append(this.counts[this.pos]).append(" more required.").toString());
        }
    }

    public void startItem()
    {
        long[] v0 = this.counts;
        int v1 = this.pos;
        v0[v1] = (v0[v1] - 1);
        return;
    }
}
