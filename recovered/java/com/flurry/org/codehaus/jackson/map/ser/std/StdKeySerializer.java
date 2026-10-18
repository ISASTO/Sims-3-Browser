package com.flurry.org.codehaus.jackson.map.ser.std;
public class StdKeySerializer extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {
    static final com.flurry.org.codehaus.jackson.map.ser.std.StdKeySerializer instace;

    static StdKeySerializer()
    {
        com.flurry.org.codehaus.jackson.map.ser.std.StdKeySerializer.instace = new com.flurry.org.codehaus.jackson.map.ser.std.StdKeySerializer();
        return;
    }

    public StdKeySerializer()
    {
        super(Object);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p2, reflect.Type p3)
    {
        return this.createSchemaNode("string");
    }

    public void serialize(Object p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        if (!(p2 instanceof java.util.Date)) {
            p3.writeFieldName(p2.toString());
        } else {
            p4.defaultSerializeDateKey(((java.util.Date) p2), p3);
        }
        return;
    }
}
