package com.flurry.org.apache.avro.io.parsing;
public class SkipParser extends com.flurry.org.apache.avro.io.parsing.Parser {
    static final synthetic boolean $assertionsDisabled;
    private final com.flurry.org.apache.avro.io.parsing.SkipParser$SkipHandler skipHandler;

    static SkipParser()
    {
        int v0_2;
        if (com.flurry.org.apache.avro.io.parsing.SkipParser.desiredAssertionStatus()) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        com.flurry.org.apache.avro.io.parsing.SkipParser.$assertionsDisabled = v0_2;
        return;
    }

    public SkipParser(com.flurry.org.apache.avro.io.parsing.Symbol p1, com.flurry.org.apache.avro.io.parsing.Parser$ActionHandler p2, com.flurry.org.apache.avro.io.parsing.SkipParser$SkipHandler p3)
    {
        super(p1, p2);
        super.skipHandler = p3;
        return;
    }

    public final void skipRepeater()
    {
        int v1 = this.pos;
        AssertionError v2_0 = this.stack;
        com.flurry.org.apache.avro.io.parsing.Symbol$Kind v3_1 = (this.pos - 1);
        this.pos = v3_1;
        com.flurry.org.apache.avro.io.parsing.Symbol v0 = v2_0[v3_1];
        if ((com.flurry.org.apache.avro.io.parsing.SkipParser.$assertionsDisabled) || (v0.kind == com.flurry.org.apache.avro.io.parsing.Symbol$Kind.REPEATER)) {
            this.pushProduction(v0);
            this.skipTo(v1);
            return;
        } else {
            throw new AssertionError();
        }
    }

    public final void skipSymbol(com.flurry.org.apache.avro.io.parsing.Symbol p2)
    {
        int v0 = this.pos;
        this.pushSymbol(p2);
        this.skipTo(v0);
        return;
    }

    public final void skipTo(int p4)
    {
        while (p4 < this.pos) {
            com.flurry.org.apache.avro.io.parsing.Symbol v0 = this.stack[(this.pos - 1)];
            if (v0.kind == com.flurry.org.apache.avro.io.parsing.Symbol$Kind.TERMINAL) {
                this.skipHandler.skipTopSymbol();
            } else {
                if ((v0.kind != com.flurry.org.apache.avro.io.parsing.Symbol$Kind.IMPLICIT_ACTION) && (v0.kind != com.flurry.org.apache.avro.io.parsing.Symbol$Kind.EXPLICIT_ACTION)) {
                    this.pos = (this.pos - 1);
                    this.pushProduction(v0);
                } else {
                    this.skipHandler.skipAction();
                }
            }
        }
        return;
    }
}
