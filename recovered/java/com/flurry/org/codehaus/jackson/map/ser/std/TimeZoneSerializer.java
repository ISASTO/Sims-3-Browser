package com.flurry.org.codehaus.jackson.map.ser.std;
public class TimeZoneSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.ScalarSerializerBase {
    public static final com.flurry.org.codehaus.jackson.map.ser.std.TimeZoneSerializer instance;

    static TimeZoneSerializer()
    {
        com.flurry.org.codehaus.jackson.map.ser.std.TimeZoneSerializer.instance = new com.flurry.org.codehaus.jackson.map.ser.std.TimeZoneSerializer();
        return;
    }

    public TimeZoneSerializer()
    {
        super(java.util.TimeZone);
        return;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((java.util.TimeZone) p1), p2, p3);
        return;
    }

    public void serialize(java.util.TimeZone p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        p3.writeString(p2.getID());
        return;
    }

    public bridge synthetic void serializeWithType(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4)
    {
        this.serializeWithType(((java.util.TimeZone) p1), p2, p3, p4);
        return;
    }

    public void serializeWithType(java.util.TimeZone p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4, com.flurry.org.codehaus.jackson.map.TypeSerializer p5)
    {
        p5.writeTypePrefixForScalar(p2, p3, java.util.TimeZone);
        this.serialize(p2, p3, p4);
        p5.writeTypeSuffixForScalar(p2, p3);
        return;
    }
}
