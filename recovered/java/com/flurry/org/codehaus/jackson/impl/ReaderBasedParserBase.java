package com.flurry.org.codehaus.jackson.impl;
public abstract class ReaderBasedParserBase extends com.flurry.org.codehaus.jackson.impl.JsonParserBase {
    protected char[] _inputBuffer;
    protected java.io.Reader _reader;

    protected ReaderBasedParserBase(com.flurry.org.codehaus.jackson.io.IOContext p2, int p3, java.io.Reader p4)
    {
        super(p2, p3);
        super._reader = p4;
        super._inputBuffer = p2.allocTokenBuffer();
        return;
    }

    protected void _closeInput()
    {
        if (this._reader != null) {
            if ((this._ioContext.isResourceManaged()) || (this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.AUTO_CLOSE_SOURCE))) {
                this._reader.close();
            }
            this._reader = 0;
        }
        return;
    }

    protected final boolean _matchToken(String p7, int p8)
    {
        int v1 = p7.length();
        do {
            if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
                this._reportInvalidEOFInValue();
            }
            if (this._inputBuffer[this._inputPtr] != p7.charAt(p8)) {
                this._reportInvalidToken(p7.substring(0, p8), "\'null\', \'true\', \'false\' or NaN");
            }
            this._inputPtr = (this._inputPtr + 1);
            p8++;
        } while(p8 < v1);
    }

    protected void _releaseBuffers()
    {
        super._releaseBuffers();
        char[] v0 = this._inputBuffer;
        if (v0 != null) {
            this._inputBuffer = 0;
            this._ioContext.releaseTokenBuffer(v0);
        }
        return;
    }

    protected void _reportInvalidToken(String p5, String p6)
    {
        StringBuilder v1_1 = new StringBuilder(p5);
        while ((this._inputPtr < this._inputEnd) || (this.loadMore())) {
            char v0 = this._inputBuffer[this._inputPtr];
            if (!Character.isJavaIdentifierPart(v0)) {
                break;
            }
            this._inputPtr = (this._inputPtr + 1);
            v1_1.append(v0);
        }
        this._reportError(new StringBuilder().append("Unrecognized token \'").append(v1_1.toString()).append("\': was expecting ").toString());
        return;
    }

    public Object getInputSource()
    {
        return this._reader;
    }

    protected char getNextChar(String p4)
    {
        if ((this._inputPtr >= this._inputEnd) && (!this.loadMore())) {
            this._reportInvalidEOF(p4);
        }
        char v0_3 = this._inputBuffer;
        int v1_1 = this._inputPtr;
        this._inputPtr = (v1_1 + 1);
        return v0_3[v1_1];
    }

    protected final boolean loadMore()
    {
        java.io.IOException v1_0 = 0;
        this._currInputProcessed = (this._currInputProcessed + ((long) this._inputEnd));
        this._currInputRowStart = (this._currInputRowStart - this._inputEnd);
        if (this._reader != null) {
            int v0 = this._reader.read(this._inputBuffer, 0, this._inputBuffer.length);
            if (v0 <= 0) {
                this._closeInput();
                if (v0 == 0) {
                    throw new java.io.IOException(new StringBuilder().append("Reader returned 0 characters when trying to read ").append(this._inputEnd).toString());
                }
            } else {
                this._inputPtr = 0;
                this._inputEnd = v0;
                v1_0 = 1;
            }
        }
        return v1_0;
    }

    public int releaseBuffered(java.io.Writer p5)
    {
        int v0 = (this._inputEnd - this._inputPtr);
        if (v0 >= 1) {
            p5.write(this._inputBuffer, this._inputPtr, v0);
        } else {
            v0 = 0;
        }
        return v0;
    }
}
