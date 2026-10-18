package com.flurry.org.codehaus.jackson.map.ext;
public final class JodaSerializers$DateTimeSerializer extends com.flurry.org.codehaus.jackson.map.ext.JodaSerializers$JodaSerializer {

    public JodaSerializers$DateTimeSerializer()
    {
        super(org.joda.time.DateTime);
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
        this.serialize(((org.joda.time.DateTime) p1), p2, p3);
        return;
    }

    public void serialize(org.joda.time.DateTime p3, com.flurry.org.codehaus.jackson.JsonGenerator p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5)
    {
        if (!p5.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_DATES_AS_TIMESTAMPS)) {
            p4.writeString(p3.toString());
        } else {
            p4.writeNumber(p3.getMillis());
        }
        return;
    }
}
