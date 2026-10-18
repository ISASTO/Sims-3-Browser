package com.flurry.org.codehaus.jackson.map.jsontype.impl;
public class AsWrapperTypeSerializer extends com.flurry.org.codehaus.jackson.map.jsontype.impl.TypeSerializerBase {

    public AsWrapperTypeSerializer(com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver p1, com.flurry.org.codehaus.jackson.map.BeanProperty p2)
    {
        super(p1, p2);
        return;
    }

    public com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As getTypeInclusion()
    {
        return com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.WRAPPER_OBJECT;
    }

    public void writeTypePrefixForArray(Object p2, com.flurry.org.codehaus.jackson.JsonGenerator p3)
    {
        p3.writeStartObject();
        p3.writeArrayFieldStart(this._idResolver.idFromValue(p2));
        return;
    }

    public void writeTypePrefixForArray(Object p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, Class p4)
    {
        p3.writeStartObject();
        p3.writeArrayFieldStart(this._idResolver.idFromValueAndType(p2, p4));
        return;
    }

    public void writeTypePrefixForObject(Object p2, com.flurry.org.codehaus.jackson.JsonGenerator p3)
    {
        p3.writeStartObject();
        p3.writeObjectFieldStart(this._idResolver.idFromValue(p2));
        return;
    }

    public void writeTypePrefixForObject(Object p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, Class p4)
    {
        p3.writeStartObject();
        p3.writeObjectFieldStart(this._idResolver.idFromValueAndType(p2, p4));
        return;
    }

    public void writeTypePrefixForScalar(Object p2, com.flurry.org.codehaus.jackson.JsonGenerator p3)
    {
        p3.writeStartObject();
        p3.writeFieldName(this._idResolver.idFromValue(p2));
        return;
    }

    public void writeTypePrefixForScalar(Object p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, Class p4)
    {
        p3.writeStartObject();
        p3.writeFieldName(this._idResolver.idFromValueAndType(p2, p4));
        return;
    }

    public void writeTypeSuffixForArray(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        p2.writeEndArray();
        p2.writeEndObject();
        return;
    }

    public void writeTypeSuffixForObject(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        p2.writeEndObject();
        p2.writeEndObject();
        return;
    }

    public void writeTypeSuffixForScalar(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2)
    {
        p2.writeEndObject();
        return;
    }
}
