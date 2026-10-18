package com.flurry.org.codehaus.jackson.map.jsontype.impl;
public abstract class TypeIdResolverBase implements com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver {
    protected final com.flurry.org.codehaus.jackson.type.JavaType _baseType;
    protected final com.flurry.org.codehaus.jackson.map.type.TypeFactory _typeFactory;

    protected TypeIdResolverBase(com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.type.TypeFactory p2)
    {
        this._baseType = p1;
        this._typeFactory = p2;
        return;
    }

    public String idFromBaseType()
    {
        return this.idFromValueAndType(0, this._baseType.getRawClass());
    }

    public void init(com.flurry.org.codehaus.jackson.type.JavaType p1)
    {
        return;
    }
}
