package com.flurry.org.codehaus.jackson.map.ext;
public class DOMDeserializer$NodeDeserializer extends com.flurry.org.codehaus.jackson.map.ext.DOMDeserializer {

    public DOMDeserializer$NodeDeserializer()
    {
        super(org.w3c.dom.Node);
        return;
    }

    public bridge synthetic Object _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._deserialize(p2, p3);
    }

    public org.w3c.dom.Node _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.parse(p2);
    }
}
