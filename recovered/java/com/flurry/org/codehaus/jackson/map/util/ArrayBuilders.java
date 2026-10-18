package com.flurry.org.codehaus.jackson.map.util;
public final class ArrayBuilders {
    com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$BooleanBuilder _booleanBuilder;
    com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$ByteBuilder _byteBuilder;
    com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$DoubleBuilder _doubleBuilder;
    com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$FloatBuilder _floatBuilder;
    com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$IntBuilder _intBuilder;
    com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$LongBuilder _longBuilder;
    com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$ShortBuilder _shortBuilder;

    public ArrayBuilders()
    {
        this._booleanBuilder = 0;
        this._byteBuilder = 0;
        this._shortBuilder = 0;
        this._intBuilder = 0;
        this._longBuilder = 0;
        this._floatBuilder = 0;
        this._doubleBuilder = 0;
        return;
    }

    public static java.util.List addToList(java.util.List p0, Object p1)
    {
        if (p0 == null) {
            p0 = new java.util.ArrayList();
        }
        p0.add(p1);
        return p0;
    }

    public static Iterable arrayAsIterable(Object[] p1)
    {
        return new com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$ArrayIterator(p1);
    }

    public static java.util.Iterator arrayAsIterator(Object[] p1)
    {
        return new com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$ArrayIterator(p1);
    }

    public static java.util.HashSet arrayToSet(Object[] p5)
    {
        java.util.HashSet v4_1 = new java.util.HashSet();
        if (p5 != null) {
            int v3 = p5.length;
            int v2 = 0;
            while (v2 < v3) {
                v4_1.add(p5[v2]);
                v2++;
            }
        }
        return v4_1;
    }

    public static Object[] insertInList(Object[] p5, Object p6)
    {
        int v0 = p5.length;
        Object[] v1_1 = ((Object[]) ((Object[]) reflect.Array.newInstance(p5.getClass().getComponentType(), (v0 + 1))));
        if (v0 > 0) {
            System.arraycopy(p5, 0, v1_1, 1, v0);
        }
        v1_1[0] = p6;
        return v1_1;
    }

    public static Object[] insertInListNoDup(Object[] p7, Object p8)
    {
        int v1 = p7.length;
        int v0 = 0;
        while (v0 < v1) {
            if (p7[v0] != p8) {
                v0++;
            } else {
                if (v0 != 0) {
                    Object[] v2_1 = ((Object[]) ((Object[]) reflect.Array.newInstance(p7.getClass().getComponentType(), v1)));
                    System.arraycopy(p7, 0, v2_1, 1, v0);
                    p7[0] = p8;
                } else {
                    v2_1 = p7;
                }
            }
            return v2_1;
        }
        v2_1 = ((Object[]) ((Object[]) reflect.Array.newInstance(p7.getClass().getComponentType(), (v1 + 1))));
        if (v1 > 0) {
            System.arraycopy(p7, 0, v2_1, 1, v1);
        }
        v2_1[0] = p8;
        return v2_1;
    }

    public com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$BooleanBuilder getBooleanBuilder()
    {
        if (this._booleanBuilder == null) {
            this._booleanBuilder = new com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$BooleanBuilder();
        }
        return this._booleanBuilder;
    }

    public com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$ByteBuilder getByteBuilder()
    {
        if (this._byteBuilder == null) {
            this._byteBuilder = new com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$ByteBuilder();
        }
        return this._byteBuilder;
    }

    public com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$DoubleBuilder getDoubleBuilder()
    {
        if (this._doubleBuilder == null) {
            this._doubleBuilder = new com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$DoubleBuilder();
        }
        return this._doubleBuilder;
    }

    public com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$FloatBuilder getFloatBuilder()
    {
        if (this._floatBuilder == null) {
            this._floatBuilder = new com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$FloatBuilder();
        }
        return this._floatBuilder;
    }

    public com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$IntBuilder getIntBuilder()
    {
        if (this._intBuilder == null) {
            this._intBuilder = new com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$IntBuilder();
        }
        return this._intBuilder;
    }

    public com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$LongBuilder getLongBuilder()
    {
        if (this._longBuilder == null) {
            this._longBuilder = new com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$LongBuilder();
        }
        return this._longBuilder;
    }

    public com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$ShortBuilder getShortBuilder()
    {
        if (this._shortBuilder == null) {
            this._shortBuilder = new com.flurry.org.codehaus.jackson.map.util.ArrayBuilders$ShortBuilder();
        }
        return this._shortBuilder;
    }
}
