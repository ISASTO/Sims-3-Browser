package com.flurry.org.codehaus.jackson.map.ser.impl;
final class PropertySerializerMap$Double extends com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap {
    private final com.flurry.org.codehaus.jackson.map.JsonSerializer _serializer1;
    private final com.flurry.org.codehaus.jackson.map.JsonSerializer _serializer2;
    private final Class _type1;
    private final Class _type2;

    public PropertySerializerMap$Double(Class p1, com.flurry.org.codehaus.jackson.map.JsonSerializer p2, Class p3, com.flurry.org.codehaus.jackson.map.JsonSerializer p4)
    {
        this._type1 = p1;
        this._serializer1 = p2;
        this._type2 = p3;
        this._serializer2 = p4;
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap newWith(Class p6, com.flurry.org.codehaus.jackson.map.JsonSerializer p7)
    {
        com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$TypeAndSerializer[] v0 = new com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$TypeAndSerializer[2];
        v0[0] = new com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$TypeAndSerializer(this._type1, this._serializer1);
        v0[1] = new com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$TypeAndSerializer(this._type2, this._serializer2);
        return new com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$Multi(v0);
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer serializerFor(Class p2)
    {
        int v0_2;
        if (p2 != this._type1) {
            if (p2 != this._type2) {
                v0_2 = 0;
            } else {
                v0_2 = this._serializer2;
            }
        } else {
            v0_2 = this._serializer1;
        }
        return v0_2;
    }
}
