package com.flurry.org.codehaus.jackson.map.deser.std;
final class StdKeyDeserializer$StringKD extends com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer {
    private static final com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$StringKD sObject;
    private static final com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$StringKD sString;

    static StdKeyDeserializer$StringKD()
    {
        com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$StringKD.sString = new com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$StringKD(String);
        com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$StringKD.sObject = new com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$StringKD(Object);
        return;
    }

    private StdKeyDeserializer$StringKD(Class p1)
    {
        super(p1);
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$StringKD forType(Class p1)
    {
        com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$StringKD v0_3;
        if (p1 != String) {
            if (p1 != Object) {
                v0_3 = new com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$StringKD(p1);
            } else {
                v0_3 = com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$StringKD.sObject;
            }
        } else {
            v0_3 = com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$StringKD.sString;
        }
        return v0_3;
    }

    public bridge synthetic Object _parse(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._parse(p2, p3);
    }

    public String _parse(String p1, com.flurry.org.codehaus.jackson.map.DeserializationContext p2)
    {
        return p1;
    }
}
