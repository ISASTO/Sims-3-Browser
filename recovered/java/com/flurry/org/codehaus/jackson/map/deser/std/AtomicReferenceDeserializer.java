package com.flurry.org.codehaus.jackson.map.deser.std;
public class AtomicReferenceDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer implements com.flurry.org.codehaus.jackson.map.ResolvableDeserializer {
    protected final com.flurry.org.codehaus.jackson.map.BeanProperty _property;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _referencedType;
    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _valueDeserializer;

    public AtomicReferenceDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3)
    {
        super(java.util.concurrent.atomic.AtomicReference);
        super._referencedType = p2;
        super._property = p3;
        return;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public java.util.concurrent.atomic.AtomicReference deserialize(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        return new java.util.concurrent.atomic.AtomicReference(this._valueDeserializer.deserialize(p3, p4));
    }

    public void resolve(com.flurry.org.codehaus.jackson.map.DeserializationConfig p3, com.flurry.org.codehaus.jackson.map.DeserializerProvider p4)
    {
        this._valueDeserializer = p4.findValueDeserializer(p3, this._referencedType, this._property);
        return;
    }
}
