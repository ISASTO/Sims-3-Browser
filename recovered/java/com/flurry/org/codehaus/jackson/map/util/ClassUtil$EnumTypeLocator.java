package com.flurry.org.codehaus.jackson.map.util;
 class ClassUtil$EnumTypeLocator {
    static final com.flurry.org.codehaus.jackson.map.util.ClassUtil$EnumTypeLocator instance;
    private final reflect.Field enumMapTypeField;
    private final reflect.Field enumSetTypeField;

    static ClassUtil$EnumTypeLocator()
    {
        com.flurry.org.codehaus.jackson.map.util.ClassUtil$EnumTypeLocator.instance = new com.flurry.org.codehaus.jackson.map.util.ClassUtil$EnumTypeLocator();
        return;
    }

    private ClassUtil$EnumTypeLocator()
    {
        this.enumSetTypeField = com.flurry.org.codehaus.jackson.map.util.ClassUtil$EnumTypeLocator.locateField(java.util.EnumSet, "elementType", Class);
        this.enumMapTypeField = com.flurry.org.codehaus.jackson.map.util.ClassUtil$EnumTypeLocator.locateField(java.util.EnumMap, "elementType", Class);
        return;
    }

    private Object get(Object p3, reflect.Field p4)
    {
        try {
            return p4.get(p3);
        } catch (Exception v0) {
            throw new IllegalArgumentException(v0);
        }
    }

    private static reflect.Field locateField(Class p7, String p8, Class p9)
    {
        reflect.Field v3 = 0;
        reflect.Field[] v2 = p7.getDeclaredFields();
        reflect.Field[] v0_1 = v2;
        int v4_0 = 0;
        while (v4_0 < v0_1.length) {
            reflect.Field v1_1 = v0_1[v4_0];
            if ((!p8.equals(v1_1.getName())) || (v1_1.getType() != p9)) {
                v4_0++;
            } else {
                v3 = v1_1;
                break;
            }
        }
        int v6_3;
        if (v3 != null) {
            if (v3 != null) {
                try {
                    v3.setAccessible(1);
                } catch (int v6) {
                }
            }
            v6_3 = v3;
        } else {
            reflect.Field[] v0_0 = v2;
            int v4_1 = 0;
            while (v4_1 < v0_0.length) {
                reflect.Field v1_0 = v0_0[v4_1];
                if (v1_0.getType() == p9) {
                    if (v3 == null) {
                        v3 = v1_0;
                    } else {
                        v6_3 = 0;
                        return v6_3;
                    }
                }
                v4_1++;
            }
        }
        return v6_3;
    }

    public Class enumTypeFor(java.util.EnumMap p3)
    {
        if (this.enumMapTypeField == null) {
            throw new IllegalStateException("Can not figure out type for EnumMap (odd JDK platform?)");
        } else {
            return ((Class) this.get(p3, this.enumMapTypeField));
        }
    }

    public Class enumTypeFor(java.util.EnumSet p3)
    {
        if (this.enumSetTypeField == null) {
            throw new IllegalStateException("Can not figure out type for EnumSet (odd JDK platform?)");
        } else {
            return ((Class) this.get(p3, this.enumSetTypeField));
        }
    }
}
