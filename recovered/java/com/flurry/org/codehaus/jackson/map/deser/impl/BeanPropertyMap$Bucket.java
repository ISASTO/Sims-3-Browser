package com.flurry.org.codehaus.jackson.map.deser.impl;
final class BeanPropertyMap$Bucket {
    public final String key;
    public final com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket next;
    public final com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty value;

    public BeanPropertyMap$Bucket(com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket p1, String p2, com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p3)
    {
        this.next = p1;
        this.key = p2;
        this.value = p3;
        return;
    }
}
