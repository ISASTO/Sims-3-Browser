package com.flurry.org.codehaus.jackson.node;
public abstract class ContainerNode extends com.flurry.org.codehaus.jackson.node.BaseJsonNode {
    com.flurry.org.codehaus.jackson.node.JsonNodeFactory _nodeFactory;

    protected ContainerNode(com.flurry.org.codehaus.jackson.node.JsonNodeFactory p1)
    {
        this._nodeFactory = p1;
        return;
    }

    public final com.flurry.org.codehaus.jackson.node.POJONode POJONode(Object p2)
    {
        return this._nodeFactory.POJONode(p2);
    }

    public final com.flurry.org.codehaus.jackson.node.ArrayNode arrayNode()
    {
        return this._nodeFactory.arrayNode();
    }

    public String asText()
    {
        return "";
    }

    public abstract com.flurry.org.codehaus.jackson.JsonToken asToken();

    public final com.flurry.org.codehaus.jackson.node.BinaryNode binaryNode(byte[] p2)
    {
        return this._nodeFactory.binaryNode(p2);
    }

    public final com.flurry.org.codehaus.jackson.node.BinaryNode binaryNode(byte[] p2, int p3, int p4)
    {
        return this._nodeFactory.binaryNode(p2, p3, p4);
    }

    public final com.flurry.org.codehaus.jackson.node.BooleanNode booleanNode(boolean p2)
    {
        return this._nodeFactory.booleanNode(p2);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.JsonNode findParent(String p2)
    {
        return this.findParent(p2);
    }

    public abstract com.flurry.org.codehaus.jackson.node.ObjectNode findParent(String p0);

    public abstract java.util.List findParents(String p0, java.util.List p1);

    public abstract com.flurry.org.codehaus.jackson.JsonNode findValue(String p0);

    public abstract java.util.List findValues(String p0, java.util.List p1);

    public abstract java.util.List findValuesAsText(String p0, java.util.List p1);

    public abstract com.flurry.org.codehaus.jackson.JsonNode get(int p0);

    public abstract com.flurry.org.codehaus.jackson.JsonNode get(String p0);

    public String getValueAsText()
    {
        return 0;
    }

    public boolean isContainerNode()
    {
        return 1;
    }

    public final com.flurry.org.codehaus.jackson.node.NullNode nullNode()
    {
        return this._nodeFactory.nullNode();
    }

    public final com.flurry.org.codehaus.jackson.node.NumericNode numberNode(byte p2)
    {
        return this._nodeFactory.numberNode(p2);
    }

    public final com.flurry.org.codehaus.jackson.node.NumericNode numberNode(double p2)
    {
        return this._nodeFactory.numberNode(p2);
    }

    public final com.flurry.org.codehaus.jackson.node.NumericNode numberNode(float p2)
    {
        return this._nodeFactory.numberNode(p2);
    }

    public final com.flurry.org.codehaus.jackson.node.NumericNode numberNode(int p2)
    {
        return this._nodeFactory.numberNode(p2);
    }

    public final com.flurry.org.codehaus.jackson.node.NumericNode numberNode(long p2)
    {
        return this._nodeFactory.numberNode(p2);
    }

    public final com.flurry.org.codehaus.jackson.node.NumericNode numberNode(java.math.BigDecimal p2)
    {
        return this._nodeFactory.numberNode(p2);
    }

    public final com.flurry.org.codehaus.jackson.node.NumericNode numberNode(short p2)
    {
        return this._nodeFactory.numberNode(p2);
    }

    public final com.flurry.org.codehaus.jackson.node.ObjectNode objectNode()
    {
        return this._nodeFactory.objectNode();
    }

    public abstract com.flurry.org.codehaus.jackson.node.ContainerNode removeAll();

    public abstract int size();

    public final com.flurry.org.codehaus.jackson.node.TextNode textNode(String p2)
    {
        return this._nodeFactory.textNode(p2);
    }
}
