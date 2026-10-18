package com.flurry.org.apache.avro;
 class Schema$SeenPair {
    private Object s1;
    private Object s2;

    private Schema$SeenPair(Object p1, Object p2)
    {
        this.s1 = p1;
        this.s2 = p2;
        return;
    }

    synthetic Schema$SeenPair(Object p1, Object p2, com.flurry.org.apache.avro.Schema$1 p3)
    {
        this(p1, p2);
        return;
    }

    public boolean equals(Object p3)
    {
        if ((this.s1 != ((com.flurry.org.apache.avro.Schema$SeenPair) p3).s1) || (this.s2 != ((com.flurry.org.apache.avro.Schema$SeenPair) p3).s2)) {
            int v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public int hashCode()
    {
        return (System.identityHashCode(this.s1) + System.identityHashCode(this.s2));
    }
}
