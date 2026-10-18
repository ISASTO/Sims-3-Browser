package com.flurry.org.codehaus.jackson.map.deser.std;
public class FromStringDeserializer$InetAddressDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer {

    public FromStringDeserializer$InetAddressDeserializer()
    {
        super(java.net.InetAddress);
        return;
    }

    protected bridge synthetic Object _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._deserialize(p2, p3);
    }

    protected java.net.InetAddress _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return java.net.InetAddress.getByName(p2);
    }
}
