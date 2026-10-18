package com.flurry.org.codehaus.jackson.map.deser.std;
public class FromStringDeserializer$TimeZoneDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer {

    public FromStringDeserializer$TimeZoneDeserializer()
    {
        super(java.util.TimeZone);
        return;
    }

    protected bridge synthetic Object _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._deserialize(p2, p3);
    }

    protected java.util.TimeZone _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return java.util.TimeZone.getTimeZone(p2);
    }
}
