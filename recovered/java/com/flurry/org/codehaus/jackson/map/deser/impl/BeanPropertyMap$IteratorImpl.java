package com.flurry.org.codehaus.jackson.map.deser.impl;
final class BeanPropertyMap$IteratorImpl implements java.util.Iterator {
    private final com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket[] _buckets;
    private com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket _currentBucket;
    private int _nextBucketIndex;

    public BeanPropertyMap$IteratorImpl(com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket[] p6)
    {
        this._buckets = p6;
        int v2 = 0;
        while (v2 < this._buckets.length) {
            int v1_1 = (v2 + 1);
            com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket v0 = this._buckets[v2];
            if (v0 == null) {
                v2 = v1_1;
            } else {
                this._currentBucket = v0;
            }
            this._nextBucketIndex = v1_1;
            return;
        }
        v1_1 = v2;
        this._nextBucketIndex = v1_1;
        return;
    }

    public boolean hasNext()
    {
        int v0_1;
        if (this._currentBucket == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty next()
    {
        com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket v1 = this._currentBucket;
        if (v1 != null) {
            com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket v0 = v1.next;
            while ((v0 == null) && (this._nextBucketIndex < this._buckets.length)) {
                com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket[] v2_0 = this._buckets;
                int v3_0 = this._nextBucketIndex;
                this._nextBucketIndex = (v3_0 + 1);
                v0 = v2_0[v3_0];
            }
            this._currentBucket = v0;
            return v1.value;
        } else {
            throw new java.util.NoSuchElementException();
        }
    }

    public bridge synthetic Object next()
    {
        return this.next();
    }

    public void remove()
    {
        throw new UnsupportedOperationException();
    }
}
