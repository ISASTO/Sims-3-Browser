package com.flurry.org.codehaus.jackson.map.deser;
public final class StdDeserializerProvider$WrappedDeserializer extends com.flurry.org.codehaus.jackson.map.JsonDeserializer {
    final com.flurry.org.codehaus.jackson.map.JsonDeserializer _deserializer;
    final com.flurry.org.codehaus.jackson.map.TypeDeserializer _typeDeserializer;

    public StdDeserializerProvider$WrappedDeserializer(com.flurry.org.codehaus.jackson.map.TypeDeserializer p1, com.flurry.org.codehaus.jackson.map.JsonDeserializer p2)
    {
        this._typeDeserializer = p1;
        this._deserializer = p2;
        return;
    }

    public Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        return this._deserializer.deserializeWithType(p3, p4, this._typeDeserializer);
    }

    public Object deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4, com.flurry.org.codehaus.jackson.map.TypeDeserializer p5)
    {
        throw new IllegalStateException("Type-wrapped deserializer\'s deserializeWithType should never get called");
    }
}
