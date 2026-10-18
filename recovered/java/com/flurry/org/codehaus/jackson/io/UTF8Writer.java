package com.flurry.org.codehaus.jackson.io;
public final class UTF8Writer extends java.io.Writer {
    static final int SURR1_FIRST = 55296;
    static final int SURR1_LAST = 56319;
    static final int SURR2_FIRST = 56320;
    static final int SURR2_LAST = 57343;
    protected final com.flurry.org.codehaus.jackson.io.IOContext _context;
    java.io.OutputStream _out;
    byte[] _outBuffer;
    final int _outBufferEnd;
    int _outPtr;
    int _surrogate;

    public UTF8Writer(com.flurry.org.codehaus.jackson.io.IOContext p3, java.io.OutputStream p4)
    {
        this._surrogate = 0;
        this._context = p3;
        this._out = p4;
        this._outBuffer = p3.allocWriteEncodingBuffer();
        this._outBufferEnd = (this._outBuffer.length - 4);
        this._outPtr = 0;
        return;
    }

    private int convertSurrogate(int p5)
    {
        int v0 = this._surrogate;
        this._surrogate = 0;
        if ((p5 >= 56320) && (p5 <= 57343)) {
            return ((65536 + ((v0 - 55296) << 10)) + (p5 - 56320));
        } else {
            throw new java.io.IOException(new StringBuilder().append("Broken surrogate pair: first char 0x").append(Integer.toHexString(v0)).append(", second 0x").append(Integer.toHexString(p5)).append("; illegal combination").toString());
        }
    }

    private void throwIllegal(int p4)
    {
        if (p4 <= 1114111) {
            if (p4 < 55296) {
                throw new java.io.IOException(new StringBuilder().append("Illegal character point (0x").append(Integer.toHexString(p4)).append(") to output").toString());
            } else {
                if (p4 > 56319) {
                    throw new java.io.IOException(new StringBuilder().append("Unmatched second part of surrogate pair (0x").append(Integer.toHexString(p4)).append(")").toString());
                } else {
                    throw new java.io.IOException(new StringBuilder().append("Unmatched first part of surrogate pair (0x").append(Integer.toHexString(p4)).append(")").toString());
                }
            }
        } else {
            throw new java.io.IOException(new StringBuilder().append("Illegal character point (0x").append(Integer.toHexString(p4)).append(") to output; max is 0x10FFFF as per RFC 4627").toString());
        }
    }

    public java.io.Writer append(char p1)
    {
        this.write(p1);
        return this;
    }

    public bridge synthetic Appendable append(char p2)
    {
        return this.append(p2);
    }

    public void close()
    {
        if (this._out != null) {
            if (this._outPtr > 0) {
                this._out.write(this._outBuffer, 0, this._outPtr);
                this._outPtr = 0;
            }
            java.io.OutputStream v2 = this._out;
            this._out = 0;
            byte[] v0 = this._outBuffer;
            if (v0 != null) {
                this._outBuffer = 0;
                this._context.releaseWriteEncodingBuffer(v0);
            }
            v2.close();
            int v1 = this._surrogate;
            this._surrogate = 0;
            if (v1 > 0) {
                this.throwIllegal(v1);
            }
        }
        return;
    }

    public void flush()
    {
        if (this._out != null) {
            if (this._outPtr > 0) {
                this._out.write(this._outBuffer, 0, this._outPtr);
                this._outPtr = 0;
            }
            this._out.flush();
        }
        return;
    }

    public void write(int p7)
    {
        if (this._surrogate <= 0) {
            if ((p7 < 55296) || (p7 > 57343)) {
                if (this._outPtr >= this._outBufferEnd) {
                    this._out.write(this._outBuffer, 0, this._outPtr);
                    this._outPtr = 0;
                }
                if (p7 >= 128) {
                    int v0_2;
                    int v0_0 = this._outPtr;
                    if (p7 >= 2048) {
                        if (p7 > 65535) {
                            if (p7 > 1114111) {
                                this.throwIllegal(p7);
                            }
                            int v1_0 = (v0_0 + 1);
                            this._outBuffer[v0_0] = ((byte) ((p7 >> 18) | 240));
                            int v0_1 = (v1_0 + 1);
                            this._outBuffer[v1_0] = ((byte) (((p7 >> 12) & 63) | 128));
                            int v1_1 = (v0_1 + 1);
                            this._outBuffer[v0_1] = ((byte) (((p7 >> 6) & 63) | 128));
                            v0_2 = (v1_1 + 1);
                            this._outBuffer[v1_1] = ((byte) ((p7 & 63) | 128));
                        } else {
                            int v1_2 = (v0_0 + 1);
                            this._outBuffer[v0_0] = ((byte) ((p7 >> 12) | 224));
                            int v0_3 = (v1_2 + 1);
                            this._outBuffer[v1_2] = ((byte) (((p7 >> 6) & 63) | 128));
                            int v1_3 = (v0_3 + 1);
                            this._outBuffer[v0_3] = ((byte) ((p7 & 63) | 128));
                            v0_2 = v1_3;
                        }
                    } else {
                        int v1_4 = (v0_0 + 1);
                        this._outBuffer[v0_0] = ((byte) ((p7 >> 6) | 192));
                        v0_2 = (v1_4 + 1);
                        this._outBuffer[v1_4] = ((byte) ((p7 & 63) | 128));
                    }
                    this._outPtr = v0_2;
                } else {
                    byte[] v2_19 = this._outBuffer;
                    byte v3_32 = this._outPtr;
                    this._outPtr = (v3_32 + 1);
                    v2_19[v3_32] = ((byte) p7);
                }
            } else {
                if (p7 > 56319) {
                    this.throwIllegal(p7);
                }
                this._surrogate = p7;
            }
        } else {
            p7 = this.convertSurrogate(p7);
        }
        return;
    }

    public void write(String p3)
    {
        this.write(p3, 0, p3.length());
        return;
    }

    public void write(String p13, int p14, int p15)
    {
        if (p15 >= 2) {
            if (this._surrogate > 0) {
                int v3_1 = (p14 + 1);
                p15--;
                this.write(this.convertSurrogate(p13.charAt(p14)));
                p14 = v3_1;
            }
            int v6_0 = this._outPtr;
            byte[] v4 = this._outBuffer;
            int v5 = this._outBufferEnd;
            int v15_1 = (p15 + p14);
            int v3_0 = p14;
            while (v3_0 < v15_1) {
                if (v6_0 >= v5) {
                    this._out.write(v4, 0, v6_0);
                    v6_0 = 0;
                }
                int v7_2;
                int v14_2 = (v3_0 + 1);
                int v0_0 = p13.charAt(v3_0);
                if (v0_0 >= 128) {
                    v7_2 = v6_0;
                    v3_0 = v14_2;
                } else {
                    v7_2 = (v6_0 + 1);
                    v4[v6_0] = ((byte) v0_0);
                    int v1_0 = (v15_1 - v14_2);
                    int v2 = (v5 - v7_2);
                    if (v1_0 > v2) {
                        v1_0 = v2;
                    }
                    int v1_1 = (v1_0 + v14_2);
                    v3_0 = v14_2;
                    while (v3_0 < v1_1) {
                        int v14_3 = (v3_0 + 1);
                        v0_0 = p13.charAt(v3_0);
                        if (v0_0 < 128) {
                            int v6_2 = (v7_2 + 1);
                            v4[v7_2] = ((byte) v0_0);
                            v7_2 = v6_2;
                            v3_0 = v14_3;
                        } else {
                            v3_0 = v14_3;
                        }
                    }
                    v6_0 = v7_2;
                }
                int v14_1;
                if (v0_0 >= 2048) {
                    if ((v0_0 >= 55296) && (v0_0 <= 57343)) {
                        if (v0_0 > 56319) {
                            this._outPtr = v7_2;
                            this.throwIllegal(v0_0);
                        }
                        this._surrogate = v0_0;
                        if (v3_0 < v15_1) {
                            v14_1 = (v3_0 + 1);
                            int v0_1 = this.convertSurrogate(p13.charAt(v3_0));
                            if (v0_1 > 1114111) {
                                this._outPtr = v7_2;
                                this.throwIllegal(v0_1);
                            }
                            int v6_3 = (v7_2 + 1);
                            v4[v7_2] = ((byte) ((v0_1 >> 18) | 240));
                            int v7_3 = (v6_3 + 1);
                            v4[v6_3] = ((byte) (((v0_1 >> 12) & 63) | 128));
                            int v6_4 = (v7_3 + 1);
                            v4[v7_3] = ((byte) (((v0_1 >> 6) & 63) | 128));
                            int v7_4 = (v6_4 + 1);
                            v4[v6_4] = ((byte) ((v0_1 & 63) | 128));
                            v6_0 = v7_4;
                        } else {
                            v6_0 = v7_2;
                            break;
                        }
                    } else {
                        int v6_5 = (v7_2 + 1);
                        v4[v7_2] = ((byte) ((v0_0 >> 12) | 224));
                        int v7_0 = (v6_5 + 1);
                        v4[v6_5] = ((byte) (((v0_0 >> 6) & 63) | 128));
                        v6_0 = (v7_0 + 1);
                        v4[v7_0] = ((byte) ((v0_0 & 63) | 128));
                    }
                } else {
                    int v6_1 = (v7_2 + 1);
                    v4[v7_2] = ((byte) ((v0_0 >> 6) | 192));
                    int v7_1 = (v6_1 + 1);
                    v4[v6_1] = ((byte) ((v0_0 & 63) | 128));
                    v6_0 = v7_1;
                    v14_1 = v3_0;
                }
                v3_0 = v14_1;
            }
            this._outPtr = v6_0;
        } else {
            if (p15 == 1) {
                this.write(p13.charAt(p14));
            }
        }
        return;
    }

    public void write(char[] p3)
    {
        this.write(p3, 0, p3.length);
        return;
    }

    public void write(char[] p13, int p14, int p15)
    {
        if (p15 >= 2) {
            if (this._surrogate > 0) {
                int v3_1 = (p14 + 1);
                p15--;
                this.write(this.convertSurrogate(p13[p14]));
                p14 = v3_1;
            }
            int v6_0 = this._outPtr;
            byte[] v4 = this._outBuffer;
            int v5 = this._outBufferEnd;
            int v15_1 = (p15 + p14);
            int v3_0 = p14;
            while (v3_0 < v15_1) {
                if (v6_0 >= v5) {
                    this._out.write(v4, 0, v6_0);
                    v6_0 = 0;
                }
                int v7_1;
                int v14_2 = (v3_0 + 1);
                int v0_0 = p13[v3_0];
                if (v0_0 >= 128) {
                    v7_1 = v6_0;
                    v3_0 = v14_2;
                } else {
                    v7_1 = (v6_0 + 1);
                    v4[v6_0] = ((byte) v0_0);
                    int v1_0 = (v15_1 - v14_2);
                    int v2 = (v5 - v7_1);
                    if (v1_0 > v2) {
                        v1_0 = v2;
                    }
                    int v1_1 = (v1_0 + v14_2);
                    v3_0 = v14_2;
                    while (v3_0 < v1_1) {
                        int v14_3 = (v3_0 + 1);
                        v0_0 = p13[v3_0];
                        if (v0_0 < 128) {
                            int v6_2 = (v7_1 + 1);
                            v4[v7_1] = ((byte) v0_0);
                            v7_1 = v6_2;
                            v3_0 = v14_3;
                        } else {
                            v3_0 = v14_3;
                        }
                    }
                    v6_0 = v7_1;
                }
                int v14_1;
                if (v0_0 >= 2048) {
                    if ((v0_0 >= 55296) && (v0_0 <= 57343)) {
                        if (v0_0 > 56319) {
                            this._outPtr = v7_1;
                            this.throwIllegal(v0_0);
                        }
                        this._surrogate = v0_0;
                        if (v3_0 < v15_1) {
                            v14_1 = (v3_0 + 1);
                            int v0_1 = this.convertSurrogate(p13[v3_0]);
                            if (v0_1 > 1114111) {
                                this._outPtr = v7_1;
                                this.throwIllegal(v0_1);
                            }
                            int v6_3 = (v7_1 + 1);
                            v4[v7_1] = ((byte) ((v0_1 >> 18) | 240));
                            int v7_2 = (v6_3 + 1);
                            v4[v6_3] = ((byte) (((v0_1 >> 12) & 63) | 128));
                            int v6_4 = (v7_2 + 1);
                            v4[v7_2] = ((byte) (((v0_1 >> 6) & 63) | 128));
                            int v7_3 = (v6_4 + 1);
                            v4[v6_4] = ((byte) ((v0_1 & 63) | 128));
                            v6_0 = v7_3;
                        } else {
                            v6_0 = v7_1;
                            break;
                        }
                    } else {
                        int v6_5 = (v7_1 + 1);
                        v4[v7_1] = ((byte) ((v0_0 >> 12) | 224));
                        int v7_4 = (v6_5 + 1);
                        v4[v6_5] = ((byte) (((v0_0 >> 6) & 63) | 128));
                        v6_0 = (v7_4 + 1);
                        v4[v7_4] = ((byte) ((v0_0 & 63) | 128));
                    }
                } else {
                    int v6_1 = (v7_1 + 1);
                    v4[v7_1] = ((byte) ((v0_0 >> 6) | 192));
                    int v7_0 = (v6_1 + 1);
                    v4[v6_1] = ((byte) ((v0_0 & 63) | 128));
                    v6_0 = v7_0;
                    v14_1 = v3_0;
                }
                v3_0 = v14_1;
            }
            this._outPtr = v6_0;
        } else {
            if (p15 == 1) {
                this.write(p13[p14]);
            }
        }
        return;
    }
}
