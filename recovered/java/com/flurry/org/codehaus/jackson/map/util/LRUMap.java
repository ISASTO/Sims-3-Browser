package com.flurry.org.codehaus.jackson.map.util;
public class LRUMap extends java.util.LinkedHashMap {
    protected final int _maxEntries;

    public LRUMap(int p3, int p4)
    {
        super(p3, 1061997773, 1);
        super._maxEntries = p4;
        return;
    }

    protected boolean removeEldestEntry(java.util.Map$Entry p3)
    {
        int v0_1;
        if (this.size() <= this._maxEntries) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }
}
