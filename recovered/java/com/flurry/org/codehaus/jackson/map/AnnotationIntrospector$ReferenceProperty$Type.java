package com.flurry.org.codehaus.jackson.map;
public final enum class AnnotationIntrospector$ReferenceProperty$Type extends java.lang.Enum {
    private static final synthetic com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type[] $VALUES;
    public static final enum com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type BACK_REFERENCE;
    public static final enum com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type MANAGED_REFERENCE;

    static AnnotationIntrospector$ReferenceProperty$Type()
    {
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type.MANAGED_REFERENCE = new com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type("MANAGED_REFERENCE", 0);
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type.BACK_REFERENCE = new com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type("BACK_REFERENCE", 1);
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type[] v0_1 = new com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type[2];
        v0_1[0] = com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type.MANAGED_REFERENCE;
        v0_1[1] = com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type.BACK_REFERENCE;
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type.$VALUES = v0_1;
        return;
    }

    private AnnotationIntrospector$ReferenceProperty$Type(String p1, int p2)
    {
        super(p1, p2);
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type valueOf(String p1)
    {
        return ((com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type) Enum.valueOf(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type, p1));
    }

    public static com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type[] values()
    {
        return ((com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type[]) com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type.$VALUES.clone());
    }
}
