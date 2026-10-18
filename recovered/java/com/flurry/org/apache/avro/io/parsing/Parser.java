package com.flurry.org.apache.avro.io.parsing;
public class Parser {
    protected int pos;
    protected com.flurry.org.apache.avro.io.parsing.Symbol[] stack;
    protected final com.flurry.org.apache.avro.io.parsing.Parser$ActionHandler symbolHandler;

    public Parser(com.flurry.org.apache.avro.io.parsing.Symbol p3, com.flurry.org.apache.avro.io.parsing.Parser$ActionHandler p4)
    {
        this.symbolHandler = p4;
        int v0_1 = new com.flurry.org.apache.avro.io.parsing.Symbol[5];
        this.stack = v0_1;
        this.stack[0] = p3;
        this.pos = 1;
        return;
    }

    private void expandStack()
    {
        com.flurry.org.apache.avro.io.parsing.Symbol[] v0 = new com.flurry.org.apache.avro.io.parsing.Symbol[(this.stack.length + Math.max(this.stack.length, 1024))];
        System.arraycopy(this.stack, 0, v0, 0, this.stack.length);
        this.stack = v0;
        return;
    }

    public final com.flurry.org.apache.avro.io.parsing.Symbol advance(com.flurry.org.apache.avro.io.parsing.Symbol p7)
    {
        do {
            com.flurry.org.apache.avro.io.parsing.Symbol v3_0 = this.stack;
            String v4_1 = (this.pos - 1);
            this.pos = v4_1;
            com.flurry.org.apache.avro.io.parsing.Symbol v2 = v3_0[v4_1];
            if (v2 != p7) {
                com.flurry.org.apache.avro.io.parsing.Symbol$Kind v0 = v2.kind;
                if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol$Kind.IMPLICIT_ACTION) {
                    if (v0 != com.flurry.org.apache.avro.io.parsing.Symbol$Kind.TERMINAL) {
                        if ((v0 != com.flurry.org.apache.avro.io.parsing.Symbol$Kind.REPEATER) || (p7 != ((com.flurry.org.apache.avro.io.parsing.Symbol$Repeater) v2).end)) {
                            this.pushProduction(v2);
                        } else {
                            v2 = p7;
                        }
                    } else {
                        throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder("Attempt to process a ").append(p7).append(" when a ").append(v2).append(" was expected.").toString());
                    }
                } else {
                    com.flurry.org.apache.avro.io.parsing.Symbol v1 = this.symbolHandler.doAction(p7, v2);
                }
            }
            return v2;
        } while(v1 == null);
        v2 = v1;
        return v2;
    }

    public int depth()
    {
        return this.pos;
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol popSymbol()
    {
        com.flurry.org.apache.avro.io.parsing.Symbol v0_0 = this.stack;
        int v1_1 = (this.pos - 1);
        this.pos = v1_1;
        return v0_0[v1_1];
    }

    public final void processImplicitActions()
    {
        while (this.pos > 1) {
            com.flurry.org.apache.avro.io.parsing.Symbol v0 = this.stack[(this.pos - 1)];
            if (v0.kind != com.flurry.org.apache.avro.io.parsing.Symbol$Kind.IMPLICIT_ACTION) {
                if (v0.kind == com.flurry.org.apache.avro.io.parsing.Symbol$Kind.TERMINAL) {
                    break;
                }
                this.pos = (this.pos - 1);
                this.pushProduction(v0);
            } else {
                this.pos = (this.pos - 1);
                this.symbolHandler.doAction(0, v0);
            }
        }
        return;
    }

    public final void processTrailingImplicitActions()
    {
        while (this.pos >= 1) {
            com.flurry.org.apache.avro.io.parsing.Symbol v0 = this.stack[(this.pos - 1)];
            if ((v0.kind != com.flurry.org.apache.avro.io.parsing.Symbol$Kind.IMPLICIT_ACTION) || (!((com.flurry.org.apache.avro.io.parsing.Symbol$ImplicitAction) v0).isTrailing)) {
                break;
            }
            this.pos = (this.pos - 1);
            this.symbolHandler.doAction(0, v0);
        }
        return;
    }

    public final void pushProduction(com.flurry.org.apache.avro.io.parsing.Symbol p6)
    {
        com.flurry.org.apache.avro.io.parsing.Symbol[] v0 = p6.production;
        while ((this.pos + v0.length) > this.stack.length) {
            this.expandStack();
        }
        System.arraycopy(v0, 0, this.stack, this.pos, v0.length);
        this.pos = (this.pos + v0.length);
        return;
    }

    public void pushSymbol(com.flurry.org.apache.avro.io.parsing.Symbol p4)
    {
        if (this.pos == this.stack.length) {
            this.expandStack();
        }
        com.flurry.org.apache.avro.io.parsing.Symbol[] v0_1 = this.stack;
        int v1_2 = this.pos;
        this.pos = (v1_2 + 1);
        v0_1[v1_2] = p4;
        return;
    }

    public void reset()
    {
        this.pos = 1;
        return;
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol topSymbol()
    {
        return this.stack[(this.pos - 1)];
    }
}
