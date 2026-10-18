package com.flurry.org.codehaus.jackson.map.type;
public final class ClassKey implements java.lang.Comparable {
    private Class _class;
    private String _className;
    private int _hashCode;

    public ClassKey()
    {
        this._class = 0;
        this._className = 0;
        this._hashCode = 0;
        return;
    }

    public ClassKey(Class p2)
    {
        this._class = p2;
        this._className = p2.getName();
        this._hashCode = this._className.hashCode();
        return;
    }

    public int compareTo(com.flurry.org.codehaus.jackson.map.type.ClassKey p3)
    {
        return this._className.compareTo(p3._className);
    }

    public bridge synthetic int compareTo(Object p2)
    {
        return this.compareTo(((com.flurry.org.codehaus.jackson.map.type.ClassKey) p2));
    }

    public boolean equals(Object p6)
    {
        int v1 = 1;
        if (p6 != this) {
            if (p6 != null) {
                if (p6.getClass() == this.getClass()) {
                    if (((com.flurry.org.codehaus.jackson.map.type.ClassKey) p6)._class != this._class) {
                        v1 = 0;
                    }
                } else {
                    v1 = 0;
                }
            } else {
                v1 = 0;
            }
        }
        return v1;
    }

    public int hashCode()
    {
        return this._hashCode;
    }

    public void reset(Class p2)
    {
        this._class = p2;
        this._className = p2.getName();
        this._hashCode = this._className.hashCode();
        return;
    }

    public String toString()
    {
        return this._className;
    }
}
