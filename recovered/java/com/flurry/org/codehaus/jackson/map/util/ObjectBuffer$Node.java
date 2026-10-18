package com.flurry.org.codehaus.jackson.map.util;
final class ObjectBuffer$Node {
    final Object[] _data;
    com.flurry.org.codehaus.jackson.map.util.ObjectBuffer$Node _next;

    public ObjectBuffer$Node(Object[] p1)
    {
        this._data = p1;
        return;
    }

    public Object[] getData()
    {
        return this._data;
    }

    public void linkNext(com.flurry.org.codehaus.jackson.map.util.ObjectBuffer$Node p2)
    {
        if (this._next == null) {
            this._next = p2;
            return;
        } else {
            throw new IllegalStateException();
        }
    }

    public com.flurry.org.codehaus.jackson.map.util.ObjectBuffer$Node next()
    {
        return this._next;
    }
}
