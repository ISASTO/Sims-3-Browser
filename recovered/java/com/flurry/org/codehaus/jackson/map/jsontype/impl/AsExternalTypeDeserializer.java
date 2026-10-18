package com.flurry.org.codehaus.jackson.map.jsontype.impl;
public class AsExternalTypeDeserializer extends com.flurry.org.codehaus.jackson.map.jsontype.impl.AsArrayTypeDeserializer {
    protected final String _typePropertyName;

    public AsExternalTypeDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3, Class p4, String p5)
    {
        super(p1, p2, p3, p4);
        super._typePropertyName = p5;
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
}
