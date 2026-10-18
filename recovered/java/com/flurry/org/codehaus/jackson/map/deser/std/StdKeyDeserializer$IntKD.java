package com.flurry.org.codehaus.jackson.map.deser.std;
final class StdKeyDeserializer$IntKD extends com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer {

    StdKeyDeserializer$IntKD()
    {
        super(Integer);
        return;
    }

    public Integer _parse(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return Integer.valueOf(this._parseInt(p2));
    }

    public bridge synthetic Object _parse(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._parse(p2, p3);
    }
}
