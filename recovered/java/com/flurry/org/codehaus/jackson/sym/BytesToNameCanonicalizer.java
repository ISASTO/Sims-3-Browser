package com.flurry.org.codehaus.jackson.sym;
public final class BytesToNameCanonicalizer {
    protected static final int DEFAULT_TABLE_SIZE = 64;
    static final int INITIAL_COLLISION_LEN = 32;
    static final int LAST_VALID_BUCKET = 254;
    static final int MAX_ENTRIES_FOR_REUSE = 6000;
    protected static final int MAX_TABLE_SIZE = 65536;
    static final int MIN_HASH_SIZE = 16;
    private int _collCount;
    private int _collEnd;
    private com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket[] _collList;
    private boolean _collListShared;
    private int _count;
    final boolean _intern;
    private int[] _mainHash;
    private int _mainHashMask;
    private boolean _mainHashShared;
    private com.flurry.org.codehaus.jackson.sym.Name[] _mainNames;
    private boolean _mainNamesShared;
    private transient boolean _needRehash;
    final com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer _parent;

    private BytesToNameCanonicalizer(int p3, boolean p4)
    {
        this._parent = 0;
        this._intern = p4;
        if (p3 >= 16) {
            if (((p3 - 1) & p3) != 0) {
                int v0 = 16;
                while (v0 < p3) {
                    v0 += v0;
                }
                p3 = v0;
            }
        } else {
            p3 = 16;
        }
        this.initTables(p3);
        return;
    }

    private BytesToNameCanonicalizer(com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer p3, boolean p4)
    {
        this._parent = p3;
        this._intern = p4;
        this._count = p3._count;
        this._mainHashMask = p3._mainHashMask;
        this._mainHash = p3._mainHash;
        this._mainNames = p3._mainNames;
        this._collList = p3._collList;
        this._collCount = p3._collCount;
        this._collEnd = p3._collEnd;
        this._needRehash = 0;
        this._mainHashShared = 1;
        this._mainNamesShared = 1;
        this._collListShared = 1;
        return;
    }

    private void _addSymbol(int p10, com.flurry.org.codehaus.jackson.sym.Name p11)
    {
        if (this._mainHashShared) {
            this.unshareMain();
        }
        if (this._needRehash) {
            this.rehash();
        }
        this._count = (this._count + 1);
        int v4 = (p10 & this._mainHashMask);
        if (this._mainNames[v4] != null) {
            if (this._collListShared) {
                this.unshareCollision();
            }
            int v0_1;
            this._collCount = (this._collCount + 1);
            int v1 = this._mainHash[v4];
            int v0_0 = (v1 & 255);
            if (v0_0 != 0) {
                v0_1 = (v0_0 - 1);
            } else {
                if (this._collEnd > 254) {
                    v0_1 = this.findBestBucket();
                } else {
                    v0_1 = this._collEnd;
                    this._collEnd = (this._collEnd + 1);
                    if (v0_1 >= this._collList.length) {
                        this.expandCollision();
                    }
                }
                this._mainHash[v4] = ((v1 & -256) | (v0_1 + 1));
            }
            this._collList[v0_1] = new com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket(p11, this._collList[v0_1]);
        } else {
            this._mainHash[v4] = (p10 << 8);
            if (this._mainNamesShared) {
                this.unshareNames();
            }
            this._mainNames[v4] = p11;
        }
        int v3 = this._mainHash.length;
        if (this._count > (v3 >> 1)) {
            int v2 = (v3 >> 2);
            if (this._count <= (v3 - v2)) {
                if (this._collCount >= v2) {
                    this._needRehash = 1;
                }
            } else {
                this._needRehash = 1;
            }
        }
        return;
    }

    public static final int calcHash(int p2)
    {
        int v0_1 = (p2 ^ (p2 >> 16));
        return (v0_1 ^ (v0_1 >> 8));
    }

    public static final int calcHash(int p2, int p3)
    {
        int v0_0 = ((p2 * 31) + p3);
        int v0_1 = (v0_0 ^ (v0_0 >> 16));
        return (v0_1 ^ (v0_1 >> 8));
    }

    public static final int calcHash(int[] p4, int p5)
    {
        int v0_0 = p4[0];
        int v1 = 1;
        while (v1 < p5) {
            v0_0 = ((v0_0 * 31) + p4[v1]);
            v1++;
        }
        int v0_1 = (v0_0 ^ (v0_0 >> 16));
        return (v0_1 ^ (v0_1 >> 8));
    }

    private static com.flurry.org.codehaus.jackson.sym.Name constructName(int p1, String p2, int p3, int p4)
    {
        com.flurry.org.codehaus.jackson.sym.Name2 v0_1;
        if (p4 != 0) {
            v0_1 = new com.flurry.org.codehaus.jackson.sym.Name2(p2, p1, p3, p4);
        } else {
            v0_1 = new com.flurry.org.codehaus.jackson.sym.Name1(p2, p1, p3);
        }
        return v0_1;
    }

    private static com.flurry.org.codehaus.jackson.sym.Name constructName(int p8, String p9, int[] p10, int p11)
    {
        com.flurry.org.codehaus.jackson.sym.NameN v0_0;
        if (p11 >= 4) {
            int[] v6 = new int[p11];
            int v7 = 0;
            while (v7 < p11) {
                v6[v7] = p10[v7];
                v7++;
            }
            v0_0 = new com.flurry.org.codehaus.jackson.sym.NameN(p9, p8, v6, p11);
        } else {
            switch (p11) {
                case 1:
                    v0_0 = new com.flurry.org.codehaus.jackson.sym.Name1(p9, p8, p10[0]);
                    break;
                case 2:
                    v0_0 = new com.flurry.org.codehaus.jackson.sym.Name2(p9, p8, p10[0], p10[1]);
                    break;
                case 3:
                    v0_0 = new com.flurry.org.codehaus.jackson.sym.Name3(p9, p8, p10[0], p10[1], p10[2]);
                    break;
                default:
            }
        }
        return v0_0;
    }

    public static com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer createRoot()
    {
        return new com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer(64, 1);
    }

    private void expandCollision()
    {
        com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket[] v1 = this._collList;
        int v0 = v1.length;
        com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket[] v2_1 = new com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket[(v0 + v0)];
        this._collList = v2_1;
        System.arraycopy(v1, 0, this._collList, 0, v0);
        return;
    }

    private int findBestBucket()
    {
        int v0 = 2147483647;
        int v1 = -1;
        int v4 = 0;
        int v5 = this._collEnd;
        while (v4 < v5) {
            int v3 = this._collList[v4].length();
            if (v3 < v0) {
                if (v3 != 1) {
                    v0 = v3;
                    v1 = v4;
                } else {
                    return v4;
                }
            }
            v4++;
        }
        v4 = v1;
        return v4;
    }

    public static com.flurry.org.codehaus.jackson.sym.Name getEmptyName()
    {
        return com.flurry.org.codehaus.jackson.sym.Name1.getEmptyName();
    }

    private void initTables(int p3)
    {
        this._count = 0;
        int v0_2 = new int[p3];
        this._mainHash = v0_2;
        int v0_3 = new com.flurry.org.codehaus.jackson.sym.Name[p3];
        this._mainNames = v0_3;
        this._mainHashShared = 0;
        this._mainNamesShared = 0;
        this._mainHashMask = (p3 - 1);
        this._collListShared = 1;
        this._collList = 0;
        this._collEnd = 0;
        this._needRehash = 0;
        return;
    }

    private void markAsShared()
    {
        this._mainHashShared = 1;
        this._mainNamesShared = 1;
        this._collListShared = 1;
        return;
    }

    private declared_synchronized void mergeChild(com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer p4)
    {
        try {
            if (p4._count > this._count) {
                if (p4.size() <= 6000) {
                    this._count = p4._count;
                    this._mainHash = p4._mainHash;
                    this._mainNames = p4._mainNames;
                    this._mainHashShared = 1;
                    this._mainNamesShared = 1;
                    this._mainHashMask = p4._mainHashMask;
                    this._collList = p4._collList;
                    this._collCount = p4._collCount;
                    this._collEnd = p4._collEnd;
                } else {
                    this.initTables(64);
                }
            }
        } catch (int v1_8) {
            throw v1_8;
        }
        return;
    }

    private void nukeSymbols()
    {
        this._count = 0;
        java.util.Arrays.fill(this._mainHash, 0);
        java.util.Arrays.fill(this._mainNames, 0);
        java.util.Arrays.fill(this._collList, 0);
        this._collCount = 0;
        this._collEnd = 0;
        return;
    }

    private void rehash()
    {
        this._needRehash = 0;
        this._mainNamesShared = 0;
        int v7 = this._mainHash.length;
        int v8 = (v7 + v7);
        if (v8 <= 65536) {
            int v0_22 = new int[v8];
            this._mainHash = v0_22;
            this._mainHashMask = (v8 - 1);
            com.flurry.org.codehaus.jackson.sym.Name[] v12 = this._mainNames;
            int v0_41 = new com.flurry.org.codehaus.jackson.sym.Name[v8];
            this._mainNames = v0_41;
            int v14 = 0;
            int v5_0 = 0;
            while (v5_0 < v7) {
                com.flurry.org.codehaus.jackson.sym.Name v13_0 = v12[v5_0];
                if (v13_0 != null) {
                    v14++;
                    int v4_0 = v13_0.hashCode();
                    int v6_0 = (v4_0 & this._mainHashMask);
                    this._mainNames[v6_0] = v13_0;
                    this._mainHash[v6_0] = (v4_0 << 8);
                }
                v5_0++;
            }
            int v10 = this._collEnd;
            if (v10 != 0) {
                this._collCount = 0;
                this._collEnd = 0;
                this._collListShared = 0;
                com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket[] v9 = this._collList;
                int v0_51 = new com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket[v9.length];
                this._collList = v0_51;
                int v5_1 = 0;
                while (v5_1 < v10) {
                    com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket v3 = v9[v5_1];
                    while (v3 != null) {
                        v14++;
                        com.flurry.org.codehaus.jackson.sym.Name v13_1 = v3._name;
                        int v4_1 = v13_1.hashCode();
                        int v6_1 = (v4_1 & this._mainHashMask);
                        int v15 = this._mainHash[v6_1];
                        if (this._mainNames[v6_1] != null) {
                            int v2_1;
                            this._collCount = (this._collCount + 1);
                            int v2_0 = (v15 & 255);
                            if (v2_0 != 0) {
                                v2_1 = (v2_0 - 1);
                            } else {
                                if (this._collEnd > 254) {
                                    v2_1 = this.findBestBucket();
                                } else {
                                    v2_1 = this._collEnd;
                                    this._collEnd = (this._collEnd + 1);
                                    if (v2_1 >= this._collList.length) {
                                        this = this.expandCollision();
                                    }
                                }
                                this._mainHash[v6_1] = ((v15 & -256) | (v2_1 + 1));
                            }
                            int[] v16_13 = this._collList;
                            int v17_3 = new com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket;
                            v17_3(v13_1, this._collList[v2_1]);
                            v16_13[v2_1] = v17_3;
                        } else {
                            this._mainHash[v6_1] = (v4_1 << 8);
                            this._mainNames[v6_1] = v13_1;
                        }
                        v3 = v3._next;
                    }
                    v5_1++;
                }
                if (v14 != this._count) {
                    throw new RuntimeException(new StringBuilder().append("Internal error: count after rehash ").append(v14).append("; should be ").append(this._count).toString());
                }
            }
        } else {
            this.nukeSymbols();
        }
        return;
    }

    private void unshareCollision()
    {
        com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket[] v1 = this._collList;
        if (v1 != null) {
            int v0 = v1.length;
            com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket[] v2_0 = new com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket[v0];
            this._collList = v2_0;
            System.arraycopy(v1, 0, this._collList, 0, v0);
        } else {
            com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket[] v2_3 = new com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket[32];
            this._collList = v2_3;
        }
        this._collListShared = 0;
        return;
    }

    private void unshareMain()
    {
        int[] v1 = this._mainHash;
        int v0 = this._mainHash.length;
        int[] v2_1 = new int[v0];
        this._mainHash = v2_1;
        System.arraycopy(v1, 0, this._mainHash, 0, v0);
        this._mainHashShared = 0;
        return;
    }

    private void unshareNames()
    {
        com.flurry.org.codehaus.jackson.sym.Name[] v1 = this._mainNames;
        int v0 = v1.length;
        com.flurry.org.codehaus.jackson.sym.Name[] v2_0 = new com.flurry.org.codehaus.jackson.sym.Name[v0];
        this._mainNames = v2_0;
        System.arraycopy(v1, 0, this._mainNames, 0, v0);
        this._mainNamesShared = 0;
        return;
    }

    public com.flurry.org.codehaus.jackson.sym.Name addName(String p4, int p5, int p6)
    {
        if (this._intern) {
            p4 = com.flurry.org.codehaus.jackson.util.InternCache.instance.intern(p4);
        }
        int v0;
        if (p6 != 0) {
            v0 = com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer.calcHash(p5, p6);
        } else {
            v0 = com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer.calcHash(p5);
        }
        com.flurry.org.codehaus.jackson.sym.Name v1 = com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer.constructName(v0, p4, p5, p6);
        this._addSymbol(v0, v1);
        return v1;
    }

    public com.flurry.org.codehaus.jackson.sym.Name addName(String p4, int[] p5, int p6)
    {
        if (this._intern) {
            p4 = com.flurry.org.codehaus.jackson.util.InternCache.instance.intern(p4);
        }
        int v0 = com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer.calcHash(p5, p6);
        com.flurry.org.codehaus.jackson.sym.Name v1 = com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer.constructName(v0, p4, p5, p6);
        this._addSymbol(v0, v1);
        return v1;
    }

    public com.flurry.org.codehaus.jackson.sym.Name findName(int p8)
    {
        com.flurry.org.codehaus.jackson.sym.Name v3;
        int v1 = com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer.calcHash(p8);
        int v2 = (v1 & this._mainHashMask);
        int v4_2 = this._mainHash[v2];
        if ((((v4_2 >> 8) ^ v1) << 8) != 0) {
            if (v4_2 != 0) {
                int v4_0 = (v4_2 & 255);
                if (v4_0 > 0) {
                    com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket v0 = this._collList[(v4_0 - 1)];
                    if (v0 != null) {
                        v3 = v0.find(v1, p8, 0);
                        return v3;
                    }
                }
                v3 = 0;
            } else {
                v3 = 0;
            }
        } else {
            v3 = this._mainNames[v2];
            if (v3 != null) {
                if (!v3.equals(p8)) {
                }
            } else {
                v3 = 0;
            }
        }
        return v3;
    }

    public com.flurry.org.codehaus.jackson.sym.Name findName(int p8, int p9)
    {
        com.flurry.org.codehaus.jackson.sym.Name v3;
        int v1 = com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer.calcHash(p8, p9);
        int v2 = (v1 & this._mainHashMask);
        int v4_2 = this._mainHash[v2];
        if ((((v4_2 >> 8) ^ v1) << 8) != 0) {
            if (v4_2 != 0) {
                int v4_0 = (v4_2 & 255);
                if (v4_0 > 0) {
                    com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket v0 = this._collList[(v4_0 - 1)];
                    if (v0 != null) {
                        v3 = v0.find(v1, p8, p9);
                        return v3;
                    }
                }
                v3 = 0;
            } else {
                v3 = 0;
            }
        } else {
            v3 = this._mainNames[v2];
            if (v3 != null) {
                if (!v3.equals(p8, p9)) {
                }
            } else {
                v3 = 0;
            }
        }
        return v3;
    }

    public com.flurry.org.codehaus.jackson.sym.Name findName(int[] p8, int p9)
    {
        com.flurry.org.codehaus.jackson.sym.Name v3;
        int v1 = com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer.calcHash(p8, p9);
        int v2 = (v1 & this._mainHashMask);
        int v4_2 = this._mainHash[v2];
        if ((((v4_2 >> 8) ^ v1) << 8) != 0) {
            if (v4_2 != 0) {
                int v4_0 = (v4_2 & 255);
                if (v4_0 > 0) {
                    com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer$Bucket v0 = this._collList[(v4_0 - 1)];
                    if (v0 != null) {
                        v3 = v0.find(v1, p8, p9);
                        return v3;
                    }
                }
                v3 = 0;
            } else {
                v3 = 0;
            }
        } else {
            v3 = this._mainNames[v2];
            if ((v3 != null) && (!v3.equals(p8, p9))) {
            }
        }
        return v3;
    }

    public declared_synchronized com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer makeChild(boolean p2, boolean p3)
    {
        try {
            return new com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer(this, p3);
        } catch (Throwable v0_2) {
            throw v0_2;
        }
    }

    public boolean maybeDirty()
    {
        int v0_1;
        if (this._mainHashShared) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public void release()
    {
        if ((this.maybeDirty()) && (this._parent != null)) {
            this._parent.mergeChild(this);
            this.markAsShared();
        }
        return;
    }

    public int size()
    {
        return this._count;
    }
}
