package com.flurry.org.codehaus.jackson.map;
public abstract class SerializerFactory {

    public SerializerFactory()
    {
        return;
    }

    public abstract com.flurry.org.codehaus.jackson.map.JsonSerializer createKeySerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.BeanProperty p2);

    public abstract com.flurry.org.codehaus.jackson.map.JsonSerializer createSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.BeanProperty p2);

    public final com.flurry.org.codehaus.jackson.map.JsonSerializer createSerializer(com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.SerializationConfig p4)
    {
        try {
            return this.createSerializer(p4, p3, 0);
        } catch (com.flurry.org.codehaus.jackson.map.JsonMappingException v0) {
            throw new com.flurry.org.codehaus.jackson.map.RuntimeJsonMappingException(v0);
        }
    }

    public abstract com.flurry.org.codehaus.jackson.map.TypeSerializer createTypeSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.BeanProperty p2);

    public final com.flurry.org.codehaus.jackson.map.TypeSerializer createTypeSerializer(com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.SerializationConfig p4)
    {
        try {
            return this.createTypeSerializer(p4, p3, 0);
        } catch (com.flurry.org.codehaus.jackson.map.JsonMappingException v0) {
            throw new RuntimeException(v0);
        }
    }

    public abstract com.flurry.org.codehaus.jackson.map.SerializerFactory$Config getConfig();

    public final com.flurry.org.codehaus.jackson.map.SerializerFactory withAdditionalKeySerializers(com.flurry.org.codehaus.jackson.map.Serializers p2)
    {
        return this.withConfig(this.getConfig().withAdditionalKeySerializers(p2));
    }

    public final com.flurry.org.codehaus.jackson.map.SerializerFactory withAdditionalSerializers(com.flurry.org.codehaus.jackson.map.Serializers p2)
    {
        return this.withConfig(this.getConfig().withAdditionalSerializers(p2));
    }

    public abstract com.flurry.org.codehaus.jackson.map.SerializerFactory withConfig(com.flurry.org.codehaus.jackson.map.SerializerFactory$Config p0);

    public final com.flurry.org.codehaus.jackson.map.SerializerFactory withSerializerModifier(com.flurry.org.codehaus.jackson.map.ser.BeanSerializerModifier p2)
    {
        return this.withConfig(this.getConfig().withSerializerModifier(p2));
    }
}
