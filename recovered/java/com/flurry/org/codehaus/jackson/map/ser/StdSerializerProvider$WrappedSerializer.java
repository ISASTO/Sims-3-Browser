package com.flurry.org.codehaus.jackson.map.ser;
final class StdSerializerProvider$WrappedSerializer extends com.flurry.org.codehaus.jackson.map.JsonSerializer {
    protected final com.flurry.org.codehaus.jackson.map.JsonSerializer _serializer;
    protected final com.flurry.org.codehaus.jackson.map.TypeSerializer _typeSerializer;

    public StdSerializerProvider$WrappedSerializer(com.flurry.org.codehaus.jackson.map.TypeSerializer p1, com.flurry.org.codehaus.jackson.map.JsonSerializer p2)
    {
        this._typeSerializer = p1;
        this._serializer = p2;
        return;
    }

    public Class handledType()
    {
        return Object;
    }

    public void serialize(Object p3, com.flurry.org.codehaus.jackson.JsonGenerator p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5)
    {
        this._serializer.serializeWithType(p3, p4, p5, this._typeSerializer);
        return;
    }

    public void serializeWithType(Object p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4, com.flurry.org.codehaus.jackson.map.TypeSerializer p5)
    {
        this._serializer.serializeWithType(p2, p3, p4, p5);
        return;
    }
}
