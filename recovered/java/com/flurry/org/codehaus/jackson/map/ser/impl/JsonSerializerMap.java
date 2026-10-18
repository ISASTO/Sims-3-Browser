package com.flurry.org.codehaus.jackson.map.ser.impl;
public class JsonSerializerMap {
    private final com.flurry.org.codehaus.jackson.map.ser.impl.JsonSerializerMap$Bucket[] _buckets;
    private final int _size;

    public JsonSerializerMap(java.util.Map p11)
    {
        int v6 = com.flurry.org.codehaus.jackson.map.ser.impl.JsonSerializerMap.findSize(p11.size());
        this._size = v6;
        int v2 = (v6 - 1);
        com.flurry.org.codehaus.jackson.map.ser.impl.JsonSerializerMap$Bucket[] v0 = new com.flurry.org.codehaus.jackson.map.ser.impl.JsonSerializerMap$Bucket[v6];
        java.util.Iterator v3 = p11.entrySet().iterator();
        while (v3.hasNext()) {
            java.util.Map$Entry v1_1 = ((java.util.Map$Entry) v3.next());
            com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey v5_1 = ((com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey) v1_1.getKey());
            int v4 = (v5_1.hashCode() & v2);
            v0[v4] = new com.flurry.org.codehaus.jackson.map.ser.impl.JsonSerializerMap$Bucket(v0[v4], v5_1, ((com.flurry.org.codehaus.jackson.map.JsonSerializer) v1_1.getValue()));
        }
        this._buckets = v0;
        return;
    }

    private static final int findSize(int p3)
    {
        int v0;
        if (p3 > 64) {
            v0 = (p3 + (p3 >> 2));
        } else {
            v0 = (p3 + p3);
        }
        int v1 = 8;
        while (v1 < v0) {
            v1 += v1;
        }
        return v1;
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer find(com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey p6)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v2 = 0;
        com.flurry.org.codehaus.jackson.map.ser.impl.JsonSerializerMap$Bucket v0 = this._buckets[(p6.hashCode() & (this._buckets.length - 1))];
        if (v0 != null) {
            if (p6.equals(v0.key)) {
                v2 = v0.value;
                return v2;
            }
            do {
                v0 = v0.next;
                if (v0 != null) {
                }
            } while(!p6.equals(v0.key));
            v2 = v0.value;
        }
        return v2;
    }

    public int size()
    {
        return this._size;
    }
}
