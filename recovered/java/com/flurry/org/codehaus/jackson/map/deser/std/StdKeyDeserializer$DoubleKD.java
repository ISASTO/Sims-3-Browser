package com.flurry.org.codehaus.jackson.map.deser.std;
final class StdKeyDeserializer$DoubleKD extends com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer {

    StdKeyDeserializer$DoubleKD()
    {
        super(Double);
        return;
    }

    public Double _parse(String p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        return Double.valueOf(this._parseDouble(p3));
    }

    public bridge synthetic Object _parse(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._parse(p2, p3);
    }
}
