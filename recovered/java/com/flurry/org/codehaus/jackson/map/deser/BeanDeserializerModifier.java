package com.flurry.org.codehaus.jackson.map.deser;
public abstract class BeanDeserializerModifier {

    public BeanDeserializerModifier()
    {
        return;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer modifyDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p2, com.flurry.org.codehaus.jackson.map.JsonDeserializer p3)
    {
        return p3;
    }

    public com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerBuilder updateBuilder(com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p2, com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerBuilder p3)
    {
        return p3;
    }
}
