package com.flurry.org.codehaus.jackson.map.deser.std;
final class StdKeyDeserializer$DateKD extends com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer {

    protected StdKeyDeserializer$DateKD()
    {
        super(java.util.Date);
        return;
    }

    public bridge synthetic Object _parse(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._parse(p2, p3);
    }

    public java.util.Date _parse(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return p3.parseDate(p2);
    }
}
