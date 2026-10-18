package com.flurry.org.codehaus.jackson.map.deser;
public class StdDeserializerProvider extends com.flurry.org.codehaus.jackson.map.DeserializerProvider {
    protected final java.util.concurrent.ConcurrentHashMap _cachedDeserializers;
    protected com.flurry.org.codehaus.jackson.map.DeserializerFactory _factory;
    protected final java.util.HashMap _incompleteDeserializers;
    protected final com.flurry.org.codehaus.jackson.map.util.RootNameLookup _rootNames;

    public StdDeserializerProvider()
    {
        this(com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory.instance);
        return;
    }

    public StdDeserializerProvider(com.flurry.org.codehaus.jackson.map.DeserializerFactory p5)
    {
        this._cachedDeserializers = new java.util.concurrent.ConcurrentHashMap(64, 1061158912, 2);
        this._incompleteDeserializers = new java.util.HashMap(8);
        this._factory = p5;
        this._rootNames = new com.flurry.org.codehaus.jackson.map.util.RootNameLookup();
        return;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _createAndCache2(com.flurry.org.codehaus.jackson.map.DeserializationConfig p11, com.flurry.org.codehaus.jackson.type.JavaType p12, com.flurry.org.codehaus.jackson.map.BeanProperty p13)
    {
        try {
            int v4 = this._createDeserializer(p11, p12, p13);
        } catch (IllegalArgumentException v5) {
            throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(v5.getMessage(), 0, v5);
        }
        if (v4 != 0) {
            boolean v1;
            boolean v6 = (v4 instanceof com.flurry.org.codehaus.jackson.map.ResolvableDeserializer);
            if (v4.getClass() != com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer) {
                v1 = 0;
            } else {
                v1 = 1;
            }
            if ((!v1) && (p11.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_ANNOTATIONS))) {
                com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v2 = p11.getAnnotationIntrospector();
                Boolean v3 = v2.findCachability(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass.construct(v4.getClass(), v2, 0));
                if (v3 != null) {
                    v1 = v3.booleanValue();
                }
            }
            if (v6) {
                this._incompleteDeserializers.put(p12, v4);
                this._resolveDeserializer(p11, ((com.flurry.org.codehaus.jackson.map.ResolvableDeserializer) v4));
                this._incompleteDeserializers.remove(p12);
            }
            if (v1) {
                this._cachedDeserializers.put(p12, v4);
            }
        } else {
            v4 = 0;
        }
        return v4;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _createAndCacheValueDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p6, com.flurry.org.codehaus.jackson.type.JavaType p7, com.flurry.org.codehaus.jackson.map.BeanProperty p8)
    {
        try {
            Throwable v2_0;
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v1_2 = this._findCachedDeserializer(p7);
        } catch (Throwable v2_2) {
            throw v2_2;
        }
        if (v1_2 == null) {
            int v0 = this._incompleteDeserializers.size();
            if (v0 > 0) {
                com.flurry.org.codehaus.jackson.map.JsonDeserializer v1_1 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) this._incompleteDeserializers.get(p7));
                if (v1_1 != null) {
                    v2_0 = v1_1;
                    return v2_0;
                }
            }
            try {
                v2_0 = this._createAndCache2(p6, p7, p8);
            } catch (Throwable v2_1) {
                if (v0 == 0) {
                    if (this._incompleteDeserializers.size() > 0) {
                        this._incompleteDeserializers.clear();
                    }
                }
                throw v2_1;
            }
            if ((v0 == 0) && (this._incompleteDeserializers.size() > 0)) {
                this._incompleteDeserializers.clear();
            }
        } else {
            v2_0 = v1_2;
        }
        return v2_0;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _createDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p5, com.flurry.org.codehaus.jackson.type.JavaType p6, com.flurry.org.codehaus.jackson.map.BeanProperty p7)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v2_6;
        if (!p6.isEnumType()) {
            if (p6.isContainerType()) {
                if (!p6.isArrayType()) {
                    if (!p6.isMapLikeType()) {
                        if (p6.isCollectionLikeType()) {
                            if (!((com.flurry.org.codehaus.jackson.map.type.CollectionLikeType) p6).isTrueCollectionType()) {
                                v2_6 = this._factory.createCollectionLikeDeserializer(p5, this, ((com.flurry.org.codehaus.jackson.map.type.CollectionLikeType) p6), p7);
                            } else {
                                v2_6 = this._factory.createCollectionDeserializer(p5, this, ((com.flurry.org.codehaus.jackson.map.type.CollectionType) ((com.flurry.org.codehaus.jackson.map.type.CollectionLikeType) p6)), p7);
                            }
                            return v2_6;
                        }
                    } else {
                        if (!((com.flurry.org.codehaus.jackson.map.type.MapLikeType) p6).isTrueMapType()) {
                            v2_6 = this._factory.createMapLikeDeserializer(p5, this, ((com.flurry.org.codehaus.jackson.map.type.MapLikeType) p6), p7);
                        } else {
                            v2_6 = this._factory.createMapDeserializer(p5, this, ((com.flurry.org.codehaus.jackson.map.type.MapType) ((com.flurry.org.codehaus.jackson.map.type.MapLikeType) p6)), p7);
                        }
                        return v2_6;
                    }
                } else {
                    v2_6 = this._factory.createArrayDeserializer(p5, this, ((com.flurry.org.codehaus.jackson.map.type.ArrayType) p6), p7);
                    return v2_6;
                }
            }
            if (!com.flurry.org.codehaus.jackson.JsonNode.isAssignableFrom(p6.getRawClass())) {
                v2_6 = this._factory.createBeanDeserializer(p5, this, p6, p7);
            } else {
                v2_6 = this._factory.createTreeDeserializer(p5, this, p6, p7);
            }
        } else {
            v2_6 = this._factory.createEnumDeserializer(p5, this, p6, p7);
        }
        return v2_6;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _findCachedDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p2)
    {
        if (p2 != null) {
            return ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) this._cachedDeserializers.get(p2));
        } else {
            throw new IllegalArgumentException();
        }
    }

    protected com.flurry.org.codehaus.jackson.map.KeyDeserializer _handleUnknownKeyDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Can not find a (Map) Key deserializer for type ").append(p4).toString());
    }

    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _handleUnknownValueDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p5)
    {
        if (com.flurry.org.codehaus.jackson.map.util.ClassUtil.isConcrete(p5.getRawClass())) {
            throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Can not find a Value deserializer for type ").append(p5).toString());
        } else {
            throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Can not find a Value deserializer for abstract type ").append(p5).toString());
        }
    }

    protected void _resolveDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.map.ResolvableDeserializer p2)
    {
        p2.resolve(p1, this);
        return;
    }

    public int cachedDeserializersCount()
    {
        return this._cachedDeserializers.size();
    }

    public com.flurry.org.codehaus.jackson.io.SerializedString findExpectedRootName(com.flurry.org.codehaus.jackson.map.DeserializationConfig p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return this._rootNames.findRootName(p3, p2);
    }

    public com.flurry.org.codehaus.jackson.map.KeyDeserializer findKeyDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p3, com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.map.BeanProperty p5)
    {
        com.flurry.org.codehaus.jackson.map.KeyDeserializer v0_0 = this._factory.createKeyDeserializer(p3, p4, p5);
        if ((v0_0 instanceof com.flurry.org.codehaus.jackson.map.ContextualKeyDeserializer)) {
            v0_0 = ((com.flurry.org.codehaus.jackson.map.ContextualKeyDeserializer) v0_0).createContextual(p3, p5);
        }
        if (v0_0 == null) {
            v0_0 = this._handleUnknownKeyDeserializer(p4);
        }
        return v0_0;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer findTypedValueDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p4, com.flurry.org.codehaus.jackson.type.JavaType p5, com.flurry.org.codehaus.jackson.map.BeanProperty p6)
    {
        com.flurry.org.codehaus.jackson.map.deser.StdDeserializerProvider$WrappedDeserializer v0 = this.findValueDeserializer(p4, p5, p6);
        com.flurry.org.codehaus.jackson.map.TypeDeserializer v1 = this._factory.findTypeDeserializer(p4, p5, p6);
        if (v1 != null) {
            v0 = new com.flurry.org.codehaus.jackson.map.deser.StdDeserializerProvider$WrappedDeserializer(v1, v0);
        }
        return v0;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer findValueDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p5, com.flurry.org.codehaus.jackson.type.JavaType p6, com.flurry.org.codehaus.jackson.map.BeanProperty p7)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v2;
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v1_0 = this._findCachedDeserializer(p6);
        if (v1_0 == null) {
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v1_2 = this._createAndCacheValueDeserializer(p5, p6, p7);
            if (v1_2 == null) {
                v1_2 = this._handleUnknownValueDeserializer(p6);
            }
            if ((v1_2 instanceof com.flurry.org.codehaus.jackson.map.ContextualDeserializer)) {
                v1_2 = ((com.flurry.org.codehaus.jackson.map.ContextualDeserializer) v1_2).createContextual(p5, p7);
            }
            v2 = v1_2;
        } else {
            if ((v1_0 instanceof com.flurry.org.codehaus.jackson.map.ContextualDeserializer)) {
                v1_0 = ((com.flurry.org.codehaus.jackson.map.ContextualDeserializer) v1_0).createContextual(p5, p7);
            }
            v2 = v1_0;
        }
        return v2;
    }

    public void flushCachedDeserializers()
    {
        this._cachedDeserializers.clear();
        return;
    }

    public boolean hasValueDeserializerFor(com.flurry.org.codehaus.jackson.map.DeserializationConfig p5, com.flurry.org.codehaus.jackson.type.JavaType p6)
    {
        int v2 = 0;
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v0 = this._findCachedDeserializer(p6);
        if (v0 != null) {
            if (v0 != null) {
                v2 = 1;
            }
        } else {
            try {
                v0 = this._createAndCacheValueDeserializer(p5, p6, 0);
            } catch (Exception v1) {
            }
        }
        return v2;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType mapAbstractType(com.flurry.org.codehaus.jackson.map.DeserializationConfig p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return this._factory.mapAbstractType(p2, p3);
    }

    public com.flurry.org.codehaus.jackson.map.DeserializerProvider withAbstractTypeResolver(com.flurry.org.codehaus.jackson.map.AbstractTypeResolver p2)
    {
        return this.withFactory(this._factory.withAbstractTypeResolver(p2));
    }

    public com.flurry.org.codehaus.jackson.map.DeserializerProvider withAdditionalDeserializers(com.flurry.org.codehaus.jackson.map.Deserializers p2)
    {
        return this.withFactory(this._factory.withAdditionalDeserializers(p2));
    }

    public com.flurry.org.codehaus.jackson.map.DeserializerProvider withAdditionalKeyDeserializers(com.flurry.org.codehaus.jackson.map.KeyDeserializers p2)
    {
        return this.withFactory(this._factory.withAdditionalKeyDeserializers(p2));
    }

    public com.flurry.org.codehaus.jackson.map.DeserializerProvider withDeserializerModifier(com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerModifier p2)
    {
        return this.withFactory(this._factory.withDeserializerModifier(p2));
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.DeserializerProvider withFactory(com.flurry.org.codehaus.jackson.map.DeserializerFactory p2)
    {
        return this.withFactory(p2);
    }

    public com.flurry.org.codehaus.jackson.map.deser.StdDeserializerProvider withFactory(com.flurry.org.codehaus.jackson.map.DeserializerFactory p4)
    {
        if (this.getClass() == com.flurry.org.codehaus.jackson.map.deser.StdDeserializerProvider) {
            return new com.flurry.org.codehaus.jackson.map.deser.StdDeserializerProvider(p4);
        } else {
            throw new IllegalStateException(new StringBuilder().append("DeserializerProvider of type ").append(this.getClass().getName()).append(" does not override \'withFactory()\' method").toString());
        }
    }

    public com.flurry.org.codehaus.jackson.map.DeserializerProvider withValueInstantiators(com.flurry.org.codehaus.jackson.map.deser.ValueInstantiators p2)
    {
        return this.withFactory(this._factory.withValueInstantiators(p2));
    }
}
