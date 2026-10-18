package com.flurry.org.codehaus.jackson.map.ser.impl;
public class UnwrappingBeanSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.BeanSerializerBase {

    public UnwrappingBeanSerializer(com.flurry.org.codehaus.jackson.map.ser.std.BeanSerializerBase p1)
    {
        super(p1);
        return;
    }

    public boolean isUnwrappingSerializer()
    {
        return 1;
    }

    public final void serialize(Object p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        if (this._propertyFilterId == null) {
            this.serializeFields(p2, p3, p4);
        } else {
            this.serializeFieldsFiltered(p2, p3, p4);
        }
        return;
    }

    public String toString()
    {
        return new StringBuilder().append("UnwrappingBeanSerializer for ").append(this.handledType().getName()).toString();
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer unwrappingSerializer()
    {
        return this;
    }
}
