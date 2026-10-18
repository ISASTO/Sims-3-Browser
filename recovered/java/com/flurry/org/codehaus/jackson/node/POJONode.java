package com.flurry.org.codehaus.jackson.node;
public final class POJONode extends com.flurry.org.codehaus.jackson.node.ValueNode {
    protected final Object _value;

    public POJONode(Object p1)
    {
        this._value = p1;
        return;
    }

    public boolean asBoolean(boolean p2)
    {
        if ((this._value != null) && ((this._value instanceof Boolean))) {
            p2 = ((Boolean) this._value).booleanValue();
        }
        return p2;
    }

    public double asDouble(double p2)
    {
        if ((this._value instanceof Number)) {
            p2 = ((Number) this._value).doubleValue();
        }
        return p2;
    }

    public int asInt(int p2)
    {
        if ((this._value instanceof Number)) {
            p2 = ((Number) this._value).intValue();
        }
        return p2;
    }

    public long asLong(long p2)
    {
        if ((this._value instanceof Number)) {
            p2 = ((Number) this._value).longValue();
        }
        return p2;
    }

    public String asText()
    {
        String v0_2;
        if (this._value != null) {
            v0_2 = this._value.toString();
        } else {
            v0_2 = "null";
        }
        return v0_2;
    }

    public com.flurry.org.codehaus.jackson.JsonToken asToken()
    {
        return com.flurry.org.codehaus.jackson.JsonToken.VALUE_EMBEDDED_OBJECT;
    }

    public boolean equals(Object p6)
    {
        Object v1_0 = 1;
        if (p6 != this) {
            if (p6 != null) {
                if (p6.getClass() == this.getClass()) {
                    if (this._value != null) {
                        v1_0 = this._value.equals(((com.flurry.org.codehaus.jackson.node.POJONode) p6)._value);
                    } else {
                        if (((com.flurry.org.codehaus.jackson.node.POJONode) p6)._value != null) {
                            v1_0 = 0;
                        }
                    }
                } else {
                    v1_0 = 0;
                }
            } else {
                v1_0 = 0;
            }
        }
        return v1_0;
    }

    public byte[] getBinaryValue()
    {
        byte[] v0_2;
        if (!(this._value instanceof byte[])) {
            v0_2 = super.getBinaryValue();
        } else {
            v0_2 = ((byte[]) ((byte[]) this._value));
        }
        return v0_2;
    }

    public Object getPojo()
    {
        return this._value;
    }

    public int hashCode()
    {
        return this._value.hashCode();
    }

    public boolean isPojo()
    {
        return 1;
    }

    public final void serialize(com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        if (this._value != null) {
            p2.writeObject(this._value);
        } else {
            p2.writeNull();
        }
        return;
    }

    public String toString()
    {
        return String.valueOf(this._value);
    }
}
