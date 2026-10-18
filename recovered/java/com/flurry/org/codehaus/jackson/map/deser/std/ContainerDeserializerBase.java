package com.flurry.org.codehaus.jackson.map.deser.std;
public abstract class ContainerDeserializerBase extends com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer {

    protected ContainerDeserializerBase(Class p1)
    {
        super(p1);
        return;
    }

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer getContentDeserializer();

    public abstract com.flurry.org.codehaus.jackson.type.JavaType getContentType();
}
