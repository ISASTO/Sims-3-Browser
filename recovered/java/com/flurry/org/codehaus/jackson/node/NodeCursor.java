package com.flurry.org.codehaus.jackson.node;
abstract class NodeCursor extends com.flurry.org.codehaus.jackson.JsonStreamContext {
    final com.flurry.org.codehaus.jackson.node.NodeCursor _parent;

    public NodeCursor(int p2, com.flurry.org.codehaus.jackson.node.NodeCursor p3)
    {
        this._type = p2;
        this._index = -1;
        this._parent = p3;
        return;
    }

    public abstract boolean currentHasChildren();

    public abstract com.flurry.org.codehaus.jackson.JsonNode currentNode();

    public abstract com.flurry.org.codehaus.jackson.JsonToken endToken();

    public abstract String getCurrentName();

    public bridge synthetic com.flurry.org.codehaus.jackson.JsonStreamContext getParent()
    {
        return this.getParent();
    }

    public final com.flurry.org.codehaus.jackson.node.NodeCursor getParent()
    {
        return this._parent;
    }

    public final com.flurry.org.codehaus.jackson.node.NodeCursor iterateChildren()
    {
        com.flurry.org.codehaus.jackson.JsonNode v0 = this.currentNode();
        if (v0 != null) {
            IllegalStateException v1_2;
            if (!v0.isArray()) {
                if (!v0.isObject()) {
                    throw new IllegalStateException(new StringBuilder().append("Current node of type ").append(v0.getClass().getName()).toString());
                } else {
                    v1_2 = new com.flurry.org.codehaus.jackson.node.NodeCursor$Object(v0, this);
                }
            } else {
                v1_2 = new com.flurry.org.codehaus.jackson.node.NodeCursor$Array(v0, this);
            }
            return v1_2;
        } else {
            throw new IllegalStateException("No current node");
        }
    }

    public abstract com.flurry.org.codehaus.jackson.JsonToken nextToken();

    public abstract com.flurry.org.codehaus.jackson.JsonToken nextValue();
}
