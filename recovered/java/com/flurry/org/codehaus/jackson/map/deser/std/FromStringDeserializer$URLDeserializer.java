package com.flurry.org.codehaus.jackson.map.deser.std;
public class FromStringDeserializer$URLDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer {

    public FromStringDeserializer$URLDeserializer()
    {
        super(java.net.URL);
        return;
    }

    protected bridge synthetic Object _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._deserialize(p2, p3);
    }

    protected java.net.URL _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return new java.net.URL(p2);
    }
}
