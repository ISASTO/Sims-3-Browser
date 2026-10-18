package com.flurry.org.codehaus.jackson.map.introspect;
public class BasicBeanDescription extends com.flurry.org.codehaus.jackson.map.BeanDescription {
    protected final com.flurry.org.codehaus.jackson.map.AnnotationIntrospector _annotationIntrospector;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod _anyGetterMethod;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod _anySetterMethod;
    protected com.flurry.org.codehaus.jackson.map.type.TypeBindings _bindings;
    protected final com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass _classInfo;
    protected final com.flurry.org.codehaus.jackson.map.MapperConfig _config;
    protected java.util.Set _ignoredPropertyNames;
    protected java.util.Set _ignoredPropertyNamesForDeser;
    protected java.util.Map _injectables;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod _jsonValueMethod;
    protected final java.util.List _properties;

    public BasicBeanDescription(com.flurry.org.codehaus.jackson.map.MapperConfig p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p4)
    {
        this(p2, p3, p4, java.util.Collections.emptyList());
        return;
    }

    protected BasicBeanDescription(com.flurry.org.codehaus.jackson.map.MapperConfig p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p4, java.util.List p5)
    {
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v0;
        super(p3);
        super._config = p2;
        if (p2 != null) {
            v0 = p2.getAnnotationIntrospector();
        } else {
            v0 = 0;
        }
        super._annotationIntrospector = v0;
        super._classInfo = p4;
        super._properties = p5;
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription forDeserialization(com.flurry.org.codehaus.jackson.map.introspect.POJOPropertiesCollector p5)
    {
        com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription v0_1 = new com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription(p5.getConfig(), p5.getType(), p5.getClassDef(), p5.getProperties());
        v0_1._anySetterMethod = p5.getAnySetterMethod();
        v0_1._ignoredPropertyNames = p5.getIgnoredPropertyNames();
        v0_1._ignoredPropertyNamesForDeser = p5.getIgnoredPropertyNamesForDeser();
        v0_1._injectables = p5.getInjectables();
        return v0_1;
    }

    public static com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription forOtherUse(com.flurry.org.codehaus.jackson.map.MapperConfig p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p4)
    {
        return new com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription(p2, p3, p4, java.util.Collections.emptyList());
    }

    public static com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription forSerialization(com.flurry.org.codehaus.jackson.map.introspect.POJOPropertiesCollector p5)
    {
        com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription v0_1 = new com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription(p5.getConfig(), p5.getType(), p5.getClassDef(), p5.getProperties());
        v0_1._jsonValueMethod = p5.getJsonValueMethod();
        v0_1._anyGetterMethod = p5.getAnyGetterMethod();
        return v0_1;
    }

    public java.util.LinkedHashMap _findPropertyFields(java.util.Collection p7, boolean p8)
    {
        java.util.LinkedHashMap v4_1 = new java.util.LinkedHashMap();
        java.util.Iterator v1 = this._properties.iterator();
        while (v1.hasNext()) {
            com.flurry.org.codehaus.jackson.map.BeanPropertyDefinition v3_1 = ((com.flurry.org.codehaus.jackson.map.BeanPropertyDefinition) v1.next());
            com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField v0 = v3_1.getField();
            if (v0 != null) {
                String v2 = v3_1.getName();
                if ((p7 == null) || (!p7.contains(v2))) {
                    v4_1.put(v2, v0);
                }
            }
        }
        return v4_1;
    }

    public com.flurry.org.codehaus.jackson.map.type.TypeBindings bindingsForBeanType()
    {
        if (this._bindings == null) {
            this._bindings = new com.flurry.org.codehaus.jackson.map.type.TypeBindings(this._config.getTypeFactory(), this._type);
        }
        return this._bindings;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod findAnyGetter()
    {
        if ((this._anyGetterMethod == null) || (java.util.Map.isAssignableFrom(this._anyGetterMethod.getRawType()))) {
            return this._anyGetterMethod;
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("Invalid \'any-getter\' annotation on method ").append(this._anyGetterMethod.getName()).append("(): return type is not instance of java.util.Map").toString());
        }
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod findAnySetter()
    {
        if (this._anySetterMethod != null) {
            Class v0 = this._anySetterMethod.getParameterClass(0);
            if ((v0 != String) && (v0 != Object)) {
                throw new IllegalArgumentException(new StringBuilder().append("Invalid \'any-setter\' annotation on method ").append(this._anySetterMethod.getName()).append("(): first argument not of type String or Object, but ").append(v0.getName()).toString());
            }
        }
        return this._anySetterMethod;
    }

    public java.util.Map findBackReferenceProperties()
    {
        java.util.HashMap v5_0 = 0;
        java.util.Iterator v1 = this._properties.iterator();
        while (v1.hasNext()) {
            com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember v0 = ((com.flurry.org.codehaus.jackson.map.BeanPropertyDefinition) v1.next()).getMutator();
            if (v0 != null) {
                com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty v3 = this._annotationIntrospector.findReferenceType(v0);
                if ((v3 != null) && (v3.isBackReference())) {
                    if (v5_0 == null) {
                        v5_0 = new java.util.HashMap();
                    }
                    String v4 = v3.getName();
                    if (v5_0.put(v4, v0) != null) {
                        throw new IllegalArgumentException(new StringBuilder().append("Multiple back-reference properties with name \'").append(v4).append("\'").toString());
                    }
                }
            }
        }
        return v5_0;
    }

    public java.util.List findCreatorPropertyNames()
    {
        java.util.ArrayList v6_0 = 0;
        int v2 = 0;
        while (v2 < 2) {
            java.util.List v4;
            if (v2 != 0) {
                v4 = this.getFactoryMethods();
            } else {
                v4 = this.getConstructors();
            }
            java.util.Iterator v3 = v4.iterator();
            while (v3.hasNext()) {
                com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams v1_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams) v3.next());
                int v0 = v1_1.getParameterCount();
                if (v0 >= 1) {
                    String v5 = this._annotationIntrospector.findPropertyNameForParam(v1_1.getParameter(0));
                    if (v5 != null) {
                        if (v6_0 == null) {
                            v6_0 = new java.util.ArrayList();
                        }
                        v6_0.add(v5);
                        int v7 = 1;
                        while (v7 < v0) {
                            v6_0.add(this._annotationIntrospector.findPropertyNameForParam(v1_1.getParameter(v7)));
                            v7++;
                        }
                    }
                }
            }
            v2++;
        }
        if (v6_0 == null) {
            v6_0 = java.util.Collections.emptyList();
        }
        return v6_0;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor findDefaultConstructor()
    {
        return this._classInfo.getDefaultConstructor();
    }

    public java.util.LinkedHashMap findDeserializableFields(com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p2, java.util.Collection p3)
    {
        return this._findPropertyFields(p3, 0);
    }

    public varargs reflect.Method findFactoryMethod(Class[] p9)
    {
        java.util.Iterator v4 = this._classInfo.getStaticMethods().iterator();
        while (v4.hasNext()) {
            com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v1_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) v4.next());
            if (this.isFactoryMethod(v1_1)) {
                Class vtmp6 = v1_1.getParameterClass(0);
                int v5 = 0;
                while (v5 < p9.length) {
                    if (!vtmp6.isAssignableFrom(p9[v5])) {
                        v5++;
                    } else {
                        reflect.Method v7_5 = v1_1.getAnnotated();
                    }
                }
            }
            return v7_5;
        }
        v7_5 = 0;
        return v7_5;
    }

    public java.util.LinkedHashMap findGetters(com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p7, java.util.Collection p8)
    {
        java.util.LinkedHashMap v4_1 = new java.util.LinkedHashMap();
        java.util.Iterator v0 = this._properties.iterator();
        while (v0.hasNext()) {
            com.flurry.org.codehaus.jackson.map.BeanPropertyDefinition v3_1 = ((com.flurry.org.codehaus.jackson.map.BeanPropertyDefinition) v0.next());
            com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v1 = v3_1.getGetter();
            if (v1 != null) {
                String v2 = v3_1.getName();
                if ((p8 == null) || (!p8.contains(v2))) {
                    v4_1.put(v2, v1);
                }
            }
        }
        return v4_1;
    }

    public java.util.Map findInjectables()
    {
        return this._injectables;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod findJsonValueMethod()
    {
        return this._jsonValueMethod;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod findMethod(String p2, Class[] p3)
    {
        return this._classInfo.findMethod(p2, p3);
    }

    public java.util.List findProperties()
    {
        return this._properties;
    }

    public java.util.LinkedHashMap findSerializableFields(com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p2, java.util.Collection p3)
    {
        return this._findPropertyFields(p3, 1);
    }

    public bridge synthetic java.util.Map findSerializableFields(com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p2, java.util.Collection p3)
    {
        return this.findSerializableFields(p2, p3);
    }

    public com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion findSerializationInclusion(com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion p3)
    {
        if (this._annotationIntrospector != null) {
            p3 = this._annotationIntrospector.findSerializationInclusion(this._classInfo, p3);
        }
        return p3;
    }

    public java.util.LinkedHashMap findSetters(com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p6)
    {
        java.util.LinkedHashMap v3_1 = new java.util.LinkedHashMap();
        java.util.Iterator v0 = this._properties.iterator();
        while (v0.hasNext()) {
            com.flurry.org.codehaus.jackson.map.BeanPropertyDefinition v2_1 = ((com.flurry.org.codehaus.jackson.map.BeanPropertyDefinition) v0.next());
            com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v1 = v2_1.getSetter();
            if (v1 != null) {
                v3_1.put(v2_1.getName(), v1);
            }
        }
        return v3_1;
    }

    public varargs reflect.Constructor findSingleArgConstructor(Class[] p10)
    {
        java.util.Iterator v4 = this._classInfo.getConstructors().iterator();
        while (v4.hasNext()) {
            com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor v0_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor) v4.next());
            if (v0_1.getParameterCount() == 1) {
                Class vtmp6 = v0_1.getParameterClass(0);
                int v5 = 0;
                while (v5 < p10.length) {
                    if (p10[v5] != vtmp6) {
                        v5++;
                    } else {
                        reflect.Constructor v7_4 = v0_1.getAnnotated();
                    }
                }
            }
            return v7_4;
        }
        v7_4 = 0;
        return v7_4;
    }

    public com.flurry.org.codehaus.jackson.map.util.Annotations getClassAnnotations()
    {
        return this._classInfo.getAnnotations();
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass getClassInfo()
    {
        return this._classInfo;
    }

    public java.util.List getConstructors()
    {
        return this._classInfo.getConstructors();
    }

    public java.util.List getFactoryMethods()
    {
        java.util.ArrayList v1 = this._classInfo.getStaticMethods();
        if (!v1.isEmpty()) {
            java.util.ArrayList v3_1 = new java.util.ArrayList();
            java.util.Iterator v2 = v1.iterator();
            while (v2.hasNext()) {
                com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v0_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) v2.next());
                if (this.isFactoryMethod(v0_1)) {
                    v3_1.add(v0_1);
                }
            }
            v1 = v3_1;
        }
        return v1;
    }

    public java.util.Set getIgnoredPropertyNames()
    {
        java.util.Set v0_1;
        if (this._ignoredPropertyNames != null) {
            v0_1 = this._ignoredPropertyNames;
        } else {
            v0_1 = java.util.Collections.emptySet();
        }
        return v0_1;
    }

    public java.util.Set getIgnoredPropertyNamesForDeser()
    {
        return this._ignoredPropertyNamesForDeser;
    }

    public boolean hasKnownClassAnnotations()
    {
        return this._classInfo.hasAnnotations();
    }

    public Object instantiateBean(boolean p7)
    {
        IllegalArgumentException v3_1;
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor v0 = this._classInfo.getDefaultConstructor();
        if (v0 != null) {
            if (p7) {
                v0.fixAccess();
            }
            try {
                String v4_10 = new Object[0];
                v3_1 = v0.getAnnotated().newInstance(v4_10);
            } catch (Exception v1) {
                RuntimeException v2_0 = v1;
            }
        } else {
            v3_1 = 0;
        }
        return v3_1;
    }

    protected boolean isFactoryMethod(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p6)
    {
        int v1 = 0;
        if (this.getBeanClass().isAssignableFrom(p6.getRawType())) {
            if (!this._annotationIntrospector.hasCreatorAnnotation(p6)) {
                if ("valueOf".equals(p6.getName())) {
                    v1 = 1;
                }
            } else {
                v1 = 1;
            }
        }
        return v1;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType resolveType(reflect.Type p2)
    {
        com.flurry.org.codehaus.jackson.type.JavaType v0_1;
        if (p2 != null) {
            v0_1 = this.bindingsForBeanType().resolveType(p2);
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }
}
