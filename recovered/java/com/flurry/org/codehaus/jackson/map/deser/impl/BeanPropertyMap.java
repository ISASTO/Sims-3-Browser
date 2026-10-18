package com.flurry.org.codehaus.jackson.map.deser.impl;
public final class BeanPropertyMap {
    private final com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket[] _buckets;
    private final int _hashMask;
    private final int _size;

    public BeanPropertyMap(java.util.Collection p9)
    {
        this._size = p9.size();
        int v0 = com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap.findSize(this._size);
        this._hashMask = (v0 - 1);
        com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket[] v1 = new com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket[v0];
        java.util.Iterator v2 = p9.iterator();
        while (v2.hasNext()) {
            com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v5_1 = ((com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty) v2.next());
            String v4 = v5_1.getName();
            int v3 = (v4.hashCode() & this._hashMask);
            v1[v3] = new com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket(v1[v3], v4, v5_1);
        }
        this._buckets = v1;
        return;
    }

    private com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty _findWithEquals(String p3, int p4)
    {
        com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket v0 = this._buckets[p4];
        while (v0 != null) {
            if (!p3.equals(v0.key)) {
                v0 = v0.next;
            } else {
                com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v1_1 = v0.value;
            }
            return v1_1;
        }
        v1_1 = 0;
        return v1_1;
    }

    private static final int findSize(int p3)
    {
        int v0;
        if (p3 > 32) {
            v0 = (p3 + (p3 >> 2));
        } else {
            v0 = (p3 + p3);
        }
        int v1 = 2;
        while (v1 < v0) {
            v1 += v1;
        }
        return v1;
    }

    public java.util.Iterator allProperties()
    {
        return new com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$IteratorImpl(this._buckets);
    }

    public void assignIndexes()
    {
        int v3_0 = 0;
        com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket[] v0 = this._buckets;
        int v5 = v0.length;
        int v2 = 0;
        while (v2 < v5) {
            com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket v1 = v0[v2];
            int v4 = v3_0;
            while (v1 != null) {
                int v3_1 = (v4 + 1);
                v1.value.assignIndex(v4);
                v1 = v1.next;
                v4 = v3_1;
            }
            v2++;
            v3_0 = v4;
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty find(String p5)
    {
        com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v2_1;
        int v1 = (p5.hashCode() & this._hashMask);
        com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket v0 = this._buckets[v1];
        if (v0 != null) {
            if (v0.key == p5) {
                v2_1 = v0.value;
                return v2_1;
            }
            do {
                v0 = v0.next;
                if (v0 == null) {
                    v2_1 = this._findWithEquals(p5, v1);
                } else {
                }
            } while(v0.key != p5);
            v2_1 = v0.value;
        } else {
            v2_1 = 0;
        }
        return v2_1;
    }

    public void remove(com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p10)
    {
        String v3 = p10.getName();
        int v2 = (v3.hashCode() & (this._buckets.length - 1));
        int v1 = 0;
        com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket v0 = this._buckets[v2];
        int v5 = 0;
        while (v0 != null) {
            if ((v1 != 0) || (!v0.key.equals(v3))) {
                int v4_1 = new com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket(v5, v0.key, v0.value);
            } else {
                v1 = 1;
                v4_1 = v5;
            }
            v0 = v0.next;
            v5 = v4_1;
        }
        if (v1 != 0) {
            this._buckets[v2] = v5;
            return;
        } else {
            throw new java.util.NoSuchElementException(new StringBuilder().append("No entry \'").append(p10).append("\' found, can\'t remove").toString());
        }
    }

    public void replace(com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p10)
    {
        String v3 = p10.getName();
        int v2 = (v3.hashCode() & (this._buckets.length - 1));
        int v1 = 0;
        com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket v0 = this._buckets[v2];
        int v5 = 0;
        while (v0 != null) {
            if ((v1 != 0) || (!v0.key.equals(v3))) {
                int v4_1 = new com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket(v5, v0.key, v0.value);
            } else {
                v1 = 1;
                v4_1 = v5;
            }
            v0 = v0.next;
            v5 = v4_1;
        }
        if (v1 != 0) {
            this._buckets[v2] = new com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap$Bucket(v5, v3, p10);
            return;
        } else {
            throw new java.util.NoSuchElementException(new StringBuilder().append("No entry \'").append(p10).append("\' found, can\'t replace").toString());
        }
    }

    public int size()
    {
        return this._size;
    }
}
