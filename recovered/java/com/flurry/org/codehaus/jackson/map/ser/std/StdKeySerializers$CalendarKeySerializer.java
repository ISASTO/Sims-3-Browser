package com.flurry.org.codehaus.jackson.map.ser.std;
public class StdKeySerializers$CalendarKeySerializer extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {
    protected static final com.flurry.org.codehaus.jackson.map.JsonSerializer instance;

    static StdKeySerializers$CalendarKeySerializer()
    {
        com.flurry.org.codehaus.jackson.map.ser.std.StdKeySerializers$CalendarKeySerializer.instance = new com.flurry.org.codehaus.jackson.map.ser.std.StdKeySerializers$CalendarKeySerializer();
        return;
    }

    public StdKeySerializers$CalendarKeySerializer()
    {
        super(java.util.Calendar);
        return;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((java.util.Calendar) p1), p2, p3);
        return;
    }

    public void serialize(java.util.Calendar p3, com.flurry.org.codehaus.jackson.JsonGenerator p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5)
    {
        p5.defaultSerializeDateKey(p3.getTimeInMillis(), p4);
        return;
    }
}
