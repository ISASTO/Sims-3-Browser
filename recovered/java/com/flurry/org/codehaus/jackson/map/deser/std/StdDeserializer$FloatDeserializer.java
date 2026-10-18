package com.flurry.org.codehaus.jackson.map.deser.std;
public final class StdDeserializer$FloatDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$PrimitiveOrWrapperDeserializer {

    public StdDeserializer$FloatDeserializer(Class p1, Float p2)
    {
        super(p1, p2);
        return;
    }

    public Float deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._parseFloat(p2, p3);
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }
}
