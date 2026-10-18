package com.flurry.org.codehaus.jackson;
public abstract class JsonStreamContext {
    protected static final int TYPE_ARRAY = 1;
    protected static final int TYPE_OBJECT = 2;
    protected static final int TYPE_ROOT;
    protected int _index;
    protected int _type;

    protected JsonStreamContext()
    {
        return;
    }

    public final int getCurrentIndex()
    {
        int v0_1;
        if (this._index >= 0) {
            v0_1 = this._index;
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    public abstract String getCurrentName();

    public final int getEntryCount()
    {
        return (this._index + 1);
    }

    public abstract com.flurry.org.codehaus.jackson.JsonStreamContext getParent();

    public final String getTypeDesc()
    {
        String v0_1;
        switch (this._type) {
            case 0:
                v0_1 = "ROOT";
                break;
            case 1:
                v0_1 = "ARRAY";
                break;
            case 2:
                v0_1 = "OBJECT";
                break;
            default:
                v0_1 = "?";
        }
        return v0_1;
    }

    public final boolean inArray()
    {
        int v0 = 1;
        if (this._type != 1) {
            v0 = 0;
        }
        return v0;
    }

    public final boolean inObject()
    {
        int v0_1;
        if (this._type != 2) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public final boolean inRoot()
    {
        int v0_1;
        if (this._type != 0) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }
}
