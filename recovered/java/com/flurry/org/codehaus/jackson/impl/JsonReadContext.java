package com.flurry.org.codehaus.jackson.impl;
public final class JsonReadContext extends com.flurry.org.codehaus.jackson.JsonStreamContext {
    protected com.flurry.org.codehaus.jackson.impl.JsonReadContext _child;
    protected int _columnNr;
    protected String _currentName;
    protected int _lineNr;
    protected final com.flurry.org.codehaus.jackson.impl.JsonReadContext _parent;

    public JsonReadContext(com.flurry.org.codehaus.jackson.impl.JsonReadContext p2, int p3, int p4, int p5)
    {
        this._child = 0;
        this._type = p3;
        this._parent = p2;
        this._lineNr = p4;
        this._columnNr = p5;
        this._index = -1;
        return;
    }

    public static com.flurry.org.codehaus.jackson.impl.JsonReadContext createRootContext()
    {
        return new com.flurry.org.codehaus.jackson.impl.JsonReadContext(0, 0, 1, 0);
    }

    public static com.flurry.org.codehaus.jackson.impl.JsonReadContext createRootContext(int p3, int p4)
    {
        return new com.flurry.org.codehaus.jackson.impl.JsonReadContext(0, 0, p3, p4);
    }

    public final com.flurry.org.codehaus.jackson.impl.JsonReadContext createChildArrayContext(int p4, int p5)
    {
        com.flurry.org.codehaus.jackson.impl.JsonReadContext v1;
        com.flurry.org.codehaus.jackson.impl.JsonReadContext v0_0 = this._child;
        if (v0_0 != null) {
            v0_0.reset(1, p4, p5);
            v1 = v0_0;
        } else {
            com.flurry.org.codehaus.jackson.impl.JsonReadContext v0_2 = new com.flurry.org.codehaus.jackson.impl.JsonReadContext(this, 1, p4, p5);
            this._child = v0_2;
            v1 = v0_2;
        }
        return v1;
    }

    public final com.flurry.org.codehaus.jackson.impl.JsonReadContext createChildObjectContext(int p4, int p5)
    {
        com.flurry.org.codehaus.jackson.impl.JsonReadContext v1;
        com.flurry.org.codehaus.jackson.impl.JsonReadContext v0_0 = this._child;
        if (v0_0 != null) {
            v0_0.reset(2, p4, p5);
            v1 = v0_0;
        } else {
            com.flurry.org.codehaus.jackson.impl.JsonReadContext v0_2 = new com.flurry.org.codehaus.jackson.impl.JsonReadContext(this, 2, p4, p5);
            this._child = v0_2;
            v1 = v0_2;
        }
        return v1;
    }

    public final boolean expectComma()
    {
        int v1_2;
        int v0 = (this._index + 1);
        this._index = v0;
        if ((this._type == 0) || (v0 <= 0)) {
            v1_2 = 0;
        } else {
            v1_2 = 1;
        }
        return v1_2;
    }

    public final String getCurrentName()
    {
        return this._currentName;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.JsonStreamContext getParent()
    {
        return this.getParent();
    }

    public final com.flurry.org.codehaus.jackson.impl.JsonReadContext getParent()
    {
        return this._parent;
    }

    public final com.flurry.org.codehaus.jackson.JsonLocation getStartLocation(Object p7)
    {
        return new com.flurry.org.codehaus.jackson.JsonLocation(p7, -1, this._lineNr, this._columnNr);
    }

    protected final void reset(int p2, int p3, int p4)
    {
        this._type = p2;
        this._index = -1;
        this._lineNr = p3;
        this._columnNr = p4;
        this._currentName = 0;
        return;
    }

    public void setCurrentName(String p1)
    {
        this._currentName = p1;
        return;
    }

    public final String toString()
    {
        StringBuilder v0_1 = new StringBuilder(64);
        switch (this._type) {
            case 0:
                v0_1.append("/");
                break;
            case 1:
                v0_1.append(91);
                v0_1.append(this.getCurrentIndex());
                v0_1.append(93);
                break;
            case 2:
                v0_1.append(123);
                if (this._currentName == null) {
                    v0_1.append(63);
                } else {
                    v0_1.append(34);
                    com.flurry.org.codehaus.jackson.util.CharTypes.appendQuoted(v0_1, this._currentName);
                    v0_1.append(34);
                }
                v0_1.append(125);
                break;
        }
        return v0_1.toString();
    }
}
