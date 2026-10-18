package com.flurry.org.codehaus.jackson.sym;
public final class CharsToNameCanonicalizer {
    protected static final int DEFAULT_TABLE_SIZE = 64;
    static final int MAX_ENTRIES_FOR_REUSE = 12000;
    protected static final int MAX_TABLE_SIZE = 65536;
    static final com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer sBootstrapSymbolTable;
    protected com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket[] _buckets;
    protected final boolean _canonicalize;
    protected boolean _dirty;
    protected int _indexMask;
    protected final boolean _intern;
    protected com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer _parent;
    protected int _size;
    protected int _sizeThreshold;
    protected String[] _symbols;

    static CharsToNameCanonicalizer()
    {
        com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer.sBootstrapSymbolTable = new com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer();
        return;
    }

    private CharsToNameCanonicalizer()
    {
        this._canonicalize = 1;
        this._intern = 1;
        this._dirty = 1;
        this.initTables(64);
        return;
    }

    private CharsToNameCanonicalizer(com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer p3, boolean p4, boolean p5, String[] p6, com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket[] p7, int p8)
    {
        this._parent = p3;
        this._canonicalize = p4;
        this._intern = p5;
        this._symbols = p6;
        this._buckets = p7;
        this._size = p8;
        int v0 = p6.length;
        this._sizeThreshold = (v0 - (v0 >> 2));
        this._indexMask = (v0 - 1);
        this._dirty = 0;
        return;
    }

    public static int calcHash(String p5)
    {
        int v0 = p5.charAt(0);
        int v1 = 1;
        int v2 = p5.length();
        while (v1 < v2) {
            v0 = ((v0 * 31) + p5.charAt(v1));
            v1++;
        }
        return v0;
    }

    public static int calcHash(char[] p4, int p5, int p6)
    {
        int v0 = p4[0];
        int v1 = 1;
        while (v1 < p6) {
            v0 = ((v0 * 31) + p4[v1]);
            v1++;
        }
        return v0;
    }

    private void copyArrays()
    {
        String[] v1 = this._symbols;
        int v2_0 = v1.length;
        com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket[] v3_1 = new String[v2_0];
        this._symbols = v3_1;
        System.arraycopy(v1, 0, this._symbols, 0, v2_0);
        com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket[] v0 = this._buckets;
        int v2_1 = v0.length;
        com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket[] v3_3 = new com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket[v2_1];
        this._buckets = v3_3;
        System.arraycopy(v0, 0, this._buckets, 0, v2_1);
        return;
    }

    public static com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer createRoot()
    {
        return com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer.sBootstrapSymbolTable.makeOrphan();
    }

    private void initTables(int p2)
    {
        int v0_0 = new String[p2];
        this._symbols = v0_0;
        int v0_3 = new com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket[(p2 >> 1)];
        this._buckets = v0_3;
        this._indexMask = (p2 - 1);
        this._size = 0;
        this._sizeThreshold = (p2 - (p2 >> 2));
        return;
    }

    private com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer makeOrphan()
    {
        return new com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer(0, 1, 1, this._symbols, this._buckets, this._size);
    }

    private declared_synchronized void mergeChild(com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer p3)
    {
        try {
            if (p3.size() <= 12000) {
                if (p3.size() > this.size()) {
                    this._symbols = p3._symbols;
                    this._buckets = p3._buckets;
                    this._size = p3._size;
                    this._sizeThreshold = p3._sizeThreshold;
                    this._indexMask = p3._indexMask;
                    this._dirty = 0;
                }
            } else {
                this.initTables(64);
            }
        } catch (int v0_7) {
            throw v0_7;
        }
        return;
    }

    private void rehash()
    {
        int v8_0 = this._symbols.length;
        int v5 = (v8_0 + v8_0);
        if (v5 <= 65536) {
            String[] v7 = this._symbols;
            com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket[] v6 = this._buckets;
            com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket[] v10_17 = new String[v5];
            this._symbols = v10_17;
            com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket[] v10_2 = new com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket[(v5 >> 1)];
            this._buckets = v10_2;
            this._indexMask = (v5 - 1);
            this._sizeThreshold = (this._sizeThreshold + this._sizeThreshold);
            int v2 = 0;
            int v3_0 = 0;
            while (v3_0 < v8_0) {
                String v9_1 = v7[v3_0];
                if (v9_1 != null) {
                    v2++;
                    int v4_1 = (com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer.calcHash(v9_1) & this._indexMask);
                    if (this._symbols[v4_1] != null) {
                        int v1_1 = (v4_1 >> 1);
                        this._buckets[v1_1] = new com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket(v9_1, this._buckets[v1_1]);
                    } else {
                        this._symbols[v4_1] = v9_1;
                    }
                }
                v3_0++;
            }
            int v8_1 = (v8_0 >> 1);
            int v3_1 = 0;
            while (v3_1 < v8_1) {
                com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket v0 = v6[v3_1];
                while (v0 != null) {
                    v2++;
                    String v9_0 = v0.getSymbol();
                    int v4_0 = (com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer.calcHash(v9_0) & this._indexMask);
                    if (this._symbols[v4_0] != null) {
                        int v1_0 = (v4_0 >> 1);
                        this._buckets[v1_0] = new com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket(v9_0, this._buckets[v1_0]);
                    } else {
                        this._symbols[v4_0] = v9_0;
                    }
                    v0 = v0.getNext();
                }
                v3_1++;
            }
            if (v2 != this._size) {
                throw new Error(new StringBuilder().append("Internal error on SymbolTable.rehash(): had ").append(this._size).append(" entries; now have ").append(v2).append(".").toString());
            }
        } else {
            this._size = 0;
            java.util.Arrays.fill(this._symbols, 0);
            java.util.Arrays.fill(this._buckets, 0);
            this._dirty = 1;
        }
        return;
    }

    public String findSymbol(char[] p9, int p10, int p11, int p12)
    {
        String v4_0;
        if (p11 >= 1) {
            if (this._canonicalize) {
                int v12_1 = (p12 & this._indexMask);
                v4_0 = this._symbols[v12_1];
                if (v4_0 != null) {
                    if (v4_0.length() == p11) {
                        int v2 = 0;
                        while (v4_0.charAt(v2) == p9[(p10 + v2)]) {
                            v2++;
                            if (v2 >= p11) {
                                break;
                            }
                        }
                        if (v2 == p11) {
                            return v4_0;
                        }
                    }
                    com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket v0 = this._buckets[(v12_1 >> 1)];
                    if (v0 != null) {
                        v4_0 = v0.find(p9, p10, p11);
                        if (v4_0 != null) {
                            return v4_0;
                        }
                    }
                }
                if (this._dirty) {
                    if (this._size >= this._sizeThreshold) {
                        this.rehash();
                        v12_1 = (com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer.calcHash(p9, p10, p11) & this._indexMask);
                    }
                } else {
                    this.copyArrays();
                    this._dirty = 1;
                }
                this._size = (this._size + 1);
                String v3_1 = new String(p9, p10, p11);
                if (this._intern) {
                    v3_1 = com.flurry.org.codehaus.jackson.util.InternCache.instance.intern(v3_1);
                }
                if (this._symbols[v12_1] != null) {
                    int v1 = (v12_1 >> 1);
                    this._buckets[v1] = new com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer$Bucket(v3_1, this._buckets[v1]);
                } else {
                    this._symbols[v12_1] = v3_1;
                }
                v4_0 = v3_1;
            } else {
                v4_0 = new String(p9, p10, p11);
            }
        } else {
            v4_0 = "";
        }
        return v4_0;
    }

    public declared_synchronized com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer makeChild(boolean p8, boolean p9)
    {
        try {
            return new com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer(this, p8, p9, this._symbols, this._buckets, this._size);
        } catch (Throwable v0_2) {
            throw v0_2;
        }
    }

    public boolean maybeDirty()
    {
        return this._dirty;
    }

    public void release()
    {
        if ((this.maybeDirty()) && (this._parent != null)) {
            this._parent.mergeChild(this);
            this._dirty = 0;
        }
        return;
    }

    public int size()
    {
        return this._size;
    }
}
