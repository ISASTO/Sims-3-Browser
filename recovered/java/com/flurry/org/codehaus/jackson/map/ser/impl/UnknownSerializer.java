package com.flurry.org.codehaus.jackson.map.ser.impl;
public class UnknownSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {

    public UnknownSerializer()
    {
        super(Object);
        return;
    }

    protected void failForEmpty(Object p4)
    {
        throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("No serializer found for class ").append(p4.getClass().getName()).append(" and no properties discovered to create BeanSerializer (to avoid exception, disable SerializationConfig.Feature.FAIL_ON_EMPTY_BEANS) )").toString());
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p2, reflect.Type p3)
    {
        return 0;
    }

    public void serialize(Object p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        if (p4.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.FAIL_ON_EMPTY_BEANS)) {
            this.failForEmpty(p2);
        }
        p3.writeStartObject();
        p3.writeEndObject();
        return;
    }

    public final void serializeWithType(Object p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4, com.flurry.org.codehaus.jackson.map.TypeSerializer p5)
    {
        if (p4.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.FAIL_ON_EMPTY_BEANS)) {
            this.failForEmpty(p2);
        }
        p5.writeTypePrefixForObject(p2, p3);
        p5.writeTypeSuffixForObject(p2, p3);
        return;
    }
}
