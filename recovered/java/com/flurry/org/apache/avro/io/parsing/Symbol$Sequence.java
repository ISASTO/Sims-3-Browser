package com.flurry.org.apache.avro.io.parsing;
public class Symbol$Sequence extends com.flurry.org.apache.avro.io.parsing.Symbol implements java.lang.Iterable {

    private Symbol$Sequence(com.flurry.org.apache.avro.io.parsing.Symbol[] p2)
    {
        super(com.flurry.org.apache.avro.io.parsing.Symbol$Kind.SEQUENCE, p2);
        return;
    }

    synthetic Symbol$Sequence(com.flurry.org.apache.avro.io.parsing.Symbol[] p1, com.flurry.org.apache.avro.io.parsing.Symbol$1 p2)
    {
        this(p1);
        return;
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol$Sequence flatten(java.util.Map p11, java.util.Map p12)
    {
        com.flurry.org.apache.avro.io.parsing.Symbol$Sequence v9_1 = ((com.flurry.org.apache.avro.io.parsing.Symbol$Sequence) p11.get(this));
        if (v9_1 == null) {
            com.flurry.org.apache.avro.io.parsing.Symbol[] v0_4 = new com.flurry.org.apache.avro.io.parsing.Symbol[this.flattenedSize()];
            v9_1 = new com.flurry.org.apache.avro.io.parsing.Symbol$Sequence(v0_4);
            p11.put(this, v9_1);
            java.util.ArrayList v8_1 = new java.util.ArrayList();
            p12.put(v9_1, v8_1);
            com.flurry.org.apache.avro.io.parsing.Symbol$Sequence.flatten(this.production, 0, v9_1.production, 0, p11, p12);
            java.util.Iterator v7 = v8_1.iterator();
            while (v7.hasNext()) {
                com.flurry.org.apache.avro.io.parsing.Symbol$Fixup v6_1 = ((com.flurry.org.apache.avro.io.parsing.Symbol$Fixup) v7.next());
                System.arraycopy(v9_1.production, 0, v6_1.symbols, v6_1.pos, v9_1.production.length);
            }
            p12.remove(v9_1);
        }
        return v9_1;
    }

    public bridge synthetic com.flurry.org.apache.avro.io.parsing.Symbol flatten(java.util.Map p2, java.util.Map p3)
    {
        return this.flatten(p2, p3);
    }

    public final int flattenedSize()
    {
        return com.flurry.org.apache.avro.io.parsing.Symbol$Sequence.flattenedSize(this.production, 0);
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol get(int p2)
    {
        return this.production[p2];
    }

    public java.util.Iterator iterator()
    {
        return new com.flurry.org.apache.avro.io.parsing.Symbol$Sequence$1(this);
    }

    public int size()
    {
        return this.production.length;
    }
}
