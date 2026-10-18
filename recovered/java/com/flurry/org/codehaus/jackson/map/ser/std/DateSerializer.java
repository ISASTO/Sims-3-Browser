package com.flurry.org.codehaus.jackson.map.ser.std;
public class DateSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.ScalarSerializerBase {
    public static com.flurry.org.codehaus.jackson.map.ser.std.DateSerializer instance;

    static DateSerializer()
    {
        com.flurry.org.codehaus.jackson.map.ser.std.DateSerializer.instance = new com.flurry.org.codehaus.jackson.map.ser.std.DateSerializer();
        return;
    }

    public DateSerializer()
    {
        super(java.util.Date);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v0_2;
        if (!p3.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_DATES_AS_TIMESTAMPS)) {
            v0_2 = "string";
        } else {
            v0_2 = "number";
        }
        return this.createSchemaNode(v0_2, 1);
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((java.util.Date) p1), p2, p3);
        return;
    }

    public void serialize(java.util.Date p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        p3.defaultSerializeDateValue(p1, p2);
        return;
    }
}
