package com.flurry.org.codehaus.jackson.node;
public final class NodeCursor$Object extends com.flurry.org.codehaus.jackson.node.NodeCursor {
    java.util.Iterator _contents;
    java.util.Map$Entry _current;
    boolean _needEntry;

    public NodeCursor$Object(com.flurry.org.codehaus.jackson.JsonNode p2, com.flurry.org.codehaus.jackson.node.NodeCursor p3)
    {
        super(2, p3);
        super._contents = ((com.flurry.org.codehaus.jackson.node.ObjectNode) p2).getFields();
        super._needEntry = 1;
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
        com.flurry.org.codehaus.jackson.JsonNode v0_3;
        if (this._current != null) {
            v0_3 = ((com.flurry.org.codehaus.jackson.JsonNode) this._current.getValue());
        } else {
            v0_3 = 0;
        }
        return v0_3;
    }

    public com.flurry.org.codehaus.jackson.JsonToken endToken()
    {
        return com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT;
    }

    public String getCurrentName()
    {
        String v0_3;
        if (this._current != null) {
            v0_3 = ((String) this._current.getKey());
        } else {
            v0_3 = 0;
        }
        return v0_3;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.JsonStreamContext getParent()
    {
        return super.getParent();
    }

    public com.flurry.org.codehaus.jackson.JsonToken nextToken()
    {
        com.flurry.org.codehaus.jackson.JsonToken v0_0 = 0;
        if (!this._needEntry) {
            this._needEntry = 1;
            v0_0 = ((com.flurry.org.codehaus.jackson.JsonNode) this._current.getValue()).asToken();
        } else {
            if (this._contents.hasNext()) {
                this._needEntry = 0;
                this._current = ((java.util.Map$Entry) this._contents.next());
                v0_0 = com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME;
            } else {
                this._current = 0;
            }
        }
        return v0_0;
    }

    public com.flurry.org.codehaus.jackson.JsonToken nextValue()
    {
        com.flurry.org.codehaus.jackson.JsonToken v0 = this.nextToken();
        if (v0 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
            v0 = this.nextToken();
        }
        return v0;
    }
}
