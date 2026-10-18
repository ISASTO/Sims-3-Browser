package com.flurry.org.codehaus.jackson.map.ser;
public class BeanSerializerFactory extends com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory {
    public static final com.flurry.org.codehaus.jackson.map.ser.BeanSerializerFactory instance;
    protected final com.flurry.org.codehaus.jackson.map.SerializerFactory$Config _factoryConfig;

    static BeanSerializerFactory()
    {
        com.flurry.org.codehaus.jackson.map.ser.BeanSerializerFactory.instance = new com.flurry.org.codehaus.jackson.map.ser.BeanSerializerFactory(0);
        return;
    }

    protected BeanSerializerFactory(com.flurry.org.codehaus.jackson.map.SerializerFactory$Config p1)
    {
        if (p1 == null) {
            p1 = new com.flurry.org.codehaus.jackson.map.ser.BeanSerializerFactory$ConfigImpl();
        }
        this._factoryConfig = p1;
        return;
    }

    protected com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter _constructWriter(com.flurry.org.codehaus.jackson.map.SerializationConfig p14, com.flurry.org.codehaus.jackson.map.type.TypeBindings p15, com.flurry.org.codehaus.jackson.map.ser.PropertyBuilder p16, boolean p17, String p18, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p19)
    {
        if (p14.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS)) {
            p19.fixAccess();
        }
        com.flurry.org.codehaus.jackson.type.JavaType v4 = p19.getType(p15);
        com.flurry.org.codehaus.jackson.map.BeanProperty$Std v12_0 = new com.flurry.org.codehaus.jackson.map.BeanProperty$Std(p18, v4, p16.getClassAnnotations(), p19);
        com.flurry.org.codehaus.jackson.map.JsonSerializer v5 = this.findSerializerFromAnnotation(p14, p19, v12_0);
        com.flurry.org.codehaus.jackson.map.TypeSerializer v7 = 0;
        if (com.flurry.org.codehaus.jackson.map.util.ClassUtil.isCollectionMapOrArray(v4.getRawClass())) {
            v7 = this.findPropertyContentTypeSerializer(v4, p14, p19, v12_0);
        }
        com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter v11 = p16.buildWriter(p18, v4, v5, this.findPropertyTypeSerializer(v4, p14, p19, v12_0), v7, p19, p17);
        v11.setViews(p14.getAnnotationIntrospector().findSerializationViews(p19));
        return v11;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer constructBeanSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p20, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p21, com.flurry.org.codehaus.jackson.map.BeanProperty p22)
    {
        if (p21.getBeanClass() != Object) {
            com.flurry.org.codehaus.jackson.map.ser.BeanSerializerBuilder v12 = this.constructBeanSerializerBuilder(p21);
            java.util.List v16_1 = this.findBeanProperties(p20, p21);
            if (v16_1 == null) {
                v16_1 = new java.util.ArrayList();
            }
            if (this._factoryConfig.hasSerializerModifiers()) {
                java.util.Iterator v13_1 = this._factoryConfig.serializerModifiers().iterator();
                while (v13_1.hasNext()) {
                    v16_1 = ((com.flurry.org.codehaus.jackson.map.ser.BeanSerializerModifier) v13_1.next()).changeProperties(p20, p21, v16_1);
                }
            }
            java.util.List v16_2 = this.sortBeanProperties(p20, p21, this.filterBeanProperties(p20, p21, v16_1));
            if (this._factoryConfig.hasSerializerModifiers()) {
                java.util.Iterator v13_2 = this._factoryConfig.serializerModifiers().iterator();
                while (v13_2.hasNext()) {
                    v16_2 = ((com.flurry.org.codehaus.jackson.map.ser.BeanSerializerModifier) v13_2.next()).orderProperties(p20, p21, v16_2);
                }
            }
            v12.setProperties(v16_2);
            v12.setFilterId(this.findFilterId(p20, p21));
            com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v11 = p21.findAnyGetter();
            if (v11 != null) {
                if (p20.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS)) {
                    v11.fixAccess();
                }
                com.flurry.org.codehaus.jackson.type.JavaType v5 = v11.getType(p21.bindingsForBeanType());
                v12.setAnyGetter(new com.flurry.org.codehaus.jackson.map.ser.AnyGetterWriter(v11, com.flurry.org.codehaus.jackson.map.ser.std.MapSerializer.construct(0, v5, p20.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.USE_STATIC_TYPING), this.createTypeSerializer(p20, v5.getContentType(), p22), p22, 0, 0)));
            }
            this.processViews(p20, v12);
            if (this._factoryConfig.hasSerializerModifiers()) {
                java.util.Iterator v13_0 = this._factoryConfig.serializerModifiers().iterator();
                while (v13_0.hasNext()) {
                    v12 = ((com.flurry.org.codehaus.jackson.map.ser.BeanSerializerModifier) v13_0.next()).updateBuilder(p20, p21, v12);
                }
            }
            com.flurry.org.codehaus.jackson.map.ser.BeanSerializer v17 = v12.build();
            if ((v17 == null) && (p21.hasKnownClassAnnotations())) {
                v17 = v12.createDummy();
            }
            return v17;
        } else {
            throw new IllegalArgumentException("Can not create bean serializer for Object.class");
        }
    }

    protected com.flurry.org.codehaus.jackson.map.ser.BeanSerializerBuilder constructBeanSerializerBuilder(com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p2)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.BeanSerializerBuilder(p2);
    }

    protected com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter constructFilteredBeanWriter(com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter p2, Class[] p3)
    {
        return com.flurry.org.codehaus.jackson.map.ser.FilteredBeanPropertyWriter.constructViewBased(p2, p3);
    }

    protected com.flurry.org.codehaus.jackson.map.ser.PropertyBuilder constructPropertyBuilder(com.flurry.org.codehaus.jackson.map.SerializationConfig p2, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p3)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.PropertyBuilder(p2, p3);
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer createKeySerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p6, com.flurry.org.codehaus.jackson.type.JavaType p7, com.flurry.org.codehaus.jackson.map.BeanProperty p8)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v2;
        if (this._factoryConfig.hasKeySerializers()) {
            com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription v0_1 = ((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p6.introspectClassAnnotations(p7.getRawClass()));
            v2 = 0;
            java.util.Iterator v1 = this._factoryConfig.keySerializers().iterator();
            while (v1.hasNext()) {
                v2 = ((com.flurry.org.codehaus.jackson.map.Serializers) v1.next()).findSerializer(p6, p7, v0_1, p8);
                if (v2 != null) {
                    break;
                }
            }
        } else {
            v2 = 0;
        }
        return v2;
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer createSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p19, com.flurry.org.codehaus.jackson.type.JavaType p20, com.flurry.org.codehaus.jackson.map.BeanProperty p21)
    {
        com.flurry.org.codehaus.jackson.map.ser.BeanSerializerFactory v3_7;
        com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription v6_1 = ((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p19.introspect(p20));
        com.flurry.org.codehaus.jackson.map.JsonSerializer v16_2 = this.findSerializerFromAnnotation(p19, v6_1.getClassInfo(), p21);
        if (v16_2 == null) {
            int v8;
            com.flurry.org.codehaus.jackson.type.JavaType v5 = this.modifyTypeByAnnotation(p19, v6_1.getClassInfo(), p20);
            if (v5 == p20) {
                v8 = 0;
            } else {
                v8 = 1;
            }
            if (!p20.isContainerType()) {
                java.util.Iterator v15 = this._factoryConfig.serializers().iterator();
                while (v15.hasNext()) {
                    com.flurry.org.codehaus.jackson.map.JsonSerializer v16_1 = ((com.flurry.org.codehaus.jackson.map.Serializers) v15.next()).findSerializer(p19, v5, v6_1, p21);
                    if (v16_1 != null) {
                        v3_7 = v16_1;
                    }
                }
                com.flurry.org.codehaus.jackson.map.JsonSerializer v16_0 = this.findSerializerByLookup(v5, p19, v6_1, p21, v8);
                if (v16_0 == null) {
                    v16_0 = this.findSerializerByPrimaryType(v5, p19, v6_1, p21, v8);
                    if (v16_0 == null) {
                        v16_0 = this.findBeanSerializer(p19, v5, v6_1, p21);
                        if (v16_0 == null) {
                            v16_0 = this.findSerializerByAddonType(p19, v5, v6_1, p21, v8);
                        }
                    }
                }
                v3_7 = v16_0;
            } else {
                v3_7 = this.buildContainerSerializer(p19, v5, v6_1, p21, v8);
            }
        } else {
            v3_7 = v16_2;
        }
        return v3_7;
    }

    protected Iterable customSerializers()
    {
        return this._factoryConfig.serializers();
    }

    protected java.util.List filterBeanProperties(com.flurry.org.codehaus.jackson.map.SerializationConfig p7, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p8, java.util.List p9)
    {
        String[] v1 = p7.getAnnotationIntrospector().findPropertiesToIgnore(p8.getClassInfo());
        if ((v1 != null) && (v1.length > 0)) {
            java.util.HashSet v2 = com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.arrayToSet(v1);
            java.util.Iterator v4 = p9.iterator();
            while (v4.hasNext()) {
                if (v2.contains(((com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter) v4.next()).getName())) {
                    v4.remove();
                }
            }
        }
        return p9;
    }

    protected java.util.List findBeanProperties(com.flurry.org.codehaus.jackson.map.SerializationConfig p18, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p19)
    {
        java.util.List v14 = p19.findProperties();
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v12 = p18.getAnnotationIntrospector();
        this.removeIgnorableTypes(p18, p19, v14);
        if (p18.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.REQUIRE_SETTERS_FOR_GETTERS)) {
            this.removeSetterlessGetters(p18, p19, v14);
        }
        java.util.ArrayList v16;
        if (!v14.isEmpty()) {
            boolean v7 = this.usesStaticTyping(p18, p19, 0, 0);
            com.flurry.org.codehaus.jackson.map.ser.PropertyBuilder v6 = this.constructPropertyBuilder(p18, p19);
            v16 = new java.util.ArrayList;
            v16(v14.size());
            com.flurry.org.codehaus.jackson.map.type.TypeBindings v5 = p19.bindingsForBeanType();
            java.util.Iterator v11 = v14.iterator();
            while (v11.hasNext()) {
                com.flurry.org.codehaus.jackson.map.BeanPropertyDefinition v15_1 = ((com.flurry.org.codehaus.jackson.map.BeanPropertyDefinition) v11.next());
                com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember v10 = v15_1.getAccessor();
                com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty v13 = v12.findReferenceType(v10);
                if ((v13 == null) || (!v13.isBackReference())) {
                    String v8 = v15_1.getName();
                    if (!(v10 instanceof com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod)) {
                        v16.add(this._constructWriter(p18, v5, v6, v7, v8, ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField) v10)));
                    } else {
                        v16.add(this._constructWriter(p18, v5, v6, v7, v8, ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) v10)));
                    }
                }
            }
        } else {
            v16 = 0;
        }
        return v16;
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer findBeanSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p5, com.flurry.org.codehaus.jackson.type.JavaType p6, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p7, com.flurry.org.codehaus.jackson.map.BeanProperty p8)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v2;
        if (this.isPotentialBeanType(p6.getRawClass())) {
            v2 = this.constructBeanSerializer(p5, p7, p8);
            if (this._factoryConfig.hasSerializerModifiers()) {
                java.util.Iterator v0 = this._factoryConfig.serializerModifiers().iterator();
                while (v0.hasNext()) {
                    v2 = ((com.flurry.org.codehaus.jackson.map.ser.BeanSerializerModifier) v0.next()).modifySerializer(p5, p7, v2);
                }
            }
        } else {
            v2 = 0;
        }
        return v2;
    }

    protected Object findFilterId(com.flurry.org.codehaus.jackson.map.SerializationConfig p3, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p4)
    {
        return p3.getAnnotationIntrospector().findFilterId(p4.getClassInfo());
    }

    public com.flurry.org.codehaus.jackson.map.TypeSerializer findPropertyContentTypeSerializer(com.flurry.org.codehaus.jackson.type.JavaType p6, com.flurry.org.codehaus.jackson.map.SerializationConfig p7, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p8, com.flurry.org.codehaus.jackson.map.BeanProperty p9)
    {
        com.flurry.org.codehaus.jackson.map.TypeSerializer v4_0;
        com.flurry.org.codehaus.jackson.type.JavaType v2 = p6.getContentType();
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v0 = p7.getAnnotationIntrospector();
        com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder v1 = v0.findPropertyContentTypeResolver(p7, p8, p6);
        if (v1 != null) {
            v4_0 = v1.buildTypeSerializer(p7, v2, p7.getSubtypeResolver().collectAndResolveSubtypes(p8, p7, v0), p9);
        } else {
            v4_0 = this.createTypeSerializer(p7, v2, p9);
        }
        return v4_0;
    }

    public com.flurry.org.codehaus.jackson.map.TypeSerializer findPropertyTypeSerializer(com.flurry.org.codehaus.jackson.type.JavaType p5, com.flurry.org.codehaus.jackson.map.SerializationConfig p6, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p7, com.flurry.org.codehaus.jackson.map.BeanProperty p8)
    {
        com.flurry.org.codehaus.jackson.map.TypeSerializer v3_0;
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v0 = p6.getAnnotationIntrospector();
        com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder v1 = v0.findPropertyTypeResolver(p6, p7, p5);
        if (v1 != null) {
            v3_0 = v1.buildTypeSerializer(p6, p5, p6.getSubtypeResolver().collectAndResolveSubtypes(p7, p6, v0), p8);
        } else {
            v3_0 = this.createTypeSerializer(p6, p5, p8);
        }
        return v3_0;
    }

    public com.flurry.org.codehaus.jackson.map.SerializerFactory$Config getConfig()
    {
        return this._factoryConfig;
    }

    protected boolean isPotentialBeanType(Class p2)
    {
        if ((com.flurry.org.codehaus.jackson.map.util.ClassUtil.canBeABeanType(p2) != null) || (com.flurry.org.codehaus.jackson.map.util.ClassUtil.isProxyType(p2))) {
            int v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    protected void processViews(com.flurry.org.codehaus.jackson.map.SerializationConfig p10, com.flurry.org.codehaus.jackson.map.ser.BeanSerializerBuilder p11)
    {
        java.util.List v5 = p11.getProperties();
        boolean v3 = p10.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.DEFAULT_VIEW_INCLUSION);
        int v4 = v5.size();
        int v7 = 0;
        com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] v1 = new com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[v4];
        int v2 = 0;
        while (v2 < v4) {
            com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter v0_1 = ((com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter) v5.get(v2));
            Class[] v6 = v0_1.getViews();
            if (v6 != null) {
                v7++;
                v1[v2] = this.constructFilteredBeanWriter(v0_1, v6);
            } else {
                if (v3) {
                    v1[v2] = v0_1;
                }
            }
            v2++;
        }
        if ((!v3) || (v7 != 0)) {
            p11.setFilteredProperties(v1);
        }
        return;
    }

    protected void removeIgnorableTypes(com.flurry.org.codehaus.jackson.map.SerializationConfig p11, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p12, java.util.List p13)
    {
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v4 = p11.getAnnotationIntrospector();
        java.util.HashMap v3_1 = new java.util.HashMap();
        java.util.Iterator v5 = p13.iterator();
        while (v5.hasNext()) {
            com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember v1 = ((com.flurry.org.codehaus.jackson.map.BeanPropertyDefinition) v5.next()).getAccessor();
            if (v1 != null) {
                Class v8 = v1.getRawType();
                Boolean v7_1 = ((Boolean) v3_1.get(v8));
                if (v7_1 == null) {
                    v7_1 = v4.isIgnorableType(((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p11.introspectClassAnnotations(v8)).getClassInfo());
                    if (v7_1 == null) {
                        v7_1 = Boolean.FALSE;
                    }
                    v3_1.put(v8, v7_1);
                }
                if (v7_1.booleanValue()) {
                    v5.remove();
                }
            } else {
                v5.remove();
            }
        }
        return;
    }

    protected void removeSetterlessGetters(com.flurry.org.codehaus.jackson.map.SerializationConfig p4, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p5, java.util.List p6)
    {
        java.util.Iterator v0 = p6.iterator();
        while (v0.hasNext()) {
            if (!((com.flurry.org.codehaus.jackson.map.BeanPropertyDefinition) v0.next()).couldDeserialize()) {
                v0.remove();
            }
        }
        return;
    }

    protected java.util.List sortBeanProperties(com.flurry.org.codehaus.jackson.map.SerializationConfig p1, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p2, java.util.List p3)
    {
        return p3;
    }

    public com.flurry.org.codehaus.jackson.map.SerializerFactory withConfig(com.flurry.org.codehaus.jackson.map.SerializerFactory$Config p4)
    {
        if (this._factoryConfig != p4) {
            if (this.getClass() == com.flurry.org.codehaus.jackson.map.ser.BeanSerializerFactory) {
                this = new com.flurry.org.codehaus.jackson.map.ser.BeanSerializerFactory;
                this(p4);
            } else {
                throw new IllegalStateException(new StringBuilder().append("Subtype of BeanSerializerFactory (").append(this.getClass().getName()).append(") has not properly overridden method \'withAdditionalSerializers\': can not instantiate subtype with ").append("additional serializer definitions").toString());
            }
        }
        return this;
    }
}
