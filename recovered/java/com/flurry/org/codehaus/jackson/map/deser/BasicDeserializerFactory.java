package com.flurry.org.codehaus.jackson.map.deser;
public abstract class BasicDeserializerFactory extends com.flurry.org.codehaus.jackson.map.DeserializerFactory {
    protected static final java.util.HashMap _arrayDeserializers;
    static final java.util.HashMap _collectionFallbacks;
    static final java.util.HashMap _keyDeserializers;
    static final java.util.HashMap _mapFallbacks;
    static final java.util.HashMap _simpleDeserializers;
    protected com.flurry.org.codehaus.jackson.map.ext.OptionalHandlerFactory optionalHandlers;

    static BasicDeserializerFactory()
    {
        com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._simpleDeserializers = com.flurry.org.codehaus.jackson.map.deser.StdDeserializers.constructAll();
        com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._keyDeserializers = com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializers.constructAll();
        com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._mapFallbacks = new java.util.HashMap();
        com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._mapFallbacks.put(java.util.Map.getName(), java.util.LinkedHashMap);
        com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._mapFallbacks.put(java.util.concurrent.ConcurrentMap.getName(), java.util.concurrent.ConcurrentHashMap);
        com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._mapFallbacks.put(java.util.SortedMap.getName(), java.util.TreeMap);
        com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._mapFallbacks.put("java.util.NavigableMap", java.util.TreeMap);
        try {
            com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._mapFallbacks.put(Class.forName("java.util.ConcurrentNavigableMap").getName(), Class.forName("java.util.ConcurrentSkipListMap"));
        } catch (java.util.HashMap v3) {
        }
        com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._collectionFallbacks = new java.util.HashMap();
        com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._collectionFallbacks.put(java.util.Collection.getName(), java.util.ArrayList);
        com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._collectionFallbacks.put(java.util.List.getName(), java.util.ArrayList);
        com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._collectionFallbacks.put(java.util.Set.getName(), java.util.HashSet);
        com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._collectionFallbacks.put(java.util.SortedSet.getName(), java.util.TreeSet);
        com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._collectionFallbacks.put(java.util.Queue.getName(), java.util.LinkedList);
        com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._collectionFallbacks.put("java.util.Deque", java.util.LinkedList);
        com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._collectionFallbacks.put("java.util.NavigableSet", java.util.TreeSet);
        com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._arrayDeserializers = com.flurry.org.codehaus.jackson.map.deser.std.PrimitiveArrayDeserializers.getAll();
        return;
    }

    protected BasicDeserializerFactory()
    {
        this.optionalHandlers = com.flurry.org.codehaus.jackson.map.ext.OptionalHandlerFactory.instance;
        return;
    }

    com.flurry.org.codehaus.jackson.map.JsonDeserializer _constructDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p6, com.flurry.org.codehaus.jackson.map.introspect.Annotated p7, com.flurry.org.codehaus.jackson.map.BeanProperty p8, Object p9)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v0_0;
        if (!(p9 instanceof com.flurry.org.codehaus.jackson.map.JsonDeserializer)) {
            if ((p9 instanceof Class)) {
                if (com.flurry.org.codehaus.jackson.map.JsonDeserializer.isAssignableFrom(((Class) p9))) {
                    v0_0 = p6.deserializerInstance(p7, ((Class) p9));
                    if ((v0_0 instanceof com.flurry.org.codehaus.jackson.map.ContextualDeserializer)) {
                        v0_0 = ((com.flurry.org.codehaus.jackson.map.ContextualDeserializer) v0_0).createContextual(p6, p8);
                    }
                } else {
                    throw new IllegalStateException(new StringBuilder().append("AnnotationIntrospector returned Class ").append(((Class) p9).getName()).append("; expected Class<JsonDeserializer>").toString());
                }
            } else {
                throw new IllegalStateException(new StringBuilder().append("AnnotationIntrospector returned deserializer definition of type ").append(p9.getClass().getName()).append("; expected type JsonDeserializer or Class<JsonDeserializer> instead").toString());
            }
        } else {
            v0_0 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) p9);
            if ((((com.flurry.org.codehaus.jackson.map.JsonDeserializer) p9) instanceof com.flurry.org.codehaus.jackson.map.ContextualDeserializer)) {
                v0_0 = ((com.flurry.org.codehaus.jackson.map.ContextualDeserializer) ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) p9)).createContextual(p6, p8);
            }
        }
        return v0_0;
    }

    protected abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer _findCustomArrayDeserializer(com.flurry.org.codehaus.jackson.map.type.ArrayType p0, com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.map.DeserializerProvider p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4, com.flurry.org.codehaus.jackson.map.JsonDeserializer p5);

    protected abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer _findCustomCollectionDeserializer(com.flurry.org.codehaus.jackson.map.type.CollectionType p0, com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.map.DeserializerProvider p2, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4, com.flurry.org.codehaus.jackson.map.TypeDeserializer p5, com.flurry.org.codehaus.jackson.map.JsonDeserializer p6);

    protected abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer _findCustomCollectionLikeDeserializer(com.flurry.org.codehaus.jackson.map.type.CollectionLikeType p0, com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.map.DeserializerProvider p2, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4, com.flurry.org.codehaus.jackson.map.TypeDeserializer p5, com.flurry.org.codehaus.jackson.map.JsonDeserializer p6);

    protected abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer _findCustomEnumDeserializer(Class p0, com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3);

    protected abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer _findCustomMapDeserializer(com.flurry.org.codehaus.jackson.map.type.MapType p0, com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.map.DeserializerProvider p2, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4, com.flurry.org.codehaus.jackson.map.KeyDeserializer p5, com.flurry.org.codehaus.jackson.map.TypeDeserializer p6, com.flurry.org.codehaus.jackson.map.JsonDeserializer p7);

    protected abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer _findCustomMapLikeDeserializer(com.flurry.org.codehaus.jackson.map.type.MapLikeType p0, com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.map.DeserializerProvider p2, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4, com.flurry.org.codehaus.jackson.map.KeyDeserializer p5, com.flurry.org.codehaus.jackson.map.TypeDeserializer p6, com.flurry.org.codehaus.jackson.map.JsonDeserializer p7);

    protected abstract com.flurry.org.codehaus.jackson.map.JsonDeserializer _findCustomTreeNodeDeserializer(Class p0, com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.map.BeanProperty p2);

    protected com.flurry.org.codehaus.jackson.map.util.EnumResolver constructEnumResolver(Class p2, com.flurry.org.codehaus.jackson.map.DeserializationConfig p3)
    {
        com.flurry.org.codehaus.jackson.map.util.EnumResolver v0_3;
        if (!p3.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.READ_ENUMS_USING_TO_STRING)) {
            v0_3 = com.flurry.org.codehaus.jackson.map.util.EnumResolver.constructUnsafe(p2, p3.getAnnotationIntrospector());
        } else {
            v0_3 = com.flurry.org.codehaus.jackson.map.util.EnumResolver.constructUnsafeUsingToString(p2);
        }
        return v0_3;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer createArrayDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p12, com.flurry.org.codehaus.jackson.map.DeserializerProvider p13, com.flurry.org.codehaus.jackson.map.type.ArrayType p14, com.flurry.org.codehaus.jackson.map.BeanProperty p15)
    {
        com.flurry.org.codehaus.jackson.map.deser.std.ObjectArrayDeserializer v9_0;
        com.flurry.org.codehaus.jackson.type.JavaType v10 = p14.getContentType();
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v7_0 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) v10.getValueHandler());
        if (v7_0 != null) {
            com.flurry.org.codehaus.jackson.map.TypeDeserializer v5_2 = ((com.flurry.org.codehaus.jackson.map.TypeDeserializer) v10.getTypeHandler());
            if (v5_2 == null) {
                v5_2 = this.findTypeDeserializer(p12, v10, p15);
            }
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v8_0 = this._findCustomArrayDeserializer(p14, p12, p13, p15, v5_2, v7_0);
            if (v8_0 == null) {
                if (v7_0 == null) {
                    v7_0 = p13.findValueDeserializer(p12, v10, p15);
                }
                v9_0 = new com.flurry.org.codehaus.jackson.map.deser.std.ObjectArrayDeserializer(p14, v7_0, v5_2);
            } else {
                v9_0 = v8_0;
            }
        } else {
            v9_0 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._arrayDeserializers.get(v10));
            if (v9_0 == null) {
                if (!v10.isPrimitive()) {
                } else {
                    throw new IllegalArgumentException(new StringBuilder().append("Internal error: primitive type (").append(p14).append(") passed, no array deserializer found").toString());
                }
            } else {
                com.flurry.org.codehaus.jackson.map.JsonDeserializer v8_1 = this._findCustomArrayDeserializer(p14, p12, p13, p15, 0, 0);
                if (v8_1 != null) {
                    v9_0 = v8_1;
                }
            }
        }
        return v9_0;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer createCollectionDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p19, com.flurry.org.codehaus.jackson.map.DeserializerProvider p20, com.flurry.org.codehaus.jackson.map.type.CollectionType p21, com.flurry.org.codehaus.jackson.map.BeanProperty p22)
    {
        com.flurry.org.codehaus.jackson.map.type.CollectionType v21_4 = ((com.flurry.org.codehaus.jackson.map.type.CollectionType) this.mapAbstractType(p19, p21));
        Class v12_0 = v21_4.getRawClass();
        com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription v8_1 = ((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p19.introspectForCreation(v21_4));
        com.flurry.org.codehaus.jackson.map.deser.std.CollectionDeserializer v15_0 = this.findDeserializerFromAnnotation(p19, v8_1.getClassInfo(), p22);
        if (v15_0 == null) {
            com.flurry.org.codehaus.jackson.map.type.CollectionType v21_2 = ((com.flurry.org.codehaus.jackson.map.type.CollectionType) this.modifyTypeByAnnotation(p19, v8_1.getClassInfo(), v21_4, 0));
            com.flurry.org.codehaus.jackson.type.JavaType v13 = v21_2.getContentType();
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v11_1 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) v13.getValueHandler());
            com.flurry.org.codehaus.jackson.map.TypeDeserializer v10_1 = ((com.flurry.org.codehaus.jackson.map.TypeDeserializer) v13.getTypeHandler());
            if (v10_1 == null) {
                v10_1 = this.findTypeDeserializer(p19, v13, p22);
            }
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v14 = this._findCustomCollectionDeserializer(v21_2, p19, p20, v8_1, p22, v10_1, v11_1);
            if (v14 == null) {
                if (v11_1 == null) {
                    if (!java.util.EnumSet.isAssignableFrom(v12_0)) {
                        v11_1 = p20.findValueDeserializer(p19, v13, p22);
                    } else {
                        v15_0 = new com.flurry.org.codehaus.jackson.map.deser.std.EnumSetDeserializer(v13.getRawClass(), this.createEnumDeserializer(p19, p20, v13, p22));
                        return v15_0;
                    }
                }
                if ((v21_2.isInterface()) || (v21_2.isAbstract())) {
                    Class v16_1 = ((Class) com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._collectionFallbacks.get(v12_0.getName()));
                    if (v16_1 != null) {
                        v21_2 = ((com.flurry.org.codehaus.jackson.map.type.CollectionType) p19.constructSpecializedType(v21_2, v16_1));
                        v8_1 = ((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p19.introspectForCreation(v21_2));
                    } else {
                        throw new IllegalArgumentException(new StringBuilder().append("Can not find a deserializer for non-concrete Collection type ").append(v21_2).toString());
                    }
                }
                com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator v17 = this.findValueInstantiator(p19, v8_1);
                if (v13.getRawClass() != String) {
                    v15_0 = new com.flurry.org.codehaus.jackson.map.deser.std.CollectionDeserializer(v21_2, v11_1, v10_1, v17);
                } else {
                    v15_0 = new com.flurry.org.codehaus.jackson.map.deser.std.StringCollectionDeserializer(v21_2, v11_1, v17);
                }
            } else {
                v15_0 = v14;
            }
        }
        return v15_0;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer createCollectionLikeDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p12, com.flurry.org.codehaus.jackson.map.DeserializerProvider p13, com.flurry.org.codehaus.jackson.map.type.CollectionLikeType p14, com.flurry.org.codehaus.jackson.map.BeanProperty p15)
    {
        com.flurry.org.codehaus.jackson.map.type.CollectionLikeType v14_4 = ((com.flurry.org.codehaus.jackson.map.type.CollectionLikeType) this.mapAbstractType(p12, p14));
        com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription v4_1 = ((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p12.introspectClassAnnotations(v14_4.getRawClass()));
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v10 = this.findDeserializerFromAnnotation(p12, v4_1.getClassInfo(), p15);
        if (v10 == null) {
            com.flurry.org.codehaus.jackson.map.type.CollectionLikeType v14_3 = ((com.flurry.org.codehaus.jackson.map.type.CollectionLikeType) this.modifyTypeByAnnotation(p12, v4_1.getClassInfo(), v14_4, 0));
            com.flurry.org.codehaus.jackson.type.JavaType v9 = v14_3.getContentType();
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v7_1 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) v9.getValueHandler());
            com.flurry.org.codehaus.jackson.map.TypeDeserializer v6_1 = ((com.flurry.org.codehaus.jackson.map.TypeDeserializer) v9.getTypeHandler());
            if (v6_1 == null) {
                v6_1 = this.findTypeDeserializer(p12, v9, p15);
            }
            v10 = this._findCustomCollectionLikeDeserializer(v14_3, p12, p13, v4_1, p15, v6_1, v7_1);
        }
        return v10;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer createEnumDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p12, com.flurry.org.codehaus.jackson.map.DeserializerProvider p13, com.flurry.org.codehaus.jackson.type.JavaType p14, com.flurry.org.codehaus.jackson.map.BeanProperty p15)
    {
        com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription v1_1 = ((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p12.introspectForCreation(p14));
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v3_1 = this.findDeserializerFromAnnotation(p12, v1_1.getClassInfo(), p15);
        if (v3_1 == null) {
            Class v4 = p14.getRawClass();
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v2 = this._findCustomEnumDeserializer(v4, p12, v1_1, p15);
            if (v2 == null) {
                java.util.Iterator v6 = v1_1.getFactoryMethods().iterator();
                while (v6.hasNext()) {
                    com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v5_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) v6.next());
                    if (p12.getAnnotationIntrospector().hasCreatorAnnotation(v5_1)) {
                        if ((v5_1.getParameterCount() != 1) || (!v5_1.getRawType().isAssignableFrom(v4))) {
                            throw new IllegalArgumentException(new StringBuilder().append("Unsuitable method (").append(v5_1).append(") decorated with @JsonCreator (for Enum type ").append(v4.getName()).append(")").toString());
                        } else {
                            v3_1 = com.flurry.org.codehaus.jackson.map.deser.std.EnumDeserializer.deserializerForCreator(p12, v4, v5_1);
                        }
                    }
                }
                v3_1 = new com.flurry.org.codehaus.jackson.map.deser.std.EnumDeserializer(this.constructEnumResolver(v4, p12));
            } else {
                v3_1 = v2;
            }
        }
        return v3_1;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer createMapDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p28, com.flurry.org.codehaus.jackson.map.DeserializerProvider p29, com.flurry.org.codehaus.jackson.map.type.MapType p30, com.flurry.org.codehaus.jackson.map.BeanProperty p31)
    {
        com.flurry.org.codehaus.jackson.map.type.MapType v30_4 = ((com.flurry.org.codehaus.jackson.map.type.MapType) this.mapAbstractType(p28, p30));
        com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription v9_0 = ((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p28.introspectForCreation(v30_4));
        com.flurry.org.codehaus.jackson.map.deser.std.MapDeserializer v22 = this.findDeserializerFromAnnotation(p28, v9_0.getClassInfo(), p31);
        if (v22 == null) {
            com.flurry.org.codehaus.jackson.map.type.MapType v30_2 = ((com.flurry.org.codehaus.jackson.map.type.MapType) this.modifyTypeByAnnotation(p28, v9_0.getClassInfo(), v30_4, 0));
            com.flurry.org.codehaus.jackson.type.JavaType v24 = v30_2.getKeyType();
            com.flurry.org.codehaus.jackson.type.JavaType v20 = v30_2.getContentType();
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v13_1 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) v20.getValueHandler());
            com.flurry.org.codehaus.jackson.map.KeyDeserializer v11_1 = ((com.flurry.org.codehaus.jackson.map.KeyDeserializer) v24.getValueHandler());
            if (v11_1 == null) {
                v11_1 = p29.findKeyDeserializer(p28, v24, p31);
            }
            com.flurry.org.codehaus.jackson.map.TypeDeserializer v12_1 = ((com.flurry.org.codehaus.jackson.map.TypeDeserializer) v20.getTypeHandler());
            if (v12_1 == null) {
                v12_1 = this.findTypeDeserializer(p28, v20, p31);
            }
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v21 = this._findCustomMapDeserializer(v30_2, p28, p29, v9_0, p31, v11_1, v12_1, v13_1);
            if (v21 == null) {
                if (v13_1 == null) {
                    v13_1 = p29.findValueDeserializer(p28, v20, p31);
                }
                Class v26_0 = v30_2.getRawClass();
                if (!java.util.EnumMap.isAssignableFrom(v26_0)) {
                    if ((v30_2.isInterface()) || (v30_2.isAbstract())) {
                        Class v23_1 = ((Class) com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._mapFallbacks.get(v26_0.getName()));
                        if (v23_1 != null) {
                            v30_2 = ((com.flurry.org.codehaus.jackson.map.type.MapType) p28.constructSpecializedType(v30_2, v23_1));
                            v9_0 = ((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p28.introspectForCreation(v30_2));
                        } else {
                            throw new IllegalArgumentException(new StringBuilder().append("Can not find a deserializer for non-concrete Map type ").append(v30_2).toString());
                        }
                    }
                    com.flurry.org.codehaus.jackson.map.deser.std.MapDeserializer v14_1 = new com.flurry.org.codehaus.jackson.map.deser.std.MapDeserializer(v30_2, this.findValueInstantiator(p28, v9_0), v11_1, v13_1, v12_1);
                    v14_1.setIgnorableProperties(p28.getAnnotationIntrospector().findPropertiesToIgnore(v9_0.getClassInfo()));
                    v22 = v14_1;
                } else {
                    Class v25 = v24.getRawClass();
                    if ((v25 != null) && (v25.isEnum())) {
                        v22 = new com.flurry.org.codehaus.jackson.map.deser.std.EnumMapDeserializer;
                        v22(v24.getRawClass(), this.createEnumDeserializer(p28, p29, v24, p31), v13_1);
                    } else {
                        throw new IllegalArgumentException("Can not construct EnumMap; generic (key) type not available");
                    }
                }
            } else {
                v22 = v21;
            }
        }
        return v22;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer createMapLikeDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p14, com.flurry.org.codehaus.jackson.map.DeserializerProvider p15, com.flurry.org.codehaus.jackson.map.type.MapLikeType p16, com.flurry.org.codehaus.jackson.map.BeanProperty p17)
    {
        com.flurry.org.codehaus.jackson.map.type.MapLikeType v16_4 = ((com.flurry.org.codehaus.jackson.map.type.MapLikeType) this.mapAbstractType(p14, p16));
        com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription v5_1 = ((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p14.introspectForCreation(v16_4));
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v11 = this.findDeserializerFromAnnotation(p14, v5_1.getClassInfo(), p17);
        if (v11 == null) {
            com.flurry.org.codehaus.jackson.map.type.MapLikeType v16_3 = ((com.flurry.org.codehaus.jackson.map.type.MapLikeType) this.modifyTypeByAnnotation(p14, v5_1.getClassInfo(), v16_4, 0));
            com.flurry.org.codehaus.jackson.type.JavaType v12 = v16_3.getKeyType();
            com.flurry.org.codehaus.jackson.type.JavaType v10 = v16_3.getContentType();
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v9_1 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) v10.getValueHandler());
            com.flurry.org.codehaus.jackson.map.KeyDeserializer v7_1 = ((com.flurry.org.codehaus.jackson.map.KeyDeserializer) v12.getValueHandler());
            if (v7_1 == null) {
                v7_1 = p15.findKeyDeserializer(p14, v12, p17);
            }
            com.flurry.org.codehaus.jackson.map.TypeDeserializer v8_1 = ((com.flurry.org.codehaus.jackson.map.TypeDeserializer) v10.getTypeHandler());
            if (v8_1 == null) {
                v8_1 = this.findTypeDeserializer(p14, v10, p17);
            }
            v11 = this._findCustomMapLikeDeserializer(v16_3, p14, p15, v5_1, p17, v7_1, v8_1, v9_1);
        }
        return v11;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer createTreeDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p3, com.flurry.org.codehaus.jackson.map.DeserializerProvider p4, com.flurry.org.codehaus.jackson.type.JavaType p5, com.flurry.org.codehaus.jackson.map.BeanProperty p6)
    {
        Class v1 = p5.getRawClass();
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v0 = this._findCustomTreeNodeDeserializer(v1, p3, p6);
        if (v0 == null) {
            v0 = com.flurry.org.codehaus.jackson.map.deser.std.JsonNodeDeserializer.getDeserializer(v1);
        }
        return v0;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer findDeserializerFromAnnotation(com.flurry.org.codehaus.jackson.map.DeserializationConfig p3, com.flurry.org.codehaus.jackson.map.introspect.Annotated p4, com.flurry.org.codehaus.jackson.map.BeanProperty p5)
    {
        int v1_1;
        Object v0 = p3.getAnnotationIntrospector().findDeserializer(p4);
        if (v0 == null) {
            v1_1 = 0;
        } else {
            v1_1 = this._constructDeserializer(p3, p4, p5, v0);
        }
        return v1_1;
    }

    public com.flurry.org.codehaus.jackson.map.TypeDeserializer findPropertyContentTypeDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p6, com.flurry.org.codehaus.jackson.type.JavaType p7, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p8, com.flurry.org.codehaus.jackson.map.BeanProperty p9)
    {
        com.flurry.org.codehaus.jackson.map.TypeDeserializer v4_0;
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v0 = p6.getAnnotationIntrospector();
        com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder v1 = v0.findPropertyContentTypeResolver(p6, p8, p7);
        com.flurry.org.codehaus.jackson.type.JavaType v2 = p7.getContentType();
        if (v1 != null) {
            v4_0 = v1.buildTypeDeserializer(p6, v2, p6.getSubtypeResolver().collectAndResolveSubtypes(p8, p6, v0), p9);
        } else {
            v4_0 = this.findTypeDeserializer(p6, v2, p9);
        }
        return v4_0;
    }

    public com.flurry.org.codehaus.jackson.map.TypeDeserializer findPropertyTypeDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p5, com.flurry.org.codehaus.jackson.type.JavaType p6, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p7, com.flurry.org.codehaus.jackson.map.BeanProperty p8)
    {
        com.flurry.org.codehaus.jackson.map.TypeDeserializer v3_0;
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v0 = p5.getAnnotationIntrospector();
        com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder v1 = v0.findPropertyTypeResolver(p5, p7, p6);
        if (v1 != null) {
            v3_0 = v1.buildTypeDeserializer(p5, p6, p5.getSubtypeResolver().collectAndResolveSubtypes(p7, p5, v0), p8);
        } else {
            v3_0 = this.findTypeDeserializer(p5, p6, p8);
        }
        return v3_0;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer findStdBeanDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p10, com.flurry.org.codehaus.jackson.map.DeserializerProvider p11, com.flurry.org.codehaus.jackson.type.JavaType p12, com.flurry.org.codehaus.jackson.map.BeanProperty p13)
    {
        Class v0 = p12.getRawClass();
        com.flurry.org.codehaus.jackson.map.deser.std.AtomicReferenceDeserializer v3_0 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) com.flurry.org.codehaus.jackson.map.deser.BasicDeserializerFactory._simpleDeserializers.get(new com.flurry.org.codehaus.jackson.map.type.ClassKey(v0)));
        if (v3_0 == null) {
            if (!java.util.concurrent.atomic.AtomicReference.isAssignableFrom(v0)) {
                com.flurry.org.codehaus.jackson.map.JsonDeserializer v1 = this.optionalHandlers.findDeserializer(p12, p10, p11);
                if (v1 == null) {
                    v3_0 = 0;
                } else {
                    v3_0 = v1;
                }
            } else {
                com.flurry.org.codehaus.jackson.type.JavaType v5;
                com.flurry.org.codehaus.jackson.type.JavaType[] v4 = p10.getTypeFactory().findTypeParameters(p12, java.util.concurrent.atomic.AtomicReference);
                if ((v4 != null) && (v4.length >= 1)) {
                    v5 = v4[0];
                } else {
                    v5 = com.flurry.org.codehaus.jackson.map.type.TypeFactory.unknownType();
                }
                v3_0 = new com.flurry.org.codehaus.jackson.map.deser.std.AtomicReferenceDeserializer(v5, p13);
            }
        }
        return v3_0;
    }

    public com.flurry.org.codehaus.jackson.map.TypeDeserializer findTypeDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p10, com.flurry.org.codehaus.jackson.type.JavaType p11, com.flurry.org.codehaus.jackson.map.BeanProperty p12)
    {
        Class v7_5;
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass v0 = ((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p10.introspectClassAnnotations(p11.getRawClass())).getClassInfo();
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v1 = p10.getAnnotationIntrospector();
        com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder v2 = v1.findTypeResolver(p10, v0, p11);
        java.util.Collection v6 = 0;
        if (v2 != null) {
            v6 = p10.getSubtypeResolver().collectAndResolveSubtypes(v0, p10, v1);
            if ((v2.getDefaultImpl() == null) && (p11.isAbstract())) {
                com.flurry.org.codehaus.jackson.type.JavaType v5 = this.mapAbstractType(p10, p11);
                if ((v5 != null) && (v5.getRawClass() != p11.getRawClass())) {
                    v2 = v2.defaultImpl(v5.getRawClass());
                }
            }
            v7_5 = v2.buildTypeDeserializer(p10, p11, v6, p12);
        } else {
            v2 = p10.getDefaultTyper(p11);
            if (v2 != null) {
            } else {
                v7_5 = 0;
            }
        }
        return v7_5;
    }

    public abstract com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator findValueInstantiator(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p1);

    public abstract com.flurry.org.codehaus.jackson.type.JavaType mapAbstractType(com.flurry.org.codehaus.jackson.map.DeserializationConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1);

    protected com.flurry.org.codehaus.jackson.type.JavaType modifyTypeByAnnotation(com.flurry.org.codehaus.jackson.map.DeserializationConfig p18, com.flurry.org.codehaus.jackson.map.introspect.Annotated p19, com.flurry.org.codehaus.jackson.type.JavaType p20, String p21)
    {
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v8 = p18.getAnnotationIntrospector();
        Class v13 = v8.findDeserializationType(p19, p20, p21);
        if (v13 != null) {
            try {
                p20 = p20.narrowBy(v13);
            } catch (IllegalArgumentException v7_0) {
                throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Failed to narrow type ").append(p20).append(" with concrete-type annotation (value ").append(v13.getName()).append("), method \'").append(p19.getName()).append("\': ").append(v7_0.getMessage()).toString(), 0, v7_0);
            }
        }
        if (p20.isContainerType()) {
            Class v11 = v8.findDeserializationKeyType(p19, p20.getKeyType(), p21);
            if (v11 != null) {
                if ((p20 instanceof com.flurry.org.codehaus.jackson.map.type.MapLikeType)) {
                    try {
                        p20 = ((com.flurry.org.codehaus.jackson.map.type.MapLikeType) p20).narrowKey(v11);
                    } catch (IllegalArgumentException v7_2) {
                        throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Failed to narrow key type ").append(p20).append(" with key-type annotation (").append(v11.getName()).append("): ").append(v7_2.getMessage()).toString(), 0, v7_2);
                    }
                } else {
                    throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Illegal key-type annotation: type ").append(p20).append(" is not a Map(-like) type").toString());
                }
            }
            com.flurry.org.codehaus.jackson.type.JavaType v12 = p20.getKeyType();
            if ((v12 != null) && (v12.getValueHandler() == null)) {
                Class v10 = v8.findKeyDeserializer(p19);
                if ((v10 != null) && (v10 != com.flurry.org.codehaus.jackson.map.KeyDeserializer$None)) {
                    v12.setValueHandler(p18.keyDeserializerInstance(p19, v10));
                }
            }
            Class v3 = v8.findDeserializationContentType(p19, p20.getContentType(), p21);
            if (v3 != null) {
                try {
                    p20 = p20.narrowContentsBy(v3);
                } catch (IllegalArgumentException v7_1) {
                    throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Failed to narrow content type ").append(p20).append(" with content-type annotation (").append(v3.getName()).append("): ").append(v7_1.getMessage()).toString(), 0, v7_1);
                }
            }
            if (p20.getContentType().getValueHandler() == null) {
                Class v5 = v8.findContentDeserializer(p19);
                if ((v5 != null) && (v5 != com.flurry.org.codehaus.jackson.map.JsonDeserializer$None)) {
                    p20.getContentType().setValueHandler(p18.deserializerInstance(p19, v5));
                }
            }
        }
        return p20;
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType resolveType(com.flurry.org.codehaus.jackson.map.DeserializationConfig p10, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p11, com.flurry.org.codehaus.jackson.type.JavaType p12, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p13, com.flurry.org.codehaus.jackson.map.BeanProperty p14)
    {
        if (p12.isContainerType()) {
            com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v3 = p10.getAnnotationIntrospector();
            com.flurry.org.codehaus.jackson.type.JavaType v6 = p12.getKeyType();
            if (v6 != null) {
                Class v5 = v3.findKeyDeserializer(p13);
                if ((v5 != null) && (v5 != com.flurry.org.codehaus.jackson.map.KeyDeserializer$None)) {
                    v6.setValueHandler(p10.keyDeserializerInstance(p13, v5));
                }
            }
            Class v1 = v3.findContentDeserializer(p13);
            if ((v1 != null) && (v1 != com.flurry.org.codehaus.jackson.map.JsonDeserializer$None)) {
                p12.getContentType().setValueHandler(p10.deserializerInstance(p13, v1));
            }
            if ((p13 instanceof com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember)) {
                com.flurry.org.codehaus.jackson.map.TypeDeserializer v2 = this.findPropertyContentTypeDeserializer(p10, p12, p13, p14);
                if (v2 != null) {
                    p12 = p12.withContentTypeHandler(v2);
                }
            }
        }
        com.flurry.org.codehaus.jackson.map.TypeDeserializer v7;
        if (!(p13 instanceof com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember)) {
            v7 = this.findTypeDeserializer(p10, p12, 0);
        } else {
            v7 = this.findPropertyTypeDeserializer(p10, p12, p13, p14);
        }
        if (v7 != null) {
            p12 = p12.withTypeHandler(v7);
        }
        return p12;
    }

    public abstract com.flurry.org.codehaus.jackson.map.DeserializerFactory withConfig(com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config p0);
}
