package com.flurry.org.codehaus.jackson.map.deser.std;
public final class StdDeserializer$BooleanDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$PrimitiveOrWrapperDeserializer {

    public StdDeserializer$BooleanDeserializer(Class p1, Boolean p2)
    {
        super(p1, p2);
        return;
    }

    public Boolean deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._parseBoolean(p2, p3);
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public Boolean deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4)
    {
        return this._parseBoolean(p2, p3);
    }

    public bridge synthetic Object deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4)
    {
        return this.deserializeWithType(p2, p3, p4);
    }
}
