package com.flurry.org.codehaus.jackson.map.deser.std;
final class StdKeyDeserializer$LongKD extends com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer {

    StdKeyDeserializer$LongKD()
    {
        super(Long);
        return;
    }

    public Long _parse(String p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        return Long.valueOf(this._parseLong(p3));
    }

    public bridge synthetic Object _parse(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._parse(p2, p3);
    }
}
