package com.flurry.org.codehaus.jackson.map.deser.std;
public class FromStringDeserializer$PatternDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer {

    public FromStringDeserializer$PatternDeserializer()
    {
        super(java.util.regex.Pattern);
        return;
    }

    protected bridge synthetic Object _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._deserialize(p2, p3);
    }

    protected java.util.regex.Pattern _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return java.util.regex.Pattern.compile(p2);
    }
}
