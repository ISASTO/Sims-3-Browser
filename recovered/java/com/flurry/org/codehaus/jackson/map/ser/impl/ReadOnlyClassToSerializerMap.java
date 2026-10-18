package com.flurry.org.codehaus.jackson.map.ser.impl;
public final class ReadOnlyClassToSerializerMap {
    protected final com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey _cacheKey;
    protected final com.flurry.org.codehaus.jackson.map.ser.impl.JsonSerializerMap _map;

    private ReadOnlyClassToSerializerMap(com.flurry.org.codehaus.jackson.map.ser.impl.JsonSerializerMap p4)
    {
        this._cacheKey = new com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey(this.getClass(), 0);
        this._map = p4;
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.ser.impl.ReadOnlyClassToSerializerMap from(java.util.HashMap p2)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.impl.ReadOnlyClassToSerializerMap(new com.flurry.org.codehaus.jackson.map.ser.impl.JsonSerializerMap(p2));
    }

    public com.flurry.org.codehaus.jackson.map.ser.impl.ReadOnlyClassToSerializerMap instance()
    {
        return new com.flurry.org.codehaus.jackson.map.ser.impl.ReadOnlyClassToSerializerMap(this._map);
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer typedValueSerializer(com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        this._cacheKey.resetTyped(p3);
        return this._map.find(this._cacheKey);
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer typedValueSerializer(Class p3)
    {
        this._cacheKey.resetTyped(p3);
        return this._map.find(this._cacheKey);
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer untypedValueSerializer(com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        this._cacheKey.resetUntyped(p3);
        return this._map.find(this._cacheKey);
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer untypedValueSerializer(Class p3)
    {
        this._cacheKey.resetUntyped(p3);
        return this._map.find(this._cacheKey);
    }
}
