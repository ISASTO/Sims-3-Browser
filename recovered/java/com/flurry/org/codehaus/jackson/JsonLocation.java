package com.flurry.org.codehaus.jackson;
public class JsonLocation implements java.io.Serializable {
    public static final com.flurry.org.codehaus.jackson.JsonLocation NA = None;
    private static final long serialVersionUID = 1;
    final int _columnNr;
    final int _lineNr;
    final Object _sourceRef;
    final long _totalBytes;
    final long _totalChars;

    static JsonLocation()
    {
        com.flurry.org.codehaus.jackson.JsonLocation.NA = new com.flurry.org.codehaus.jackson.JsonLocation("N/A", -1, -1, -1, -1);
        return;
    }

    public JsonLocation(Object p9, long p10, int p12, int p13)
    {
        this(p9, -1, p10, p12, p13);
        return;
    }

    public JsonLocation(Object p1, long p2, long p4, int p6, int p7)
    {
        this._sourceRef = p1;
        this._totalBytes = p2;
        this._totalChars = p4;
        this._lineNr = p6;
        this._columnNr = p7;
        return;
    }

    public boolean equals(Object p8)
    {
        int v1 = 1;
        int v2 = 0;
        if (p8 != this) {
            if ((p8 != null) && ((p8 instanceof com.flurry.org.codehaus.jackson.JsonLocation))) {
                if (this._sourceRef != null) {
                    if (!this._sourceRef.equals(((com.flurry.org.codehaus.jackson.JsonLocation) p8)._sourceRef)) {
                        return v2;
                    }
                } else {
                    if (((com.flurry.org.codehaus.jackson.JsonLocation) p8)._sourceRef != null) {
                        return v2;
                    }
                }
                if ((this._lineNr != ((com.flurry.org.codehaus.jackson.JsonLocation) p8)._lineNr) || ((this._columnNr != ((com.flurry.org.codehaus.jackson.JsonLocation) p8)._columnNr) || ((this._totalChars != ((com.flurry.org.codehaus.jackson.JsonLocation) p8)._totalChars) || (this.getByteOffset() != ((com.flurry.org.codehaus.jackson.JsonLocation) p8).getByteOffset())))) {
                    v1 = 0;
                }
                v2 = v1;
            }
        } else {
            v2 = 1;
        }
        return v2;
    }

    public long getByteOffset()
    {
        return this._totalBytes;
    }

    public long getCharOffset()
    {
        return this._totalChars;
    }

    public int getColumnNr()
    {
        return this._columnNr;
    }

    public int getLineNr()
    {
        return this._lineNr;
    }

    public Object getSourceRef()
    {
        return this._sourceRef;
    }

    public int hashCode()
    {
        int v0_2;
        if (this._sourceRef != null) {
            v0_2 = this._sourceRef.hashCode();
        } else {
            v0_2 = 1;
        }
        return ((((v0_2 ^ this._lineNr) + this._columnNr) ^ ((int) this._totalChars)) + ((int) this._totalBytes));
    }

    public String toString()
    {
        StringBuilder v0_1 = new StringBuilder(80);
        v0_1.append("[Source: ");
        if (this._sourceRef != null) {
            v0_1.append(this._sourceRef.toString());
        } else {
            v0_1.append("UNKNOWN");
        }
        v0_1.append("; line: ");
        v0_1.append(this._lineNr);
        v0_1.append(", column: ");
        v0_1.append(this._columnNr);
        v0_1.append(93);
        return v0_1.toString();
    }
}
