package com.flurry.org.codehaus.jackson.map;
public abstract class SerializerProvider {
    protected static final com.flurry.org.codehaus.jackson.type.JavaType TYPE_OBJECT;
    protected final com.flurry.org.codehaus.jackson.map.SerializationConfig _config;
    protected final Class _serializationView;

    static SerializerProvider()
    {
        com.flurry.org.codehaus.jackson.map.SerializerProvider.TYPE_OBJECT = com.flurry.org.codehaus.jackson.map.type.TypeFactory.defaultInstance().uncheckedSimpleType(Object);
        return;
    }

    protected SerializerProvider(com.flurry.org.codehaus.jackson.map.SerializationConfig p2)
    {
        Class v0_1;
        this._config = p2;
        if (p2 != null) {
            v0_1 = this._config.getSerializationView();
        } else {
            v0_1 = 0;
        }
        this._serializationView = v0_1;
        return;
    }

    public abstract int cachedSerializersCount();

    public com.flurry.org.codehaus.jackson.type.JavaType constructSpecializedType(com.flurry.org.codehaus.jackson.type.JavaType p2, Class p3)
    {
        return this._config.constructSpecializedType(p2, p3);
    }

    public com.flurry.org.codehaus.jackson.type.JavaType constructType(reflect.Type p2)
    {
        return this._config.getTypeFactory().constructType(p2);
    }

    public abstract void defaultSerializeDateKey(long p0, com.flurry.org.codehaus.jackson.JsonGenerator p1);

    public abstract void defaultSerializeDateKey(java.util.Date p0, com.flurry.org.codehaus.jackson.JsonGenerator p1);

    public abstract void defaultSerializeDateValue(long p0, com.flurry.org.codehaus.jackson.JsonGenerator p1);

    public abstract void defaultSerializeDateValue(java.util.Date p0, com.flurry.org.codehaus.jackson.JsonGenerator p1);

    public final void defaultSerializeField(String p4, Object p5, com.flurry.org.codehaus.jackson.JsonGenerator p6)
    {
        p6.writeFieldName(p4);
        if (p5 != null) {
            this.findTypedValueSerializer(p5.getClass(), 1, 0).serialize(p5, p6, this);
        } else {
            this.getNullValueSerializer().serialize(0, p6, this);
        }
        return;
    }

    public final void defaultSerializeNull(com.flurry.org.codehaus.jackson.JsonGenerator p3)
    {
        this.getNullValueSerializer().serialize(0, p3, this);
        return;
    }

    public final void defaultSerializeValue(Object p4, com.flurry.org.codehaus.jackson.JsonGenerator p5)
    {
        if (p4 != null) {
            this.findTypedValueSerializer(p4.getClass(), 1, 0).serialize(p4, p5, this);
        } else {
            this.getNullValueSerializer().serialize(0, p5, this);
        }
        return;
    }

    public abstract com.flurry.org.codehaus.jackson.map.JsonSerializer findKeySerializer(com.flurry.org.codehaus.jackson.type.JavaType p0, com.flurry.org.codehaus.jackson.map.BeanProperty p1);

    public final com.flurry.org.codehaus.jackson.map.JsonSerializer findTypedValueSerializer(com.flurry.org.codehaus.jackson.type.JavaType p2, boolean p3)
    {
        return this.findTypedValueSerializer(p2, p3, 0);
    }

    public abstract com.flurry.org.codehaus.jackson.map.JsonSerializer findTypedValueSerializer(com.flurry.org.codehaus.jackson.type.JavaType p0, boolean p1, com.flurry.org.codehaus.jackson.map.BeanProperty p2);

    public final com.flurry.org.codehaus.jackson.map.JsonSerializer findTypedValueSerializer(Class p2, boolean p3)
    {
        return this.findTypedValueSerializer(p2, p3, 0);
    }

    public abstract com.flurry.org.codehaus.jackson.map.JsonSerializer findTypedValueSerializer(Class p0, boolean p1, com.flurry.org.codehaus.jackson.map.BeanProperty p2);

    public final com.flurry.org.codehaus.jackson.map.JsonSerializer findValueSerializer(com.flurry.org.codehaus.jackson.type.JavaType p2)
    {
        return this.findValueSerializer(p2, 0);
    }

    public abstract com.flurry.org.codehaus.jackson.map.JsonSerializer findValueSerializer(com.flurry.org.codehaus.jackson.type.JavaType p0, com.flurry.org.codehaus.jackson.map.BeanProperty p1);

    public final com.flurry.org.codehaus.jackson.map.JsonSerializer findValueSerializer(Class p2)
    {
        return this.findValueSerializer(p2, 0);
    }

    public abstract com.flurry.org.codehaus.jackson.map.JsonSerializer findValueSerializer(Class p0, com.flurry.org.codehaus.jackson.map.BeanProperty p1);

    public abstract void flushCachedSerializers();

    public abstract com.flurry.org.codehaus.jackson.schema.JsonSchema generateJsonSchema(Class p0, com.flurry.org.codehaus.jackson.map.SerializationConfig p1, com.flurry.org.codehaus.jackson.map.SerializerFactory p2);

    public final com.flurry.org.codehaus.jackson.map.SerializationConfig getConfig()
    {
        return this._config;
    }

    public final com.flurry.org.codehaus.jackson.map.ser.FilterProvider getFilterProvider()
    {
        return this._config.getFilterProvider();
    }

    public final com.flurry.org.codehaus.jackson.map.JsonSerializer getKeySerializer()
    {
        return this.findKeySerializer(com.flurry.org.codehaus.jackson.map.SerializerProvider.TYPE_OBJECT, 0);
    }

    public final com.flurry.org.codehaus.jackson.map.JsonSerializer getKeySerializer(com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3)
    {
        return this.findKeySerializer(p2, p3);
    }

    public abstract com.flurry.org.codehaus.jackson.map.JsonSerializer getNullKeySerializer();

    public abstract com.flurry.org.codehaus.jackson.map.JsonSerializer getNullValueSerializer();

    public final Class getSerializationView()
    {
        return this._serializationView;
    }

    public abstract com.flurry.org.codehaus.jackson.map.JsonSerializer getUnknownTypeSerializer(Class p0);

    public abstract boolean hasSerializerFor(com.flurry.org.codehaus.jackson.map.SerializationConfig p0, Class p1, com.flurry.org.codehaus.jackson.map.SerializerFactory p2);

    public final boolean isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature p2)
    {
        return this._config.isEnabled(p2);
    }

    public abstract void serializeValue(com.flurry.org.codehaus.jackson.map.SerializationConfig p0, com.flurry.org.codehaus.jackson.JsonGenerator p1, Object p2, com.flurry.org.codehaus.jackson.map.SerializerFactory p3);

    public abstract void serializeValue(com.flurry.org.codehaus.jackson.map.SerializationConfig p0, com.flurry.org.codehaus.jackson.JsonGenerator p1, Object p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.SerializerFactory p4);

    public abstract void setDefaultKeySerializer(com.flurry.org.codehaus.jackson.map.JsonSerializer p0);

    public abstract void setNullKeySerializer(com.flurry.org.codehaus.jackson.map.JsonSerializer p0);

    public abstract void setNullValueSerializer(com.flurry.org.codehaus.jackson.map.JsonSerializer p0);
}
