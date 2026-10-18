package com.flurry.org.codehaus.jackson;
public abstract class JsonNode implements java.lang.Iterable {
    protected static final java.util.List NO_NODES;
    protected static final java.util.List NO_STRINGS;

    static JsonNode()
    {
        com.flurry.org.codehaus.jackson.JsonNode.NO_NODES = java.util.Collections.emptyList();
        com.flurry.org.codehaus.jackson.JsonNode.NO_STRINGS = java.util.Collections.emptyList();
        return;
    }

    protected JsonNode()
    {
        return;
    }

    public boolean asBoolean()
    {
        return this.asBoolean(0);
    }

    public boolean asBoolean(boolean p1)
    {
        return p1;
    }

    public double asDouble()
    {
        return this.asDouble(0);
    }

    public double asDouble(double p1)
    {
        return p1;
    }

    public int asInt()
    {
        return this.asInt(0);
    }

    public int asInt(int p1)
    {
        return p1;
    }

    public long asLong()
    {
        return this.asLong(0);
    }

    public long asLong(long p1)
    {
        return p1;
    }

    public abstract String asText();

    public abstract com.flurry.org.codehaus.jackson.JsonToken asToken();

    public abstract boolean equals(Object p0);

    public abstract com.flurry.org.codehaus.jackson.JsonNode findParent(String p0);

    public final java.util.List findParents(String p3)
    {
        java.util.List v0 = this.findParents(p3, 0);
        if (v0 == null) {
            v0 = java.util.Collections.emptyList();
        }
        return v0;
    }

    public abstract java.util.List findParents(String p0, java.util.List p1);

    public abstract com.flurry.org.codehaus.jackson.JsonNode findPath(String p0);

    public abstract com.flurry.org.codehaus.jackson.JsonNode findValue(String p0);

    public final java.util.List findValues(String p3)
    {
        java.util.List v0 = this.findValues(p3, 0);
        if (v0 == null) {
            v0 = java.util.Collections.emptyList();
        }
        return v0;
    }

    public abstract java.util.List findValues(String p0, java.util.List p1);

    public final java.util.List findValuesAsText(String p3)
    {
        java.util.List v0 = this.findValuesAsText(p3, 0);
        if (v0 == null) {
            v0 = java.util.Collections.emptyList();
        }
        return v0;
    }

    public abstract java.util.List findValuesAsText(String p0, java.util.List p1);

    public com.flurry.org.codehaus.jackson.JsonNode get(int p2)
    {
        return 0;
    }

    public com.flurry.org.codehaus.jackson.JsonNode get(String p2)
    {
        return 0;
    }

    public java.math.BigInteger getBigIntegerValue()
    {
        return java.math.BigInteger.ZERO;
    }

    public byte[] getBinaryValue()
    {
        return 0;
    }

    public boolean getBooleanValue()
    {
        return 0;
    }

    public java.math.BigDecimal getDecimalValue()
    {
        return java.math.BigDecimal.ZERO;
    }

    public double getDoubleValue()
    {
        return 0;
    }

    public java.util.Iterator getElements()
    {
        return com.flurry.org.codehaus.jackson.JsonNode.NO_NODES.iterator();
    }

    public java.util.Iterator getFieldNames()
    {
        return com.flurry.org.codehaus.jackson.JsonNode.NO_STRINGS.iterator();
    }

    public java.util.Iterator getFields()
    {
        return java.util.Collections.emptyList().iterator();
    }

    public int getIntValue()
    {
        return 0;
    }

    public long getLongValue()
    {
        return 0;
    }

    public abstract com.flurry.org.codehaus.jackson.JsonParser$NumberType getNumberType();

    public Number getNumberValue()
    {
        return 0;
    }

    public final com.flurry.org.codehaus.jackson.JsonNode getPath(int p2)
    {
        return this.path(p2);
    }

    public final com.flurry.org.codehaus.jackson.JsonNode getPath(String p2)
    {
        return this.path(p2);
    }

    public String getTextValue()
    {
        return 0;
    }

    public boolean getValueAsBoolean()
    {
        return this.asBoolean(0);
    }

    public boolean getValueAsBoolean(boolean p2)
    {
        return this.asBoolean(p2);
    }

    public double getValueAsDouble()
    {
        return this.asDouble(0);
    }

    public double getValueAsDouble(double p3)
    {
        return this.asDouble(p3);
    }

    public int getValueAsInt()
    {
        return this.asInt(0);
    }

    public int getValueAsInt(int p2)
    {
        return this.asInt(p2);
    }

    public long getValueAsLong()
    {
        return this.asLong(0);
    }

    public long getValueAsLong(long p3)
    {
        return this.asLong(p3);
    }

    public String getValueAsText()
    {
        return this.asText();
    }

    public boolean has(int p2)
    {
        int v0_1;
        if (this.get(p2) == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean has(String p2)
    {
        int v0_1;
        if (this.get(p2) == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean isArray()
    {
        return 0;
    }

    public boolean isBigDecimal()
    {
        return 0;
    }

    public boolean isBigInteger()
    {
        return 0;
    }

    public boolean isBinary()
    {
        return 0;
    }

    public boolean isBoolean()
    {
        return 0;
    }

    public boolean isContainerNode()
    {
        return 0;
    }

    public boolean isDouble()
    {
        return 0;
    }

    public boolean isFloatingPointNumber()
    {
        return 0;
    }

    public boolean isInt()
    {
        return 0;
    }

    public boolean isIntegralNumber()
    {
        return 0;
    }

    public boolean isLong()
    {
        return 0;
    }

    public boolean isMissingNode()
    {
        return 0;
    }

    public boolean isNull()
    {
        return 0;
    }

    public boolean isNumber()
    {
        return 0;
    }

    public boolean isObject()
    {
        return 0;
    }

    public boolean isPojo()
    {
        return 0;
    }

    public boolean isTextual()
    {
        return 0;
    }

    public boolean isValueNode()
    {
        return 0;
    }

    public final java.util.Iterator iterator()
    {
        return this.getElements();
    }

    public abstract com.flurry.org.codehaus.jackson.JsonNode path(int p0);

    public abstract com.flurry.org.codehaus.jackson.JsonNode path(String p0);

    public int size()
    {
        return 0;
    }

    public abstract String toString();

    public abstract com.flurry.org.codehaus.jackson.JsonParser traverse();

    public com.flurry.org.codehaus.jackson.JsonNode with(String p4)
    {
        throw new UnsupportedOperationException(new StringBuilder().append("JsonNode not of type ObjectNode (but ").append(this.getClass().getName()).append("), can not call with() on it").toString());
    }
}
