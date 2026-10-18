package com.flurry.org.codehaus.jackson.map.jsontype.impl;
public class AsExternalTypeSerializer extends com.flurry.org.codehaus.jackson.map.jsontype.impl.TypeSerializerBase {
    protected final String _typePropertyName;

    public AsExternalTypeSerializer(com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver p1, com.flurry.org.codehaus.jackson.map.BeanProperty p2, String p3)
    {
        super(p1, p2);
        super._typePropertyName = p3;
        return;
    }

    protected final void _writePrefix(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        p2.writeStartObject();
        return;
    }

    protected final void _writePrefix(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, Class p3)
    {
        p2.writeStartObject();
        return;
    }

    protected final void _writeSuffix(Object p3, com.flurry.org.codehaus.jackson.JsonGenerator p4)
    {
        p4.writeEndObject();
        p4.writeStringField(this._typePropertyName, this._idResolver.idFromValue(p3));
        return;
    }

    public String getPropertyName()
    {
        return this._typePropertyName;
    }

    public com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As getTypeInclusion()
    {
        return com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.EXTERNAL_PROPERTY;
    }

    public void writeTypePrefixForArray(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        this._writePrefix(p1, p2);
        return;
    }

    public void writeTypePrefixForArray(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, Class p3)
    {
        this._writePrefix(p1, p2, p3);
        return;
    }

    public void writeTypePrefixForObject(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        this._writePrefix(p1, p2);
        return;
    }

    public void writeTypePrefixForObject(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, Class p3)
    {
        this._writePrefix(p1, p2, p3);
        return;
    }

    public void writeTypePrefixForScalar(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        this._writePrefix(p1, p2);
        return;
    }

    public void writeTypePrefixForScalar(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, Class p3)
    {
        this._writePrefix(p1, p2, p3);
        return;
    }

    public void writeTypeSuffixForArray(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        this._writeSuffix(p1, p2);
        return;
    }

    public void writeTypeSuffixForObject(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        this._writeSuffix(p1, p2);
        return;
    }

    public void writeTypeSuffixForScalar(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        this._writeSuffix(p1, p2);
        return;
    }
}
