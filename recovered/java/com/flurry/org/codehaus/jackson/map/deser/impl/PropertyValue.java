package com.flurry.org.codehaus.jackson.map.deser.impl;
public abstract class PropertyValue {
    public final com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValue next;
    public final Object value;

    protected PropertyValue(com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValue p1, Object p2)
    {
        this.next = p1;
        this.value = p2;
        return;
    }

    public abstract void assign(Object p0);
}
