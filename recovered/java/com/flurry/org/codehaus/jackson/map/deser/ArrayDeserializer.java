package com.flurry.org.codehaus.jackson.map.deser;
public class ArrayDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.ObjectArrayDeserializer {

    public ArrayDeserializer(com.flurry.org.codehaus.jackson.map.type.ArrayType p2, com.flurry.org.codehaus.jackson.map.JsonDeserializer p3)
    {
        this(p2, p3, 0);
        return;
    }

    public ArrayDeserializer(com.flurry.org.codehaus.jackson.map.type.ArrayType p1, com.flurry.org.codehaus.jackson.map.JsonDeserializer p2, com.flurry.org.codehaus.jackson.map.TypeDeserializer p3)
    {
        super(p1, p2, p3);
        return;
    }
}
