package com.flurry.org.codehaus.jackson.sym;
final class CharsToNameCanonicalizer$Bucket {
    private final String _symbol;
    private final com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket mNext;

    public CharsToNameCanonicalizer$Bucket(String p1, com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket p2)
    {
        this._symbol = p1;
        this.mNext = p2;
        return;
    }

    public String find(char[] p6, int p7, int p8)
    {
        String v2 = this._symbol;
        com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket v0 = this.mNext;
        while(true) {
            if (v2.length() != p8) {
                if (v0 != null) {
                    break;
                }
                v2 = 0;
            } else {
                int v1 = 0;
                while (v2.charAt(v1) == p6[(p7 + v1)]) {
                    v1++;
                    if (v1 >= p8) {
                        break;
                    }
                }
                if (v1 != p8) {
                }
            }
            return v2;
        }
        v2 = v0.getSymbol();
        v0 = v0.getNext();
    }

    public com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket getNext()
    {
        return this.mNext;
    }

    public String getSymbol()
    {
        return this._symbol;
    }
}
