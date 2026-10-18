package com.flurry.org.codehaus.jackson.node;
public class JsonNodeFactory {
    public static final com.flurry.org.codehaus.jackson.node.JsonNodeFactory instance;

    static JsonNodeFactory()
    {
        com.flurry.org.codehaus.jackson.node.JsonNodeFactory.instance = new com.flurry.org.codehaus.jackson.node.JsonNodeFactory();
        return;
    }

    protected JsonNodeFactory()
    {
        return;
    }

    public com.flurry.org.codehaus.jackson.node.POJONode POJONode(Object p2)
    {
        return new com.flurry.org.codehaus.jackson.node.POJONode(p2);
    }

    public com.flurry.org.codehaus.jackson.node.ArrayNode arrayNode()
    {
        return new com.flurry.org.codehaus.jackson.node.ArrayNode(this);
    }

    public com.flurry.org.codehaus.jackson.node.BinaryNode binaryNode(byte[] p2)
    {
        return com.flurry.org.codehaus.jackson.node.BinaryNode.valueOf(p2);
    }

    public com.flurry.org.codehaus.jackson.node.BinaryNode binaryNode(byte[] p2, int p3, int p4)
    {
        return com.flurry.org.codehaus.jackson.node.BinaryNode.valueOf(p2, p3, p4);
    }

    public com.flurry.org.codehaus.jackson.node.BooleanNode booleanNode(boolean p2)
    {
        com.flurry.org.codehaus.jackson.node.BooleanNode v0;
        if (!p2) {
            v0 = com.flurry.org.codehaus.jackson.node.BooleanNode.getFalse();
        } else {
            v0 = com.flurry.org.codehaus.jackson.node.BooleanNode.getTrue();
        }
        return v0;
    }

    public com.flurry.org.codehaus.jackson.node.NullNode nullNode()
    {
        return com.flurry.org.codehaus.jackson.node.NullNode.getInstance();
    }

    public com.flurry.org.codehaus.jackson.node.NumericNode numberNode(byte p2)
    {
        return com.flurry.org.codehaus.jackson.node.IntNode.valueOf(p2);
    }

    public com.flurry.org.codehaus.jackson.node.NumericNode numberNode(double p2)
    {
        return com.flurry.org.codehaus.jackson.node.DoubleNode.valueOf(p2);
    }

    public com.flurry.org.codehaus.jackson.node.NumericNode numberNode(float p3)
    {
        return com.flurry.org.codehaus.jackson.node.DoubleNode.valueOf(((double) p3));
    }

    public com.flurry.org.codehaus.jackson.node.NumericNode numberNode(int p2)
    {
        return com.flurry.org.codehaus.jackson.node.IntNode.valueOf(p2);
    }

    public com.flurry.org.codehaus.jackson.node.NumericNode numberNode(long p2)
    {
        return com.flurry.org.codehaus.jackson.node.LongNode.valueOf(p2);
    }

    public com.flurry.org.codehaus.jackson.node.NumericNode numberNode(java.math.BigDecimal p2)
    {
        return com.flurry.org.codehaus.jackson.node.DecimalNode.valueOf(p2);
    }

    public com.flurry.org.codehaus.jackson.node.NumericNode numberNode(java.math.BigInteger p2)
    {
        return com.flurry.org.codehaus.jackson.node.BigIntegerNode.valueOf(p2);
    }

    public com.flurry.org.codehaus.jackson.node.NumericNode numberNode(short p2)
    {
        return com.flurry.org.codehaus.jackson.node.IntNode.valueOf(p2);
    }

    public com.flurry.org.codehaus.jackson.node.ValueNode numberNode(Byte p2)
    {
        com.flurry.org.codehaus.jackson.node.IntNode v0_1;
        if (p2 != null) {
            v0_1 = com.flurry.org.codehaus.jackson.node.IntNode.valueOf(p2.intValue());
        } else {
            v0_1 = this.nullNode();
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.node.ValueNode numberNode(Double p3)
    {
        com.flurry.org.codehaus.jackson.node.DoubleNode v0_1;
        if (p3 != null) {
            v0_1 = com.flurry.org.codehaus.jackson.node.DoubleNode.valueOf(p3.doubleValue());
        } else {
            v0_1 = this.nullNode();
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.node.ValueNode numberNode(Float p3)
    {
        com.flurry.org.codehaus.jackson.node.DoubleNode v0_1;
        if (p3 != null) {
            v0_1 = com.flurry.org.codehaus.jackson.node.DoubleNode.valueOf(p3.doubleValue());
        } else {
            v0_1 = this.nullNode();
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.node.ValueNode numberNode(Integer p2)
    {
        com.flurry.org.codehaus.jackson.node.IntNode v0_1;
        if (p2 != null) {
            v0_1 = com.flurry.org.codehaus.jackson.node.IntNode.valueOf(p2.intValue());
        } else {
            v0_1 = this.nullNode();
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.node.ValueNode numberNode(Long p3)
    {
        com.flurry.org.codehaus.jackson.node.LongNode v0_1;
        if (p3 != null) {
            v0_1 = com.flurry.org.codehaus.jackson.node.LongNode.valueOf(p3.longValue());
        } else {
            v0_1 = this.nullNode();
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.node.ValueNode numberNode(Short p2)
    {
        com.flurry.org.codehaus.jackson.node.IntNode v0_1;
        if (p2 != null) {
            v0_1 = com.flurry.org.codehaus.jackson.node.IntNode.valueOf(p2.shortValue());
        } else {
            v0_1 = this.nullNode();
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.node.ObjectNode objectNode()
    {
        return new com.flurry.org.codehaus.jackson.node.ObjectNode(this);
    }

    public com.flurry.org.codehaus.jackson.node.TextNode textNode(String p2)
    {
        return com.flurry.org.codehaus.jackson.node.TextNode.valueOf(p2);
    }
}
