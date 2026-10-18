package com.flurry.org.codehaus.jackson.map.ser.std;
public class StdContainerSerializers {

    protected StdContainerSerializers()
    {
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase collectionSerializer(com.flurry.org.codehaus.jackson.type.JavaType p6, boolean p7, com.flurry.org.codehaus.jackson.map.TypeSerializer p8, com.flurry.org.codehaus.jackson.map.BeanProperty p9, com.flurry.org.codehaus.jackson.map.JsonSerializer p10)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.std.CollectionSerializer(p6, p7, p8, p9, p10);
    }

    public static com.flurry.org.codehaus.jackson.map.JsonSerializer enumSetSerializer(com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.BeanProperty p2)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.std.EnumSetSerializer(p1, p2);
    }

    public static com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase indexedListSerializer(com.flurry.org.codehaus.jackson.type.JavaType p6, boolean p7, com.flurry.org.codehaus.jackson.map.TypeSerializer p8, com.flurry.org.codehaus.jackson.map.BeanProperty p9, com.flurry.org.codehaus.jackson.map.JsonSerializer p10)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.std.StdContainerSerializers$IndexedListSerializer(p6, p7, p8, p9, p10);
    }

    public static com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase iterableSerializer(com.flurry.org.codehaus.jackson.type.JavaType p1, boolean p2, com.flurry.org.codehaus.jackson.map.TypeSerializer p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.std.IterableSerializer(p1, p2, p3, p4);
    }

    public static com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase iteratorSerializer(com.flurry.org.codehaus.jackson.type.JavaType p1, boolean p2, com.flurry.org.codehaus.jackson.map.TypeSerializer p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.std.StdContainerSerializers$IteratorSerializer(p1, p2, p3, p4);
    }
}
