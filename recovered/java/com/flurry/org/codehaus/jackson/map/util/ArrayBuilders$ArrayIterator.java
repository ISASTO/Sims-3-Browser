package com.flurry.org.codehaus.jackson.map.util;
final class ArrayBuilders$ArrayIterator implements java.lang.Iterable, java.util.Iterator {
    private final Object[] _array;
    private int _index;

    public ArrayBuilders$ArrayIterator(Object[] p2)
    {
        this._array = p2;
        this._index = 0;
        return;
    }

    public boolean hasNext()
    {
        int v0_1;
        if (this._index >= this._array.length) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public java.util.Iterator iterator()
    {
        return this;
    }

    public Object next()
    {
        if (this._index < this._array.length) {
            Object v0_3 = this._array;
            int v1_2 = this._index;
            this._index = (v1_2 + 1);
            return v0_3[v1_2];
        } else {
            throw new java.util.NoSuchElementException();
        }
    }

    public void remove()
    {
        throw new UnsupportedOperationException();
    }
}
