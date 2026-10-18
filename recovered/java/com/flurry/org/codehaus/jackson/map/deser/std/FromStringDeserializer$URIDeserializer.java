package com.flurry.org.codehaus.jackson.map.deser.std;
public class FromStringDeserializer$URIDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer {

    public FromStringDeserializer$URIDeserializer()
    {
        super(java.net.URI);
        return;
    }

    protected bridge synthetic Object _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._deserialize(p2, p3);
    }

    protected java.net.URI _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return java.net.URI.create(p2);
    }
}
