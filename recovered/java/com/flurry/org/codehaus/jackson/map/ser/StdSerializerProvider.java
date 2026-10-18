package com.flurry.org.codehaus.jackson.map.ser;
public class StdSerializerProvider extends com.flurry.org.codehaus.jackson.map.SerializerProvider {
    static final boolean CACHE_UNKNOWN_MAPPINGS;
    public static final com.flurry.org.codehaus.jackson.map.JsonSerializer DEFAULT_KEY_SERIALIZER;
    public static final com.flurry.org.codehaus.jackson.map.JsonSerializer DEFAULT_NULL_KEY_SERIALIZER;
    public static final com.flurry.org.codehaus.jackson.map.JsonSerializer DEFAULT_UNKNOWN_SERIALIZER;
    protected java.text.DateFormat _dateFormat;
    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _keySerializer;
    protected final com.flurry.org.codehaus.jackson.map.ser.impl.ReadOnlyClassToSerializerMap _knownSerializers;
    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _nullKeySerializer;
    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _nullValueSerializer;
    protected final com.flurry.org.codehaus.jackson.map.util.RootNameLookup _rootNames;
    protected final com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache _serializerCache;
    protected final com.flurry.org.codehaus.jackson.map.SerializerFactory _serializerFactory;
    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _unknownTypeSerializer;

    static StdSerializerProvider()
    {
        com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider.DEFAULT_NULL_KEY_SERIALIZER = new com.flurry.org.codehaus.jackson.map.ser.impl.FailingSerializer("Null key for a Map not allowed in JSON (use a converting NullKeySerializer?)");
        com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider.DEFAULT_KEY_SERIALIZER = new com.flurry.org.codehaus.jackson.map.ser.std.StdKeySerializer();
        com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider.DEFAULT_UNKNOWN_SERIALIZER = new com.flurry.org.codehaus.jackson.map.ser.impl.UnknownSerializer();
        return;
    }

    public StdSerializerProvider()
    {
        super(0);
        super._unknownTypeSerializer = com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider.DEFAULT_UNKNOWN_SERIALIZER;
        super._nullValueSerializer = com.flurry.org.codehaus.jackson.map.ser.std.NullSerializer.instance;
        super._nullKeySerializer = com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider.DEFAULT_NULL_KEY_SERIALIZER;
        super._serializerFactory = 0;
        super._serializerCache = new com.flurry.org.codehaus.jackson.map.ser.impl.SerializerCache();
        super._knownSerializers = 0;
        super._rootNames = new com.flurry.org.codehaus.jackson.map.util.RootNameLookup();
        return;
    }

    protected StdSerializerProvider(com.flurry.org.codehaus.jackson.map.SerializationConfig p2, com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider p3, com.flurry.org.codehaus.jackson.map.SerializerFactory p4)
    {
        super(p2);
        super._unknownTypeSerializer = com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider.DEFAULT_UNKNOWN_SERIALIZER;
        super._nullValueSerializer = com.flurry.org.codehaus.jackson.map.ser.std.NullSerializer.instance;
        super._nullKeySerializer = com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider.DEFAULT_NULL_KEY_SERIALIZER;
        if (p2 != null) {
            super._serializerFactory = p4;
            super._serializerCache = p3._serializerCache;
            super._unknownTypeSerializer = p3._unknownTypeSerializer;
            super._keySerializer = p3._keySerializer;
            super._nullValueSerializer = p3._nullValueSerializer;
            super._nullKeySerializer = p3._nullKeySerializer;
            super._rootNames = p3._rootNames;
            super._knownSerializers = super._serializerCache.getReadOnlyLookupMap();
            return;
        } else {
            throw new NullPointerException();
        }
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _createAndCacheUntypedSerializer(com.flurry.org.codehaus.jackson.type.JavaType p6, com.flurry.org.codehaus.jackson.map.BeanProperty p7)
    {
        try {
            com.flurry.org.codehaus.jackson.map.JsonSerializer v1 = this._createUntypedSerializer(p6, p7);
        } catch (IllegalArgumentException v0) {
            throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(v0.getMessage(), 0, v0);
        }
        if (v1 != null) {
            this._serializerCache.addAndResolveNonTypedSerializer(p6, v1, this);
        }
        return v1;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _createAndCacheUntypedSerializer(Class p6, com.flurry.org.codehaus.jackson.map.BeanProperty p7)
    {
        try {
            com.flurry.org.codehaus.jackson.map.JsonSerializer v1 = this._createUntypedSerializer(this._config.constructType(p6), p7);
        } catch (IllegalArgumentException v0) {
            throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(v0.getMessage(), 0, v0);
        }
        if (v1 != null) {
            this._serializerCache.addAndResolveNonTypedSerializer(p6, v1, this);
        }
        return v1;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _createUntypedSerializer(com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4)
    {
        return this._serializerFactory.createSerializer(this._config, p3, p4);
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _findExplicitUntypedSerializer(Class p4, com.flurry.org.codehaus.jackson.map.BeanProperty p5)
    {
        int v2_1;
        com.flurry.org.codehaus.jackson.map.JsonSerializer v1_0 = this._knownSerializers.untypedValueSerializer(p4);
        if (v1_0 == null) {
            com.flurry.org.codehaus.jackson.map.JsonSerializer v1_1 = this._serializerCache.untypedValueSerializer(p4);
            if (v1_1 == null) {
                try {
                    v2_1 = this._createAndCacheUntypedSerializer(p4, p5);
                } catch (Exception v0) {
                    v2_1 = 0;
                }
            } else {
                v2_1 = v1_1;
            }
        } else {
            v2_1 = v1_0;
        }
        return v2_1;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _handleContextualResolvable(com.flurry.org.codehaus.jackson.map.JsonSerializer p5, com.flurry.org.codehaus.jackson.map.BeanProperty p6)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v1;
        if ((p5 instanceof com.flurry.org.codehaus.jackson.map.ContextualSerializer)) {
            com.flurry.org.codehaus.jackson.map.JsonSerializer v0 = ((com.flurry.org.codehaus.jackson.map.ContextualSerializer) p5).createContextual(this._config, p6);
            if (v0 != p5) {
                if ((v0 instanceof com.flurry.org.codehaus.jackson.map.ResolvableSerializer)) {
                    ((com.flurry.org.codehaus.jackson.map.ResolvableSerializer) v0).resolve(this);
                }
                p5 = v0;
            }
            v1 = p5;
        } else {
            v1 = p5;
        }
        return v1;
    }

    protected void _reportIncompatibleRootType(Object p5, com.flurry.org.codehaus.jackson.type.JavaType p6)
    {
        if ((!p6.isPrimitive()) || (!com.flurry.org.codehaus.jackson.map.util.ClassUtil.wrapperType(p6.getRawClass()).isAssignableFrom(p5.getClass()))) {
            throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Incompatible types: declared root type (").append(p6).append(") vs ").append(p5.getClass().getName()).toString());
        } else {
            return;
        }
    }

    protected void _serializeValue(com.flurry.org.codehaus.jackson.JsonGenerator p10, Object p11)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v4;
        boolean v5;
        if (p11 != null) {
            v4 = this.findTypedValueSerializer(p11.getClass(), 1, 0);
            v5 = this._config.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRAP_ROOT_VALUE);
            if (v5) {
                p10.writeStartObject();
                p10.writeFieldName(this._rootNames.findRootName(p11.getClass(), this._config));
            }
        } else {
            v4 = this.getNullValueSerializer();
            v5 = 0;
        }
        try {
            v4.serialize(p11, p10, this);
        } catch (java.io.IOException v2) {
            throw v2;
        } catch (Exception v1) {
            String v3 = v1.getMessage();
            if (v3 == null) {
                v3 = new StringBuilder().append("[no message for ").append(v1.getClass().getName()).append("]").toString();
            }
            throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(v3, v1);
        }
        if (v5) {
            p10.writeEndObject();
        }
        return;
    }

    protected void _serializeValue(com.flurry.org.codehaus.jackson.JsonGenerator p8, Object p9, com.flurry.org.codehaus.jackson.type.JavaType p10)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v3;
        boolean v4;
        if (p9 != null) {
            if (!p10.getRawClass().isAssignableFrom(p9.getClass())) {
                this._reportIncompatibleRootType(p9, p10);
            }
            v3 = this.findTypedValueSerializer(p10, 1, 0);
            v4 = this._config.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRAP_ROOT_VALUE);
            if (v4) {
                p8.writeStartObject();
                p8.writeFieldName(this._rootNames.findRootName(p10, this._config));
            }
        } else {
            v3 = this.getNullValueSerializer();
            v4 = 0;
        }
        try {
            v3.serialize(p9, p8, this);
        } catch (java.io.IOException v1) {
            throw v1;
        } catch (Exception v0) {
            String v2 = v0.getMessage();
            if (v2 == null) {
                v2 = new StringBuilder().append("[no message for ").append(v0.getClass().getName()).append("]").toString();
            }
            throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(v2, v0);
        }
        if (v4) {
            p8.writeEndObject();
        }
        return;
    }

    public int cachedSerializersCount()
    {
        return this._serializerCache.size();
    }

    protected com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider createInstance(com.flurry.org.codehaus.jackson.map.SerializationConfig p2, com.flurry.org.codehaus.jackson.map.SerializerFactory p3)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider(p2, this, p3);
    }

    public void defaultSerializeDateKey(long p4, com.flurry.org.codehaus.jackson.JsonGenerator p6)
    {
        if (!this.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_DATE_KEYS_AS_TIMESTAMPS)) {
            if (this._dateFormat == null) {
                this._dateFormat = ((java.text.DateFormat) this._config.getDateFormat().clone());
            }
            p6.writeFieldName(this._dateFormat.format(new java.util.Date(p4)));
        } else {
            p6.writeFieldName(String.valueOf(p4));
        }
        return;
    }

    public void defaultSerializeDateKey(java.util.Date p4, com.flurry.org.codehaus.jackson.JsonGenerator p5)
    {
        if (!this.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_DATE_KEYS_AS_TIMESTAMPS)) {
            if (this._dateFormat == null) {
                this._dateFormat = ((java.text.DateFormat) this._config.getDateFormat().clone());
            }
            p5.writeFieldName(this._dateFormat.format(p4));
        } else {
            p5.writeFieldName(String.valueOf(p4.getTime()));
        }
        return;
    }

    public final void defaultSerializeDateValue(long p3, com.flurry.org.codehaus.jackson.JsonGenerator p5)
    {
        if (!this.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_DATES_AS_TIMESTAMPS)) {
            if (this._dateFormat == null) {
                this._dateFormat = ((java.text.DateFormat) this._config.getDateFormat().clone());
            }
            p5.writeString(this._dateFormat.format(new java.util.Date(p3)));
        } else {
            p5.writeNumber(p3);
        }
        return;
    }

    public final void defaultSerializeDateValue(java.util.Date p4, com.flurry.org.codehaus.jackson.JsonGenerator p5)
    {
        if (!this.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_DATES_AS_TIMESTAMPS)) {
            if (this._dateFormat == null) {
                this._dateFormat = ((java.text.DateFormat) this._config.getDateFormat().clone());
            }
            p5.writeString(this._dateFormat.format(p4));
        } else {
            p5.writeNumber(p4.getTime());
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer findKeySerializer(com.flurry.org.codehaus.jackson.type.JavaType p5, com.flurry.org.codehaus.jackson.map.BeanProperty p6)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v1 = this._serializerFactory.createKeySerializer(this._config, p5, p6);
        if (v1 == null) {
            if (this._keySerializer != null) {
                v1 = this._keySerializer;
            } else {
                v1 = com.flurry.org.codehaus.jackson.map.ser.std.StdKeySerializers.getStdKeySerializer(p5);
            }
        }
        if ((v1 instanceof com.flurry.org.codehaus.jackson.map.ContextualSerializer)) {
            v1 = ((com.flurry.org.codehaus.jackson.map.ContextualSerializer) v1).createContextual(this._config, p6);
        }
        return v1;
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer findTypedValueSerializer(com.flurry.org.codehaus.jackson.type.JavaType p6, boolean p7, com.flurry.org.codehaus.jackson.map.BeanProperty p8)
    {
        com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider$WrappedSerializer v1_2;
        com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider$WrappedSerializer v0_1 = this._knownSerializers.typedValueSerializer(p6);
        if (v0_1 == null) {
            com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider$WrappedSerializer v0_2 = this._serializerCache.typedValueSerializer(p6);
            if (v0_2 == null) {
                com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider$WrappedSerializer v0_0 = this.findValueSerializer(p6, p8);
                com.flurry.org.codehaus.jackson.map.TypeSerializer v2 = this._serializerFactory.createTypeSerializer(this._config, p6, p8);
                if (v2 != null) {
                    v0_0 = new com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider$WrappedSerializer(v2, v0_0);
                }
                if (p7) {
                    this._serializerCache.addTypedSerializer(p6, v0_0);
                }
                v1_2 = v0_0;
            } else {
                v1_2 = v0_2;
            }
        } else {
            v1_2 = v0_1;
        }
        return v1_2;
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer findTypedValueSerializer(Class p7, boolean p8, com.flurry.org.codehaus.jackson.map.BeanProperty p9)
    {
        com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider$WrappedSerializer v1_2;
        com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider$WrappedSerializer v0_0 = this._knownSerializers.typedValueSerializer(p7);
        if (v0_0 == null) {
            com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider$WrappedSerializer v0_2 = this._serializerCache.typedValueSerializer(p7);
            if (v0_2 == null) {
                com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider$WrappedSerializer v0_1 = this.findValueSerializer(p7, p9);
                com.flurry.org.codehaus.jackson.map.TypeSerializer v2 = this._serializerFactory.createTypeSerializer(this._config, this._config.constructType(p7), p9);
                if (v2 != null) {
                    v0_1 = new com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider$WrappedSerializer(v2, v0_1);
                }
                if (p8) {
                    this._serializerCache.addTypedSerializer(p7, v0_1);
                }
                v1_2 = v0_1;
            } else {
                v1_2 = v0_2;
            }
        } else {
            v1_2 = v0_0;
        }
        return v1_2;
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer findValueSerializer(com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v1_1;
        com.flurry.org.codehaus.jackson.map.JsonSerializer v0_1 = this._knownSerializers.untypedValueSerializer(p3);
        if (v0_1 != null) {
            v1_1 = this._handleContextualResolvable(v0_1, p4);
        } else {
            v0_1 = this._serializerCache.untypedValueSerializer(p3);
            if (v0_1 != null) {
            } else {
                v0_1 = this._createAndCacheUntypedSerializer(p3, p4);
                if (v0_1 != null) {
                } else {
                    v1_1 = this.getUnknownTypeSerializer(p3.getRawClass());
                }
            }
        }
        return v1_1;
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer findValueSerializer(Class p4, com.flurry.org.codehaus.jackson.map.BeanProperty p5)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v1_1;
        com.flurry.org.codehaus.jackson.map.JsonSerializer v0_0 = this._knownSerializers.untypedValueSerializer(p4);
        if (v0_0 != null) {
            v1_1 = this._handleContextualResolvable(v0_0, p5);
        } else {
            v0_0 = this._serializerCache.untypedValueSerializer(p4);
            if (v0_0 != null) {
            } else {
                v0_0 = this._serializerCache.untypedValueSerializer(this._config.constructType(p4));
                if (v0_0 != null) {
                } else {
                    v0_0 = this._createAndCacheUntypedSerializer(p4, p5);
                    if (v0_0 != null) {
                    } else {
                        v1_1 = this.getUnknownTypeSerializer(p4);
                    }
                }
            }
        }
        return v1_1;
    }

    public void flushCachedSerializers()
    {
        this._serializerCache.flush();
        return;
    }

    public com.flurry.org.codehaus.jackson.schema.JsonSchema generateJsonSchema(Class p7, com.flurry.org.codehaus.jackson.map.SerializationConfig p8, com.flurry.org.codehaus.jackson.map.SerializerFactory p9)
    {
        if (p7 != null) {
            com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider v0 = this.createInstance(p8, p9);
            if (v0.getClass() == this.getClass()) {
                com.flurry.org.codehaus.jackson.node.ObjectNode v1_0;
                com.flurry.org.codehaus.jackson.schema.SchemaAware v2_0 = v0.findValueSerializer(p7, 0);
                if (!(v2_0 instanceof com.flurry.org.codehaus.jackson.schema.SchemaAware)) {
                    v1_0 = com.flurry.org.codehaus.jackson.schema.JsonSchema.getDefaultSchemaNode();
                } else {
                    v1_0 = ((com.flurry.org.codehaus.jackson.schema.SchemaAware) v2_0).getSchema(v0, 0);
                }
                if ((v1_0 instanceof com.flurry.org.codehaus.jackson.node.ObjectNode)) {
                    return new com.flurry.org.codehaus.jackson.schema.JsonSchema(((com.flurry.org.codehaus.jackson.node.ObjectNode) v1_0));
                } else {
                    throw new IllegalArgumentException(new StringBuilder().append("Class ").append(p7.getName()).append(" would not be serialized as a JSON object and therefore has no schema").toString());
                }
            } else {
                throw new IllegalStateException(new StringBuilder().append("Broken serializer provider: createInstance returned instance of type ").append(v0.getClass()).append("; blueprint of type ").append(this.getClass()).toString());
            }
        } else {
            throw new IllegalArgumentException("A class must be provided");
        }
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer getNullKeySerializer()
    {
        return this._nullKeySerializer;
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer getNullValueSerializer()
    {
        return this._nullValueSerializer;
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer getUnknownTypeSerializer(Class p2)
    {
        return this._unknownTypeSerializer;
    }

    public boolean hasSerializerFor(com.flurry.org.codehaus.jackson.map.SerializationConfig p3, Class p4, com.flurry.org.codehaus.jackson.map.SerializerFactory p5)
    {
        int v0_2;
        if (this.createInstance(p3, p5)._findExplicitUntypedSerializer(p4, 0) == null) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public final void serializeValue(com.flurry.org.codehaus.jackson.map.SerializationConfig p5, com.flurry.org.codehaus.jackson.JsonGenerator p6, Object p7, com.flurry.org.codehaus.jackson.map.SerializerFactory p8)
    {
        if (p8 != null) {
            com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider v0 = this.createInstance(p5, p8);
            if (v0.getClass() == this.getClass()) {
                v0._serializeValue(p6, p7);
                return;
            } else {
                throw new IllegalStateException(new StringBuilder().append("Broken serializer provider: createInstance returned instance of type ").append(v0.getClass()).append("; blueprint of type ").append(this.getClass()).toString());
            }
        } else {
            throw new IllegalArgumentException("Can not pass null serializerFactory");
        }
    }

    public final void serializeValue(com.flurry.org.codehaus.jackson.map.SerializationConfig p5, com.flurry.org.codehaus.jackson.JsonGenerator p6, Object p7, com.flurry.org.codehaus.jackson.type.JavaType p8, com.flurry.org.codehaus.jackson.map.SerializerFactory p9)
    {
        if (p9 != null) {
            com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider v0 = this.createInstance(p5, p9);
            if (v0.getClass() == this.getClass()) {
                v0._serializeValue(p6, p7, p8);
                return;
            } else {
                throw new IllegalStateException(new StringBuilder().append("Broken serializer provider: createInstance returned instance of type ").append(v0.getClass()).append("; blueprint of type ").append(this.getClass()).toString());
            }
        } else {
            throw new IllegalArgumentException("Can not pass null serializerFactory");
        }
    }

    public void setDefaultKeySerializer(com.flurry.org.codehaus.jackson.map.JsonSerializer p3)
    {
        if (p3 != null) {
            this._keySerializer = p3;
            return;
        } else {
            throw new IllegalArgumentException("Can not pass null JsonSerializer");
        }
    }

    public void setNullKeySerializer(com.flurry.org.codehaus.jackson.map.JsonSerializer p3)
    {
        if (p3 != null) {
            this._nullKeySerializer = p3;
            return;
        } else {
            throw new IllegalArgumentException("Can not pass null JsonSerializer");
        }
    }

    public void setNullValueSerializer(com.flurry.org.codehaus.jackson.map.JsonSerializer p3)
    {
        if (p3 != null) {
            this._nullValueSerializer = p3;
            return;
        } else {
            throw new IllegalArgumentException("Can not pass null JsonSerializer");
        }
    }
}
