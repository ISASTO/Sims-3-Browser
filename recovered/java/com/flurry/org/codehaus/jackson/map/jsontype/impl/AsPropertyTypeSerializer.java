package com.flurry.org.codehaus.jackson.map.jsontype.impl;
public class AsPropertyTypeSerializer extends com.flurry.org.codehaus.jackson.map.jsontype.impl.AsArrayTypeSerializer {
    protected final String _typePropertyName;

    public AsPropertyTypeSerializer(com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver p1, com.flurry.org.codehaus.jackson.map.BeanProperty p2, String p3)
    {
        super(p1, p2);
        super._typePropertyName = p3;
        return;
    }

    public String getPropertyName()
    {
        return this._typePropertyName;
    }

    public com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As getTypeInclusion()
    {
        return com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.PROPERTY;
    }

    public void writeTypePrefixForObject(Object p3, com.flurry.org.codehaus.jackson.JsonGenerator p4)
    {
        p4.writeStartObject();
        p4.writeStringField(this._typePropertyName, this._idResolver.idFromValue(p3));
        return;
    }

    public void writeTypePrefixForObject(Object p3, com.flurry.org.codehaus.jackson.JsonGenerator p4, Class p5)
    {
        p4.writeStartObject();
        p4.writeStringField(this._typePropertyName, this._idResolver.idFromValueAndType(p3, p5));
        return;
    }

    public void writeTypeSuffixForObject(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        p2.writeEndObject();
        return;
    }
}
