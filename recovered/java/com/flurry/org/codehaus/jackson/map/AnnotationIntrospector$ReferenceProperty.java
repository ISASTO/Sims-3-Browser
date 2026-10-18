package com.flurry.org.codehaus.jackson.map;
public class AnnotationIntrospector$ReferenceProperty {
    private final String _name;
    private final com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type _type;

    public AnnotationIntrospector$ReferenceProperty(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type p1, String p2)
    {
        this._type = p1;
        this._name = p2;
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty back(String p2)
    {
        return new com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type.BACK_REFERENCE, p2);
    }

    public static com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty managed(String p2)
    {
        return new com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type.MANAGED_REFERENCE, p2);
    }

    public String getName()
    {
        return this._name;
    }

    public com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type getType()
    {
        return this._type;
    }

    public boolean isBackReference()
    {
        int v0_1;
        if (this._type != com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type.BACK_REFERENCE) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean isManagedReference()
    {
        int v0_1;
        if (this._type != com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty$Type.MANAGED_REFERENCE) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }
}
