package com.flurry.org.codehaus.jackson.map.deser.std;
final class StdKeyDeserializer$BoolKD extends com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer {

    StdKeyDeserializer$BoolKD()
    {
        super(Boolean);
        return;
    }

    public Boolean _parse(String p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        com.flurry.org.codehaus.jackson.map.JsonMappingException v0_2;
        if (!"true".equals(p3)) {
            if (!"false".equals(p3)) {
                throw p4.weirdKeyException(this._keyClass, p3, "value not \'true\' or \'false\'");
            } else {
                v0_2 = Boolean.FALSE;
            }
        } else {
            v0_2 = Boolean.TRUE;
        }
        return v0_2;
    }

    public bridge synthetic Object _parse(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._parse(p2, p3);
    }
}
