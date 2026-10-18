package com.flurry.org.apache.avro.io.parsing;
public class Symbol$ResolvingAction extends com.flurry.org.apache.avro.io.parsing.Symbol$ImplicitAction {
    public final com.flurry.org.apache.avro.io.parsing.Symbol reader;
    public final com.flurry.org.apache.avro.io.parsing.Symbol writer;

    private Symbol$ResolvingAction(com.flurry.org.apache.avro.io.parsing.Symbol p2, com.flurry.org.apache.avro.io.parsing.Symbol p3)
    {
        super(0);
        super.writer = p2;
        super.reader = p3;
        return;
    }

    synthetic Symbol$ResolvingAction(com.flurry.org.apache.avro.io.parsing.Symbol p1, com.flurry.org.apache.avro.io.parsing.Symbol p2, com.flurry.org.apache.avro.io.parsing.Symbol$1 p3)
    {
        this(p1, p2);
        return;
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol$ResolvingAction flatten(java.util.Map p4, java.util.Map p5)
    {
        return new com.flurry.org.apache.avro.io.parsing.Symbol$ResolvingAction(this.writer.flatten(p4, p5), this.reader.flatten(p4, p5));
    }

    public bridge synthetic com.flurry.org.apache.avro.io.parsing.Symbol flatten(java.util.Map p2, java.util.Map p3)
    {
        return this.flatten(p2, p3);
    }
}
