package com.flurry.org.codehaus.jackson.node;
public final class BooleanNode extends com.flurry.org.codehaus.jackson.node.ValueNode {
    public static final com.flurry.org.codehaus.jackson.node.BooleanNode FALSE;
    public static final com.flurry.org.codehaus.jackson.node.BooleanNode TRUE;

    static BooleanNode()
    {
        com.flurry.org.codehaus.jackson.node.BooleanNode.TRUE = new com.flurry.org.codehaus.jackson.node.BooleanNode();
        com.flurry.org.codehaus.jackson.node.BooleanNode.FALSE = new com.flurry.org.codehaus.jackson.node.BooleanNode();
        return;
    }

    private BooleanNode()
    {
        return;
    }

    public static com.flurry.org.codehaus.jackson.node.BooleanNode getFalse()
    {
        return com.flurry.org.codehaus.jackson.node.BooleanNode.FALSE;
    }

    public static com.flurry.org.codehaus.jackson.node.BooleanNode getTrue()
    {
        return com.flurry.org.codehaus.jackson.node.BooleanNode.TRUE;
    }

    public static com.flurry.org.codehaus.jackson.node.BooleanNode valueOf(boolean p1)
    {
        com.flurry.org.codehaus.jackson.node.BooleanNode v0;
        if (!p1) {
            v0 = com.flurry.org.codehaus.jackson.node.BooleanNode.FALSE;
        } else {
            v0 = com.flurry.org.codehaus.jackson.node.BooleanNode.TRUE;
        }
        return v0;
    }

    public boolean asBoolean()
    {
        int v0_1;
        if (this != com.flurry.org.codehaus.jackson.node.BooleanNode.TRUE) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean asBoolean(boolean p2)
    {
        int v0_1;
        if (this != com.flurry.org.codehaus.jackson.node.BooleanNode.TRUE) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public double asDouble(double p3)
    {
        long v0_1;
        if (this != com.flurry.org.codehaus.jackson.node.BooleanNode.TRUE) {
            v0_1 = 0;
        } else {
            v0_1 = 4607182418800017408;
        }
        return v0_1;
    }

    public int asInt(int p2)
    {
        int v0_1;
        if (this != com.flurry.org.codehaus.jackson.node.BooleanNode.TRUE) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public long asLong(long p3)
    {
        long v0_1;
        if (this != com.flurry.org.codehaus.jackson.node.BooleanNode.TRUE) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public String asText()
    {
        String v0_1;
        if (this != com.flurry.org.codehaus.jackson.node.BooleanNode.TRUE) {
            v0_1 = "false";
        } else {
            v0_1 = "true";
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.JsonToken asToken()
    {
        com.flurry.org.codehaus.jackson.JsonToken v0_1;
        if (this != com.flurry.org.codehaus.jackson.node.BooleanNode.TRUE) {
            v0_1 = com.flurry.org.codehaus.jackson.JsonToken.VALUE_FALSE;
        } else {
            v0_1 = com.flurry.org.codehaus.jackson.JsonToken.VALUE_TRUE;
        }
        return v0_1;
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

    public boolean getBooleanValue()
    {
        int v0_1;
        if (this != com.flurry.org.codehaus.jackson.node.BooleanNode.TRUE) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean isBoolean()
    {
        return 1;
    }

    public final void serialize(com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        int v0_1;
        if (this != com.flurry.org.codehaus.jackson.node.BooleanNode.TRUE) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        p2.writeBoolean(v0_1);
        return;
    }
}
