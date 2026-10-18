package com.flurry.org.codehaus.jackson.map.deser.std;
final class StdKeyDeserializer$CharKD extends com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer {

    StdKeyDeserializer$CharKD()
    {
        super(Character);
        return;
    }

    public Character _parse(String p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        if (p3.length() != 1) {
            throw p4.weirdKeyException(this._keyClass, p3, "can only convert 1-character Strings");
        } else {
            return Character.valueOf(p3.charAt(0));
        }
    }

    public bridge synthetic Object _parse(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._parse(p2, p3);
    }
}
