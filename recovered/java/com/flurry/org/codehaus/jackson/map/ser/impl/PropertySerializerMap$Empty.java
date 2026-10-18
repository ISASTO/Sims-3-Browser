package com.flurry.org.codehaus.jackson.map.ser.impl;
final class PropertySerializerMap$Empty extends com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap {
    protected static final com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$Empty instance;

    static PropertySerializerMap$Empty()
    {
        com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$Empty.instance = new com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$Empty();
        return;
    }

    private PropertySerializerMap$Empty()
    {
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap newWith(Class p2, com.flurry.org.codehaus.jackson.map.JsonSerializer p3)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$Single(p2, p3);
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer serializerFor(Class p2)
    {
        return 0;
    }
}
