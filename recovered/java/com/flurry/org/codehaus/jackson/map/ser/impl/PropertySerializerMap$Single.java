package com.flurry.org.codehaus.jackson.map.ser.impl;
final class PropertySerializerMap$Single extends com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap {
    private final com.flurry.org.codehaus.jackson.map.JsonSerializer _serializer;
    private final Class _type;

    public PropertySerializerMap$Single(Class p1, com.flurry.org.codehaus.jackson.map.JsonSerializer p2)
    {
        this._type = p1;
        this._serializer = p2;
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap newWith(Class p4, com.flurry.org.codehaus.jackson.map.JsonSerializer p5)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$Double(this._type, this._serializer, p4, p5);
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer serializerFor(Class p2)
    {
        int v0_1;
        if (p2 != this._type) {
            v0_1 = 0;
        } else {
            v0_1 = this._serializer;
        }
        return v0_1;
    }
}
