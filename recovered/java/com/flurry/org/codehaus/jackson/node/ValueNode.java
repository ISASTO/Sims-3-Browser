package com.flurry.org.codehaus.jackson.node;
public abstract class ValueNode extends com.flurry.org.codehaus.jackson.node.BaseJsonNode {

    protected ValueNode()
    {
        return;
    }

    public abstract com.flurry.org.codehaus.jackson.JsonToken asToken();

    public boolean isValueNode()
    {
        return 1;
    }

    public com.flurry.org.codehaus.jackson.JsonNode path(int p2)
    {
        return com.flurry.org.codehaus.jackson.node.MissingNode.getInstance();
    }

    public com.flurry.org.codehaus.jackson.JsonNode path(String p2)
    {
        return com.flurry.org.codehaus.jackson.node.MissingNode.getInstance();
    }

    public void serializeWithType(com.flurry.org.codehaus.jackson.JsonGenerator p1, com.flurry.org.codehaus.jackson.map.SerializerProvider p2, com.flurry.org.codehaus.jackson.map.TypeSerializer p3)
    {
        p3.writeTypePrefixForScalar(this, p1);
        this.serialize(p1, p2);
        p3.writeTypeSuffixForScalar(this, p1);
        return;
    }

    public String toString()
    {
        return this.asText();
    }
}
