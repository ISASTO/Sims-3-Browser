package com.flurry.org.codehaus.jackson.map.ser.std;
public class InetAddressSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.ScalarSerializerBase {
    public static final com.flurry.org.codehaus.jackson.map.ser.std.InetAddressSerializer instance;

    static InetAddressSerializer()
    {
        com.flurry.org.codehaus.jackson.map.ser.std.InetAddressSerializer.instance = new com.flurry.org.codehaus.jackson.map.ser.std.InetAddressSerializer();
        return;
    }

    public InetAddressSerializer()
    {
        super(java.net.InetAddress);
        return;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((java.net.InetAddress) p1), p2, p3);
        return;
    }

    public void serialize(java.net.InetAddress p4, com.flurry.org.codehaus.jackson.JsonGenerator p5, com.flurry.org.codehaus.jackson.map.SerializerProvider p6)
    {
        String v1 = p4.toString().trim();
        int v0 = v1.indexOf(47);
        if (v0 >= 0) {
            if (v0 != 0) {
                v1 = v1.substring(0, v0);
            } else {
                v1 = v1.substring(1);
            }
        }
        p5.writeString(v1);
        return;
    }

    public bridge synthetic void serializeWithType(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4)
    {
        this.serializeWithType(((java.net.InetAddress) p1), p2, p3, p4);
        return;
    }

    public void serializeWithType(java.net.InetAddress p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4, com.flurry.org.codehaus.jackson.map.TypeSerializer p5)
    {
        p5.writeTypePrefixForScalar(p2, p3, java.net.InetAddress);
        this.serialize(p2, p3, p4);
        p5.writeTypeSuffixForScalar(p2, p3);
        return;
    }
}
