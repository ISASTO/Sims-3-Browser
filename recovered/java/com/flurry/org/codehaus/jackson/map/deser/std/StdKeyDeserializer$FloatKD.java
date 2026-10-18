package com.flurry.org.codehaus.jackson.map.deser.std;
final class StdKeyDeserializer$FloatKD extends com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer {

    StdKeyDeserializer$FloatKD()
    {
        super(Float);
        return;
    }

    public Float _parse(String p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        return Float.valueOf(((float) this._parseDouble(p3)));
    }

    public bridge synthetic Object _parse(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._parse(p2, p3);
    }
}
