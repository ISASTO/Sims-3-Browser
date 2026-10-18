package com.flurry.org.codehaus.jackson.map;
 class ObjectMapper$1 implements com.flurry.org.codehaus.jackson.map.Module$SetupContext {
    final synthetic com.flurry.org.codehaus.jackson.map.ObjectMapper this$0;
    final synthetic com.flurry.org.codehaus.jackson.map.ObjectMapper val$mapper;

    ObjectMapper$1(com.flurry.org.codehaus.jackson.map.ObjectMapper p1, com.flurry.org.codehaus.jackson.map.ObjectMapper p2)
    {
        this.this$0 = p1;
        this.val$mapper = p2;
        return;
    }

    public void addAbstractTypeResolver(com.flurry.org.codehaus.jackson.map.AbstractTypeResolver p3)
    {
        this.val$mapper._deserializerProvider = this.val$mapper._deserializerProvider.withAbstractTypeResolver(p3);
        return;
    }

    public void addBeanDeserializerModifier(com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerModifier p3)
    {
        this.val$mapper._deserializerProvider = this.val$mapper._deserializerProvider.withDeserializerModifier(p3);
        return;
    }

    public void addBeanSerializerModifier(com.flurry.org.codehaus.jackson.map.ser.BeanSerializerModifier p3)
    {
        this.val$mapper._serializerFactory = this.val$mapper._serializerFactory.withSerializerModifier(p3);
        return;
    }

    public void addDeserializers(com.flurry.org.codehaus.jackson.map.Deserializers p3)
    {
        this.val$mapper._deserializerProvider = this.val$mapper._deserializerProvider.withAdditionalDeserializers(p3);
        return;
    }

    public void addKeyDeserializers(com.flurry.org.codehaus.jackson.map.KeyDeserializers p3)
    {
        this.val$mapper._deserializerProvider = this.val$mapper._deserializerProvider.withAdditionalKeyDeserializers(p3);
        return;
    }

    public void addKeySerializers(com.flurry.org.codehaus.jackson.map.Serializers p3)
    {
        this.val$mapper._serializerFactory = this.val$mapper._serializerFactory.withAdditionalKeySerializers(p3);
        return;
    }

    public void addSerializers(com.flurry.org.codehaus.jackson.map.Serializers p3)
    {
        this.val$mapper._serializerFactory = this.val$mapper._serializerFactory.withAdditionalSerializers(p3);
        return;
    }

    public void addTypeModifier(com.flurry.org.codehaus.jackson.map.type.TypeModifier p3)
    {
        this.val$mapper.setTypeFactory(this.val$mapper._typeFactory.withModifier(p3));
        return;
    }

    public void addValueInstantiators(com.flurry.org.codehaus.jackson.map.deser.ValueInstantiators p3)
    {
        this.val$mapper._deserializerProvider = this.val$mapper._deserializerProvider.withValueInstantiators(p3);
        return;
    }

    public void appendAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p3)
    {
        this.val$mapper._deserializationConfig = this.val$mapper._deserializationConfig.withAppendedAnnotationIntrospector(p3);
        this.val$mapper._serializationConfig = this.val$mapper._serializationConfig.withAppendedAnnotationIntrospector(p3);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.DeserializationConfig getDeserializationConfig()
    {
        return this.val$mapper.getDeserializationConfig();
    }

    public com.flurry.org.codehaus.jackson.Version getMapperVersion()
    {
        return this.this$0.version();
    }

    public com.flurry.org.codehaus.jackson.map.SerializationConfig getSerializationConfig()
    {
        return this.val$mapper.getSerializationConfig();
    }

    public void insertAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p3)
    {
        this.val$mapper._deserializationConfig = this.val$mapper._deserializationConfig.withInsertedAnnotationIntrospector(p3);
        this.val$mapper._serializationConfig = this.val$mapper._serializationConfig.withInsertedAnnotationIntrospector(p3);
        return;
    }

    public boolean isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p2)
    {
        return this.val$mapper.isEnabled(p2);
    }

    public boolean isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature p2)
    {
        return this.val$mapper.isEnabled(p2);
    }

    public boolean isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature p2)
    {
        return this.val$mapper.isEnabled(p2);
    }

    public boolean isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature p2)
    {
        return this.val$mapper.isEnabled(p2);
    }

    public void setMixInAnnotations(Class p2, Class p3)
    {
        this.val$mapper._deserializationConfig.addMixInAnnotations(p2, p3);
        this.val$mapper._serializationConfig.addMixInAnnotations(p2, p3);
        return;
    }
}
