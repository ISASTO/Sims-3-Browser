package com.flurry.org.codehaus.jackson.node;
public final class NullNode extends com.flurry.org.codehaus.jackson.node.ValueNode {
    public static final com.flurry.org.codehaus.jackson.node.NullNode instance;

    static NullNode()
    {
        com.flurry.org.codehaus.jackson.node.NullNode.instance = new com.flurry.org.codehaus.jackson.node.NullNode();
        return;
    }

    private NullNode()
    {
        return;
    }

    public static com.flurry.org.codehaus.jackson.node.NullNode getInstance()
    {
        return com.flurry.org.codehaus.jackson.node.NullNode.instance;
    }

    public double asDouble(double p3)
    {
        return 0;
    }

    public int asInt(int p2)
    {
        return 0;
    }

    public long asLong(long p3)
    {
        return 0;
    }

    public String asText()
    {
        return "null";
    }

    public com.flurry.org.codehaus.jackson.JsonToken asToken()
    {
        return com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL;
    }

    public boolean equals(Object p2)
    {
        int v0;
        if (p2 != this) {
            v0 = 0;
        } else {
            v0 = 1;
        }
        return v0;
    }

    public boolean isNull()
    {
        return 1;
    }

    public final void serialize(com.flurry.org.codehaus.jackson.JsonGenerator p1, com.flurry.org.codehaus.jackson.map.SerializerProvider p2)
    {
        p1.writeNull();
        return;
    }
}
