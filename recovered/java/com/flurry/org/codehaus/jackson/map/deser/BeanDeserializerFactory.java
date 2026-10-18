package com.flurry.org.codehaus.jackson.map.deser;
public class BeanDeserializerFactory extends com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory {
    private static final Class[] INIT_CAUSE_PARAMS;
    public static final com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory instance;
    protected final com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config _factoryConfig;

    static BeanDeserializerFactory()
    {
        com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory v0_1 = new Class[1];
        v0_1[0] = Throwable;
        com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory.INIT_CAUSE_PARAMS = v0_1;
        com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory.instance = new com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory(0);
        return;
    }

    public BeanDeserializerFactory()
    {
        this(0);
        return;
    }

    public BeanDeserializerFactory(com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config p1)
    {
        if (p1 == null) {
            p1 = new com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory$ConfigImpl();
        }
        this._factoryConfig = p1;
        return;
    }

    private com.flurry.org.codehaus.jackson.map.KeyDeserializer _createEnumKeyDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p11, com.flurry.org.codehaus.jackson.type.JavaType p12, com.flurry.org.codehaus.jackson.map.BeanProperty p13)
    {
        com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription v1_1 = ((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p11.introspect(p12));
        Class v2 = p12.getRawClass();
        com.flurry.org.codehaus.jackson.map.util.EnumResolver v3 = this.constructEnumResolver(v2, p11);
        java.util.Iterator v5 = v1_1.getFactoryMethods().iterator();
        while (v5.hasNext()) {
            com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v4_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) v5.next());
            if (p11.getAnnotationIntrospector().hasCreatorAnnotation(v4_1)) {
                if ((v4_1.getParameterCount() != 1) || (!v4_1.getRawType().isAssignableFrom(v2))) {
                    throw new IllegalArgumentException(new StringBuilder().append("Unsuitable method (").append(v4_1).append(") decorated with @JsonCreator (for Enum type ").append(v2.getName()).append(")").toString());
                } else {
                    if (v4_1.getParameterType(0) == String) {
                        if (p11.canOverrideAccessModifiers()) {
                            com.flurry.org.codehaus.jackson.map.util.ClassUtil.checkAndFixAccess(v4_1.getMember());
                        }
                        com.flurry.org.codehaus.jackson.map.KeyDeserializer v7_1 = com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializers.constructEnumKeyDeserializer(v3, v4_1);
                    } else {
                        throw new IllegalArgumentException(new StringBuilder().append("Parameter #0 type for factory method (").append(v4_1).append(") not suitable, must be java.lang.String").toString());
                    }
                }
            }
            return v7_1;
        }
        v7_1 = com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializers.constructEnumKeyDeserializer(v3);
        return v7_1;
    }

    static synthetic com.flurry.org.codehaus.jackson.map.Deserializers[] access$000()
    {
        return com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory.NO_DESERIALIZERS;
    }

    protected void _addDeserializerConstructors(com.flurry.org.codehaus.jackson.map.DeserializationConfig p26, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p27, com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p28, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p29, com.flurry.org.codehaus.jackson.map.deser.impl.CreatorCollector p30)
    {
        java.util.Iterator v20 = p27.getConstructors().iterator();
        while (v20.hasNext()) {
            com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor v8_0 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor) v20.next());
            int v19 = v8_0.getParameterCount();
            if (v19 >= 1) {
                boolean v9 = p29.hasCreatorAnnotation(v8_0);
                boolean v10 = p28.isCreatorVisible(v8_0);
                if (v19 != 1) {
                    if ((v9) || (v10)) {
                        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter v23 = 0;
                        int v22 = 0;
                        int v21 = 0;
                        com.flurry.org.codehaus.jackson.map.deser.impl.CreatorCollector v0_5 = new com.flurry.org.codehaus.jackson.map.deser.impl.CreatorProperty[v19];
                        com.flurry.org.codehaus.jackson.map.deser.impl.CreatorProperty[] v24 = v0_5;
                        int v15 = 0;
                        while (v15 < v19) {
                            String v14;
                            com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter v16 = v8_0.getParameter(v15);
                            if (v16 != null) {
                                v14 = p29.findPropertyNameForParam(v16);
                            } else {
                                v14 = 0;
                            }
                            Object v17 = p29.findInjectableValueId(v16);
                            if ((v14 == null) || (v14.length() <= 0)) {
                                if (v17 == null) {
                                    if (v23 == null) {
                                        v23 = v16;
                                    }
                                } else {
                                    v21++;
                                    v24[v15] = this.constructCreatorProperty(p26, p27, v14, v15, v16, v17);
                                }
                            } else {
                                v22++;
                                v24[v15] = this.constructCreatorProperty(p26, p27, v14, v15, v16, v17);
                            }
                            v15++;
                        }
                        if ((v9) || ((v22 > 0) || (v21 > 0))) {
                            if ((v22 + v21) != v19) {
                                if ((v22 != 0) || ((v21 + 1) != v19)) {
                                    throw new IllegalArgumentException(new StringBuilder().append("Argument #").append(v23.getIndex()).append(" of constructor ").append(v8_0).append(" has no property name annotation; must have name when multiple-paramater constructor annotated as Creator").toString());
                                } else {
                                    throw new IllegalArgumentException(new StringBuilder().append("Delegated constructor with Injectables not yet supported (see [JACKSON-712]) for ").append(v8_0).toString());
                                }
                            } else {
                                p30.addPropertyCreator(v8_0, v24);
                            }
                        }
                        if (0 != 0) {
                            p30.addPropertyCreator(v8_0, v24);
                        }
                    }
                } else {
                    this._handleSingleArgumentConstructor(p26, p27, p28, p29, p30, v8_0, v9, v10);
                }
            }
        }
        return;
    }

    protected void _addDeserializerFactoryMethods(com.flurry.org.codehaus.jackson.map.DeserializationConfig p22, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p23, com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p24, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p25, com.flurry.org.codehaus.jackson.map.deser.impl.CreatorCollector p26)
    {
        java.util.Iterator v18 = p23.getFactoryMethods().iterator();
        while (v18.hasNext()) {
            com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v8_0 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) v18.next());
            int v17 = v8_0.getParameterCount();
            if (v17 >= 1) {
                boolean v9 = p25.hasCreatorAnnotation(v8_0);
                if (v17 != 1) {
                    if (p25.hasCreatorAnnotation(v8_0)) {
                    }
                } else {
                    com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter v15_0 = v8_0.getParameter(0);
                    String v13_0 = p25.findPropertyNameForParam(v15_0);
                    if ((p25.findInjectableValueId(v15_0) == null) && ((v13_0 == null) || (v13_0.length() == 0))) {
                        this._handleSingleArgumentFactory(p22, p23, p24, p25, p26, v8_0, v9);
                    }
                }
                com.flurry.org.codehaus.jackson.map.deser.impl.CreatorCollector v0_7 = new com.flurry.org.codehaus.jackson.map.deser.impl.CreatorProperty[v17];
                com.flurry.org.codehaus.jackson.map.deser.impl.CreatorProperty[] v20 = v0_7;
                int v14 = 0;
                while (v14 < v17) {
                    com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter v15_1 = v8_0.getParameter(v14);
                    String v13_1 = p25.findPropertyNameForParam(v15_1);
                    Object v16 = p25.findInjectableValueId(v15_1);
                    if (((v13_1 != null) && (v13_1.length() != 0)) || (v16 != null)) {
                        v20[v14] = this.constructCreatorProperty(p22, p23, v13_1, v14, v15_1, v16);
                        v14++;
                    } else {
                        throw new IllegalArgumentException(new StringBuilder().append("Argument #").append(v14).append(" of factory method ").append(v8_0).append(" has no property name annotation; must have when multiple-paramater static method annotated as Creator").toString());
                    }
                }
                p26.addPropertyCreator(v8_0, v20);
            }
        }
        return;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _findCustomArrayDeserializer(com.flurry.org.codehaus.jackson.map.type.ArrayType p10, com.flurry.org.codehaus.jackson.map.DeserializationConfig p11, com.flurry.org.codehaus.jackson.map.DeserializerProvider p12, com.flurry.org.codehaus.jackson.map.BeanProperty p13, com.flurry.org.codehaus.jackson.map.TypeDeserializer p14, com.flurry.org.codehaus.jackson.map.JsonDeserializer p15)
    {
        java.util.Iterator v8 = this._factoryConfig.deserializers().iterator();
        while (v8.hasNext()) {
            int v7 = ((com.flurry.org.codehaus.jackson.map.Deserializers) v8.next()).findArrayDeserializer(p10, p11, p12, p13, p14, p15);
            if (v7 != 0) {
            }
            return v7;
        }
        v7 = 0;
        return v7;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _findCustomBeanDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p9, com.flurry.org.codehaus.jackson.map.DeserializationConfig p10, com.flurry.org.codehaus.jackson.map.DeserializerProvider p11, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p12, com.flurry.org.codehaus.jackson.map.BeanProperty p13)
    {
        java.util.Iterator v7 = this._factoryConfig.deserializers().iterator();
        while (v7.hasNext()) {
            int v6 = ((com.flurry.org.codehaus.jackson.map.Deserializers) v7.next()).findBeanDeserializer(p9, p10, p11, p12, p13);
            if (v6 != 0) {
            }
            return v6;
        }
        v6 = 0;
        return v6;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _findCustomCollectionDeserializer(com.flurry.org.codehaus.jackson.map.type.CollectionType p11, com.flurry.org.codehaus.jackson.map.DeserializationConfig p12, com.flurry.org.codehaus.jackson.map.DeserializerProvider p13, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p14, com.flurry.org.codehaus.jackson.map.BeanProperty p15, com.flurry.org.codehaus.jackson.map.TypeDeserializer p16, com.flurry.org.codehaus.jackson.map.JsonDeserializer p17)
    {
        java.util.Iterator v9 = this._factoryConfig.deserializers().iterator();
        while (v9.hasNext()) {
            int v8 = ((com.flurry.org.codehaus.jackson.map.Deserializers) v9.next()).findCollectionDeserializer(p11, p12, p13, p14, p15, p16, p17);
            if (v8 != 0) {
            }
            return v8;
        }
        v8 = 0;
        return v8;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _findCustomCollectionLikeDeserializer(com.flurry.org.codehaus.jackson.map.type.CollectionLikeType p11, com.flurry.org.codehaus.jackson.map.DeserializationConfig p12, com.flurry.org.codehaus.jackson.map.DeserializerProvider p13, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p14, com.flurry.org.codehaus.jackson.map.BeanProperty p15, com.flurry.org.codehaus.jackson.map.TypeDeserializer p16, com.flurry.org.codehaus.jackson.map.JsonDeserializer p17)
    {
        java.util.Iterator v9 = this._factoryConfig.deserializers().iterator();
        while (v9.hasNext()) {
            int v8 = ((com.flurry.org.codehaus.jackson.map.Deserializers) v9.next()).findCollectionLikeDeserializer(p11, p12, p13, p14, p15, p16, p17);
            if (v8 != 0) {
            }
            return v8;
        }
        v8 = 0;
        return v8;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _findCustomEnumDeserializer(Class p5, com.flurry.org.codehaus.jackson.map.DeserializationConfig p6, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p7, com.flurry.org.codehaus.jackson.map.BeanProperty p8)
    {
        java.util.Iterator v2 = this._factoryConfig.deserializers().iterator();
        while (v2.hasNext()) {
            int v1 = ((com.flurry.org.codehaus.jackson.map.Deserializers) v2.next()).findEnumDeserializer(p5, p6, p7, p8);
            if (v1 != 0) {
            }
            return v1;
        }
        v1 = 0;
        return v1;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _findCustomMapDeserializer(com.flurry.org.codehaus.jackson.map.type.MapType p12, com.flurry.org.codehaus.jackson.map.DeserializationConfig p13, com.flurry.org.codehaus.jackson.map.DeserializerProvider p14, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p15, com.flurry.org.codehaus.jackson.map.BeanProperty p16, com.flurry.org.codehaus.jackson.map.KeyDeserializer p17, com.flurry.org.codehaus.jackson.map.TypeDeserializer p18, com.flurry.org.codehaus.jackson.map.JsonDeserializer p19)
    {
        java.util.Iterator v10 = this._factoryConfig.deserializers().iterator();
        while (v10.hasNext()) {
            int v9 = ((com.flurry.org.codehaus.jackson.map.Deserializers) v10.next()).findMapDeserializer(p12, p13, p14, p15, p16, p17, p18, p19);
            if (v9 != 0) {
            }
            return v9;
        }
        v9 = 0;
        return v9;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _findCustomMapLikeDeserializer(com.flurry.org.codehaus.jackson.map.type.MapLikeType p12, com.flurry.org.codehaus.jackson.map.DeserializationConfig p13, com.flurry.org.codehaus.jackson.map.DeserializerProvider p14, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p15, com.flurry.org.codehaus.jackson.map.BeanProperty p16, com.flurry.org.codehaus.jackson.map.KeyDeserializer p17, com.flurry.org.codehaus.jackson.map.TypeDeserializer p18, com.flurry.org.codehaus.jackson.map.JsonDeserializer p19)
    {
        java.util.Iterator v10 = this._factoryConfig.deserializers().iterator();
        while (v10.hasNext()) {
            int v9 = ((com.flurry.org.codehaus.jackson.map.Deserializers) v10.next()).findMapLikeDeserializer(p12, p13, p14, p15, p16, p17, p18, p19);
            if (v9 != 0) {
            }
            return v9;
        }
        v9 = 0;
        return v9;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _findCustomTreeNodeDeserializer(Class p5, com.flurry.org.codehaus.jackson.map.DeserializationConfig p6, com.flurry.org.codehaus.jackson.map.BeanProperty p7)
    {
        java.util.Iterator v2 = this._factoryConfig.deserializers().iterator();
        while (v2.hasNext()) {
            int v1 = ((com.flurry.org.codehaus.jackson.map.Deserializers) v2.next()).findTreeNodeDeserializer(p5, p6, p7);
            if (v1 != 0) {
            }
            return v1;
        }
        v1 = 0;
        return v1;
    }

    protected boolean _handleSingleArgumentConstructor(com.flurry.org.codehaus.jackson.map.DeserializationConfig p13, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p14, com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p15, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p16, com.flurry.org.codehaus.jackson.map.deser.impl.CreatorCollector p17, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor p18, boolean p19, boolean p20)
    {
        int v2_10;
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter v7 = p18.getParameter(0);
        String v5 = p16.findPropertyNameForParam(v7);
        Object v8 = p16.findInjectableValueId(v7);
        if ((v8 == null) && ((v5 == null) || (v5.length() <= 0))) {
            Class v10 = p18.getParameterClass(0);
            if (v10 != String) {
                if ((v10 != Integer.TYPE) && (v10 != Integer)) {
                    if ((v10 != Long.TYPE) && (v10 != Long)) {
                        if ((v10 != Double.TYPE) && (v10 != Double)) {
                            if (!p19) {
                                v2_10 = 0;
                            } else {
                                p17.addDelegatingCreator(p18);
                                v2_10 = 1;
                            }
                        } else {
                            if ((p19) || (p20)) {
                                p17.addDoubleCreator(p18);
                            }
                            v2_10 = 1;
                        }
                    } else {
                        if ((p19) || (p20)) {
                            p17.addLongCreator(p18);
                        }
                        v2_10 = 1;
                    }
                } else {
                    if ((p19) || (p20)) {
                        p17.addIntCreator(p18);
                    }
                    v2_10 = 1;
                }
            } else {
                if ((p19) || (p20)) {
                    p17.addStringCreator(p18);
                }
                v2_10 = 1;
            }
        } else {
            com.flurry.org.codehaus.jackson.map.deser.impl.CreatorProperty[] v9 = new com.flurry.org.codehaus.jackson.map.deser.impl.CreatorProperty[1];
            v9[0] = this.constructCreatorProperty(p13, p14, v5, 0, v7, v8);
            p17.addPropertyCreator(p18, v9);
            v2_10 = 1;
        }
        return v2_10;
    }

    protected boolean _handleSingleArgumentFactory(com.flurry.org.codehaus.jackson.map.DeserializationConfig p5, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p6, com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p7, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p8, com.flurry.org.codehaus.jackson.map.deser.impl.CreatorCollector p9, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p10, boolean p11)
    {
        boolean v1 = 1;
        Class v0 = p10.getParameterClass(0);
        if (v0 != String) {
            if ((v0 != Integer.TYPE) && (v0 != Integer)) {
                if ((v0 != Long.TYPE) && (v0 != Long)) {
                    if ((v0 != Double.TYPE) && (v0 != Double)) {
                        if ((v0 != Boolean.TYPE) && (v0 != Boolean)) {
                            if (!p8.hasCreatorAnnotation(p10)) {
                                v1 = 0;
                            } else {
                                p9.addDelegatingCreator(p10);
                            }
                        } else {
                            if ((p11) || (p7.isCreatorVisible(p10))) {
                                p9.addBooleanCreator(p10);
                            }
                        }
                    } else {
                        if ((p11) || (p7.isCreatorVisible(p10))) {
                            p9.addDoubleCreator(p10);
                        }
                    }
                } else {
                    if ((p11) || (p7.isCreatorVisible(p10))) {
                        p9.addLongCreator(p10);
                    }
                }
            } else {
                if ((p11) || (p7.isCreatorVisible(p10))) {
                    p9.addIntCreator(p10);
                }
            }
        } else {
            if ((p11) || (p7.isCreatorVisible(p10))) {
                p9.addStringCreator(p10);
            }
        }
        return v1;
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType _mapAbstractType2(com.flurry.org.codehaus.jackson.map.DeserializationConfig p6, com.flurry.org.codehaus.jackson.type.JavaType p7)
    {
        com.flurry.org.codehaus.jackson.type.JavaType v0;
        Class v1 = p7.getRawClass();
        if (!this._factoryConfig.hasAbstractTypeResolvers()) {
            v0 = 0;
        } else {
            java.util.Iterator v2 = this._factoryConfig.abstractTypeResolvers().iterator();
            while (v2.hasNext()) {
                v0 = ((com.flurry.org.codehaus.jackson.map.AbstractTypeResolver) v2.next()).findTypeMapping(p6, p7);
                if ((v0 != null) && (v0.getRawClass() != v1)) {
                }
            }
        }
        return v0;
    }

    protected void addBeanProps(com.flurry.org.codehaus.jackson.map.DeserializationConfig p24, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p25, com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerBuilder p26)
    {
        java.util.List v18 = p25.findProperties();
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v13 = p24.getAnnotationIntrospector();
        Boolean v4 = v13.findIgnoreUnknownProperties(p25.getClassInfo());
        if (v4 != null) {
            p26.setIgnoreUnknownProperties(v4.booleanValue());
        }
        java.util.HashSet v10 = com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.arrayToSet(v13.findPropertiesToIgnore(p25.getClassInfo()));
        java.util.Iterator v8_0 = v10.iterator();
        while (v8_0.hasNext()) {
            p26.addIgnorable(((String) v8_0.next()));
        }
        java.util.Set v11;
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v5 = p25.findAnySetter();
        if (v5 != null) {
            v11 = p25.getIgnoredPropertyNamesForDeser();
        } else {
            v11 = p25.getIgnoredPropertyNames();
        }
        if (v11 != null) {
            java.util.Iterator v8_1 = v11.iterator();
            while (v8_1.hasNext()) {
                p26.addIgnorable(((String) v8_1.next()));
            }
        }
        java.util.HashMap v12_1 = new java.util.HashMap();
        java.util.Iterator v8_2 = v18.iterator();
        while (v8_2.hasNext()) {
            com.flurry.org.codehaus.jackson.map.BeanPropertyDefinition v17_1 = ((com.flurry.org.codehaus.jackson.map.BeanPropertyDefinition) v8_2.next());
            String v14_0 = v17_1.getName();
            if (!v10.contains(v14_0)) {
                if (!v17_1.hasConstructorParameter()) {
                    if (!v17_1.hasSetter()) {
                        if (v17_1.hasField()) {
                            com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField v6 = v17_1.getField();
                            if (!this.isIgnorableType(p24, p25, v6.getRawType(), v12_1)) {
                                com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v15_0 = this.constructSettableProperty(p24, p25, v14_0, v6);
                                if (v15_0 != null) {
                                    p26.addProperty(v15_0);
                                }
                            } else {
                                p26.addIgnorable(v14_0);
                            }
                        }
                    } else {
                        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v20 = v17_1.getSetter();
                        if (!this.isIgnorableType(p24, p25, v20.getParameterClass(0), v12_1)) {
                            com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v15_1 = this.constructSettableProperty(p24, p25, v14_0, v20);
                            if (v15_1 != null) {
                                p26.addProperty(v15_1);
                            }
                        } else {
                            p26.addIgnorable(v14_0);
                        }
                    }
                } else {
                    p26.addCreatorProperty(v17_1);
                }
            }
        }
        if (v5 != null) {
            p26.setAnySetter(this.constructAnySetter(p24, p25, v5));
        }
        if (p24.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_GETTERS_AS_SETTERS)) {
            java.util.Iterator v8_3 = v18.iterator();
            while (v8_3.hasNext()) {
                com.flurry.org.codehaus.jackson.map.BeanPropertyDefinition v17_3 = ((com.flurry.org.codehaus.jackson.map.BeanPropertyDefinition) v8_3.next());
                if (v17_3.hasGetter()) {
                    String v14_1 = v17_3.getName();
                    if ((!p26.hasProperty(v14_1)) && (!v10.contains(v14_1))) {
                        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v7 = v17_3.getGetter();
                        Class v19 = v7.getRawType();
                        if (((java.util.Collection.isAssignableFrom(v19)) || (java.util.Map.isAssignableFrom(v19))) && ((!v10.contains(v14_1)) && (!p26.hasProperty(v14_1)))) {
                            p26.addProperty(this.constructSetterlessProperty(p24, p25, v14_1, v7));
                        }
                    }
                }
            }
        }
        return;
    }

    protected void addInjectables(com.flurry.org.codehaus.jackson.map.DeserializationConfig p11, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p12, com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerBuilder p13)
    {
        java.util.Map v9 = p12.findInjectables();
        if (v9 != null) {
            boolean v7 = p11.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS);
            java.util.Iterator v8 = v9.entrySet().iterator();
            while (v8.hasNext()) {
                java.util.Map$Entry v6_1 = ((java.util.Map$Entry) v8.next());
                com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember v4_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember) v6_1.getValue());
                if (v7) {
                    v4_1.fixAccess();
                }
                p13.addInjectable(v4_1.getName(), p12.resolveType(v4_1.getGenericType()), p12.getClassAnnotations(), v4_1, v6_1.getKey());
            }
        }
        return;
    }

    protected void addReferenceProperties(com.flurry.org.codehaus.jackson.map.DeserializationConfig p7, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p8, com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerBuilder p9)
    {
        java.util.Map v4 = p8.findBackReferenceProperties();
        if (v4 != null) {
            java.util.Iterator v1 = v4.entrySet().iterator();
            while (v1.hasNext()) {
                java.util.Map$Entry v0_1 = ((java.util.Map$Entry) v1.next());
                String v3_1 = ((String) v0_1.getKey());
                com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField v2_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember) v0_1.getValue());
                if (!(v2_1 instanceof com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod)) {
                    p9.addBackReferenceProperty(v3_1, this.constructSettableProperty(p7, p8, v2_1.getName(), ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField) v2_1)));
                } else {
                    p9.addBackReferenceProperty(v3_1, this.constructSettableProperty(p7, p8, v2_1.getName(), ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) v2_1)));
                }
            }
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer buildBeanDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p7, com.flurry.org.codehaus.jackson.type.JavaType p8, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p9, com.flurry.org.codehaus.jackson.map.BeanProperty p10)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v1_0;
        com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator v4 = this.findValueInstantiator(p7, p9);
        if ((!p8.isAbstract()) || (v4.canInstantiate())) {
            com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerBuilder v0 = this.constructBeanDeserializerBuilder(p9);
            v0.setValueInstantiator(v4);
            this.addBeanProps(p7, p9, v0);
            this.addReferenceProperties(p7, p9, v0);
            this.addInjectables(p7, p9, v0);
            if (this._factoryConfig.hasDeserializerModifiers()) {
                java.util.Iterator v2_0 = this._factoryConfig.deserializerModifiers().iterator();
                while (v2_0.hasNext()) {
                    v0 = ((com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerModifier) v2_0.next()).updateBuilder(p7, p9, v0);
                }
            }
            v1_0 = v0.build(p10);
            if (this._factoryConfig.hasDeserializerModifiers()) {
                java.util.Iterator v2_1 = this._factoryConfig.deserializerModifiers().iterator();
                while (v2_1.hasNext()) {
                    v1_0 = ((com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerModifier) v2_1.next()).modifyDeserializer(p7, p9, v1_0);
                }
            }
        } else {
            v1_0 = new com.flurry.org.codehaus.jackson.map.deser.AbstractDeserializer(p8);
        }
        return v1_0;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer buildThrowableDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p10, com.flurry.org.codehaus.jackson.type.JavaType p11, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p12, com.flurry.org.codehaus.jackson.map.BeanProperty p13)
    {
        com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerBuilder v1 = this.constructBeanDeserializerBuilder(p12);
        v1.setValueInstantiator(this.findValueInstantiator(p10, p12));
        this.addBeanProps(p10, p12, v1);
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v0 = p12.findMethod("initCause", com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory.INIT_CAUSE_PARAMS);
        if (v0 != null) {
            com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v6 = this.constructSettableProperty(p10, p12, "cause", v0);
            if (v6 != null) {
                v1.addOrReplaceProperty(v6, 1);
            }
        }
        v1.addIgnorable("localizedMessage");
        v1.addIgnorable("message");
        if (this._factoryConfig.hasDeserializerModifiers()) {
            java.util.Iterator v4_0 = this._factoryConfig.deserializerModifiers().iterator();
            while (v4_0.hasNext()) {
                v1 = ((com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerModifier) v4_0.next()).updateBuilder(p10, p12, v1);
            }
        }
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v2_0 = v1.build(p13);
        if ((v2_0 instanceof com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer)) {
            v2_0 = new com.flurry.org.codehaus.jackson.map.deser.std.ThrowableDeserializer(((com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer) v2_0));
        }
        if (this._factoryConfig.hasDeserializerModifiers()) {
            java.util.Iterator v4_1 = this._factoryConfig.deserializerModifiers().iterator();
            while (v4_1.hasNext()) {
                v2_0 = ((com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerModifier) v4_1.next()).modifyDeserializer(p10, p12, v2_0);
            }
        }
        return v2_0;
    }

    protected com.flurry.org.codehaus.jackson.map.deser.SettableAnyProperty constructAnySetter(com.flurry.org.codehaus.jackson.map.DeserializationConfig p8, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p9, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p10)
    {
        if (p8.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS)) {
            p10.fixAccess();
        }
        com.flurry.org.codehaus.jackson.map.deser.SettableAnyProperty v0_6;
        com.flurry.org.codehaus.jackson.type.JavaType v3_0 = p9.bindingsForBeanType().resolveType(p10.getParameterType(1));
        com.flurry.org.codehaus.jackson.map.BeanProperty$Std v5_1 = new com.flurry.org.codehaus.jackson.map.BeanProperty$Std(p10.getName(), v3_0, p9.getClassAnnotations(), p10);
        com.flurry.org.codehaus.jackson.type.JavaType v3_1 = this.resolveType(p8, p9, v3_0, p10, v5_1);
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v6 = this.findDeserializerFromAnnotation(p8, p10, v5_1);
        if (v6 == null) {
            v0_6 = new com.flurry.org.codehaus.jackson.map.deser.SettableAnyProperty(v5_1, p10, this.modifyTypeByAnnotation(p8, p10, v3_1, v5_1.getName()), 0);
        } else {
            v0_6 = new com.flurry.org.codehaus.jackson.map.deser.SettableAnyProperty(v5_1, p10, v3_1, v6);
        }
        return v0_6;
    }

    protected com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerBuilder constructBeanDeserializerBuilder(com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p2)
    {
        return new com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerBuilder(p2);
    }

    protected com.flurry.org.codehaus.jackson.map.deser.impl.CreatorProperty constructCreatorProperty(com.flurry.org.codehaus.jackson.map.DeserializationConfig p20, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p21, String p22, int p23, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter p24, Object p25)
    {
        com.flurry.org.codehaus.jackson.type.JavaType v7 = p20.getTypeFactory().constructType(p24.getParameterType(), p21.bindingsForBeanType());
        com.flurry.org.codehaus.jackson.map.BeanProperty$Std v9_0 = new com.flurry.org.codehaus.jackson.map.BeanProperty$Std(p22, v7, p21.getClassAnnotations(), p24);
        com.flurry.org.codehaus.jackson.type.JavaType v12_0 = this.resolveType(p20, p21, v7, p24, v9_0);
        if (v12_0 != v7) {
            v9_0 = v9_0.withType(v12_0);
        }
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v18 = this.findDeserializerFromAnnotation(p20, p24, v9_0);
        com.flurry.org.codehaus.jackson.type.JavaType v12_1 = this.modifyTypeByAnnotation(p20, p24, v12_0, p22);
        com.flurry.org.codehaus.jackson.map.TypeDeserializer v13_1 = ((com.flurry.org.codehaus.jackson.map.TypeDeserializer) v12_1.getTypeHandler());
        if (v13_1 == null) {
            v13_1 = this.findTypeDeserializer(p20, v12_1, v9_0);
        }
        com.flurry.org.codehaus.jackson.map.deser.impl.CreatorProperty v10_1 = new com.flurry.org.codehaus.jackson.map.deser.impl.CreatorProperty(p22, v12_1, v13_1, p21.getClassAnnotations(), p24, p23, p25);
        if (v18 != null) {
            v10_1 = v10_1.withValueDeserializer(v18);
        }
        return v10_1;
    }

    protected com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator constructDefaultValueInstantiator(com.flurry.org.codehaus.jackson.map.DeserializationConfig p9, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p10)
    {
        boolean v7 = p9.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS);
        com.flurry.org.codehaus.jackson.map.deser.impl.CreatorCollector v5_1 = new com.flurry.org.codehaus.jackson.map.deser.impl.CreatorCollector(p10, v7);
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v4 = p9.getAnnotationIntrospector();
        if (p10.getType().isConcrete()) {
            com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor v6 = p10.findDefaultConstructor();
            if (v6 != null) {
                if (v7) {
                    com.flurry.org.codehaus.jackson.map.util.ClassUtil.checkAndFixAccess(v6.getAnnotated());
                }
                v5_1.setDefaultConstructor(v6);
            }
        }
        com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker v3_1 = p9.getAnnotationIntrospector().findAutoDetectVisibility(p10.getClassInfo(), p9.getDefaultVisibilityChecker());
        this._addDeserializerFactoryMethods(p9, p10, v3_1, v4, v5_1);
        this._addDeserializerConstructors(p9, p10, v3_1, v4, v5_1);
        return v5_1.constructValueInstantiator(p9);
    }

    protected com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty constructSettableProperty(com.flurry.org.codehaus.jackson.map.DeserializationConfig p19, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p20, String p21, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField p22)
    {
        if (p19.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS)) {
            p22.fixAccess();
        }
        com.flurry.org.codehaus.jackson.type.JavaType v7 = p20.bindingsForBeanType().resolveType(p22.getGenericType());
        com.flurry.org.codehaus.jackson.map.BeanProperty$Std v9_1 = new com.flurry.org.codehaus.jackson.map.BeanProperty$Std(p21, v7, p20.getClassAnnotations(), p22);
        com.flurry.org.codehaus.jackson.type.JavaType v12_0 = this.resolveType(p19, p20, v7, p22, v9_1);
        if (v12_0 != v7) {
            v9_1 = v9_1.withType(v12_0);
        }
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v16 = this.findDeserializerFromAnnotation(p19, p22, v9_1);
        com.flurry.org.codehaus.jackson.type.JavaType v12_1 = this.modifyTypeByAnnotation(p19, p22, v12_0, p21);
        com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v10_1 = new com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$FieldProperty(p21, v12_1, ((com.flurry.org.codehaus.jackson.map.TypeDeserializer) v12_1.getTypeHandler()), p20.getClassAnnotations(), p22);
        if (v16 != null) {
            v10_1 = v10_1.withValueDeserializer(v16);
        }
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty v17 = p19.getAnnotationIntrospector().findReferenceType(p22);
        if ((v17 != null) && (v17.isManagedReference())) {
            v10_1.setManagedReferenceName(v17.getName());
        }
        return v10_1;
    }

    protected com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty constructSettableProperty(com.flurry.org.codehaus.jackson.map.DeserializationConfig p19, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p20, String p21, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p22)
    {
        if (p19.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS)) {
            p22.fixAccess();
        }
        com.flurry.org.codehaus.jackson.type.JavaType v7 = p20.bindingsForBeanType().resolveType(p22.getParameterType(0));
        com.flurry.org.codehaus.jackson.map.BeanProperty$Std v9_1 = new com.flurry.org.codehaus.jackson.map.BeanProperty$Std(p21, v7, p20.getClassAnnotations(), p22);
        com.flurry.org.codehaus.jackson.type.JavaType v12_0 = this.resolveType(p19, p20, v7, p22, v9_1);
        if (v12_0 != v7) {
            v9_1 = v9_1.withType(v12_0);
        }
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v16 = this.findDeserializerFromAnnotation(p19, p22, v9_1);
        com.flurry.org.codehaus.jackson.type.JavaType v12_1 = this.modifyTypeByAnnotation(p19, p22, v12_0, p21);
        com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v10_1 = new com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$MethodProperty(p21, v12_1, ((com.flurry.org.codehaus.jackson.map.TypeDeserializer) v12_1.getTypeHandler()), p20.getClassAnnotations(), p22);
        if (v16 != null) {
            v10_1 = v10_1.withValueDeserializer(v16);
        }
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty v17 = p19.getAnnotationIntrospector().findReferenceType(p22);
        if ((v17 != null) && (v17.isManagedReference())) {
            v10_1.setManagedReferenceName(v17.getName());
        }
        return v10_1;
    }

    protected com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty constructSetterlessProperty(com.flurry.org.codehaus.jackson.map.DeserializationConfig p9, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p10, String p11, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p12)
    {
        if (p9.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS)) {
            p12.fixAccess();
        }
        com.flurry.org.codehaus.jackson.type.JavaType v2_1 = p12.getType(p10.bindingsForBeanType());
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v6 = this.findDeserializerFromAnnotation(p9, p12, new com.flurry.org.codehaus.jackson.map.BeanProperty$Std(p11, v2_1, p10.getClassAnnotations(), p12));
        com.flurry.org.codehaus.jackson.type.JavaType v2_0 = this.modifyTypeByAnnotation(p9, p12, v2_1, p11);
        com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v0_1 = new com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$SetterlessProperty(p11, v2_0, ((com.flurry.org.codehaus.jackson.map.TypeDeserializer) v2_0.getTypeHandler()), p10.getClassAnnotations(), p12);
        if (v6 != null) {
            v0_1 = v0_1.withValueDeserializer(v6);
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer createBeanDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p12, com.flurry.org.codehaus.jackson.map.DeserializerProvider p13, com.flurry.org.codehaus.jackson.type.JavaType p14, com.flurry.org.codehaus.jackson.map.BeanProperty p15)
    {
        if (p14.isAbstract()) {
            p14 = this.mapAbstractType(p12, p14);
        }
        com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription v4_1 = ((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p12.introspect(p14));
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v6 = this.findDeserializerFromAnnotation(p12, v4_1.getClassInfo(), p15);
        if (v6 == null) {
            com.flurry.org.codehaus.jackson.type.JavaType v10 = this.modifyTypeByAnnotation(p12, v4_1.getClassInfo(), p14, 0);
            if (v10.getRawClass() != p14.getRawClass()) {
                p14 = v10;
                v4_1 = ((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p12.introspect(p14));
            }
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v8 = this._findCustomBeanDeserializer(p14, p12, p13, v4_1, p15);
            if (v8 == null) {
                if (!p14.isThrowable()) {
                    if (p14.isAbstract()) {
                        com.flurry.org.codehaus.jackson.type.JavaType v7 = this.materializeAbstractType(p12, v4_1);
                        if (v7 != null) {
                            v6 = this.buildBeanDeserializer(p12, v7, ((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p12.introspect(v7)), p15);
                            return v6;
                        }
                    }
                    com.flurry.org.codehaus.jackson.map.JsonDeserializer v9 = this.findStdBeanDeserializer(p12, p13, p14, p15);
                    if (v9 == null) {
                        if (this.isPotentialBeanType(p14.getRawClass())) {
                            v6 = this.buildBeanDeserializer(p12, p14, v4_1, p15);
                        } else {
                            v6 = 0;
                        }
                    } else {
                        v6 = v9;
                    }
                } else {
                    v6 = this.buildThrowableDeserializer(p12, p14, v4_1, p15);
                }
            } else {
                v6 = v8;
            }
        }
        return v6;
    }

    public com.flurry.org.codehaus.jackson.map.KeyDeserializer createKeyDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p8, com.flurry.org.codehaus.jackson.type.JavaType p9, com.flurry.org.codehaus.jackson.map.BeanProperty p10)
    {
        com.flurry.org.codehaus.jackson.map.KeyDeserializer v4_1;
        if (!this._factoryConfig.hasKeyDeserializers()) {
            Class v5 = p9.getRawClass();
            if ((v5 != String) && (v5 != Object)) {
                v4_1 = ((com.flurry.org.codehaus.jackson.map.KeyDeserializer) com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory._keyDeserializers.get(p9));
                if (v4_1 == null) {
                    if (!p9.isEnumType()) {
                        v4_1 = com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializers.findStringBasedKeyDeserializer(p8, p9);
                    } else {
                        v4_1 = this._createEnumKeyDeserializer(p8, p9, p10);
                    }
                }
            } else {
                v4_1 = com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializers.constructStringKeyDeserializer(p8, p9);
            }
        } else {
            com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription v0_1 = ((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p8.introspectClassAnnotations(p9.getRawClass()));
            java.util.Iterator v3 = this._factoryConfig.keyDeserializers().iterator();
            while (v3.hasNext()) {
                com.flurry.org.codehaus.jackson.map.KeyDeserializer v2 = ((com.flurry.org.codehaus.jackson.map.KeyDeserializers) v3.next()).findKeyDeserializer(p9, p8, v0_1, p10);
                if (v2 != null) {
                    v4_1 = v2;
                }
            }
        }
        return v4_1;
    }

    public com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator findValueInstantiator(com.flurry.org.codehaus.jackson.map.DeserializationConfig p11, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p12)
    {
        com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator v5_0;
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass v0 = p12.getClassInfo();
        Object v4 = p11.getAnnotationIntrospector().findValueInstantiator(v0);
        if (v4 == null) {
            v5_0 = this.constructDefaultValueInstantiator(p11, p12);
        } else {
            if (!(v4 instanceof com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator)) {
                if ((v4 instanceof Class)) {
                    Class v1_1 = ((Class) v4);
                    if (com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator.isAssignableFrom(v1_1)) {
                        v5_0 = p11.valueInstantiatorInstance(v0, v1_1);
                    } else {
                        throw new IllegalStateException(new StringBuilder().append("Invalid instantiator Class<?> returned for type ").append(p12).append(": ").append(v1_1.getName()).append(" not a ValueInstantiator").toString());
                    }
                } else {
                    throw new IllegalStateException(new StringBuilder().append("Invalid value instantiator returned for type ").append(p12).append(": neither a Class nor ValueInstantiator").toString());
                }
            } else {
                v5_0 = ((com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator) v4);
            }
        }
        if (this._factoryConfig.hasValueInstantiators()) {
            java.util.Iterator v2 = this._factoryConfig.valueInstantiators().iterator();
            while (v2.hasNext()) {
                com.flurry.org.codehaus.jackson.map.deser.ValueInstantiators v6_1 = ((com.flurry.org.codehaus.jackson.map.deser.ValueInstantiators) v2.next());
                v5_0 = v6_1.findValueInstantiator(p11, p12, v5_0);
                if (v5_0 == null) {
                    throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Broken registered ValueInstantiators (of type ").append(v6_1.getClass().getName()).append("): returned null ValueInstantiator").toString());
                }
            }
        }
        return v5_0;
    }

    public final com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config getConfig()
    {
        return this._factoryConfig;
    }

    protected boolean isIgnorableType(com.flurry.org.codehaus.jackson.map.DeserializationConfig p5, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p6, Class p7, java.util.Map p8)
    {
        Boolean v1_1 = ((Boolean) p8.get(p7));
        if (v1_1 == null) {
            v1_1 = p5.getAnnotationIntrospector().isIgnorableType(((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p5.introspectClassAnnotations(p7)).getClassInfo());
            if (v1_1 == null) {
                v1_1 = Boolean.FALSE;
            }
        }
        return v1_1.booleanValue();
    }

    protected boolean isPotentialBeanType(Class p5)
    {
        String v0_0 = com.flurry.org.codehaus.jackson.map.util.ClassUtil.canBeABeanType(p5);
        if (v0_0 == null) {
            if (!com.flurry.org.codehaus.jackson.map.util.ClassUtil.isProxyType(p5)) {
                String v0_1 = com.flurry.org.codehaus.jackson.map.util.ClassUtil.isLocalType(p5, 1);
                if (v0_1 == null) {
                    return 1;
                } else {
                    throw new IllegalArgumentException(new StringBuilder().append("Can not deserialize Class ").append(p5.getName()).append(" (of type ").append(v0_1).append(") as a Bean").toString());
                }
            } else {
                throw new IllegalArgumentException(new StringBuilder().append("Can not deserialize Proxy class ").append(p5.getName()).append(" as a Bean").toString());
            }
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("Can not deserialize Class ").append(p5.getName()).append(" (of type ").append(v0_0).append(") as a Bean").toString());
        }
    }

    public com.flurry.org.codehaus.jackson.type.JavaType mapAbstractType(com.flurry.org.codehaus.jackson.map.DeserializationConfig p7, com.flurry.org.codehaus.jackson.type.JavaType p8)
    {
        while(true) {
            com.flurry.org.codehaus.jackson.type.JavaType v0 = this._mapAbstractType2(p7, p8);
            if (v0 != null) {
                Class v2 = p8.getRawClass();
                Class v1 = v0.getRawClass();
                if ((v2 == v1) || (!v2.isAssignableFrom(v1))) {
                    break;
                }
                p8 = v0;
            } else {
                return p8;
            }
        }
        throw new IllegalArgumentException(new StringBuilder().append("Invalid abstract type resolution from ").append(p8).append(" to ").append(v0).append(": latter is not a subtype of former").toString());
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType materializeAbstractType(com.flurry.org.codehaus.jackson.map.DeserializationConfig p6, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p7)
    {
        com.flurry.org.codehaus.jackson.type.JavaType v0 = p7.getType();
        java.util.Iterator v2 = this._factoryConfig.abstractTypeResolvers().iterator();
        while (v2.hasNext()) {
            int v1 = ((com.flurry.org.codehaus.jackson.map.AbstractTypeResolver) v2.next()).resolveAbstractType(p6, v0);
            if (v1 != 0) {
            }
            return v1;
        }
        v1 = 0;
        return v1;
    }

    public com.flurry.org.codehaus.jackson.map.DeserializerFactory withConfig(com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config p4)
    {
        if (this._factoryConfig != p4) {
            if (this.getClass() == com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory) {
                this = new com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory;
                this(p4);
            } else {
                throw new IllegalStateException(new StringBuilder().append("Subtype of BeanDeserializerFactory (").append(this.getClass().getName()).append(") has not properly overridden method \'withAdditionalDeserializers\': can not instantiate subtype with ").append("additional deserializer definitions").toString());
            }
        }
        return this;
    }
}
