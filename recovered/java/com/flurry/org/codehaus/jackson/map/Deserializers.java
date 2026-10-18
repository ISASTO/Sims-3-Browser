package com.flurry.org.codehaus.jackson.map;
public interface Deserializers {

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer findArrayDeserializer(com.flurry.org.codehaus.jackson.map.type.ArrayType p0, com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.map.DeserializerProvider p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4, com.flurry.org.codehaus.jackson.map.JsonDeserializer p5);

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer findBeanDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p0, com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.map.DeserializerProvider p2, com.flurry.org.codehaus.jackson.map.BeanDescription p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4);

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer findCollectionDeserializer(com.flurry.org.codehaus.jackson.map.type.CollectionType p0, com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.map.DeserializerProvider p2, com.flurry.org.codehaus.jackson.map.BeanDescription p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4, com.flurry.org.codehaus.jackson.map.TypeDeserializer p5, com.flurry.org.codehaus.jackson.map.JsonDeserializer p6);

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer findCollectionLikeDeserializer(com.flurry.org.codehaus.jackson.map.type.CollectionLikeType p0, com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.map.DeserializerProvider p2, com.flurry.org.codehaus.jackson.map.BeanDescription p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4, com.flurry.org.codehaus.jackson.map.TypeDeserializer p5, com.flurry.org.codehaus.jackson.map.JsonDeserializer p6);

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer findEnumDeserializer(Class p0, com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.map.BeanDescription p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3);

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer findMapDeserializer(com.flurry.org.codehaus.jackson.map.type.MapType p0, com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.map.DeserializerProvider p2, com.flurry.org.codehaus.jackson.map.BeanDescription p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4, com.flurry.org.codehaus.jackson.map.KeyDeserializer p5, com.flurry.org.codehaus.jackson.map.TypeDeserializer p6, com.flurry.org.codehaus.jackson.map.JsonDeserializer p7);

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer findMapLikeDeserializer(com.flurry.org.codehaus.jackson.map.type.MapLikeType p0, com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.map.DeserializerProvider p2, com.flurry.org.codehaus.jackson.map.BeanDescription p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4, com.flurry.org.codehaus.jackson.map.KeyDeserializer p5, com.flurry.org.codehaus.jackson.map.TypeDeserializer p6, com.flurry.org.codehaus.jackson.map.JsonDeserializer p7);

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer findTreeNodeDeserializer(Class p0, com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.map.BeanProperty p2);
}
