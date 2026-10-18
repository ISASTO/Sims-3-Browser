package com.flurry.org.codehaus.jackson.impl;
public final class ByteSourceBootstrapper {
    static final byte UTF8_BOM_1 = -0x11;
    static final byte UTF8_BOM_2 = -0x45;
    static final byte UTF8_BOM_3 = -0x41;
    protected boolean _bigEndian;
    private final boolean _bufferRecyclable;
    protected int _bytesPerChar;
    protected final com.flurry.org.codehaus.jackson.io.IOContext _context;
    protected final java.io.InputStream _in;
    protected final byte[] _inputBuffer;
    private int _inputEnd;
    protected int _inputProcessed;
    private int _inputPtr;

    public ByteSourceBootstrapper(com.flurry.org.codehaus.jackson.io.IOContext p4, java.io.InputStream p5)
    {
        this._bigEndian = 1;
        this._bytesPerChar = 0;
        this._context = p4;
        this._in = p5;
        this._inputBuffer = p4.allocReadIOBuffer();
        this._inputPtr = 0;
        this._inputEnd = 0;
        this._inputProcessed = 0;
        this._bufferRecyclable = 1;
        return;
    }

    public ByteSourceBootstrapper(com.flurry.org.codehaus.jackson.io.IOContext p3, byte[] p4, int p5, int p6)
    {
        this._bigEndian = 1;
        this._bytesPerChar = 0;
        this._context = p3;
        this._in = 0;
        this._inputBuffer = p4;
        this._inputPtr = p5;
        this._inputEnd = (p5 + p6);
        this._inputProcessed = (- p5);
        this._bufferRecyclable = 0;
        return;
    }

    private boolean checkUTF16(int p4)
    {
        int v0_0 = 0;
        if ((65280 & p4) != 0) {
            if ((p4 & 255) == 0) {
                this._bigEndian = 0;
                this._bytesPerChar = 2;
                v0_0 = 1;
            }
        } else {
            this._bigEndian = 1;
        }
        return v0_0;
    }

    private boolean checkUTF32(int p4)
    {
        String v0_0 = 0;
        if ((p4 >> 8) != 0) {
            if ((16777215 & p4) != 0) {
                if ((-16711681 & p4) != 0) {
                    if ((-65281 & p4) == 0) {
                        this.reportWeirdUCS4("2143");
                        this._bytesPerChar = 4;
                        v0_0 = 1;
                    }
                } else {
                    this.reportWeirdUCS4("3412");
                }
            } else {
                this._bigEndian = 0;
            }
        } else {
            this._bigEndian = 1;
        }
        return v0_0;
    }

    private boolean handleBOM(int p7)
    {
        int v1 = 1;
        switch (p7) {
            case -16842752:
                this.reportWeirdUCS4("3412");
                int v0 = (p7 >> 16);
                if (v0 != 65279) {
                    if (v0 != 65534) {
                        if ((p7 >> 8) != 15711167) {
                            v1 = 0;
                        } else {
                            this._inputPtr = (this._inputPtr + 3);
                            this._bytesPerChar = 1;
                            this._bigEndian = 1;
                        }
                    } else {
                        this._inputPtr = (this._inputPtr + 2);
                        this._bytesPerChar = 2;
                        this._bigEndian = 0;
                    }
                } else {
                    this._inputPtr = (this._inputPtr + 2);
                    this._bytesPerChar = 2;
                    this._bigEndian = 1;
                }
                break;
            case -131072:
                this._inputPtr = (this._inputPtr + 4);
                this._bytesPerChar = 4;
                this._bigEndian = 0;
                break;
            case 65279:
                this._bigEndian = 1;
                this._inputPtr = (this._inputPtr + 4);
                this._bytesPerChar = 4;
                break;
            case 65534:
                this.reportWeirdUCS4("2143");
                break;
            default:
        }
        return v1;
    }

    public static com.flurry.org.codehaus.jackson.format.MatchStrength hasJSONFormat(com.flurry.org.codehaus.jackson.format.InputAccessor p9)
    {
        com.flurry.org.codehaus.jackson.format.MatchStrength v2;
        if (p9.hasMoreBytes()) {
            byte v0 = p9.nextByte();
            if (v0 == -17) {
                if (p9.hasMoreBytes()) {
                    if (p9.nextByte() == -69) {
                        if (p9.hasMoreBytes()) {
                            if (p9.nextByte() == -65) {
                                if (p9.hasMoreBytes()) {
                                    v0 = p9.nextByte();
                                } else {
                                    v2 = com.flurry.org.codehaus.jackson.format.MatchStrength.INCONCLUSIVE;
                                    return v2;
                                }
                            } else {
                                v2 = com.flurry.org.codehaus.jackson.format.MatchStrength.NO_MATCH;
                                return v2;
                            }
                        } else {
                            v2 = com.flurry.org.codehaus.jackson.format.MatchStrength.INCONCLUSIVE;
                            return v2;
                        }
                    } else {
                        v2 = com.flurry.org.codehaus.jackson.format.MatchStrength.NO_MATCH;
                        return v2;
                    }
                } else {
                    v2 = com.flurry.org.codehaus.jackson.format.MatchStrength.INCONCLUSIVE;
                    return v2;
                }
            }
            int v1_0 = com.flurry.org.codehaus.jackson.impl.ByteSourceBootstrapper.skipSpace(p9, v0);
            if (v1_0 >= 0) {
                if (v1_0 != 123) {
                    if (v1_0 != 91) {
                        v2 = com.flurry.org.codehaus.jackson.format.MatchStrength.WEAK_MATCH;
                        if ((v1_0 != 34) && ((v1_0 > 57) || (v1_0 < 48))) {
                            if (v1_0 != 45) {
                                if (v1_0 != 110) {
                                    if (v1_0 != 116) {
                                        if (v1_0 != 102) {
                                            v2 = com.flurry.org.codehaus.jackson.format.MatchStrength.NO_MATCH;
                                        } else {
                                            v2 = com.flurry.org.codehaus.jackson.impl.ByteSourceBootstrapper.tryMatch(p9, "alse", v2);
                                        }
                                    } else {
                                        v2 = com.flurry.org.codehaus.jackson.impl.ByteSourceBootstrapper.tryMatch(p9, "rue", v2);
                                    }
                                } else {
                                    v2 = com.flurry.org.codehaus.jackson.impl.ByteSourceBootstrapper.tryMatch(p9, "ull", v2);
                                }
                            } else {
                                int v1_1 = com.flurry.org.codehaus.jackson.impl.ByteSourceBootstrapper.skipSpace(p9);
                                if (v1_1 >= 0) {
                                    if ((v1_1 > 57) || (v1_1 < 48)) {
                                        v2 = com.flurry.org.codehaus.jackson.format.MatchStrength.NO_MATCH;
                                    }
                                } else {
                                    v2 = com.flurry.org.codehaus.jackson.format.MatchStrength.INCONCLUSIVE;
                                }
                            }
                        }
                    } else {
                        int v1_2 = com.flurry.org.codehaus.jackson.impl.ByteSourceBootstrapper.skipSpace(p9);
                        if (v1_2 >= 0) {
                            if ((v1_2 != 93) && (v1_2 != 91)) {
                                v2 = com.flurry.org.codehaus.jackson.format.MatchStrength.SOLID_MATCH;
                            } else {
                                v2 = com.flurry.org.codehaus.jackson.format.MatchStrength.SOLID_MATCH;
                            }
                        } else {
                            v2 = com.flurry.org.codehaus.jackson.format.MatchStrength.INCONCLUSIVE;
                        }
                    }
                } else {
                    int v1_3 = com.flurry.org.codehaus.jackson.impl.ByteSourceBootstrapper.skipSpace(p9);
                    if (v1_3 >= 0) {
                        if ((v1_3 != 34) && (v1_3 != 125)) {
                            v2 = com.flurry.org.codehaus.jackson.format.MatchStrength.NO_MATCH;
                        } else {
                            v2 = com.flurry.org.codehaus.jackson.format.MatchStrength.SOLID_MATCH;
                        }
                    } else {
                        v2 = com.flurry.org.codehaus.jackson.format.MatchStrength.INCONCLUSIVE;
                    }
                }
            } else {
                v2 = com.flurry.org.codehaus.jackson.format.MatchStrength.INCONCLUSIVE;
            }
        } else {
            v2 = com.flurry.org.codehaus.jackson.format.MatchStrength.INCONCLUSIVE;
        }
        return v2;
    }

    private void reportWeirdUCS4(String p4)
    {
        throw new java.io.CharConversionException(new StringBuilder().append("Unsupported UCS-4 endianness (").append(p4).append(") detected").toString());
    }

    private static final int skipSpace(com.flurry.org.codehaus.jackson.format.InputAccessor p1)
    {
        int v0_2;
        if (p1.hasMoreBytes()) {
            v0_2 = com.flurry.org.codehaus.jackson.impl.ByteSourceBootstrapper.skipSpace(p1, p1.nextByte());
        } else {
            v0_2 = -1;
        }
        return v0_2;
    }

    private static final int skipSpace(com.flurry.org.codehaus.jackson.format.InputAccessor p2, byte p3)
    {
        while(true) {
            int v0 = (p3 & 255);
            if ((v0 == 32) || ((v0 == 13) || ((v0 == 10) || (v0 == 9)))) {
                if (!p2.hasMoreBytes()) {
                    break;
                }
                p3 = p2.nextByte();
            }
            return v0;
        }
        v0 = -1;
        return v0;
    }

    private static final com.flurry.org.codehaus.jackson.format.MatchStrength tryMatch(com.flurry.org.codehaus.jackson.format.InputAccessor p4, String p5, com.flurry.org.codehaus.jackson.format.MatchStrength p6)
    {
        int v0 = 0;
        int v1 = p5.length();
        while (v0 < v1) {
            if (p4.hasMoreBytes()) {
                if (p4.nextByte() == p5.charAt(v0)) {
                    v0++;
                } else {
                    p6 = com.flurry.org.codehaus.jackson.format.MatchStrength.NO_MATCH;
                    break;
                }
            } else {
                p6 = com.flurry.org.codehaus.jackson.format.MatchStrength.INCONCLUSIVE;
                break;
            }
        }
        return p6;
    }

    public com.flurry.org.codehaus.jackson.JsonParser constructParser(int p17, com.flurry.org.codehaus.jackson.ObjectCodec p18, com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer p19, com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer p20)
    {
        com.flurry.org.codehaus.jackson.impl.Utf8StreamParser v1_2;
        com.flurry.org.codehaus.jackson.JsonEncoding v14 = this.detectEncoding();
        boolean v13 = com.flurry.org.codehaus.jackson.JsonParser$Feature.CANONICALIZE_FIELD_NAMES.enabledIn(p17);
        boolean v15 = com.flurry.org.codehaus.jackson.JsonParser$Feature.INTERN_FIELD_NAMES.enabledIn(p17);
        if ((v14 != com.flurry.org.codehaus.jackson.JsonEncoding.UTF8) || (!v13)) {
            v1_2 = new com.flurry.org.codehaus.jackson.impl.ReaderBasedParser(this._context, p17, this.constructReader(), p18, p20.makeChild(v13, v15));
        } else {
            v1_2 = new com.flurry.org.codehaus.jackson.impl.Utf8StreamParser(this._context, p17, this._in, p18, p19.makeChild(v13, v15), this._inputBuffer, this._inputPtr, this._inputEnd, this._bufferRecyclable);
        }
        return v1_2;
    }

    public java.io.Reader constructReader()
    {
        java.io.InputStream v0_3;
        com.flurry.org.codehaus.jackson.JsonEncoding v7 = this._context.getEncoding();
        switch (com.flurry.org.codehaus.jackson.impl.ByteSourceBootstrapper$1.$SwitchMap$org$codehaus$jackson$JsonEncoding[v7.ordinal()]) {
            case 1:
            case 2:
                v0_3 = new com.flurry.org.codehaus.jackson.io.UTF32Reader(this._context, this._in, this._inputBuffer, this._inputPtr, this._inputEnd, this._context.getEncoding().isBigEndian());
                break;
            case 3:
            case 4:
            case 5:
                java.io.InputStream v0_0;
                java.io.InputStream v2_1 = this._in;
                if (v2_1 != null) {
                    if (this._inputPtr >= this._inputEnd) {
                        v0_0 = v2_1;
                    } else {
                        v0_0 = new com.flurry.org.codehaus.jackson.io.MergedStream(this._context, v2_1, this._inputBuffer, this._inputPtr, this._inputEnd);
                    }
                } else {
                    v0_0 = new java.io.ByteArrayInputStream(this._inputBuffer, this._inputPtr, this._inputEnd);
                }
                v0_3 = new java.io.InputStreamReader(v0_0, v7.getJavaName());
                break;
            default:
                throw new RuntimeException("Internal error");
        }
        return v0_3;
    }

    public com.flurry.org.codehaus.jackson.JsonEncoding detectEncoding()
    {
        int v1 = 0;
        if (!this.ensureLoaded(4)) {
            if ((this.ensureLoaded(2)) && (this.checkUTF16((((this._inputBuffer[this._inputPtr] & 255) << 8) | (this._inputBuffer[(this._inputPtr + 1)] & 255))))) {
                v1 = 1;
            }
        } else {
            int v3 = ((((this._inputBuffer[this._inputPtr] << 24) | ((this._inputBuffer[(this._inputPtr + 1)] & 255) << 16)) | ((this._inputBuffer[(this._inputPtr + 2)] & 255) << 8)) | (this._inputBuffer[(this._inputPtr + 3)] & 255));
            if (!this.handleBOM(v3)) {
                if (!this.checkUTF32(v3)) {
                    if (this.checkUTF16((v3 >> 16))) {
                        v1 = 1;
                    }
                } else {
                    v1 = 1;
                }
            } else {
                v1 = 1;
            }
        }
        com.flurry.org.codehaus.jackson.JsonEncoding v0;
        if (v1 != 0) {
            switch (this._bytesPerChar) {
                case 1:
                    v0 = com.flurry.org.codehaus.jackson.JsonEncoding.UTF8;
                    break;
                case 2:
                    if (!this._bigEndian) {
                        v0 = com.flurry.org.codehaus.jackson.JsonEncoding.UTF16_LE;
                    } else {
                        v0 = com.flurry.org.codehaus.jackson.JsonEncoding.UTF16_BE;
                    }
                    break;
                case 3:
                default:
                    throw new RuntimeException("Internal error");
                    break;
                case 4:
                    if (!this._bigEndian) {
                        v0 = com.flurry.org.codehaus.jackson.JsonEncoding.UTF32_LE;
                    } else {
                        v0 = com.flurry.org.codehaus.jackson.JsonEncoding.UTF32_BE;
                    }
                    break;
            }
        } else {
            v0 = com.flurry.org.codehaus.jackson.JsonEncoding.UTF8;
        }
        this._context.setEncoding(v0);
        return v0;
    }

    protected boolean ensureLoaded(int p9)
    {
        int v2 = 1;
        int v1 = (this._inputEnd - this._inputPtr);
        while (v1 < p9) {
            int v0;
            if (this._in != null) {
                v0 = this._in.read(this._inputBuffer, this._inputEnd, (this._inputBuffer.length - this._inputEnd));
            } else {
                v0 = -1;
            }
            if (v0 >= 1) {
                this._inputEnd = (this._inputEnd + v0);
                v1 += v0;
            } else {
                v2 = 0;
                break;
            }
        }
        return v2;
    }
}
