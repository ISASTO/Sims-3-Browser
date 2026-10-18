package com.flurry.org.codehaus.jackson.io;
public final class IOContext {
    protected final com.flurry.org.codehaus.jackson.util.BufferRecycler _bufferRecycler;
    protected char[] _concatCBuffer;
    protected com.flurry.org.codehaus.jackson.JsonEncoding _encoding;
    protected final boolean _managedResource;
    protected char[] _nameCopyBuffer;
    protected byte[] _readIOBuffer;
    protected final Object _sourceRef;
    protected char[] _tokenCBuffer;
    protected byte[] _writeEncodingBuffer;

    public IOContext(com.flurry.org.codehaus.jackson.util.BufferRecycler p2, Object p3, boolean p4)
    {
        this._readIOBuffer = 0;
        this._writeEncodingBuffer = 0;
        this._tokenCBuffer = 0;
        this._concatCBuffer = 0;
        this._nameCopyBuffer = 0;
        this._bufferRecycler = p2;
        this._sourceRef = p3;
        this._managedResource = p4;
        return;
    }

    public final char[] allocConcatBuffer()
    {
        if (this._concatCBuffer == null) {
            this._concatCBuffer = this._bufferRecycler.allocCharBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.CONCAT_BUFFER);
            return this._concatCBuffer;
        } else {
            throw new IllegalStateException("Trying to call allocConcatBuffer() second time");
        }
    }

    public final char[] allocNameCopyBuffer(int p3)
    {
        if (this._nameCopyBuffer == null) {
            this._nameCopyBuffer = this._bufferRecycler.allocCharBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.NAME_COPY_BUFFER, p3);
            return this._nameCopyBuffer;
        } else {
            throw new IllegalStateException("Trying to call allocNameCopyBuffer() second time");
        }
    }

    public final byte[] allocReadIOBuffer()
    {
        if (this._readIOBuffer == null) {
            this._readIOBuffer = this._bufferRecycler.allocByteBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType.READ_IO_BUFFER);
            return this._readIOBuffer;
        } else {
            throw new IllegalStateException("Trying to call allocReadIOBuffer() second time");
        }
    }

    public final char[] allocTokenBuffer()
    {
        if (this._tokenCBuffer == null) {
            this._tokenCBuffer = this._bufferRecycler.allocCharBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.TOKEN_BUFFER);
            return this._tokenCBuffer;
        } else {
            throw new IllegalStateException("Trying to call allocTokenBuffer() second time");
        }
    }

    public final byte[] allocWriteEncodingBuffer()
    {
        if (this._writeEncodingBuffer == null) {
            this._writeEncodingBuffer = this._bufferRecycler.allocByteBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType.WRITE_ENCODING_BUFFER);
            return this._writeEncodingBuffer;
        } else {
            throw new IllegalStateException("Trying to call allocWriteEncodingBuffer() second time");
        }
    }

    public final com.flurry.org.codehaus.jackson.util.TextBuffer constructTextBuffer()
    {
        return new com.flurry.org.codehaus.jackson.util.TextBuffer(this._bufferRecycler);
    }

    public final com.flurry.org.codehaus.jackson.JsonEncoding getEncoding()
    {
        return this._encoding;
    }

    public final Object getSourceReference()
    {
        return this._sourceRef;
    }

    public final boolean isResourceManaged()
    {
        return this._managedResource;
    }

    public final void releaseConcatBuffer(char[] p3)
    {
        if (p3 != null) {
            if (p3 == this._concatCBuffer) {
                this._concatCBuffer = 0;
                this._bufferRecycler.releaseCharBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.CONCAT_BUFFER, p3);
            } else {
                throw new IllegalArgumentException("Trying to release buffer not owned by the context");
            }
        }
        return;
    }

    public final void releaseNameCopyBuffer(char[] p3)
    {
        if (p3 != null) {
            if (p3 == this._nameCopyBuffer) {
                this._nameCopyBuffer = 0;
                this._bufferRecycler.releaseCharBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.NAME_COPY_BUFFER, p3);
            } else {
                throw new IllegalArgumentException("Trying to release buffer not owned by the context");
            }
        }
        return;
    }

    public final void releaseReadIOBuffer(byte[] p3)
    {
        if (p3 != null) {
            if (p3 == this._readIOBuffer) {
                this._readIOBuffer = 0;
                this._bufferRecycler.releaseByteBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType.READ_IO_BUFFER, p3);
            } else {
                throw new IllegalArgumentException("Trying to release buffer not owned by the context");
            }
        }
        return;
    }

    public final void releaseTokenBuffer(char[] p3)
    {
        if (p3 != null) {
            if (p3 == this._tokenCBuffer) {
                this._tokenCBuffer = 0;
                this._bufferRecycler.releaseCharBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.TOKEN_BUFFER, p3);
            } else {
                throw new IllegalArgumentException("Trying to release buffer not owned by the context");
            }
        }
        return;
    }

    public final void releaseWriteEncodingBuffer(byte[] p3)
    {
        if (p3 != null) {
            if (p3 == this._writeEncodingBuffer) {
                this._writeEncodingBuffer = 0;
                this._bufferRecycler.releaseByteBuffer(com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType.WRITE_ENCODING_BUFFER, p3);
            } else {
                throw new IllegalArgumentException("Trying to release buffer not owned by the context");
            }
        }
        return;
    }

    public void setEncoding(com.flurry.org.codehaus.jackson.JsonEncoding p1)
    {
        this._encoding = p1;
        return;
    }
}
