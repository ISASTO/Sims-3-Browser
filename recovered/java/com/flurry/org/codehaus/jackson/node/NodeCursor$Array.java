package com.flurry.org.codehaus.jackson.node;
public final class NodeCursor$Array extends com.flurry.org.codehaus.jackson.node.NodeCursor {
    java.util.Iterator _contents;
    com.flurry.org.codehaus.jackson.JsonNode _currentNode;

    public NodeCursor$Array(com.flurry.org.codehaus.jackson.JsonNode p2, com.flurry.org.codehaus.jackson.node.NodeCursor p3)
    {
        super(1, p3);
        super._contents = p2.getElements();
        return;
    }

    public boolean currentHasChildren()
    {
        int v0_3;
        if (((com.flurry.org.codehaus.jackson.node.ContainerNode) this.currentNode()).size() <= 0) {
            v0_3 = 0;
        } else {
            v0_3 = 1;
        }
        return v0_3;
    }

    public com.flurry.org.codehaus.jackson.JsonNode currentNode()
    {
        return this._currentNode;
    }

    public com.flurry.org.codehaus.jackson.JsonToken endToken()
    {
        return com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY;
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
        if (this._contents.hasNext()) {
            this._currentNode = ((com.flurry.org.codehaus.jackson.JsonNode) this._contents.next());
            v0_0 = this._currentNode.asToken();
        } else {
            this._currentNode = 0;
        }
        return v0_0;
    }

    public com.flurry.org.codehaus.jackson.JsonToken nextValue()
    {
        return this.nextToken();
    }
}
