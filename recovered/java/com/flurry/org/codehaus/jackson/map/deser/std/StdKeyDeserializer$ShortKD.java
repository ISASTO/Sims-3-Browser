package com.flurry.org.codehaus.jackson.map.deser.std;
final class StdKeyDeserializer$ShortKD extends com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer {

    StdKeyDeserializer$ShortKD()
    {
        super(Integer);
        return;
    }

    public bridge synthetic Object _parse(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._parse(p2, p3);
    }

    public Short _parse(String p4, com.flurry.org.codehaus.jackson.map.DeserializationContext p5)
    {
        int v0 = this._parseInt(p4);
        if ((v0 >= -32768) && (v0 <= 32767)) {
            return Short.valueOf(((short) v0));
        } else {
            throw p5.weirdKeyException(this._keyClass, p4, "overflow, value can not be represented as 16-bit value");
        }
    }
}
