package com.flurry.org.codehaus.jackson.map.jsontype;
public final class NamedType {
    protected final Class _class;
    protected final int _hashCode;
    protected String _name;

    public NamedType(Class p2)
    {
        this(p2, 0);
        return;
    }

    public NamedType(Class p2, String p3)
    {
        this._class = p2;
        this._hashCode = p2.getName().hashCode();
        this.setName(p3);
        return;
    }

    public boolean equals(Object p5)
    {
        int v0 = 1;
        if (p5 != this) {
            if (p5 != null) {
                if (p5.getClass() == this.getClass()) {
                    if (this._class != ((com.flurry.org.codehaus.jackson.map.jsontype.NamedType) p5)._class) {
                        v0 = 0;
                    }
                } else {
                    v0 = 0;
                }
            } else {
                v0 = 0;
            }
        }
        return v0;
    }

    public String getName()
    {
        return this._name;
    }

    public Class getType()
    {
        return this._class;
    }

    public boolean hasName()
    {
        int v0_1;
        if (this._name == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public int hashCode()
    {
        return this._hashCode;
    }

    public void setName(String p2)
    {
        if ((p2 == 0) || (p2.length() == 0)) {
            p2 = 0;
        }
        this._name = p2;
        return;
    }

    public String toString()
    {
        String v0_8;
        String v1_1 = new StringBuilder().append("[NamedType, class ").append(this._class.getName()).append(", name: ");
        if (this._name != null) {
            v0_8 = new StringBuilder().append("\'").append(this._name).append("\'").toString();
        } else {
            v0_8 = "null";
        }
        return v1_1.append(v0_8).append("]").toString();
    }
}
