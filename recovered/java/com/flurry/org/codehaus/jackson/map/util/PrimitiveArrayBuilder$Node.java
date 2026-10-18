package com.flurry.org.codehaus.jackson.map.util;
final class PrimitiveArrayBuilder$Node {
    final Object _data;
    final int _dataLength;
    com.flurry.org.codehaus.jackson.map.util.PrimitiveArrayBuilder$Node _next;

    public PrimitiveArrayBuilder$Node(Object p1, int p2)
    {
        this._data = p1;
        this._dataLength = p2;
        return;
    }

    public int copyData(Object p4, int p5)
    {
        System.arraycopy(this._data, 0, p4, p5, this._dataLength);
        return (p5 + this._dataLength);
    }

    public Object getData()
    {
        return this._data;
    }

    public void linkNext(com.flurry.org.codehaus.jackson.map.util.PrimitiveArrayBuilder$Node p2)
    {
        if (this._next == null) {
            this._next = p2;
            return;
        } else {
            throw new IllegalStateException();
        }
    }

    public com.flurry.org.codehaus.jackson.map.util.PrimitiveArrayBuilder$Node next()
    {
        return this._next;
    }
}
