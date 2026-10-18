package com.flurry.org.codehaus.jackson.map.introspect;
public class BasicClassIntrospector extends com.flurry.org.codehaus.jackson.map.ClassIntrospector {
    protected static final com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription BOOLEAN_DESC;
    public static final com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector$GetterMethodFilter DEFAULT_GETTER_FILTER;
    public static final com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector$SetterAndGetterMethodFilter DEFAULT_SETTER_AND_GETTER_FILTER;
    public static final com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector$SetterMethodFilter DEFAULT_SETTER_FILTER;
    protected static final com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription INT_DESC;
    protected static final com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription LONG_DESC;
    protected static final com.flurry.org.codehaus.jackson.map.introspect.MethodFilter MINIMAL_FILTER;
    protected static final com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription STRING_DESC;
    public static final com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector instance;

    static BasicClassIntrospector()
    {
        com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector.STRING_DESC = com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription.forOtherUse(0, com.flurry.org.codehaus.jackson.map.type.SimpleType.constructUnsafe(String), com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass.constructWithoutSuperTypes(String, 0, 0));
        com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector.BOOLEAN_DESC = com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription.forOtherUse(0, com.flurry.org.codehaus.jackson.map.type.SimpleType.constructUnsafe(Boolean.TYPE), com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass.constructWithoutSuperTypes(Boolean.TYPE, 0, 0));
        com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector.INT_DESC = com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription.forOtherUse(0, com.flurry.org.codehaus.jackson.map.type.SimpleType.constructUnsafe(Integer.TYPE), com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass.constructWithoutSuperTypes(Integer.TYPE, 0, 0));
        com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector.LONG_DESC = com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription.forOtherUse(0, com.flurry.org.codehaus.jackson.map.type.SimpleType.constructUnsafe(Long.TYPE), com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass.constructWithoutSuperTypes(Long.TYPE, 0, 0));
        com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector.DEFAULT_GETTER_FILTER = new com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector$GetterMethodFilter(0);
        com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector.DEFAULT_SETTER_FILTER = new com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector$SetterMethodFilter();
        com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector.DEFAULT_SETTER_AND_GETTER_FILTER = new com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector$SetterAndGetterMethodFilter();
        com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector.MINIMAL_FILTER = new com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector$MinimalMethodFilter(0);
        com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector.instance = new com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector();
        return;
    }

    public BasicClassIntrospector()
    {
        return;
    }

    protected com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription _findCachedDesc(com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        int v1_0;
        Class v0 = p3.getRawClass();
        if (v0 != String) {
            if (v0 != Boolean.TYPE) {
                if (v0 != Integer.TYPE) {
                    if (v0 != Long.TYPE) {
                        v1_0 = 0;
                    } else {
                        v1_0 = com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector.LONG_DESC;
                    }
                } else {
                    v1_0 = com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector.INT_DESC;
                }
            } else {
                v1_0 = com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector.BOOLEAN_DESC;
            }
        } else {
            v1_0 = com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector.STRING_DESC;
        }
        return v1_0;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass classWithCreators(com.flurry.org.codehaus.jackson.map.MapperConfig p5, com.flurry.org.codehaus.jackson.type.JavaType p6, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p7)
    {
        boolean v2 = p5.isAnnotationProcessingEnabled();
        int v1 = p5.getAnnotationIntrospector();
        int v3_2 = p6.getRawClass();
        if (!v2) {
            v1 = 0;
        }
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass v0 = com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass.construct(v3_2, v1, p7);
        v0.resolveMemberMethods(com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector.MINIMAL_FILTER);
        v0.resolveCreators(1);
        return v0;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.POJOPropertiesCollector collectProperties(com.flurry.org.codehaus.jackson.map.MapperConfig p3, com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p5, boolean p6)
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass v0 = this.classWithCreators(p3, p4, p5);
        v0.resolveMemberMethods(com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector.MINIMAL_FILTER);
        v0.resolveFields();
        return this.constructPropertyCollector(p3, v0, p4, p6).collect();
    }

    protected com.flurry.org.codehaus.jackson.map.introspect.POJOPropertiesCollector constructPropertyCollector(com.flurry.org.codehaus.jackson.map.MapperConfig p2, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3, com.flurry.org.codehaus.jackson.type.JavaType p4, boolean p5)
    {
        return new com.flurry.org.codehaus.jackson.map.introspect.POJOPropertiesCollector(p2, p5, p4, p3);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.BeanDescription forClassAnnotations(com.flurry.org.codehaus.jackson.map.MapperConfig p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p4)
    {
        return this.forClassAnnotations(p2, p3, p4);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription forClassAnnotations(com.flurry.org.codehaus.jackson.map.MapperConfig p5, com.flurry.org.codehaus.jackson.type.JavaType p6, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p7)
    {
        boolean v2 = p5.isAnnotationProcessingEnabled();
        int v1 = p5.getAnnotationIntrospector();
        com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription v3_1 = p6.getRawClass();
        if (!v2) {
            v1 = 0;
        }
        return com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription.forOtherUse(p5, p6, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass.construct(v3_1, v1, p7));
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.BeanDescription forCreation(com.flurry.org.codehaus.jackson.map.DeserializationConfig p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p4)
    {
        return this.forCreation(p2, p3, p4);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription forCreation(com.flurry.org.codehaus.jackson.map.DeserializationConfig p3, com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p5)
    {
        com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription v0 = this._findCachedDesc(p4);
        if (v0 == null) {
            v0 = com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription.forDeserialization(this.collectProperties(p3, p4, p5, 0));
        }
        return v0;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.BeanDescription forDeserialization(com.flurry.org.codehaus.jackson.map.DeserializationConfig p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p4)
    {
        return this.forDeserialization(p2, p3, p4);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription forDeserialization(com.flurry.org.codehaus.jackson.map.DeserializationConfig p3, com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p5)
    {
        com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription v0 = this._findCachedDesc(p4);
        if (v0 == null) {
            v0 = com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription.forDeserialization(this.collectProperties(p3, p4, p5, 0));
        }
        return v0;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.BeanDescription forDirectClassAnnotations(com.flurry.org.codehaus.jackson.map.MapperConfig p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p4)
    {
        return this.forDirectClassAnnotations(p2, p3, p4);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription forDirectClassAnnotations(com.flurry.org.codehaus.jackson.map.MapperConfig p5, com.flurry.org.codehaus.jackson.type.JavaType p6, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p7)
    {
        boolean v2 = p5.isAnnotationProcessingEnabled();
        int v1 = p5.getAnnotationIntrospector();
        com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription v3_1 = p6.getRawClass();
        if (!v2) {
            v1 = 0;
        }
        return com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription.forOtherUse(p5, p6, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass.constructWithoutSuperTypes(v3_1, v1, p7));
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.BeanDescription forSerialization(com.flurry.org.codehaus.jackson.map.SerializationConfig p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p4)
    {
        return this.forSerialization(p2, p3, p4);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription forSerialization(com.flurry.org.codehaus.jackson.map.SerializationConfig p3, com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p5)
    {
        com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription v0 = this._findCachedDesc(p4);
        if (v0 == null) {
            v0 = com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription.forSerialization(this.collectProperties(p3, p4, p5, 1));
        }
        return v0;
    }

    protected com.flurry.org.codehaus.jackson.map.introspect.MethodFilter getDeserializationMethodFilter(com.flurry.org.codehaus.jackson.map.DeserializationConfig p2)
    {
        com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector$SetterMethodFilter v0_2;
        if (!p2.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_GETTERS_AS_SETTERS)) {
            v0_2 = com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector.DEFAULT_SETTER_FILTER;
        } else {
            v0_2 = com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector.DEFAULT_SETTER_AND_GETTER_FILTER;
        }
        return v0_2;
    }

    protected com.flurry.org.codehaus.jackson.map.introspect.MethodFilter getSerializationMethodFilter(com.flurry.org.codehaus.jackson.map.SerializationConfig p2)
    {
        return com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector.DEFAULT_GETTER_FILTER;
    }
}
