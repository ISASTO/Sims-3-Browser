package com.flurry.org.apache.avro.io.parsing;
 class Symbol$Terminal extends com.flurry.org.apache.avro.io.parsing.Symbol {
    private final String printName;

    public Symbol$Terminal(String p2)
    {
        super(com.flurry.org.apache.avro.io.parsing.Symbol$Kind.TERMINAL);
        super.printName = p2;
        return;
    }

    public String toString()
    {
        return this.printName;
    }
}
