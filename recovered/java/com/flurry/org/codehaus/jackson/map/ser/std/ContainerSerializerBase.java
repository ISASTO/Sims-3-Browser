package com.flurry.org.codehaus.jackson.map.ser.std;
public abstract class ContainerSerializerBase extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {

    protected ContainerSerializerBase(Class p1)
    {
        super(p1);
        return;
    }

    protected ContainerSerializerBase(Class p1, boolean p2)
    {
        super(p1, p2);
        return;
    }

    public abstract com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase _withValueTypeSerializer(com.flurry.org.codehaus.jackson.map.TypeSerializer p0);

    public com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase withValueTypeSerializer(com.flurry.org.codehaus.jackson.map.TypeSerializer p1)
    {
        if (p1 != null) {
            this = this._withValueTypeSerializer(p1);
        }
        return this;
    }
}
