package com.flurry.org.codehaus.jackson.map.ser.impl;
final class JsonSerializerMap$Bucket {
    public final com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey key;
    public final com.flurry.org.codehaus.jackson.map.ser.impl.JsonSerializerMap$Bucket next;
    public final com.flurry.org.codehaus.jackson.map.JsonSerializer value;

    public JsonSerializerMap$Bucket(com.flurry.org.codehaus.jackson.map.ser.impl.JsonSerializerMap$Bucket p1, com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey p2, com.flurry.org.codehaus.jackson.map.JsonSerializer p3)
    {
        this.next = p1;
        this.key = p2;
        this.value = p3;
        return;
    }
}
