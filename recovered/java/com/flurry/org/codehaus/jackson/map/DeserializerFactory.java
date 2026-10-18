package com.flurry.org.codehaus.jackson.map;
public abstract class DeserializerFactory {
    protected static final com.flurry.org.codehaus.jackson.map.Deserializers[] NO_DESERIALIZERS;

    static DeserializerFactory()
    {
        com.flurry.org.codehaus.jackson.map.Deserializers[] v0_1 = new com.flurry.org.codehaus.jackson.map.Deserializers[0];
        com.flurry.org.codehaus.jackson.map.DeserializerFactory.NO_DESERIALIZERS = v0_1;
        return;
    }

    public DeserializerFactory()
    {
        return;
    }

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer createArrayDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.map.DeserializerProvider p1, com.flurry.org.codehaus.jackson.map.type.ArrayType p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3);

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer createBeanDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.map.DeserializerProvider p1, com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3);

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer createCollectionDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.map.DeserializerProvider p1, com.flurry.org.codehaus.jackson.map.type.CollectionType p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3);

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer createCollectionLikeDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.map.DeserializerProvider p1, com.flurry.org.codehaus.jackson.map.type.CollectionLikeType p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3);

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer createEnumDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.map.DeserializerProvider p1, com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3);

    public com.flurry.org.codehaus.jackson.map.KeyDeserializer createKeyDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4)
    {
        return 0;
    }

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer createMapDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.map.DeserializerProvider p1, com.flurry.org.codehaus.jackson.map.type.MapType p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3);

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer createMapLikeDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.map.DeserializerProvider p1, com.flurry.org.codehaus.jackson.map.type.MapLikeType p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3);

    public abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer createTreeDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.map.DeserializerProvider p1, com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3);

    public com.flurry.org.codehaus.jackson.map.TypeDeserializer findTypeDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4)
    {
        return 0;
    }

    public abstract com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator findValueInstantiator(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p1);

    public abstract com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config getConfig();

    public abstract com.flurry.org.codehaus.jackson.type.JavaType mapAbstractType(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1);

    public final com.flurry.org.codehaus.jackson.map.DeserializerFactory withAbstractTypeResolver(com.flurry.org.codehaus.jackson.map.AbstractTypeResolver p2)
    {
        return this.withConfig(this.getConfig().withAbstractTypeResolver(p2));
    }

    public final com.flurry.org.codehaus.jackson.map.DeserializerFactory withAdditionalDeserializers(com.flurry.org.codehaus.jackson.map.Deserializers p2)
    {
        return this.withConfig(this.getConfig().withAdditionalDeserializers(p2));
    }

    public final com.flurry.org.codehaus.jackson.map.DeserializerFactory withAdditionalKeyDeserializers(com.flurry.org.codehaus.jackson.map.KeyDeserializers p2)
    {
        return this.withConfig(this.getConfig().withAdditionalKeyDeserializers(p2));
    }

    public abstract com.flurry.org.codehaus.jackson.map.DeserializerFactory withConfig(com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config p0);

    public final com.flurry.org.codehaus.jackson.map.DeserializerFactory withDeserializerModifier(com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerModifier p2)
    {
        return this.withConfig(this.getConfig().withDeserializerModifier(p2));
    }

    public final com.flurry.org.codehaus.jackson.map.DeserializerFactory withValueInstantiators(com.flurry.org.codehaus.jackson.map.deser.ValueInstantiators p2)
    {
        return this.withConfig(this.getConfig().withValueInstantiators(p2));
    }
}
