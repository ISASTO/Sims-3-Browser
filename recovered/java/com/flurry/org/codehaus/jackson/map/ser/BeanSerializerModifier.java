package com.flurry.org.codehaus.jackson.map.ser;
public abstract class BeanSerializerModifier {

    public BeanSerializerModifier()
    {
        return;
    }

    public java.util.List changeProperties(com.flurry.org.codehaus.jackson.map.SerializationConfig p1, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p2, java.util.List p3)
    {
        return p3;
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer modifySerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p1, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p2, com.flurry.org.codehaus.jackson.map.JsonSerializer p3)
    {
        return p3;
    }

    public java.util.List orderProperties(com.flurry.org.codehaus.jackson.map.SerializationConfig p1, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p2, java.util.List p3)
    {
        return p3;
    }

    public com.flurry.org.codehaus.jackson.map.ser.BeanSerializerBuilder updateBuilder(com.flurry.org.codehaus.jackson.map.SerializationConfig p1, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p2, com.flurry.org.codehaus.jackson.map.ser.BeanSerializerBuilder p3)
    {
        return p3;
    }
}
