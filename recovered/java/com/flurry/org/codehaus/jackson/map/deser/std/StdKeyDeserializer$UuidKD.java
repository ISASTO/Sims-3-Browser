package com.flurry.org.codehaus.jackson.map.deser.std;
final class StdKeyDeserializer$UuidKD extends com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer {

    protected StdKeyDeserializer$UuidKD()
    {
        super(java.util.UUID);
        return;
    }

    public bridge synthetic Object _parse(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._parse(p2, p3);
    }

    public java.util.UUID _parse(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return java.util.UUID.fromString(p2);
    }
}
