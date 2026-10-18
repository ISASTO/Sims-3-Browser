package com.flurry.org.codehaus.jackson.format;
public class DataFormatMatcher {
    protected final byte[] _bufferedData;
    protected final int _bufferedLength;
    protected final com.flurry.org.codehaus.jackson.JsonFactory _match;
    protected final com.flurry.org.codehaus.jackson.format.MatchStrength _matchStrength;
    protected final java.io.InputStream _originalStream;

    protected DataFormatMatcher(java.io.InputStream p1, byte[] p2, int p3, com.flurry.org.codehaus.jackson.JsonFactory p4, com.flurry.org.codehaus.jackson.format.MatchStrength p5)
    {
        this._originalStream = p1;
        this._bufferedData = p2;
        this._bufferedLength = p3;
        this._match = p4;
        this._matchStrength = p5;
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonParser createParserWithMatch()
    {
        com.flurry.org.codehaus.jackson.JsonParser v0_1;
        if (this._match != null) {
            if (this._originalStream != null) {
                v0_1 = this._match.createJsonParser(this.getDataStream());
            } else {
                v0_1 = this._match.createJsonParser(this._bufferedData, 0, this._bufferedLength);
            }
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    public java.io.InputStream getDataStream()
    {
        com.flurry.org.codehaus.jackson.io.MergedStream v0_1;
        if (this._originalStream != null) {
            v0_1 = new com.flurry.org.codehaus.jackson.io.MergedStream(0, this._originalStream, this._bufferedData, 0, this._bufferedLength);
        } else {
            v0_1 = new java.io.ByteArrayInputStream(this._bufferedData, 0, this._bufferedLength);
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.JsonFactory getMatch()
    {
        return this._match;
    }

    public com.flurry.org.codehaus.jackson.format.MatchStrength getMatchStrength()
    {
        com.flurry.org.codehaus.jackson.format.MatchStrength v0_1;
        if (this._matchStrength != null) {
            v0_1 = this._matchStrength;
        } else {
            v0_1 = com.flurry.org.codehaus.jackson.format.MatchStrength.INCONCLUSIVE;
        }
        return v0_1;
    }

    public String getMatchedFormatName()
    {
        return this._match.getFormatName();
    }

    public boolean hasMatch()
    {
        int v0_1;
        if (this._match == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }
}
