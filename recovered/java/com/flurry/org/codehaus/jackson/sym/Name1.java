package com.flurry.org.codehaus.jackson.sym;
public final class Name1 extends com.flurry.org.codehaus.jackson.sym.Name {
    static final com.flurry.org.codehaus.jackson.sym.Name1 sEmptyName;
    final int mQuad;

    static Name1()
    {
        com.flurry.org.codehaus.jackson.sym.Name1.sEmptyName = new com.flurry.org.codehaus.jackson.sym.Name1("", 0, 0);
        return;
    }

    Name1(String p1, int p2, int p3)
    {
        super(p1, p2);
        super.mQuad = p3;
        return;
    }

    static final com.flurry.org.codehaus.jackson.sym.Name1 getEmptyName()
    {
        return com.flurry.org.codehaus.jackson.sym.Name1.sEmptyName;
    }

    public boolean equals(int p2)
    {
        int v0_1;
        if (p2 != this.mQuad) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean equals(int p2, int p3)
    {
        if ((p2 != this.mQuad) || (p3 != 0)) {
            int v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean equals(int[] p5, int p6)
    {
        int v0 = 1;
        if ((p6 != 1) || (p5[0] != this.mQuad)) {
            v0 = 0;
        }
        return v0;
    }
}
