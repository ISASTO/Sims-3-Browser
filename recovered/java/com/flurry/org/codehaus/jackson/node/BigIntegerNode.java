package com.flurry.org.codehaus.jackson.node;
public final class BigIntegerNode extends com.flurry.org.codehaus.jackson.node.NumericNode {
    protected final java.math.BigInteger _value;

    public BigIntegerNode(java.math.BigInteger p1)
    {
        this._value = p1;
        return;
    }

    public static com.flurry.org.codehaus.jackson.node.BigIntegerNode valueOf(java.math.BigInteger p1)
    {
        return new com.flurry.org.codehaus.jackson.node.BigIntegerNode(p1);
    }

    public boolean asBoolean(boolean p3)
    {
        int v0_2;
        if (java.math.BigInteger.ZERO.equals(this._value)) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public String asText()
    {
        return this._value.toString();
    }

    public com.flurry.org.codehaus.jackson.JsonToken asToken()
    {
        return com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT;
    }

    public boolean equals(Object p5)
    {
        int v0 = 1;
        if (p5 != this) {
            if (p5 != null) {
                if (p5.getClass() == this.getClass()) {
                    if (((com.flurry.org.codehaus.jackson.node.BigIntegerNode) p5)._value != this._value) {
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
        return this._value;
    }

    public java.math.BigDecimal getDecimalValue()
    {
        return new java.math.BigDecimal(this._value);
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
        return com.flurry.org.codehaus.jackson.JsonParser$NumberType.BIG_INTEGER;
    }

    public Number getNumberValue()
    {
        return this._value;
    }

    public int hashCode()
    {
        return this._value.hashCode();
    }

    public boolean isBigInteger()
    {
        return 1;
    }

    public boolean isIntegralNumber()
    {
        return 1;
    }

    public final void serialize(com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        p2.writeNumber(this._value);
        return;
    }
}
