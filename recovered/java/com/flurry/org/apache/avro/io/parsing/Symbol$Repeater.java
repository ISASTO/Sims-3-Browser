package com.flurry.org.apache.avro.io.parsing;
public class Symbol$Repeater extends com.flurry.org.apache.avro.io.parsing.Symbol {
    public final com.flurry.org.apache.avro.io.parsing.Symbol end;

    private varargs Symbol$Repeater(com.flurry.org.apache.avro.io.parsing.Symbol p3, com.flurry.org.apache.avro.io.parsing.Symbol[] p4)
    {
        super(com.flurry.org.apache.avro.io.parsing.Symbol$Kind.REPEATER, com.flurry.org.apache.avro.io.parsing.Symbol$Repeater.makeProduction(p4));
        super.end = p3;
        super.production[0] = super;
        return;
    }

    synthetic Symbol$Repeater(com.flurry.org.apache.avro.io.parsing.Symbol p1, com.flurry.org.apache.avro.io.parsing.Symbol[] p2, com.flurry.org.apache.avro.io.parsing.Symbol$1 p3)
    {
        this(p1, p2);
        return;
    }

    private static com.flurry.org.apache.avro.io.parsing.Symbol[] makeProduction(com.flurry.org.apache.avro.io.parsing.Symbol[] p4)
    {
        com.flurry.org.apache.avro.io.parsing.Symbol[] v0 = new com.flurry.org.apache.avro.io.parsing.Symbol[(p4.length + 1)];
        System.arraycopy(p4, 0, v0, 1, p4.length);
        return v0;
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol$Repeater flatten(java.util.Map p8, java.util.Map p9)
    {
        com.flurry.org.apache.avro.io.parsing.Symbol[] v2_2 = new com.flurry.org.apache.avro.io.parsing.Symbol[com.flurry.org.apache.avro.io.parsing.Symbol$Repeater.flattenedSize(this.production, 1)];
        com.flurry.org.apache.avro.io.parsing.Symbol$Repeater v6_1 = new com.flurry.org.apache.avro.io.parsing.Symbol$Repeater(this.end, v2_2);
        com.flurry.org.apache.avro.io.parsing.Symbol$Repeater.flatten(this.production, 1, v6_1.production, 1, p8, p9);
        return v6_1;
    }

    public bridge synthetic com.flurry.org.apache.avro.io.parsing.Symbol flatten(java.util.Map p2, java.util.Map p3)
    {
        return this.flatten(p2, p3);
    }
}
