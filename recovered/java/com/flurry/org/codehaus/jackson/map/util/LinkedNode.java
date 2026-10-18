package com.flurry.org.codehaus.jackson.map.util;
public final class LinkedNode {
    final com.flurry.org.codehaus.jackson.map.util.LinkedNode _next;
    final Object _value;

    public LinkedNode(Object p1, com.flurry.org.codehaus.jackson.map.util.LinkedNode p2)
    {
        this._value = p1;
        this._next = p2;
        return;
    }

    public static boolean contains(com.flurry.org.codehaus.jackson.map.util.LinkedNode p1, Object p2)
    {
        while (p1 != null) {
            if (p1.value() != p2) {
                p1 = p1.next();
            } else {
                int v0_0 = 1;
            }
            return v0_0;
        }
        v0_0 = 0;
        return v0_0;
    }

    public com.flurry.org.codehaus.jackson.map.util.LinkedNode next()
    {
        return this._next;
    }

    public Object value()
    {
        return this._value;
    }
}
