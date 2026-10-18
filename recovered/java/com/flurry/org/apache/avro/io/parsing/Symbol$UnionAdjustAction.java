package com.flurry.org.apache.avro.io.parsing;
public class Symbol$UnionAdjustAction extends com.flurry.org.apache.avro.io.parsing.Symbol$ImplicitAction {
    public final int rindex;
    public final com.flurry.org.apache.avro.io.parsing.Symbol symToParse;

    public Symbol$UnionAdjustAction(int p2, com.flurry.org.apache.avro.io.parsing.Symbol p3)
    {
        super(0);
        super.rindex = p2;
        super.symToParse = p3;
        return;
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol$UnionAdjustAction flatten(java.util.Map p4, java.util.Map p5)
    {
        return new com.flurry.org.apache.avro.io.parsing.Symbol$UnionAdjustAction(this.rindex, this.symToParse.flatten(p4, p5));
    }

    public bridge synthetic com.flurry.org.apache.avro.io.parsing.Symbol flatten(java.util.Map p2, java.util.Map p3)
    {
        return this.flatten(p2, p3);
    }
}
