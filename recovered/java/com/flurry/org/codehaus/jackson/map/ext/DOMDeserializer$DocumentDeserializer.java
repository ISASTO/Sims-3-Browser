package com.flurry.org.codehaus.jackson.map.ext;
public class DOMDeserializer$DocumentDeserializer extends com.flurry.org.codehaus.jackson.map.ext.DOMDeserializer {

    public DOMDeserializer$DocumentDeserializer()
    {
        super(org.w3c.dom.Document);
        return;
    }

    public bridge synthetic Object _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._deserialize(p2, p3);
    }

    public org.w3c.dom.Document _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.parse(p2);
    }
}
