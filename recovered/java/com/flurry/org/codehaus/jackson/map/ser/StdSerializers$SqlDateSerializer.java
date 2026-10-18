package com.flurry.org.codehaus.jackson.map.ser;
public final class StdSerializers$SqlDateSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.ScalarSerializerBase {

    public StdSerializers$SqlDateSerializer()
    {
        super(java.sql.Date);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        return this.createSchemaNode("string", 1);
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((java.sql.Date) p1), p2, p3);
        return;
    }

    public void serialize(java.sql.Date p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        p3.writeString(p2.toString());
        return;
    }
}
