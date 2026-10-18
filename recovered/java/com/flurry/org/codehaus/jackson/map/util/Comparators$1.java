package com.flurry.org.codehaus.jackson.map.util;
final class Comparators$1 {
    final synthetic Object val$defaultValue;
    final synthetic int val$length;

    Comparators$1(Object p1, int p2)
    {
        this.val$defaultValue = p1;
        this.val$length = p2;
        return;
    }

    public boolean equals(Object p8)
    {
        int v3 = 1;
        if (p8 != this) {
            if ((p8 != null) && (p8.getClass() == this.val$defaultValue.getClass())) {
                if (reflect.Array.getLength(p8) == this.val$length) {
                    int v0 = 0;
                    while (v0 < this.val$length) {
                        Object v1 = reflect.Array.get(this.val$defaultValue, v0);
                        Object v2 = reflect.Array.get(p8, v0);
                        if ((v1 == v2) || ((v1 == null) || (v1.equals(v2)))) {
                            v0++;
                        } else {
                            v3 = 0;
                            break;
                        }
                    }
                } else {
                    v3 = 0;
                }
            } else {
                v3 = 0;
            }
        }
        return v3;
    }
}
