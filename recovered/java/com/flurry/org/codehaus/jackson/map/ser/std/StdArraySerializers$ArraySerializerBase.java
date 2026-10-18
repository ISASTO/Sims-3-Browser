package com.flurry.org.codehaus.jackson.map.ser.std;
public abstract class StdArraySerializers$ArraySerializerBase extends com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase {
    protected final com.flurry.org.codehaus.jackson.map.BeanProperty _property;
    protected final com.flurry.org.codehaus.jackson.map.TypeSerializer _valueTypeSerializer;

    protected StdArraySerializers$ArraySerializerBase(Class p1, com.flurry.org.codehaus.jackson.map.TypeSerializer p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3)
    {
        super(p1);
        super._valueTypeSerializer = p2;
        super._property = p3;
        return;
    }

    public final void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        p2.writeStartArray();
        this.serializeContents(p1, p2, p3);
        p2.writeEndArray();
        return;
    }

    protected abstract void serializeContents(Object p0, com.flurry.org.codehaus.jackson.JsonGenerator p1, com.flurry.org.codehaus.jackson.map.SerializerProvider p2);

    public final void serializeWithType(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4)
    {
        p4.writeTypePrefixForArray(p1, p2);
        this.serializeContents(p1, p2, p3);
        p4.writeTypeSuffixForArray(p1, p2);
        return;
    }
}
