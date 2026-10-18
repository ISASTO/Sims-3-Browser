package com.flurry.org.codehaus.jackson.sym;
final class BytesToNameCanonicalizer$Bucket {
    protected final com.flurry.org.codehaus.jackson.sym.Name _name;
    protected final com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket _next;

    BytesToNameCanonicalizer$Bucket(com.flurry.org.codehaus.jackson.sym.Name p1, com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket p2)
    {
        this._name = p1;
        this._next = p2;
        return;
    }

    public com.flurry.org.codehaus.jackson.sym.Name find(int p4, int p5, int p6)
    {
        if ((this._name.hashCode() != p4) || (!this._name.equals(p5, p6))) {
            com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket v0 = this._next;
            while (v0 != null) {
                int v1 = v0._name;
                if ((v1.hashCode() != p4) || (!v1.equals(p5, p6))) {
                    v0 = v0._next;
                }
            }
            v1 = 0;
        } else {
            v1 = this._name;
        }
        return v1;
    }

    public com.flurry.org.codehaus.jackson.sym.Name find(int p4, int[] p5, int p6)
    {
        if ((this._name.hashCode() != p4) || (!this._name.equals(p5, p6))) {
            com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket v0 = this._next;
            while (v0 != null) {
                int v1 = v0._name;
                if ((v1.hashCode() != p4) || (!v1.equals(p5, p6))) {
                    v0 = v0._next;
                }
            }
            v1 = 0;
        } else {
            v1 = this._name;
        }
        return v1;
    }

    public int length()
    {
        int v1 = 1;
        com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket v0 = this._next;
        while (v0 != null) {
            v1++;
            v0 = v0._next;
        }
        return v1;
    }
}
