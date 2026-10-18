package com.flurry.org.codehaus.jackson.map.ser.impl;
public class UnwrappingBeanPropertyWriter extends com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter {

    public UnwrappingBeanPropertyWriter(com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter p1)
    {
        super(p1);
        return;
    }

    public UnwrappingBeanPropertyWriter(com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter p1, com.flurry.org.codehaus.jackson.map.JsonSerializer p2)
    {
        super(p1, p2);
        return;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _findAndAddDynamic(com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap p4, Class p5, com.flurry.org.codehaus.jackson.map.SerializerProvider p6)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v0;
        if (this._nonTrivialBaseType == null) {
            v0 = p6.findValueSerializer(p5, this);
        } else {
            v0 = p6.findValueSerializer(p6.constructSpecializedType(this._nonTrivialBaseType, p5), this);
        }
        if (!v0.isUnwrappingSerializer()) {
            v0 = v0.unwrappingSerializer();
        }
        this._dynamicSerializers = this._dynamicSerializers.newWith(p5, v0);
        return v0;
    }

    public void serializeAsField(Object p6, com.flurry.org.codehaus.jackson.JsonGenerator p7, com.flurry.org.codehaus.jackson.map.SerializerProvider p8)
    {
        Object v3 = this.get(p6);
        if (v3 != null) {
            if (v3 == p6) {
                this._reportSelfReference(p6);
            }
            if ((this._suppressableValue == null) || (!this._suppressableValue.equals(v3))) {
                com.flurry.org.codehaus.jackson.map.JsonSerializer v2 = this._serializer;
                if (v2 == null) {
                    Class v0 = v3.getClass();
                    com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap v1 = this._dynamicSerializers;
                    v2 = v1.serializerFor(v0);
                    if (v2 == null) {
                        v2 = this._findAndAddDynamic(v1, v0, p8);
                    }
                }
                if (!v2.isUnwrappingSerializer()) {
                    p7.writeFieldName(this._name);
                }
                if (this._typeSerializer != null) {
                    v2.serializeWithType(v3, p7, p8, this._typeSerializer);
                } else {
                    v2.serialize(v3, p7, p8);
                }
            }
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter withSerializer(com.flurry.org.codehaus.jackson.map.JsonSerializer p3)
    {
        if (this.getClass() == com.flurry.org.codehaus.jackson.map.ser.impl.UnwrappingBeanPropertyWriter) {
            if (!p3.isUnwrappingSerializer()) {
                p3 = p3.unwrappingSerializer();
            }
            return new com.flurry.org.codehaus.jackson.map.ser.impl.UnwrappingBeanPropertyWriter(this, p3);
        } else {
            throw new IllegalStateException("UnwrappingBeanPropertyWriter sub-class does not override \'withSerializer()\'; needs to!");
        }
    }
}
