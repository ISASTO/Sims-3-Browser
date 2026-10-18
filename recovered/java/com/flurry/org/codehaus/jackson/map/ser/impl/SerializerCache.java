package com.flurry.org.codehaus.jackson.map.ser.impl;
public final class SerializerCache {
    private com.flurry.org.codehaus.jackson.map.ser.impl.ReadOnlyClassToSerializerMap _readOnlyMap;
    private java.util.HashMap _sharedMap;

    public SerializerCache()
    {
        this._sharedMap = new java.util.HashMap(64);
        this._readOnlyMap = 0;
        return;
    }

    public void addAndResolveNonTypedSerializer(com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.map.JsonSerializer p5, com.flurry.org.codehaus.jackson.map.SerializerProvider p6)
    {
        try {
            if (this._sharedMap.put(new com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey(p4, 0), p5) == null) {
                this._readOnlyMap = 0;
            }
        } catch (boolean v0_1) {
            throw v0_1;
        }
        if ((p5 instanceof com.flurry.org.codehaus.jackson.map.ResolvableSerializer)) {
            ((com.flurry.org.codehaus.jackson.map.ResolvableSerializer) p5).resolve(p6);
        }
        return;
    }

    public void addAndResolveNonTypedSerializer(Class p4, com.flurry.org.codehaus.jackson.map.JsonSerializer p5, com.flurry.org.codehaus.jackson.map.SerializerProvider p6)
    {
        try {
            if (this._sharedMap.put(new com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey(p4, 0), p5) == null) {
                this._readOnlyMap = 0;
            }
        } catch (boolean v0_1) {
            throw v0_1;
        }
        if ((p5 instanceof com.flurry.org.codehaus.jackson.map.ResolvableSerializer)) {
            ((com.flurry.org.codehaus.jackson.map.ResolvableSerializer) p5).resolve(p6);
        }
        return;
    }

    public void addTypedSerializer(com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.map.JsonSerializer p5)
    {
        try {
            if (this._sharedMap.put(new com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey(p4, 1), p5) == null) {
                this._readOnlyMap = 0;
            }
        } catch (int v0_1) {
            throw v0_1;
        }
        return;
    }

    public void addTypedSerializer(Class p4, com.flurry.org.codehaus.jackson.map.JsonSerializer p5)
    {
        try {
            if (this._sharedMap.put(new com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey(p4, 1), p5) == null) {
                this._readOnlyMap = 0;
            }
        } catch (int v0_1) {
            throw v0_1;
        }
        return;
    }

    public declared_synchronized void flush()
    {
        try {
            this._sharedMap.clear();
            return;
        } catch (Throwable v0_1) {
            throw v0_1;
        }
    }

    public com.flurry.org.codehaus.jackson.map.ser.impl.ReadOnlyClassToSerializerMap getReadOnlyLookupMap()
    {
        com.flurry.org.codehaus.jackson.map.ser.impl.ReadOnlyClassToSerializerMap v0 = this._readOnlyMap;
        if (v0 == null) {
            v0 = com.flurry.org.codehaus.jackson.map.ser.impl.ReadOnlyClassToSerializerMap.from(this._sharedMap);
            this._readOnlyMap = v0;
        }
        return v0.instance();
    }

    public declared_synchronized int size()
    {
        try {
            return this._sharedMap.size();
        } catch (Throwable v0_2) {
            throw v0_2;
        }
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer typedValueSerializer(com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        try {
            return ((com.flurry.org.codehaus.jackson.map.JsonSerializer) this._sharedMap.get(new com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey(p4, 1)));
        } catch (Throwable v0_3) {
            throw v0_3;
        }
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer typedValueSerializer(Class p4)
    {
        try {
            return ((com.flurry.org.codehaus.jackson.map.JsonSerializer) this._sharedMap.get(new com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey(p4, 1)));
        } catch (Throwable v0_3) {
            throw v0_3;
        }
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer untypedValueSerializer(com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        try {
            return ((com.flurry.org.codehaus.jackson.map.JsonSerializer) this._sharedMap.get(new com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey(p4, 0)));
        } catch (Throwable v0_3) {
            throw v0_3;
        }
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer untypedValueSerializer(Class p4)
    {
        try {
            return ((com.flurry.org.codehaus.jackson.map.JsonSerializer) this._sharedMap.get(new com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey(p4, 0)));
        } catch (Throwable v0_3) {
            throw v0_3;
        }
    }
}
