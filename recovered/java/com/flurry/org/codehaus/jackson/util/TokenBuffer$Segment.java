package com.flurry.org.codehaus.jackson.util;
public final class TokenBuffer$Segment {
    public static final int TOKENS_PER_SEGMENT = 16;
    private static final com.flurry.org.codehaus.jackson.JsonToken[] TOKEN_TYPES_BY_INDEX;
    protected com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment _next;
    protected long _tokenTypes;
    protected final Object[] _tokens;

    static TokenBuffer$Segment()
    {
        com.flurry.org.codehaus.jackson.JsonToken[] v1_1 = new com.flurry.org.codehaus.jackson.JsonToken[16];
        com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment.TOKEN_TYPES_BY_INDEX = v1_1;
        com.flurry.org.codehaus.jackson.JsonToken[] v0 = com.flurry.org.codehaus.jackson.JsonToken.values();
        System.arraycopy(v0, 1, com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment.TOKEN_TYPES_BY_INDEX, 1, Math.min(15, (v0.length - 1)));
        return;
    }

    public TokenBuffer$Segment()
    {
        Object[] v0_1 = new Object[16];
        this._tokens = v0_1;
        return;
    }

    public com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment append(int p3, com.flurry.org.codehaus.jackson.JsonToken p4)
    {
        com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment v0_1;
        if (p3 >= 16) {
            this._next = new com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment();
            this._next.set(0, p4);
            v0_1 = this._next;
        } else {
            this.set(p3, p4);
            v0_1 = 0;
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment append(int p3, com.flurry.org.codehaus.jackson.JsonToken p4, Object p5)
    {
        com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment v0_1;
        if (p3 >= 16) {
            this._next = new com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment();
            this._next.set(0, p4, p5);
            v0_1 = this._next;
        } else {
            this.set(p3, p4, p5);
            v0_1 = 0;
        }
        return v0_1;
    }

    public Object get(int p2)
    {
        return this._tokens[p2];
    }

    public com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment next()
    {
        return this._next;
    }

    public void set(int p5, com.flurry.org.codehaus.jackson.JsonToken p6)
    {
        long v0 = ((long) p6.ordinal());
        if (p5 > 0) {
            v0 <<= (p5 << 2);
        }
        this._tokenTypes = (this._tokenTypes | v0);
        return;
    }

    public void set(int p5, com.flurry.org.codehaus.jackson.JsonToken p6, Object p7)
    {
        this._tokens[p5] = p7;
        long v0 = ((long) p6.ordinal());
        if (p5 > 0) {
            v0 <<= (p5 << 2);
        }
        this._tokenTypes = (this._tokenTypes | v0);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonToken type(int p5)
    {
        long v1 = this._tokenTypes;
        if (p5 > 0) {
            v1 >>= (p5 << 2);
        }
        return com.flurry.org.codehaus.jackson.util.TokenBuffer$Segment.TOKEN_TYPES_BY_INDEX[(((int) v1) & 15)];
    }
}
