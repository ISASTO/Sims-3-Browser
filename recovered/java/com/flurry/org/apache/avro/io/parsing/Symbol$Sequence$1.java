package com.flurry.org.apache.avro.io.parsing;
 class Symbol$Sequence$1 implements java.util.Iterator {
    private int pos;
    final synthetic com.flurry.org.apache.avro.io.parsing.Symbol$Sequence this$0;

    Symbol$Sequence$1(com.flurry.org.apache.avro.io.parsing.Symbol$Sequence p2)
    {
        this.this$0 = p2;
        this.pos = this.this$0.production.length;
        return;
    }

    public boolean hasNext()
    {
        int v0_1;
        if (this.pos <= 0) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol next()
    {
        if (this.pos <= 0) {
            throw new java.util.NoSuchElementException();
        } else {
            java.util.NoSuchElementException v0_5 = this.this$0.production;
            int v1_1 = (this.pos - 1);
            this.pos = v1_1;
            return v0_5[v1_1];
        }
    }

    public bridge synthetic Object next()
    {
        return this.next();
    }

    public void remove()
    {
        throw new UnsupportedOperationException();
    }
}
