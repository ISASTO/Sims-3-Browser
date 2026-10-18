package com.flurry.org.codehaus.jackson.sym;
public final class Name2 extends com.flurry.org.codehaus.jackson.sym.Name {
    final int mQuad1;
    final int mQuad2;

    Name2(String p1, int p2, int p3, int p4)
    {
        super(p1, p2);
        super.mQuad1 = p3;
        super.mQuad2 = p4;
        return;
    }

    public boolean equals(int p2)
    {
        return 0;
    }

    public boolean equals(int p2, int p3)
    {
        if ((p2 != this.mQuad1) || (p3 != this.mQuad2)) {
            int v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public boolean equals(int[] p5, int p6)
    {
        int v0 = 1;
        if ((p6 != 2) || ((p5[0] != this.mQuad1) || (p5[1] != this.mQuad2))) {
            v0 = 0;
        }
        return v0;
    }
}
