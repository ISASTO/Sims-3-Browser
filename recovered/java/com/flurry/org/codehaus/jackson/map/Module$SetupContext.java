package com.flurry.org.codehaus.jackson.map;
public interface Module$SetupContext {

    public abstract void addAbstractTypeResolver(com.flurry.org.codehaus.jackson.map.AbstractTypeResolver p0);

    public abstract void addBeanDeserializerModifier(com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerModifier p0);

    public abstract void addBeanSerializerModifier(com.flurry.org.codehaus.jackson.map.ser.BeanSerializerModifier p0);

    public abstract void addDeserializers(com.flurry.org.codehaus.jackson.map.Deserializers p0);

    public abstract void addKeyDeserializers(com.flurry.org.codehaus.jackson.map.KeyDeserializers p0);

    public abstract void addKeySerializers(com.flurry.org.codehaus.jackson.map.Serializers p0);

    public abstract void addSerializers(com.flurry.org.codehaus.jackson.map.Serializers p0);

    public abstract void addTypeModifier(com.flurry.org.codehaus.jackson.map.type.TypeModifier p0);

    public abstract void addValueInstantiators(com.flurry.org.codehaus.jackson.map.deser.ValueInstantiators p0);

    public abstract void appendAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p0);

    public abstract com.flurry.org.codehaus.jackson.map.DeserializationConfig getDeserializationConfig();

    public abstract com.flurry.org.codehaus.jackson.Version getMapperVersion();

    public abstract com.flurry.org.codehaus.jackson.map.SerializationConfig getSerializationConfig();

    public abstract void insertAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p0);

    public abstract boolean isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p0);

    public abstract boolean isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature p0);

    public abstract boolean isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature p0);

    public abstract boolean isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature p0);

    public abstract void setMixInAnnotations(Class p0, Class p1);
}
