package com.flurry.org.codehaus.jackson.io;
public class SerializedString implements com.flurry.org.codehaus.jackson.SerializableString {
    protected char[] _quotedChars;
    protected byte[] _quotedUTF8Ref;
    protected byte[] _unquotedUTF8Ref;
    protected final String _value;

    public SerializedString(String p1)
    {
        this._value = p1;
        return;
    }

    public final char[] asQuotedChars()
    {
        char[] v0 = this._quotedChars;
        if (v0 == null) {
            v0 = com.flurry.org.codehaus.jackson.io.JsonStringEncoder.getInstance().quoteAsString(this._value);
            this._quotedChars = v0;
        }
        return v0;
    }

    public final byte[] asQuotedUTF8()
    {
        byte[] v0 = this._quotedUTF8Ref;
        if (v0 == null) {
            v0 = com.flurry.org.codehaus.jackson.io.JsonStringEncoder.getInstance().quoteAsUTF8(this._value);
            this._quotedUTF8Ref = v0;
        }
        return v0;
    }

    public final byte[] asUnquotedUTF8()
    {
        byte[] v0 = this._unquotedUTF8Ref;
        if (v0 == null) {
            v0 = com.flurry.org.codehaus.jackson.io.JsonStringEncoder.getInstance().encodeAsUTF8(this._value);
            this._unquotedUTF8Ref = v0;
        }
        return v0;
    }

    public final int charLength()
    {
        return this._value.length();
    }

    public final boolean equals(Object p4)
    {
        boolean v1_0;
        if (p4 != this) {
            if ((p4 != null) && (p4.getClass() == this.getClass())) {
                v1_0 = this._value.equals(((com.flurry.org.codehaus.jackson.io.SerializedString) p4)._value);
            } else {
                v1_0 = 0;
            }
        } else {
            v1_0 = 1;
        }
        return v1_0;
    }

    public final String getValue()
    {
        return this._value;
    }

    public final int hashCode()
    {
        return this._value.hashCode();
    }

    public final String toString()
    {
        return this._value;
    }
}
