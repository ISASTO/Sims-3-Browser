package com.flurry.org.codehaus.jackson.map.deser.std;
public class FromStringDeserializer$CharsetDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer {

    public FromStringDeserializer$CharsetDeserializer()
    {
        super(java.nio.charset.Charset);
        return;
    }

    protected bridge synthetic Object _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._deserialize(p2, p3);
    }

    protected java.nio.charset.Charset _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return java.nio.charset.Charset.forName(p2);
    }
}
