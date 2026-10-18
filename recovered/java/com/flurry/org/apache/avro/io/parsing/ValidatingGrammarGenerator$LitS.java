package com.flurry.org.apache.avro.io.parsing;
 class ValidatingGrammarGenerator$LitS {
    public final com.flurry.org.apache.avro.Schema actual;

    public ValidatingGrammarGenerator$LitS(com.flurry.org.apache.avro.Schema p1)
    {
        this.actual = p1;
        return;
    }

    public boolean equals(Object p4)
    {
        int v0 = 0;
        if (((p4 instanceof com.flurry.org.apache.avro.io.parsing.ValidatingGrammarGenerator$LitS)) && (this.actual == ((com.flurry.org.apache.avro.io.parsing.ValidatingGrammarGenerator$LitS) p4).actual)) {
            v0 = 1;
        }
        return v0;
    }

    public int hashCode()
    {
        return this.actual.hashCode();
    }
}
