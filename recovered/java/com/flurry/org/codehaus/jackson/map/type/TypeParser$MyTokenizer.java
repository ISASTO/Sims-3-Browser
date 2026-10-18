package com.flurry.org.codehaus.jackson.map.type;
final class TypeParser$MyTokenizer extends java.util.StringTokenizer {
    protected int _index;
    protected final String _input;
    protected String _pushbackToken;

    public TypeParser$MyTokenizer(String p3)
    {
        super(p3, "<,>", 1);
        super._input = p3;
        return;
    }

    public String getAllInput()
    {
        return this._input;
    }

    public String getRemainingInput()
    {
        return this._input.substring(this._index);
    }

    public String getUsedInput()
    {
        return this._input.substring(0, this._index);
    }

    public boolean hasMoreTokens()
    {
        if ((this._pushbackToken == null) && (!super.hasMoreTokens())) {
            int v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public String nextToken()
    {
        String v0;
        if (this._pushbackToken == null) {
            v0 = super.nextToken();
        } else {
            v0 = this._pushbackToken;
            this._pushbackToken = 0;
        }
        this._index = (this._index + v0.length());
        return v0;
    }

    public void pushBack(String p3)
    {
        this._pushbackToken = p3;
        this._index = (this._index - p3.length());
        return;
    }
}
