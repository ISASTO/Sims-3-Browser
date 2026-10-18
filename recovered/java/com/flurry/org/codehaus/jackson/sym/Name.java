package com.flurry.org.codehaus.jackson.sym;
public abstract class Name {
    protected final int _hashCode;
    protected final String _name;

    protected Name(String p1, int p2)
    {
        this._name = p1;
        this._hashCode = p2;
        return;
    }

    public abstract boolean equals(int p0);

    public abstract boolean equals(int p0, int p1);

    public boolean equals(Object p2)
    {
        int v0;
        if (p2 != this) {
            v0 = 0;
        } else {
            v0 = 1;
        }
        return v0;
    }

    public abstract boolean equals(int[] p0, int p1);

    public String getName()
    {
        return this._name;
    }

    public final int hashCode()
    {
        return this._hashCode;
    }

    public String toString()
    {
        return this._name;
    }
}
