package com.flurry.org.codehaus.jackson.node;
public final class DoubleNode extends com.flurry.org.codehaus.jackson.node.NumericNode {
    protected final double _value;

    public DoubleNode(double p1)
    {
        this._value = p1;
        return;
    }

    public static com.flurry.org.codehaus.jackson.node.DoubleNode valueOf(double p1)
    {
        return new com.flurry.org.codehaus.jackson.node.DoubleNode(p1);
    }

    public String asText()
    {
        return com.flurry.org.codehaus.jackson.io.NumberOutput.toString(this._value);
    }

    public com.flurry.org.codehaus.jackson.JsonToken asToken()
    {
        return com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT;
    }

    public boolean equals(Object p7)
    {
        int v0 = 1;
        if (p7 != this) {
            if (p7 != null) {
                if (p7.getClass() == this.getClass()) {
                    if (((com.flurry.org.codehaus.jackson.node.DoubleNode) p7)._value != this._value) {
                        v0 = 0;
                    }
                } else {
                    v0 = 0;
                }
            } else {
                v0 = 0;
            }
        }
        return v0;
    }

    public java.math.BigInteger getBigIntegerValue()
    {
        return this.getDecimalValue().toBigInteger();
    }

    public java.math.BigDecimal getDecimalValue()
    {
        return java.math.BigDecimal.valueOf(this._value);
    }

    public double getDoubleValue()
    {
        return this._value;
    }

    public int getIntValue()
    {
        return ((int) this._value);
    }

    public long getLongValue()
    {
        return ((long) this._value);
    }

    public com.flurry.org.codehaus.jackson.JsonParser$NumberType getNumberType()
    {
        return com.flurry.org.codehaus.jackson.JsonParser$NumberType.DOUBLE;
    }

    public Number getNumberValue()
    {
        return Double.valueOf(this._value);
    }

    public int hashCode()
    {
        long v0 = Double.doubleToLongBits(this._value);
        return (((int) v0) ^ ((int) (v0 >> 32)));
    }

    public boolean isDouble()
    {
        return 1;
    }

    public boolean isFloatingPointNumber()
    {
        return 1;
    }

    public final void serialize(com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        p3.writeNumber(this._value);
        return;
    }
}
