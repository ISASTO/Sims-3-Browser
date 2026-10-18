package com.flurry.org.codehaus.jackson.util;
public final class TextBuffer {
    static final int MAX_SEGMENT_LEN = 262144;
    static final int MIN_SEGMENT_LEN = 1000;
    static final char[] NO_CHARS;
    private final com.flurry.org.codehaus.jackson.util.BufferRecycler _allocator;
    private char[] _currentSegment;
    private int _currentSize;
    private boolean _hasSegments;
    private char[] _inputBuffer;
    private int _inputLen;
    private int _inputStart;
    private char[] _resultArray;
    private String _resultString;
    private int _segmentSize;
    private java.util.ArrayList _segments;

    static TextBuffer()
    {
        char[] v0_1 = new char[0];
        com.flurry.org.codehaus.jackson.util.TextBuffer.NO_CHARS = v0_1;
        return;
    }

    public TextBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler p2)
    {
        this._hasSegments = 0;
        this._allocator = p2;
        return;
    }

    private final char[] _charArray(int p2)
    {
        char[] v0 = new char[p2];
        return v0;
    }

    private char[] buildResultArray()
    {
        char[] v5;
        if (this._resultString == null) {
            if (this._inputStart < 0) {
                int v6 = this.size();
                if (v6 >= 1) {
                    int v4 = 0;
                    v5 = this._charArray(v6);
                    if (this._segments != null) {
                        int v2 = 0;
                        int v3 = this._segments.size();
                        while (v2 < v3) {
                            char[] v0_1 = ((char[]) ((char[]) this._segments.get(v2)));
                            int v1 = v0_1.length;
                            System.arraycopy(v0_1, 0, v5, v4, v1);
                            v4 += v1;
                            v2++;
                        }
                    }
                    System.arraycopy(this._currentSegment, 0, v5, v4, this._currentSize);
                } else {
                    v5 = com.flurry.org.codehaus.jackson.util.TextBuffer.NO_CHARS;
                }
            } else {
                if (this._inputLen >= 1) {
                    v5 = this._charArray(this._inputLen);
                    System.arraycopy(this._inputBuffer, this._inputStart, v5, 0, this._inputLen);
                } else {
                    v5 = com.flurry.org.codehaus.jackson.util.TextBuffer.NO_CHARS;
                }
            }
        } else {
            v5 = this._resultString.toCharArray();
        }
        return v5;
    }

    private final void clearSegments()
    {
        this._hasSegments = 0;
        this._segments.clear();
        this._segmentSize = 0;
        this._currentSize = 0;
        return;
    }

    private void expand(int p6)
    {
        if (this._segments == null) {
            this._segments = new java.util.ArrayList();
        }
        char[] v0_1 = this._currentSegment;
        this._hasSegments = 1;
        this._segments.add(v0_1);
        this._segmentSize = (this._segmentSize + v0_1.length);
        int v1 = v0_1.length;
        int v2 = (v1 >> 1);
        if (v2 < p6) {
            v2 = p6;
        }
        char[] v0_0 = this._charArray(Math.min(262144, (v1 + v2)));
        this._currentSize = 0;
        this._currentSegment = v0_0;
        return;
    }

    private final char[] findBuffer(int p3)
    {
        char[] v0_3;
        if (this._allocator == null) {
            v0_3 = new char[Math.max(p3, 1000)];
        } else {
            v0_3 = this._allocator.allocCharBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.TEXT_BUFFER, p3);
        }
        return v0_3;
    }

    private void unshare(int p7)
    {
        int v2 = this._inputLen;
        this._inputLen = 0;
        char[] v0 = this._inputBuffer;
        this._inputBuffer = 0;
        int v3 = this._inputStart;
        this._inputStart = -1;
        int v1 = (v2 + p7);
        if ((this._currentSegment == null) || (v1 > this._currentSegment.length)) {
            this._currentSegment = this.findBuffer(v1);
        }
        if (v2 > 0) {
            System.arraycopy(v0, v3, this._currentSegment, 0, v2);
        }
        this._segmentSize = 0;
        this._currentSize = v2;
        return;
    }

    public void append(char p4)
    {
        if (this._inputStart >= 0) {
            this.unshare(16);
        }
        this._resultString = 0;
        this._resultArray = 0;
        char[] v0 = this._currentSegment;
        if (this._currentSize >= v0.length) {
            this.expand(1);
            v0 = this._currentSegment;
        }
        int v1_2 = this._currentSize;
        this._currentSize = (v1_2 + 1);
        v0[v1_2] = p4;
        return;
    }

    public void append(String p6, int p7, int p8)
    {
        if (this._inputStart >= 0) {
            this.unshare(p8);
        }
        this._resultString = 0;
        this._resultArray = 0;
        char[] v0 = this._currentSegment;
        int v1 = (v0.length - this._currentSize);
        if (v1 < p8) {
            if (v1 > 0) {
                p6.getChars(p7, (p7 + v1), v0, this._currentSize);
                p8 -= v1;
                p7 += v1;
            }
            this.expand(p8);
            p6.getChars(p7, (p7 + p8), this._currentSegment, 0);
            this._currentSize = p8;
        } else {
            p6.getChars(p7, (p7 + p8), v0, this._currentSize);
            this._currentSize = (this._currentSize + p8);
        }
        return;
    }

    public void append(char[] p5, int p6, int p7)
    {
        if (this._inputStart >= 0) {
            this.unshare(p7);
        }
        this._resultString = 0;
        this._resultArray = 0;
        char[] v0 = this._currentSegment;
        int v1 = (v0.length - this._currentSize);
        if (v1 < p7) {
            if (v1 > 0) {
                System.arraycopy(p5, p6, v0, this._currentSize, v1);
                p6 += v1;
                p7 -= v1;
            }
            this.expand(p7);
            System.arraycopy(p5, p6, this._currentSegment, 0, p7);
            this._currentSize = p7;
        } else {
            System.arraycopy(p5, p6, v0, this._currentSize, p7);
            this._currentSize = (this._currentSize + p7);
        }
        return;
    }

    public char[] contentsAsArray()
    {
        char[] v0 = this._resultArray;
        if (v0 == null) {
            v0 = this.buildResultArray();
            this._resultArray = v0;
        }
        return v0;
    }

    public java.math.BigDecimal contentsAsDecimal()
    {
        java.math.BigDecimal v0_2;
        if (this._resultArray == null) {
            if (this._inputStart < 0) {
                if (this._segmentSize != 0) {
                    v0_2 = new java.math.BigDecimal(this.contentsAsArray());
                } else {
                    v0_2 = new java.math.BigDecimal(this._currentSegment, 0, this._currentSize);
                }
            } else {
                v0_2 = new java.math.BigDecimal(this._inputBuffer, this._inputStart, this._inputLen);
            }
        } else {
            v0_2 = new java.math.BigDecimal(this._resultArray);
        }
        return v0_2;
    }

    public double contentsAsDouble()
    {
        return com.flurry.org.codehaus.jackson.io.NumberInput.parseDouble(this.contentsAsString());
    }

    public String contentsAsString()
    {
        int v6_14;
        if (this._resultString != null) {
            v6_14 = this._resultString;
        } else {
            if (this._resultArray == null) {
                if (this._inputStart < 0) {
                    int v5 = this._segmentSize;
                    int v1 = this._currentSize;
                    if (v5 != 0) {
                        StringBuilder v4_1 = new StringBuilder((v5 + v1));
                        if (this._segments != null) {
                            int v2 = 0;
                            int v3 = this._segments.size();
                            while (v2 < v3) {
                                char[] v0_1 = ((char[]) this._segments.get(v2));
                                v4_1.append(v0_1, 0, v0_1.length);
                                v2++;
                            }
                        }
                        v4_1.append(this._currentSegment, 0, this._currentSize);
                        this._resultString = v4_1.toString();
                    } else {
                        int v6_10;
                        if (v1 != 0) {
                            v6_10 = new String(this._currentSegment, 0, v1);
                        } else {
                            v6_10 = "";
                        }
                        this._resultString = v6_10;
                    }
                } else {
                    if (this._inputLen >= 1) {
                        this._resultString = new String(this._inputBuffer, this._inputStart, this._inputLen);
                    } else {
                        v6_14 = "";
                        this._resultString = "";
                    }
                }
            } else {
                this._resultString = new String(this._resultArray);
            }
        }
        return v6_14;
    }

    public final char[] emptyAndGetCurrentSegment()
    {
        this._inputStart = -1;
        this._currentSize = 0;
        this._inputLen = 0;
        this._inputBuffer = 0;
        this._resultString = 0;
        this._resultArray = 0;
        if (this._hasSegments) {
            this.clearSegments();
        }
        char[] v0 = this._currentSegment;
        if (v0 == null) {
            v0 = this.findBuffer(0);
            this._currentSegment = v0;
        }
        return v0;
    }

    public void ensureNotShared()
    {
        if (this._inputStart >= 0) {
            this.unshare(16);
        }
        return;
    }

    public char[] expandCurrentSegment()
    {
        int v2;
        char[] v0 = this._currentSegment;
        int v1 = v0.length;
        if (v1 != 262144) {
            v2 = Math.min(262144, ((v1 >> 1) + v1));
        } else {
            v2 = 262145;
        }
        this._currentSegment = this._charArray(v2);
        System.arraycopy(v0, 0, this._currentSegment, 0, v1);
        return this._currentSegment;
    }

    public char[] finishCurrentSegment()
    {
        if (this._segments == null) {
            this._segments = new java.util.ArrayList();
        }
        this._hasSegments = 1;
        this._segments.add(this._currentSegment);
        int v2 = this._currentSegment.length;
        this._segmentSize = (this._segmentSize + v2);
        char[] v0 = this._charArray(Math.min(((v2 >> 1) + v2), 262144));
        this._currentSize = 0;
        this._currentSegment = v0;
        return v0;
    }

    public char[] getCurrentSegment()
    {
        if (this._inputStart < 0) {
            char[] v0 = this._currentSegment;
            if (v0 != null) {
                if (this._currentSize >= v0.length) {
                    this.expand(1);
                }
            } else {
                this._currentSegment = this.findBuffer(0);
            }
        } else {
            this.unshare(1);
        }
        return this._currentSegment;
    }

    public int getCurrentSegmentSize()
    {
        return this._currentSize;
    }

    public char[] getTextBuffer()
    {
        char[] v0_1;
        if (this._inputStart < 0) {
            if (this._resultArray == null) {
                if (this._resultString == null) {
                    if (this._hasSegments) {
                        v0_1 = this.contentsAsArray();
                    } else {
                        v0_1 = this._currentSegment;
                    }
                } else {
                    v0_1 = this._resultString.toCharArray();
                    this._resultArray = v0_1;
                }
            } else {
                v0_1 = this._resultArray;
            }
        } else {
            v0_1 = this._inputBuffer;
        }
        return v0_1;
    }

    public int getTextOffset()
    {
        int v0_1;
        if (this._inputStart < 0) {
            v0_1 = 0;
        } else {
            v0_1 = this._inputStart;
        }
        return v0_1;
    }

    public boolean hasTextAsCharacters()
    {
        int v0 = 1;
        if ((this._inputStart < 0) && ((this._resultArray == null) && (this._resultString != null))) {
            v0 = 0;
        }
        return v0;
    }

    public void releaseBuffers()
    {
        if (this._allocator != null) {
            if (this._currentSegment != null) {
                this.resetWithEmpty();
                char[] v0 = this._currentSegment;
                this._currentSegment = 0;
                this._allocator.releaseCharBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.TEXT_BUFFER, v0);
            }
        } else {
            this.resetWithEmpty();
        }
        return;
    }

    public void resetWithCopy(char[] p4, int p5, int p6)
    {
        this._inputBuffer = 0;
        this._inputStart = -1;
        this._inputLen = 0;
        this._resultString = 0;
        this._resultArray = 0;
        if (!this._hasSegments) {
            if (this._currentSegment == null) {
                this._currentSegment = this.findBuffer(p6);
            }
        } else {
            this.clearSegments();
        }
        this._segmentSize = 0;
        this._currentSize = 0;
        this.append(p4, p5, p6);
        return;
    }

    public void resetWithEmpty()
    {
        this._inputStart = -1;
        this._currentSize = 0;
        this._inputLen = 0;
        this._inputBuffer = 0;
        this._resultString = 0;
        this._resultArray = 0;
        if (this._hasSegments) {
            this.clearSegments();
        }
        return;
    }

    public void resetWithShared(char[] p2, int p3, int p4)
    {
        this._resultString = 0;
        this._resultArray = 0;
        this._inputBuffer = p2;
        this._inputStart = p3;
        this._inputLen = p4;
        if (this._hasSegments) {
            this.clearSegments();
        }
        return;
    }

    public void resetWithString(String p4)
    {
        this._inputBuffer = 0;
        this._inputStart = -1;
        this._inputLen = 0;
        this._resultString = p4;
        this._resultArray = 0;
        if (this._hasSegments) {
            this.clearSegments();
        }
        this._currentSize = 0;
        return;
    }

    public void setCurrentLength(int p1)
    {
        this._currentSize = p1;
        return;
    }

    public int size()
    {
        int v0_1;
        if (this._inputStart < 0) {
            if (this._resultArray == null) {
                if (this._resultString == null) {
                    v0_1 = (this._segmentSize + this._currentSize);
                } else {
                    v0_1 = this._resultString.length();
                }
            } else {
                v0_1 = this._resultArray.length;
            }
        } else {
            v0_1 = this._inputLen;
        }
        return v0_1;
    }

    public String toString()
    {
        return this.contentsAsString();
    }
}
