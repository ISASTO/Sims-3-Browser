package com.flurry.org.codehaus.jackson.map.deser.std;
final class StdKeyDeserializer$ByteKD extends com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer {

    StdKeyDeserializer$ByteKD()
    {
        super(Byte);
        return;
    }

    public Byte _parse(String p4, com.flurry.org.codehaus.jackson.map.DeserializationContext p5)
    {
        int v0 = this._parseInt(p4);
        if ((v0 >= -128) && (v0 <= 127)) {
            return Byte.valueOf(((byte) v0));
        } else {
            throw p5.weirdKeyException(this._keyClass, p4, "overflow, value can not be represented as 8-bit value");
        }
    }

    public bridge synthetic Object _parse(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._parse(p2, p3);
    }
}
