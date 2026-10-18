package com.flurry.org.codehaus.jackson.map.ser.impl;
public final class FailingSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {
    final String _msg;

    public FailingSerializer(String p2)
    {
        super(Object);
        super._msg = p2;
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p2, reflect.Type p3)
    {
        return 0;
    }

    public void serialize(Object p3, com.flurry.org.codehaus.jackson.JsonGenerator p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5)
    {
        throw new com.flurry.org.codehaus.jackson.JsonGenerationException(this._msg);
    }
}
