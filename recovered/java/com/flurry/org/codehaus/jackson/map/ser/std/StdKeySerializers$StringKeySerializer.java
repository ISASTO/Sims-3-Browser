package com.flurry.org.codehaus.jackson.map.ser.std;
public class StdKeySerializers$StringKeySerializer extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {

    public StdKeySerializers$StringKeySerializer()
    {
        super(String);
        return;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((String) p1), p2, p3);
        return;
    }

    public void serialize(String p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        p2.writeFieldName(p1);
        return;
    }
}
