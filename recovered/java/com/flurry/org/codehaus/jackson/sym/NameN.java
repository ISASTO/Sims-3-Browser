package com.flurry.org.codehaus.jackson.sym;
public final class NameN extends com.flurry.org.codehaus.jackson.sym.Name {
    final int mQuadLen;
    final int[] mQuads;

    NameN(String p3, int p4, int[] p5, int p6)
    {
        super(p3, p4);
        if (p6 >= 3) {
            super.mQuads = p5;
            super.mQuadLen = p6;
            return;
        } else {
            throw new IllegalArgumentException("Qlen must >= 3");
        }
    }

    public boolean equals(int p2)
    {
        return 0;
    }

    public boolean equals(int p2, int p3)
    {
        return 0;
    }

    public boolean equals(int[] p5, int p6)
    {
        int v1 = 0;
        if (p6 == this.mQuadLen) {
            int v0 = 0;
            while (v0 < p6) {
                if (p5[v0] == this.mQuads[v0]) {
                    v0++;
                }
            }
            v1 = 1;
        }
        return v1;
    }
}
