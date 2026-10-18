package com.flurry.org.codehaus.jackson.map;
public abstract class TypeSerializer {

    public TypeSerializer()
    {
        return;
    }

    public abstract String getPropertyName();

    public abstract com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver getTypeIdResolver();

    public abstract com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As getTypeInclusion();

    public abstract void writeTypePrefixForArray(Object p0, com.flurry.org.codehaus.jackson.JsonGenerator p1);

    public void writeTypePrefixForArray(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, Class p3)
    {
        this.writeTypePrefixForArray(p1, p2);
        return;
    }

    public abstract void writeTypePrefixForObject(Object p0, com.flurry.org.codehaus.jackson.JsonGenerator p1);

    public void writeTypePrefixForObject(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, Class p3)
    {
        this.writeTypePrefixForObject(p1, p2);
        return;
    }

    public abstract void writeTypePrefixForScalar(Object p0, com.flurry.org.codehaus.jackson.JsonGenerator p1);

    public void writeTypePrefixForScalar(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, Class p3)
    {
        this.writeTypePrefixForScalar(p1, p2);
        return;
    }

    public abstract void writeTypeSuffixForArray(Object p0, com.flurry.org.codehaus.jackson.JsonGenerator p1);

    public abstract void writeTypeSuffixForObject(Object p0, com.flurry.org.codehaus.jackson.JsonGenerator p1);

    public abstract void writeTypeSuffixForScalar(Object p0, com.flurry.org.codehaus.jackson.JsonGenerator p1);
}
