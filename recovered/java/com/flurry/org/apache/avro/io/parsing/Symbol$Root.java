package com.flurry.org.apache.avro.io.parsing;
public class Symbol$Root extends com.flurry.org.apache.avro.io.parsing.Symbol {

    private varargs Symbol$Root(com.flurry.org.apache.avro.io.parsing.Symbol[] p3)
    {
        super(com.flurry.org.apache.avro.io.parsing.Symbol$Kind.ROOT, com.flurry.org.apache.avro.io.parsing.Symbol$Root.makeProduction(p3));
        super.production[0] = super;
        return;
    }

    synthetic Symbol$Root(com.flurry.org.apache.avro.io.parsing.Symbol[] p1, com.flurry.org.apache.avro.io.parsing.Symbol$1 p2)
    {
        this(p1);
        return;
    }

    private static com.flurry.org.apache.avro.io.parsing.Symbol[] makeProduction(com.flurry.org.apache.avro.io.parsing.Symbol[] p6)
    {
        com.flurry.org.apache.avro.io.parsing.Symbol[] v2 = new com.flurry.org.apache.avro.io.parsing.Symbol[(com.flurry.org.apache.avro.io.parsing.Symbol$Root.flattenedSize(p6, 0) + 1)];
        com.flurry.org.apache.avro.io.parsing.Symbol$Root.flatten(p6, 0, v2, 1, new java.util.HashMap(), new java.util.HashMap());
        return v2;
    }
}
