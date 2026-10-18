package com.flurry.org.codehaus.jackson.node;
public abstract class BaseJsonNode extends com.flurry.org.codehaus.jackson.JsonNode implements com.flurry.org.codehaus.jackson.map.JsonSerializableWithType {

    protected BaseJsonNode()
    {
        return;
    }

    public abstract com.flurry.org.codehaus.jackson.JsonToken asToken();

    public bridge synthetic com.flurry.org.codehaus.jackson.JsonNode findParent(String p2)
    {
        return this.findParent(p2);
    }

    public com.flurry.org.codehaus.jackson.node.ObjectNode findParent(String p2)
    {
        return 0;
    }

    public java.util.List findParents(String p1, java.util.List p2)
    {
        return p2;
    }

    public final com.flurry.org.codehaus.jackson.JsonNode findPath(String p2)
    {
        com.flurry.org.codehaus.jackson.node.MissingNode v0 = this.findValue(p2);
        if (v0 == null) {
            v0 = com.flurry.org.codehaus.jackson.node.MissingNode.getInstance();
        }
        return v0;
    }

    public com.flurry.org.codehaus.jackson.JsonNode findValue(String p2)
    {
        return 0;
    }

    public java.util.List findValues(String p1, java.util.List p2)
    {
        return p2;
    }

    public java.util.List findValuesAsText(String p1, java.util.List p2)
    {
        return p2;
    }

    public com.flurry.org.codehaus.jackson.JsonParser$NumberType getNumberType()
    {
        return 0;
    }

    public abstract void serialize(com.flurry.org.codehaus.jackson.JsonGenerator p0, com.flurry.org.codehaus.jackson.map.SerializerProvider p1);

    public abstract void serializeWithType(com.flurry.org.codehaus.jackson.JsonGenerator p0, com.flurry.org.codehaus.jackson.map.SerializerProvider p1, com.flurry.org.codehaus.jackson.map.TypeSerializer p2);

    public com.flurry.org.codehaus.jackson.JsonParser traverse()
    {
        return new com.flurry.org.codehaus.jackson.node.TreeTraversingParser(this);
    }
}
