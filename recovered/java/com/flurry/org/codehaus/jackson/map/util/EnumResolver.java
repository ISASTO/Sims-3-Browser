package com.flurry.org.codehaus.jackson.map.util;
public class EnumResolver {
    protected final Class _enumClass;
    protected final Enum[] _enums;
    protected final java.util.HashMap _enumsById;

    protected EnumResolver(Class p1, Enum[] p2, java.util.HashMap p3)
    {
        this._enumClass = p1;
        this._enums = p2;
        this._enumsById = p3;
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.util.EnumResolver constructFor(Class p9, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p10)
    {
        Enum[] v2_1 = ((Enum[]) p9.getEnumConstants());
        if (v2_1 != null) {
            java.util.HashMap v5_1 = new java.util.HashMap();
            Enum[] v0 = v2_1;
            int v4 = v0.length;
            int v3 = 0;
            while (v3 < v4) {
                Enum v1 = v0[v3];
                v5_1.put(p10.findEnumValue(v1), v1);
                v3++;
            }
            return new com.flurry.org.codehaus.jackson.map.util.EnumResolver(p9, v2_1, v5_1);
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("No enum constants for class ").append(p9.getName()).toString());
        }
    }

    public static com.flurry.org.codehaus.jackson.map.util.EnumResolver constructUnsafe(Class p2, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p3)
    {
        return com.flurry.org.codehaus.jackson.map.util.EnumResolver.constructFor(p2, p3);
    }

    public static com.flurry.org.codehaus.jackson.map.util.EnumResolver constructUnsafeUsingToString(Class p2)
    {
        return com.flurry.org.codehaus.jackson.map.util.EnumResolver.constructUsingToString(p2);
    }

    public static com.flurry.org.codehaus.jackson.map.util.EnumResolver constructUsingToString(Class p5)
    {
        Enum[] v1_1 = ((Enum[]) p5.getEnumConstants());
        java.util.HashMap v3_1 = new java.util.HashMap();
        int v2 = v1_1.length;
        while(true) {
            v2--;
            if (v2 < 0) {
                break;
            }
            Enum v0 = v1_1[v2];
            v3_1.put(v0.toString(), v0);
        }
        return new com.flurry.org.codehaus.jackson.map.util.EnumResolver(p5, v1_1, v3_1);
    }

    public Enum findEnum(String p2)
    {
        return ((Enum) this._enumsById.get(p2));
    }

    public Enum getEnum(int p2)
    {
        if ((p2 >= 0) && (p2 < this._enums.length)) {
            Enum v0_3 = this._enums[p2];
        } else {
            v0_3 = 0;
        }
        return v0_3;
    }

    public Class getEnumClass()
    {
        return this._enumClass;
    }

    public int lastValidIndex()
    {
        return (this._enums.length - 1);
    }
}
