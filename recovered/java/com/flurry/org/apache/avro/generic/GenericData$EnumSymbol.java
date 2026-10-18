package com.flurry.org.apache.avro.generic;
public class GenericData$EnumSymbol implements com.flurry.org.apache.avro.generic.GenericEnumSymbol {
    private com.flurry.org.apache.avro.Schema schema;
    private String symbol;

    public GenericData$EnumSymbol(com.flurry.org.apache.avro.Schema p1, String p2)
    {
        this.schema = p1;
        this.symbol = p2;
        return;
    }

    public boolean equals(Object p4)
    {
        int v0 = 1;
        if ((p4 != this) && ((!(p4 instanceof com.flurry.org.apache.avro.generic.GenericEnumSymbol)) || (!this.symbol.equals(p4.toString())))) {
            v0 = 0;
        }
        return v0;
    }

    public com.flurry.org.apache.avro.Schema getSchema()
    {
        return this.schema;
    }

    public int hashCode()
    {
        return this.symbol.hashCode();
    }

    public String toString()
    {
        return this.symbol;
    }
}
