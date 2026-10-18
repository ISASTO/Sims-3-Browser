package com.flurry.org.codehaus.jackson.node;
public abstract class NumericNode extends com.flurry.org.codehaus.jackson.node.ValueNode {

    protected NumericNode()
    {
        return;
    }

    public double asDouble()
    {
        return this.getDoubleValue();
    }

    public double asDouble(double p3)
    {
        return this.getDoubleValue();
    }

    public int asInt()
    {
        return this.getIntValue();
    }

    public int asInt(int p2)
    {
        return this.getIntValue();
    }

    public long asLong()
    {
        return this.getLongValue();
    }

    public long asLong(long p3)
    {
        return this.getLongValue();
    }

    public abstract String asText();

    public abstract java.math.BigInteger getBigIntegerValue();

    public abstract java.math.BigDecimal getDecimalValue();

    public abstract double getDoubleValue();

    public abstract int getIntValue();

    public abstract long getLongValue();

    public abstract com.flurry.org.codehaus.jackson.JsonParser$NumberType getNumberType();

    public abstract Number getNumberValue();

    public final boolean isNumber()
    {
        return 1;
    }
}
