package com.flurry.org.codehaus.jackson.impl;
public class JsonWriteContext extends com.flurry.org.codehaus.jackson.JsonStreamContext {
    public static final int STATUS_EXPECT_NAME = 5;
    public static final int STATUS_EXPECT_VALUE = 4;
    public static final int STATUS_OK_AFTER_COLON = 2;
    public static final int STATUS_OK_AFTER_COMMA = 1;
    public static final int STATUS_OK_AFTER_SPACE = 3;
    public static final int STATUS_OK_AS_IS;
    protected com.flurry.org.codehaus.jackson.impl.JsonWriteContext _child;
    protected String _currentName;
    protected final com.flurry.org.codehaus.jackson.impl.JsonWriteContext _parent;

    protected JsonWriteContext(int p2, com.flurry.org.codehaus.jackson.impl.JsonWriteContext p3)
    {
        this._child = 0;
        this._type = p2;
        this._parent = p3;
        this._index = -1;
        return;
    }

    public static com.flurry.org.codehaus.jackson.impl.JsonWriteContext createRootContext()
    {
        return new com.flurry.org.codehaus.jackson.impl.JsonWriteContext(0, 0);
    }

    private final com.flurry.org.codehaus.jackson.impl.JsonWriteContext reset(int p2)
    {
        this._type = p2;
        this._index = -1;
        this._currentName = 0;
        return this;
    }

    protected final void appendDesc(StringBuilder p4)
    {
        if (this._type != 2) {
            if (this._type != 1) {
                p4.append("/");
            } else {
                p4.append(91);
                p4.append(this.getCurrentIndex());
                p4.append(93);
            }
        } else {
            p4.append(123);
            if (this._currentName == null) {
                p4.append(63);
            } else {
                p4.append(34);
                p4.append(this._currentName);
                p4.append(34);
            }
            p4.append(125);
        }
        return;
    }

    public final com.flurry.org.codehaus.jackson.impl.JsonWriteContext createChildArrayContext()
    {
        com.flurry.org.codehaus.jackson.impl.JsonWriteContext v1_1;
        com.flurry.org.codehaus.jackson.impl.JsonWriteContext v0_0 = this._child;
        if (v0_0 != null) {
            v1_1 = v0_0.reset(1);
        } else {
            com.flurry.org.codehaus.jackson.impl.JsonWriteContext v0_2 = new com.flurry.org.codehaus.jackson.impl.JsonWriteContext(1, this);
            this._child = v0_2;
            v1_1 = v0_2;
        }
        return v1_1;
    }

    public final com.flurry.org.codehaus.jackson.impl.JsonWriteContext createChildObjectContext()
    {
        com.flurry.org.codehaus.jackson.impl.JsonWriteContext v1_1;
        com.flurry.org.codehaus.jackson.impl.JsonWriteContext v0_0 = this._child;
        if (v0_0 != null) {
            v1_1 = v0_0.reset(2);
        } else {
            com.flurry.org.codehaus.jackson.impl.JsonWriteContext v0_2 = new com.flurry.org.codehaus.jackson.impl.JsonWriteContext(2, this);
            this._child = v0_2;
            v1_1 = v0_2;
        }
        return v1_1;
    }

    public final String getCurrentName()
    {
        return this._currentName;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.JsonStreamContext getParent()
    {
        return this.getParent();
    }

    public final com.flurry.org.codehaus.jackson.impl.JsonWriteContext getParent()
    {
        return this._parent;
    }

    public final String toString()
    {
        StringBuilder v0_1 = new StringBuilder(64);
        this.appendDesc(v0_1);
        return v0_1.toString();
    }

    public final int writeFieldName(String p4)
    {
        int v0_0 = 4;
        if ((this._type == 2) && (this._currentName == null)) {
            this._currentName = p4;
            if (this._index >= 0) {
                v0_0 = 1;
            } else {
                v0_0 = 0;
            }
        }
        return v0_0;
    }

    public final int writeValue()
    {
        int v1_0 = 0;
        if (this._type != 2) {
            if (this._type != 1) {
                this._index = (this._index + 1);
                if (this._index != 0) {
                    v1_0 = 3;
                }
            } else {
                int v0 = this._index;
                this._index = (this._index + 1);
                if (v0 >= 0) {
                    v1_0 = 1;
                }
            }
        } else {
            if (this._currentName != null) {
                this._currentName = 0;
                this._index = (this._index + 1);
                v1_0 = 2;
            } else {
                v1_0 = 5;
            }
        }
        return v1_0;
    }
}
