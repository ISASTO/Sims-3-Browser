package com.flurry.org.codehaus.jackson.map.ser.std;
public class StdKeySerializers$DateKeySerializer extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {
    protected static final com.flurry.org.codehaus.jackson.map.JsonSerializer instance;

    static StdKeySerializers$DateKeySerializer()
    {
        com.flurry.org.codehaus.jackson.map.ser.std.StdKeySerializers$DateKeySerializer.instance = new com.flurry.org.codehaus.jackson.map.ser.std.StdKeySerializers$DateKeySerializer();
        return;
    }

    public StdKeySerializers$DateKeySerializer()
    {
        super(java.util.Date);
        return;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((java.util.Date) p1), p2, p3);
        return;
    }

    public void serialize(java.util.Date p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        p3.defaultSerializeDateKey(p1, p2);
        return;
    }
}
