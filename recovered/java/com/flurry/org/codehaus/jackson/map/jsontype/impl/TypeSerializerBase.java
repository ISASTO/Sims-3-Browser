package com.flurry.org.codehaus.jackson.map.jsontype.impl;
public abstract class TypeSerializerBase extends com.flurry.org.codehaus.jackson.map.TypeSerializer {
    protected final com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver _idResolver;
    protected final com.flurry.org.codehaus.jackson.map.BeanProperty _property;

    protected TypeSerializerBase(com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver p1, com.flurry.org.codehaus.jackson.map.BeanProperty p2)
    {
        this._idResolver = p1;
        this._property = p2;
        return;
    }

    public String getPropertyName()
    {
        return 0;
    }

    public com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver getTypeIdResolver()
    {
        return this._idResolver;
    }

    public abstract com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As getTypeInclusion();
}
