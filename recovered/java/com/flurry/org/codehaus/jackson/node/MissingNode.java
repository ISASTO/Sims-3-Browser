package com.flurry.org.codehaus.jackson.node;
public final class MissingNode extends com.flurry.org.codehaus.jackson.node.BaseJsonNode {
    private static final com.flurry.org.codehaus.jackson.node.MissingNode instance;

    static MissingNode()
    {
        com.flurry.org.codehaus.jackson.node.MissingNode.instance = new com.flurry.org.codehaus.jackson.node.MissingNode();
        return;
    }

    private MissingNode()
    {
        return;
    }

    public static com.flurry.org.codehaus.jackson.node.MissingNode getInstance()
    {
        return com.flurry.org.codehaus.jackson.node.MissingNode.instance;
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
        return "";
    }

    public com.flurry.org.codehaus.jackson.JsonToken asToken()
    {
        return com.flurry.org.codehaus.jackson.JsonToken.NOT_AVAILABLE;
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

    public boolean isMissingNode()
    {
        return 1;
    }

    public com.flurry.org.codehaus.jackson.JsonNode path(int p1)
    {
        return this;
    }

    public com.flurry.org.codehaus.jackson.JsonNode path(String p1)
    {
        return this;
    }

    public final void serialize(com.flurry.org.codehaus.jackson.JsonGenerator p1, com.flurry.org.codehaus.jackson.map.SerializerProvider p2)
    {
        p1.writeNull();
        return;
    }

    public void serializeWithType(com.flurry.org.codehaus.jackson.JsonGenerator p1, com.flurry.org.codehaus.jackson.map.SerializerProvider p2, com.flurry.org.codehaus.jackson.map.TypeSerializer p3)
    {
        p1.writeNull();
        return;
    }

    public String toString()
    {
        return "";
    }
}
