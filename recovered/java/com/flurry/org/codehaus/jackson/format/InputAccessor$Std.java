package com.flurry.org.codehaus.jackson.format;
public class InputAccessor$Std implements com.flurry.org.codehaus.jackson.format.InputAccessor {
    protected final byte[] _buffer;
    protected int _bufferedAmount;
    protected final java.io.InputStream _in;
    protected int _ptr;

    public InputAccessor$Std(java.io.InputStream p2, byte[] p3)
    {
        this._in = p2;
        this._buffer = p3;
        this._bufferedAmount = 0;
        return;
    }

    public InputAccessor$Std(byte[] p2)
    {
        this._in = 0;
        this._buffer = p2;
        this._bufferedAmount = p2.length;
        return;
    }

    public com.flurry.org.codehaus.jackson.format.DataFormatMatcher createMatcher(com.flurry.org.codehaus.jackson.JsonFactory p7, com.flurry.org.codehaus.jackson.format.MatchStrength p8)
    {
        return new com.flurry.org.codehaus.jackson.format.DataFormatMatcher(this._in, this._buffer, this._bufferedAmount, p7, p8);
    }

    public boolean hasMoreBytes()
    {
        int v2 = 1;
        if (this._ptr >= this._bufferedAmount) {
            int v0 = (this._buffer.length - this._ptr);
            if (v0 >= 1) {
                int v1 = this._in.read(this._buffer, this._ptr, v0);
                if (v1 > 0) {
                    this._bufferedAmount = (this._bufferedAmount + v1);
                } else {
                    v2 = 0;
                }
            } else {
                v2 = 0;
            }
        }
        return v2;
    }

    public byte nextByte()
    {
        if ((this._ptr <= (- this._bufferedAmount)) || (this.hasMoreBytes())) {
            java.io.EOFException v0_5 = this._buffer;
            String v1_10 = this._ptr;
            this._ptr = (v1_10 + 1);
            return v0_5[v1_10];
        } else {
            throw new java.io.EOFException(new StringBuilder().append("Could not read more than ").append(this._ptr).append(" bytes (max buffer size: ").append(this._buffer.length).append(")").toString());
        }
    }

    public void reset()
    {
        this._ptr = 0;
        return;
    }
}
