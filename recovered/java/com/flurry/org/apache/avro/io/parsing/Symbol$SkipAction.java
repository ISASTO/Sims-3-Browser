package com.flurry.org.apache.avro.io.parsing;
public class Symbol$SkipAction extends com.flurry.org.apache.avro.io.parsing.Symbol$ImplicitAction {
    public final com.flurry.org.apache.avro.io.parsing.Symbol symToSkip;

    public Symbol$SkipAction(com.flurry.org.apache.avro.io.parsing.Symbol p3)
    {
        super(1, 0);
        super.symToSkip = p3;
        return;
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol$SkipAction flatten(java.util.Map p3, java.util.Map p4)
    {
        return new com.flurry.org.apache.avro.io.parsing.Symbol$SkipAction(this.symToSkip.flatten(p3, p4));
    }

    public bridge synthetic com.flurry.org.apache.avro.io.parsing.Symbol flatten(java.util.Map p2, java.util.Map p3)
    {
        return this.flatten(p2, p3);
    }
}
