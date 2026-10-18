package com.flurry.org.codehaus.jackson.node;
public final class NodeCursor$RootValue extends com.flurry.org.codehaus.jackson.node.NodeCursor {
    protected boolean _done;
    com.flurry.org.codehaus.jackson.JsonNode _node;

    public NodeCursor$RootValue(com.flurry.org.codehaus.jackson.JsonNode p2, com.flurry.org.codehaus.jackson.node.NodeCursor p3)
    {
        super(0, p3);
        super._done = 0;
        super._node = p2;
        return;
    }

    public boolean currentHasChildren()
    {
        return 0;
    }

    public com.flurry.org.codehaus.jackson.JsonNode currentNode()
    {
        return this._node;
    }

    public com.flurry.org.codehaus.jackson.JsonToken endToken()
    {
        return 0;
    }

    public String getCurrentName()
    {
        return 0;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.JsonStreamContext getParent()
    {
        return super.getParent();
    }

    public com.flurry.org.codehaus.jackson.JsonToken nextToken()
    {
        com.flurry.org.codehaus.jackson.JsonToken v0_0 = 0;
        if (this._done) {
            this._node = 0;
        } else {
            this._done = 1;
            v0_0 = this._node.asToken();
        }
        return v0_0;
    }

    public com.flurry.org.codehaus.jackson.JsonToken nextValue()
    {
        return this.nextToken();
    }
}
