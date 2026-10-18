package com.flurry.org.codehaus.jackson.node;
public final class IntNode extends com.flurry.org.codehaus.jackson.node.NumericNode {
    private static final com.flurry.org.codehaus.jackson.node.IntNode[] CANONICALS = None;
    static final int MAX_CANONICAL = 10;
    static final int MIN_CANONICAL = 255;
    final int _value;

    static IntNode()
    {
        com.flurry.org.codehaus.jackson.node.IntNode[] v2_0 = new com.flurry.org.codehaus.jackson.node.IntNode[12];
        com.flurry.org.codehaus.jackson.node.IntNode.CANONICALS = v2_0;
        int v1 = 0;
        while (v1 < 12) {
            com.flurry.org.codehaus.jackson.node.IntNode.CANONICALS[v1] = new com.flurry.org.codehaus.jackson.node.IntNode((v1 - 1));
            v1++;
        }
        return;
    }

    public IntNode(int p1)
    {
        this._value = p1;
        return;
    }

    public static com.flurry.org.codehaus.jackson.node.IntNode valueOf(int p2)
    {
        if ((p2 <= 10) && (p2 >= -1)) {
            com.flurry.org.codehaus.jackson.node.IntNode v0_3 = com.flurry.org.codehaus.jackson.node.IntNode.CANONICALS[(p2 + 1)];
        } else {
            v0_3 = new com.flurry.org.codehaus.jackson.node.IntNode(p2);
        }
        return v0_3;
    }

    public boolean asBoolean(boolean p2)
    {
        int v0_1;
        if (this._value == 0) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public String asText()
    {
        return com.flurry.org.codehaus.jackson.io.NumberOutput.toString(this._value);
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
                    if (((com.flurry.org.codehaus.jackson.node.IntNode) p5)._value != this._value) {
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
        return java.math.BigInteger.valueOf(((long) this._value));
    }

    public java.math.BigDecimal getDecimalValue()
    {
        return java.math.BigDecimal.valueOf(((long) this._value));
    }

    public double getDoubleValue()
    {
        return ((double) this._value);
    }

    public int getIntValue()
    {
        return this._value;
    }

    public long getLongValue()
    {
        return ((long) this._value);
    }

    public com.flurry.org.codehaus.jackson.JsonParser$NumberType getNumberType()
    {
        return com.flurry.org.codehaus.jackson.JsonParser$NumberType.INT;
    }

    public Number getNumberValue()
    {
        return Integer.valueOf(this._value);
    }

    public int hashCode()
    {
        return this._value;
    }

    public boolean isInt()
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
