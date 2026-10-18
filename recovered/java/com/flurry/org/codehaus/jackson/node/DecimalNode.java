package com.flurry.org.codehaus.jackson.node;
public final class DecimalNode extends com.flurry.org.codehaus.jackson.node.NumericNode {
    protected final java.math.BigDecimal _value;

    public DecimalNode(java.math.BigDecimal p1)
    {
        this._value = p1;
        return;
    }

    public static com.flurry.org.codehaus.jackson.node.DecimalNode valueOf(java.math.BigDecimal p1)
    {
        return new com.flurry.org.codehaus.jackson.node.DecimalNode(p1);
    }

    public String asText()
    {
        return this._value.toString();
    }

    public com.flurry.org.codehaus.jackson.JsonToken asToken()
    {
        return com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT;
    }

    public boolean equals(Object p4)
    {
        boolean v0_0 = 0;
        if (p4 != this) {
            if ((p4 != null) && (p4.getClass() == this.getClass())) {
                v0_0 = ((com.flurry.org.codehaus.jackson.node.DecimalNode) p4)._value.equals(this._value);
            }
        } else {
            v0_0 = 1;
        }
        return v0_0;
    }

    public java.math.BigInteger getBigIntegerValue()
    {
        return this._value.toBigInteger();
    }

    public java.math.BigDecimal getDecimalValue()
    {
        return this._value;
    }

    public double getDoubleValue()
    {
        return this._value.doubleValue();
    }

    public int getIntValue()
    {
        return this._value.intValue();
    }

    public long getLongValue()
    {
        return this._value.longValue();
    }

    public com.flurry.org.codehaus.jackson.JsonParser$NumberType getNumberType()
    {
        return com.flurry.org.codehaus.jackson.JsonParser$NumberType.BIG_DECIMAL;
    }

    public Number getNumberValue()
    {
        return this._value;
    }

    public int hashCode()
    {
        return this._value.hashCode();
    }

    public boolean isBigDecimal()
    {
        return 1;
    }

    public boolean isFloatingPointNumber()
    {
        return 1;
    }

    public final void serialize(com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        p2.writeNumber(this._value);
        return;
    }
}
