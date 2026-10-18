package com.flurry.org.codehaus.jackson.io;
public final class UTF32Reader extends com.flurry.org.codehaus.jackson.io.BaseReader {
    final boolean mBigEndian;
    int mByteCount;
    int mCharCount;
    char mSurrogate;

    public UTF32Reader(com.flurry.org.codehaus.jackson.io.IOContext p2, java.io.InputStream p3, byte[] p4, int p5, int p6, boolean p7)
    {
        com.flurry.org.codehaus.jackson.io.UTF32Reader v1_1 = super(p2, p3, p4, p5, p6);
        v1_1.mSurrogate = 0;
        v1_1.mCharCount = 0;
        v1_1.mByteCount = 0;
        v1_1.mBigEndian = p7;
        return;
    }

    private boolean loadMore(int p10)
    {
        int v2_0 = 0;
        this.mByteCount = (this.mByteCount + (this._length - p10));
        if (p10 <= 0) {
            this._ptr = 0;
            int v0_0 = this._in.read(this._buffer);
            if (v0_0 < 1) {
                this._length = 0;
                if (v0_0 >= 0) {
                    this.reportStrangeStream();
                } else {
                    this.freeBuffers();
                    return v2_0;
                }
            }
            this._length = v0_0;
            while (this._length < 4) {
                int v0_1 = this._in.read(this._buffer, this._length, (this._buffer.length - this._length));
                if (v0_1 < 1) {
                    if (v0_1 < 0) {
                        this.freeBuffers();
                        this.reportUnexpectedEOF(this._length, 4);
                    }
                    this.reportStrangeStream();
                }
                this._length = (this._length + v0_1);
            }
            v2_0 = 1;
        } else {
            if (this._ptr > 0) {
                int v1 = 0;
                while (v1 < p10) {
                    this._buffer[v1] = this._buffer[(this._ptr + v1)];
                    v1++;
                }
                this._ptr = 0;
            }
            this._length = p10;
        }
        return v2_0;
    }

    private void reportInvalid(int p6, int p7, String p8)
    {
        throw new java.io.CharConversionException(new StringBuilder().append("Invalid UTF-32 character 0x").append(Integer.toHexString(p6)).append(p8).append(" at char #").append((this.mCharCount + p7)).append(", byte #").append(((this.mByteCount + this._ptr) - 1)).append(")").toString());
    }

    private void reportUnexpectedEOF(int p6, int p7)
    {
        throw new java.io.CharConversionException(new StringBuilder().append("Unexpected EOF in the middle of a 4-byte UTF-32 char: got ").append(p6).append(", needed ").append(p7).append(", at char #").append(this.mCharCount).append(", byte #").append((this.mByteCount + p6)).append(")").toString());
    }

    public bridge synthetic void close()
    {
        super.close();
        return;
    }

    public bridge synthetic int read()
    {
        return super.read();
    }

    public int read(char[] p10, int p11, int p12)
    {
        char v5_0 = -1;
        if (this._buffer != null) {
            if (p12 >= 1) {
                if ((p11 < 0) || ((p11 + p12) > p10.length)) {
                    this.reportBounds(p10, p11, p12);
                }
                int v3;
                int v12_1 = (p12 + p11);
                if (this.mSurrogate == 0) {
                    int v1 = (this._length - this._ptr);
                    if ((v1 < 4) && (!this.loadMore(v1))) {
                        return v5_0;
                    } else {
                        v3 = p11;
                    }
                } else {
                    v3 = (p11 + 1);
                    p11[int v2_1] = this.mSurrogate;
                    this.mSurrogate = 0;
                }
                while (v3 < v12_1) {
                    int v0_0;
                    int v4 = this._ptr;
                    if (!this.mBigEndian) {
                        v0_0 = ((((this._buffer[v4] & 255) | ((this._buffer[(v4 + 1)] & 255) << 8)) | ((this._buffer[(v4 + 2)] & 255) << 16)) | (this._buffer[(v4 + 3)] << 24));
                    } else {
                        v0_0 = ((((this._buffer[v4] << 24) | ((this._buffer[(v4 + 1)] & 255) << 16)) | ((this._buffer[(v4 + 2)] & 255) << 8)) | (this._buffer[(v4 + 3)] & 255));
                    }
                    int v2_0;
                    this._ptr = (this._ptr + 4);
                    if (v0_0 <= 65535) {
                        v2_0 = v3;
                    } else {
                        if (v0_0 > 1114111) {
                            this.reportInvalid(v0_0, (v3 - p11), new StringBuilder().append("(above ").append(Integer.toHexString(1114111)).append(") ").toString());
                        }
                        int v0_1 = (v0_0 - 65536);
                        v2_0 = (v3 + 1);
                        p10[v3] = ((char) (55296 + (v0_1 >> 10)));
                        v0_0 = (56320 | (v0_1 & 1023));
                        if (v2_0 >= v12_1) {
                            this.mSurrogate = ((char) v0_0);
                            int v12_2 = (v2_0 - p11);
                            this.mCharCount = (this.mCharCount + v12_2);
                            v5_0 = v12_2;
                            return v5_0;
                        }
                    }
                    v3 = (v2_0 + 1);
                    p10[v2_0] = ((char) v0_0);
                    if (this._ptr >= this._length) {
                        v2_0 = v3;
                    }
                }
                v2_0 = v3;
            } else {
                v5_0 = p12;
            }
        }
        return v5_0;
    }
}
