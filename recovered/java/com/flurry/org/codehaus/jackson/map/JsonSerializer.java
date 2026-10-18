package com.flurry.org.codehaus.jackson.map;
public abstract class JsonSerializer {

    public JsonSerializer()
    {
        return;
    }

    public Class handledType()
    {
        return 0;
    }

    public boolean isUnwrappingSerializer()
    {
        return 0;
    }

    public abstract void serialize(Object p0, com.flurry.org.codehaus.jackson.JsonGenerator p1, com.flurry.org.codehaus.jackson.map.SerializerProvider p2);

    public void serializeWithType(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4)
    {
        this.serialize(p1, p2, p3);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer unwrappingSerializer()
    {
        return this;
    }
}
