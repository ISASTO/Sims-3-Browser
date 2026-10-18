package com.flurry.org.codehaus.jackson.map.jsontype;
public interface TypeIdResolver {

    public abstract com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id getMechanism();

    public abstract String idFromValue(Object p0);

    public abstract String idFromValueAndType(Object p0, Class p1);

    public abstract void init(com.flurry.org.codehaus.jackson.type.JavaType p0);

    public abstract com.flurry.org.codehaus.jackson.type.JavaType typeFromId(String p0);
}
