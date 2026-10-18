package com.flurry.org.codehaus.jackson.node;
public final class LongNode extends com.flurry.org.codehaus.jackson.node.NumericNode {
    final long _value;

    public LongNode(long p1)
    {
        this._value = p1;
        return;
    }

    public static com.flurry.org.codehaus.jackson.node.LongNode valueOf(long p1)
    {
        return new com.flurry.org.codehaus.jackson.node.LongNode(p1);
    }

    public boolean asBoolean(boolean p5)
    {
        int v0_2;
        if (this._value == 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public String asText()
    {
        return com.flurry.org.codehaus.jackson.io.NumberOutput.toString(this._value);
    }

    public com.flurry.org.codehaus.jackson.JsonToken asToken()
    {
        return com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT;
    }

    public boolean equals(Object p7)
    {
        int v0 = 1;
        if (p7 != this) {
            if (p7 != null) {
                if (p7.getClass() == this.getClass()) {
                    if (((com.flurry.org.codehaus.jackson.node.LongNode) p7)._value != this._value) {
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
        return java.math.BigInteger.valueOf(this._value);
    }

    public java.math.BigDecimal getDecimalValue()
    {
        return java.math.BigDecimal.valueOf(this._value);
    }

    public double getDoubleValue()
    {
        return ((double) this._value);
    }

    public int getIntValue()
    {
        return ((int) this._value);
    }

    public long getLongValue()
    {
        return this._value;
    }

    public com.flurry.org.codehaus.jackson.JsonParser$NumberType getNumberType()
    {
        return com.flurry.org.codehaus.jackson.JsonParser$NumberType.LONG;
    }

    public Number getNumberValue()
    {
        return Long.valueOf(this._value);
    }

    public int hashCode()
    {
        return (((int) this._value) ^ ((int) (this._value >> 32)));
    }

    public boolean isIntegralNumber()
    {
        return 1;
    }

    public boolean isLong()
    {
        return 1;
    }

    public final void serialize(com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        p3.writeNumber(this._value);
        return;
    }
}
