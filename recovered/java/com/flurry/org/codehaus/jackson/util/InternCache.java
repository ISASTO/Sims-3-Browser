package com.flurry.org.codehaus.jackson.util;
public final class InternCache extends java.util.LinkedHashMap {
    private static final int MAX_ENTRIES = 192;
    public static final com.flurry.org.codehaus.jackson.util.InternCache instance;

    static InternCache()
    {
        com.flurry.org.codehaus.jackson.util.InternCache.instance = new com.flurry.org.codehaus.jackson.util.InternCache();
        return;
    }

    private InternCache()
    {
        super(192, 1061997773, 1);
        return;
    }

    public declared_synchronized String intern(String p3)
    {
        try {
            String v0_1 = ((String) this.get(p3));
        } catch (Throwable v1) {
            throw v1;
        }
        if (v0_1 == null) {
            v0_1 = p3.intern();
            this.put(v0_1, v0_1);
        }
        return v0_1;
    }

    protected boolean removeEldestEntry(java.util.Map$Entry p3)
    {
        int v0_1;
        if (this.size() <= 192) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }
}
