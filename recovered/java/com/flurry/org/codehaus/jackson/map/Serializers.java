package com.flurry.org.codehaus.jackson.map;
public interface Serializers {

    public abstract com.flurry.org.codehaus.jackson.map.JsonSerializer findArraySerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p0, com.flurry.org.codehaus.jackson.map.type.ArrayType p1, com.flurry.org.codehaus.jackson.map.BeanDescription p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4, com.flurry.org.codehaus.jackson.map.JsonSerializer p5);

    public abstract com.flurry.org.codehaus.jackson.map.JsonSerializer findCollectionLikeSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p0, com.flurry.org.codehaus.jackson.map.type.CollectionLikeType p1, com.flurry.org.codehaus.jackson.map.BeanDescription p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4, com.flurry.org.codehaus.jackson.map.JsonSerializer p5);

    public abstract com.flurry.org.codehaus.jackson.map.JsonSerializer findCollectionSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p0, com.flurry.org.codehaus.jackson.map.type.CollectionType p1, com.flurry.org.codehaus.jackson.map.BeanDescription p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4, com.flurry.org.codehaus.jackson.map.JsonSerializer p5);

    public abstract com.flurry.org.codehaus.jackson.map.JsonSerializer findMapLikeSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p0, com.flurry.org.codehaus.jackson.map.type.MapLikeType p1, com.flurry.org.codehaus.jackson.map.BeanDescription p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3, com.flurry.org.codehaus.jackson.map.JsonSerializer p4, com.flurry.org.codehaus.jackson.map.TypeSerializer p5, com.flurry.org.codehaus.jackson.map.JsonSerializer p6);

    public abstract com.flurry.org.codehaus.jackson.map.JsonSerializer findMapSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p0, com.flurry.org.codehaus.jackson.map.type.MapType p1, com.flurry.org.codehaus.jackson.map.BeanDescription p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3, com.flurry.org.codehaus.jackson.map.JsonSerializer p4, com.flurry.org.codehaus.jackson.map.TypeSerializer p5, com.flurry.org.codehaus.jackson.map.JsonSerializer p6);

    public abstract com.flurry.org.codehaus.jackson.map.JsonSerializer findSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.BeanDescription p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3);
}
