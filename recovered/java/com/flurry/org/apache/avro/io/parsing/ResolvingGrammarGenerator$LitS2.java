package com.flurry.org.apache.avro.io.parsing;
 class ResolvingGrammarGenerator$LitS2 extends com.flurry.org.apache.avro.io.parsing.ValidatingGrammarGenerator$LitS {
    public com.flurry.org.apache.avro.Schema expected;

    public ResolvingGrammarGenerator$LitS2(com.flurry.org.apache.avro.Schema p1, com.flurry.org.apache.avro.Schema p2)
    {
        super(p1);
        super.expected = p2;
        return;
    }

    public boolean equals(Object p5)
    {
        int v1 = 0;
        if (((p5 instanceof com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator$LitS2)) && ((this.actual == ((com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator$LitS2) p5).actual) && (this.expected == ((com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator$LitS2) p5).expected))) {
            v1 = 1;
        }
        return v1;
    }

    public int hashCode()
    {
        return (super.hashCode() + this.expected.hashCode());
    }
}
