package com.flurry.org.codehaus.jackson.sym;
public final class Name3 extends com.flurry.org.codehaus.jackson.sym.Name {
    final int mQuad1;
    final int mQuad2;
    final int mQuad3;

    Name3(String p1, int p2, int p3, int p4, int p5)
    {
        super(p1, p2);
        super.mQuad1 = p3;
        super.mQuad2 = p4;
        super.mQuad3 = p5;
        return;
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
        int v0 = 1;
        if ((p6 != 3) || ((p5[0] != this.mQuad1) || ((p5[1] != this.mQuad2) || (p5[2] != this.mQuad3)))) {
            v0 = 0;
        }
        return v0;
    }
}
