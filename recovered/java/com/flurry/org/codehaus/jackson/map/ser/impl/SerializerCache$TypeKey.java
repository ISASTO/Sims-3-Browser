package com.flurry.org.codehaus.jackson.map.ser.impl;
public final class SerializerCache$TypeKey {
    protected Class _class;
    protected int _hashCode;
    protected boolean _isTyped;
    protected com.flurry.org.codehaus.jackson.type.JavaType _type;

    public SerializerCache$TypeKey(com.flurry.org.codehaus.jackson.type.JavaType p2, boolean p3)
    {
        this._type = p2;
        this._class = 0;
        this._isTyped = p3;
        this._hashCode = com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey.hash(p2, p3);
        return;
    }

    public SerializerCache$TypeKey(Class p2, boolean p3)
    {
        this._class = p2;
        this._type = 0;
        this._isTyped = p3;
        this._hashCode = com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey.hash(p2, p3);
        return;
    }

    private static final int hash(com.flurry.org.codehaus.jackson.type.JavaType p2, boolean p3)
    {
        int v0 = (p2.hashCode() - 1);
        if (p3) {
            v0--;
        }
        return v0;
    }

    private static final int hash(Class p2, boolean p3)
    {
        int v0 = p2.getName().hashCode();
        if (p3) {
            v0++;
        }
        return v0;
    }

    public final boolean equals(Object p6)
    {
        com.flurry.org.codehaus.jackson.type.JavaType v1_0 = 1;
        if (p6 != this) {
            if (((com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey) p6)._isTyped != this._isTyped) {
                v1_0 = 0;
            } else {
                if (this._class == null) {
                    v1_0 = this._type.equals(((com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey) p6)._type);
                } else {
                    if (((com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey) p6)._class != this._class) {
                        v1_0 = 0;
                    }
                }
            }
        }
        return v1_0;
    }

    public final int hashCode()
    {
        return this._hashCode;
    }

    public void resetTyped(com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        this._type = p3;
        this._class = 0;
        this._isTyped = 1;
        this._hashCode = com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey.hash(p3, 1);
        return;
    }

    public void resetTyped(Class p3)
    {
        this._type = 0;
        this._class = p3;
        this._isTyped = 1;
        this._hashCode = com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey.hash(p3, 1);
        return;
    }

    public void resetUntyped(com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        this._type = p3;
        this._class = 0;
        this._isTyped = 0;
        this._hashCode = com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey.hash(p3, 0);
        return;
    }

    public void resetUntyped(Class p3)
    {
        this._type = 0;
        this._class = p3;
        this._isTyped = 0;
        this._hashCode = com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache$TypeKey.hash(p3, 0);
        return;
    }

    public final String toString()
    {
        String v0_5;
        if (this._class == null) {
            v0_5 = new StringBuilder().append("{type: ").append(this._type).append(", typed? ").append(this._isTyped).append("}").toString();
        } else {
            v0_5 = new StringBuilder().append("{class: ").append(this._class.getName()).append(", typed? ").append(this._isTyped).append("}").toString();
        }
        return v0_5;
    }
}
