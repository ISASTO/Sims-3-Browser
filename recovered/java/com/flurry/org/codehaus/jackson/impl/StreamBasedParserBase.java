package com.flurry.org.codehaus.jackson.impl;
public abstract class StreamBasedParserBase extends com.flurry.org.codehaus.jackson.impl.JsonParserBase {
    protected boolean _bufferRecyclable;
    protected byte[] _inputBuffer;
    protected java.io.InputStream _inputStream;

    protected StreamBasedParserBase(com.flurry.org.codehaus.jackson.io.IOContext p1, int p2, java.io.InputStream p3, byte[] p4, int p5, int p6, boolean p7)
    {
        super(p1, p2);
        super._inputStream = p3;
        super._inputBuffer = p4;
        super._inputPtr = p5;
        super._inputEnd = p6;
        super._bufferRecyclable = p7;
        return;
    }

    protected void _closeInput()
    {
        if (this._inputStream != null) {
            if ((this._ioContext.isResourceManaged()) || (this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.AUTO_CLOSE_SOURCE))) {
                this._inputStream.close();
            }
            this._inputStream = 0;
        }
        return;
    }

    protected final boolean _loadToHaveAtLeast(int p10)
    {
        java.io.IOException v2_0 = 0;
        if (this._inputStream != null) {
            int v0 = (this._inputEnd - this._inputPtr);
            if ((v0 <= 0) || (this._inputPtr <= 0)) {
                this._inputEnd = 0;
            } else {
                this._currInputProcessed = (this._currInputProcessed + ((long) this._inputPtr));
                this._currInputRowStart = (this._currInputRowStart - this._inputPtr);
                System.arraycopy(this._inputBuffer, this._inputPtr, this._inputBuffer, 0, v0);
                this._inputEnd = v0;
            }
            this._inputPtr = 0;
            while (this._inputEnd < p10) {
                int v1 = this._inputStream.read(this._inputBuffer, this._inputEnd, (this._inputBuffer.length - this._inputEnd));
                if (v1 >= 1) {
                    this._inputEnd = (this._inputEnd + v1);
                } else {
                    this._closeInput();
                    if (v1 == 0) {
                        throw new java.io.IOException(new StringBuilder().append("InputStream.read() returned 0 characters when trying to read ").append(v0).append(" bytes").toString());
                    }
                }
            }
            v2_0 = 1;
        }
        return v2_0;
    }

    protected void _releaseBuffers()
    {
        super._releaseBuffers();
        if (this._bufferRecyclable) {
            byte[] v0 = this._inputBuffer;
            if (v0 != null) {
                this._inputBuffer = 0;
                this._ioContext.releaseReadIOBuffer(v0);
            }
        }
        return;
    }

    public Object getInputSource()
    {
        return this._inputStream;
    }

    protected final boolean loadMore()
    {
        java.io.IOException v1_0 = 0;
        this._currInputProcessed = (this._currInputProcessed + ((long) this._inputEnd));
        this._currInputRowStart = (this._currInputRowStart - this._inputEnd);
        if (this._inputStream != null) {
            int v0 = this._inputStream.read(this._inputBuffer, 0, this._inputBuffer.length);
            if (v0 <= 0) {
                this._closeInput();
                if (v0 == 0) {
                    throw new java.io.IOException(new StringBuilder().append("InputStream.read() returned 0 characters when trying to read ").append(this._inputBuffer.length).append(" bytes").toString());
                }
            } else {
                this._inputPtr = 0;
                this._inputEnd = v0;
                v1_0 = 1;
            }
        }
        return v1_0;
    }

    public int releaseBuffered(java.io.OutputStream p5)
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
