package com.flurry.org.codehaus.jackson.map.deser.std;
public class StdKeyDeserializers {
    protected final java.util.HashMap _keyDeserializers;

    protected StdKeyDeserializers()
    {
        this._keyDeserializers = new java.util.HashMap();
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$BoolKD());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$ByteKD());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$CharKD());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$ShortKD());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$IntKD());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$LongKD());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$FloatKD());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$DoubleKD());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$DateKD());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$CalendarKD());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$UuidKD());
        return;
    }

    private void add(com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer p4)
    {
        this._keyDeserializers.put(com.flurry.org.codehaus.jackson.map.type.TypeFactory.defaultInstance().uncheckedSimpleType(p4.getKeyClass()), p4);
        return;
    }

    public static java.util.HashMap constructAll()
    {
        return new com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializers()._keyDeserializers;
    }

    public static com.flurry.org.codehaus.jackson.map.KeyDeserializer constructEnumKeyDeserializer(com.flurry.org.codehaus.jackson.map.util.EnumResolver p2)
    {
        return new com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$EnumKD(p2, 0);
    }

    public static com.flurry.org.codehaus.jackson.map.KeyDeserializer constructEnumKeyDeserializer(com.flurry.org.codehaus.jackson.map.util.EnumResolver p1, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2)
    {
        return new com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$EnumKD(p1, p2);
    }

    public static com.flurry.org.codehaus.jackson.map.KeyDeserializer constructStringKeyDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.type.JavaType p2)
    {
        return com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$StringKD.forType(p2.getClass());
    }

    public static com.flurry.org.codehaus.jackson.map.KeyDeserializer findStringBasedKeyDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p7, com.flurry.org.codehaus.jackson.type.JavaType p8)
    {
        com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$StringFactoryKeyDeserializer v3_1;
        com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription v0_1 = ((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p7.introspect(p8));
        com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$StringFactoryKeyDeserializer v3_8 = new Class[1];
        v3_8[0] = String;
        reflect.Constructor v1 = v0_1.findSingleArgConstructor(v3_8);
        if (v1 == null) {
            com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$StringFactoryKeyDeserializer v3_0 = new Class[1];
            v3_0[0] = String;
            reflect.Method v2 = v0_1.findFactoryMethod(v3_0);
            if (v2 == null) {
                v3_1 = 0;
            } else {
                if (p7.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS)) {
                    com.flurry.org.codehaus.jackson.map.util.ClassUtil.checkAndFixAccess(v2);
                }
                v3_1 = new com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$StringFactoryKeyDeserializer(v2);
            }
        } else {
            if (p7.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS)) {
                com.flurry.org.codehaus.jackson.map.util.ClassUtil.checkAndFixAccess(v1);
            }
            v3_1 = new com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer$StringCtorKeyDeserializer(v1);
        }
        return v3_1;
    }
}
