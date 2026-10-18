package com.flurry.org.codehaus.jackson.map.ser;
public class BeanSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.BeanSerializerBase {

    protected BeanSerializer(com.flurry.org.codehaus.jackson.map.ser.BeanSerializer p1)
    {
        super(p1);
        return;
    }

    protected BeanSerializer(com.flurry.org.codehaus.jackson.map.ser.std.BeanSerializerBase p1)
    {
        super(p1);
        return;
    }

    public BeanSerializer(com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] p2, com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] p3, com.flurry.org.codehaus.jackson.map.ser.AnyGetterWriter p4, Object p5)
    {
        super(p1, p2, p3, p4, p5);
        return;
    }

    public BeanSerializer(Class p1, com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] p2, com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] p3, com.flurry.org.codehaus.jackson.map.ser.AnyGetterWriter p4, Object p5)
    {
        super(p1, p2, p3, p4, p5);
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.ser.BeanSerializer createDummy(Class p6)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.BeanSerializer(p6, com.flurry.org.codehaus.jackson.map.ser.BeanSerializer.NO_PROPS, 0, 0, 0);
    }

    public final void serialize(Object p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        p3.writeStartObject();
        if (this._propertyFilterId == null) {
            this.serializeFields(p2, p3, p4);
        } else {
            this.serializeFieldsFiltered(p2, p3, p4);
        }
        p3.writeEndObject();
        return;
    }

    public String toString()
    {
        return new StringBuilder().append("BeanSerializer for ").append(this.handledType().getName()).toString();
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer unwrappingSerializer()
    {
        return new com.flurry.org.codehaus.jackson.map.ser.impl.UnwrappingBeanSerializer(this);
    }
}
