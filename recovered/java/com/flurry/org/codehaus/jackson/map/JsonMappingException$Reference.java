package com.flurry.org.codehaus.jackson.map;
public class JsonMappingException$Reference implements java.io.Serializable {
    private static final long serialVersionUID = 1;
    protected String _fieldName;
    protected Object _from;
    protected int _index;

    protected JsonMappingException$Reference()
    {
        this._index = -1;
        return;
    }

    public JsonMappingException$Reference(Object p2)
    {
        this._index = -1;
        this._from = p2;
        return;
    }

    public JsonMappingException$Reference(Object p2, int p3)
    {
        this._index = -1;
        this._from = p2;
        this._index = p3;
        return;
    }

    public JsonMappingException$Reference(Object p3, String p4)
    {
        this._index = -1;
        this._from = p3;
        if (p4 != null) {
            this._fieldName = p4;
            return;
        } else {
            throw new NullPointerException("Can not pass null fieldName");
        }
    }

    public String getFieldName()
    {
        return this._fieldName;
    }

    public Object getFrom()
    {
        return this._from;
    }

    public int getIndex()
    {
        return this._index;
    }

    public void setFieldName(String p1)
    {
        this._fieldName = p1;
        return;
    }

    public void setFrom(Object p1)
    {
        this._from = p1;
        return;
    }

    public void setIndex(int p1)
    {
        this._index = p1;
        return;
    }

    public String toString()
    {
        Class v0;
        StringBuilder v2_1 = new StringBuilder();
        if (!(this._from instanceof Class)) {
            v0 = this._from.getClass();
        } else {
            v0 = ((Class) this._from);
        }
        Package v1 = v0.getPackage();
        if (v1 != null) {
            v2_1.append(v1.getName());
            v2_1.append(46);
        }
        v2_1.append(v0.getSimpleName());
        v2_1.append(91);
        if (this._fieldName == null) {
            if (this._index < 0) {
                v2_1.append(63);
            } else {
                v2_1.append(this._index);
            }
        } else {
            v2_1.append(34);
            v2_1.append(this._fieldName);
            v2_1.append(34);
        }
        v2_1.append(93);
        return v2_1.toString();
    }
}
