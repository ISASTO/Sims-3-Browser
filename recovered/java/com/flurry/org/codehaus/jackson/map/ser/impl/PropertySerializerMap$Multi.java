package com.flurry.org.codehaus.jackson.map.ser.impl;
final class PropertySerializerMap$Multi extends com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap {
    private static final int MAX_ENTRIES = 8;
    private final com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$TypeAndSerializer[] _entries;

    public PropertySerializerMap$Multi(com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$TypeAndSerializer[] p1)
    {
        this._entries = p1;
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap newWith(Class p5, com.flurry.org.codehaus.jackson.map.JsonSerializer p6)
    {
        int v1 = this._entries.length;
        if (v1 != 8) {
            com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$TypeAndSerializer[] v0 = new com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$TypeAndSerializer[(v1 + 1)];
            System.arraycopy(this._entries, 0, v0, 0, v1);
            v0[v1] = new com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$TypeAndSerializer(p5, p6);
            this = new com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$Multi;
            this(v0);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer serializerFor(Class p5)
    {
        int v1 = 0;
        while (v1 < this._entries.length) {
            com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$TypeAndSerializer v0 = this._entries[v1];
            if (v0.type != p5) {
                v1++;
            } else {
                com.flurry.org.codehaus.jackson.map.JsonSerializer v3_1 = v0.serializer;
            }
            return v3_1;
        }
        v3_1 = 0;
        return v3_1;
    }
}
