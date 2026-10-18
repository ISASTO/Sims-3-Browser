package com.flurry.org.apache.avro.io.parsing;
public class Symbol$Alternative extends com.flurry.org.apache.avro.io.parsing.Symbol {
    public final String[] labels;
    public final com.flurry.org.apache.avro.io.parsing.Symbol[] symbols;

    private Symbol$Alternative(com.flurry.org.apache.avro.io.parsing.Symbol[] p2, String[] p3)
    {
        super(com.flurry.org.apache.avro.io.parsing.Symbol$Kind.ALTERNATIVE);
        super.symbols = p2;
        super.labels = p3;
        return;
    }

    synthetic Symbol$Alternative(com.flurry.org.apache.avro.io.parsing.Symbol[] p1, String[] p2, com.flurry.org.apache.avro.io.parsing.Symbol$1 p3)
    {
        this(p1, p2);
        return;
    }

    public int findLabel(String p3)
    {
        int v0;
        if (p3 == null) {
            v0 = -1;
        } else {
            v0 = 0;
            while (v0 < this.labels.length) {
                if (!p3.equals(this.labels[v0])) {
                    v0++;
                }
            }
        }
        return v0;
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol$Alternative flatten(java.util.Map p5, java.util.Map p6)
    {
        com.flurry.org.apache.avro.io.parsing.Symbol[] v1 = new com.flurry.org.apache.avro.io.parsing.Symbol[this.symbols.length];
        int v0 = 0;
        while (v0 < v1.length) {
            v1[v0] = this.symbols[v0].flatten(p5, p6);
            v0++;
        }
        return new com.flurry.org.apache.avro.io.parsing.Symbol$Alternative(v1, this.labels);
    }

    public bridge synthetic com.flurry.org.apache.avro.io.parsing.Symbol flatten(java.util.Map p2, java.util.Map p3)
    {
        return this.flatten(p2, p3);
    }

    public String getLabel(int p2)
    {
        return this.labels[p2];
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol getSymbol(int p2)
    {
        return this.symbols[p2];
    }

    public int size()
    {
        return this.symbols.length;
    }
}
