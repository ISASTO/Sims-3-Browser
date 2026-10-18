package com.flurry.org.codehaus.jackson.map.ext;
public final class JodaSerializers$LocalDateTimeSerializer extends com.flurry.org.codehaus.jackson.map.ext.JodaSerializers$JodaSerializer {

    public JodaSerializers$LocalDateTimeSerializer()
    {
        super(org.joda.time.LocalDateTime);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v0_2;
        if (!p3.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_DATES_AS_TIMESTAMPS)) {
            v0_2 = "string";
        } else {
            v0_2 = "array";
        }
        return this.createSchemaNode(v0_2, 1);
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((org.joda.time.LocalDateTime) p1), p2, p3);
        return;
    }

    public void serialize(org.joda.time.LocalDateTime p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        if (!p4.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_DATES_AS_TIMESTAMPS)) {
            p3.writeString(this.printLocalDateTime(p2));
        } else {
            p3.writeStartArray();
            p3.writeNumber(p2.year().get());
            p3.writeNumber(p2.monthOfYear().get());
            p3.writeNumber(p2.dayOfMonth().get());
            p3.writeNumber(p2.hourOfDay().get());
            p3.writeNumber(p2.minuteOfHour().get());
            p3.writeNumber(p2.secondOfMinute().get());
            p3.writeNumber(p2.millisOfSecond().get());
            p3.writeEndArray();
        }
        return;
    }
}
