package com.flurry.org.codehaus.jackson.map.util;
public final class EnumValues {
    private final java.util.EnumMap _values;

    private EnumValues(java.util.Map p2)
    {
        this._values = new java.util.EnumMap(p2);
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.util.EnumValues construct(Class p1, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p2)
    {
        return com.flurry.org.codehaus.jackson.map.util.EnumValues.constructFromName(p1, p2);
    }

    public static com.flurry.org.codehaus.jackson.map.util.EnumValues constructFromName(Class p11, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p12)
    {
        Enum[] v7_1 = ((Enum[]) com.flurry.org.codehaus.jackson.map.util.ClassUtil.findEnumType(p11).getEnumConstants());
        if (v7_1 == null) {
            throw new IllegalArgumentException(new StringBuilder().append("Can not determine enum constants for Class ").append(p11.getName()).toString());
        } else {
            java.util.HashMap v5_1 = new java.util.HashMap();
            Enum[] v0 = v7_1;
            int v4 = v0.length;
            int v3 = 0;
            while (v3 < v4) {
                Enum v2 = v0[v3];
                v5_1.put(v2, new com.flurry.org.codehaus.jackson.io.SerializedString(p12.findEnumValue(v2)));
                v3++;
            }
            return new com.flurry.org.codehaus.jackson.map.util.EnumValues(v5_1);
        }
    }

    public static com.flurry.org.codehaus.jackson.map.util.EnumValues constructFromToString(Class p10, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p11)
    {
        Enum[] v6_1 = ((Enum[]) com.flurry.org.codehaus.jackson.map.util.ClassUtil.findEnumType(p10).getEnumConstants());
        if (v6_1 == null) {
            throw new IllegalArgumentException(new StringBuilder().append("Can not determine enum constants for Class ").append(p10.getName()).toString());
        } else {
            java.util.HashMap v5_1 = new java.util.HashMap();
            Enum[] v0 = v6_1;
            int v4 = v0.length;
            int v3 = 0;
            while (v3 < v4) {
                Enum v2 = v0[v3];
                v5_1.put(v2, new com.flurry.org.codehaus.jackson.io.SerializedString(v2.toString()));
                v3++;
            }
            return new com.flurry.org.codehaus.jackson.map.util.EnumValues(v5_1);
        }
    }

    public com.flurry.org.codehaus.jackson.io.SerializedString serializedValueFor(Enum p2)
    {
        return ((com.flurry.org.codehaus.jackson.io.SerializedString) this._values.get(p2));
    }

    public String valueFor(Enum p3)
    {
        String v1_1;
        com.flurry.org.codehaus.jackson.io.SerializedString v0_1 = ((com.flurry.org.codehaus.jackson.io.SerializedString) this._values.get(p3));
        if (v0_1 != null) {
            v1_1 = v0_1.getValue();
        } else {
            v1_1 = 0;
        }
        return v1_1;
    }

    public java.util.Collection values()
    {
        return this._values.values();
    }
}
