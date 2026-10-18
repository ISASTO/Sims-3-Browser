package com.flurry.org.codehaus.jackson.map;
public class ObjectMapper extends com.flurry.org.codehaus.jackson.ObjectCodec implements com.flurry.org.codehaus.jackson.Versioned {
    protected static final com.flurry.org.codehaus.jackson.map.AnnotationIntrospector DEFAULT_ANNOTATION_INTROSPECTOR;
    protected static final com.flurry.org.codehaus.jackson.map.ClassIntrospector DEFAULT_INTROSPECTOR;
    private static final com.flurry.org.codehaus.jackson.type.JavaType JSON_NODE_TYPE;
    protected static final com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker STD_VISIBILITY_CHECKER;
    protected com.flurry.org.codehaus.jackson.map.DeserializationConfig _deserializationConfig;
    protected com.flurry.org.codehaus.jackson.map.DeserializerProvider _deserializerProvider;
    protected com.flurry.org.codehaus.jackson.map.InjectableValues _injectableValues;
    protected final com.flurry.org.codehaus.jackson.JsonFactory _jsonFactory;
    protected final java.util.concurrent.ConcurrentHashMap _rootDeserializers;
    protected com.flurry.org.codehaus.jackson.map.SerializationConfig _serializationConfig;
    protected com.flurry.org.codehaus.jackson.map.SerializerFactory _serializerFactory;
    protected com.flurry.org.codehaus.jackson.map.SerializerProvider _serializerProvider;
    protected com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver _subtypeResolver;
    protected com.flurry.org.codehaus.jackson.map.type.TypeFactory _typeFactory;

    static ObjectMapper()
    {
        com.flurry.org.codehaus.jackson.map.ObjectMapper.JSON_NODE_TYPE = com.flurry.org.codehaus.jackson.map.type.SimpleType.constructUnsafe(com.flurry.org.codehaus.jackson.JsonNode);
        com.flurry.org.codehaus.jackson.map.ObjectMapper.DEFAULT_INTROSPECTOR = com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector.instance;
        com.flurry.org.codehaus.jackson.map.ObjectMapper.DEFAULT_ANNOTATION_INTROSPECTOR = new com.flurry.org.codehaus.jackson.map.introspect.JacksonAnnotationIntrospector();
        com.flurry.org.codehaus.jackson.map.ObjectMapper.STD_VISIBILITY_CHECKER = com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.defaultInstance();
        return;
    }

    public ObjectMapper()
    {
        this(0, 0, 0);
        return;
    }

    public ObjectMapper(com.flurry.org.codehaus.jackson.JsonFactory p2)
    {
        this(p2, 0, 0);
        return;
    }

    public ObjectMapper(com.flurry.org.codehaus.jackson.JsonFactory p7, com.flurry.org.codehaus.jackson.map.SerializerProvider p8, com.flurry.org.codehaus.jackson.map.DeserializerProvider p9)
    {
        this(p7, p8, p9, 0, 0);
        return;
    }

    public ObjectMapper(com.flurry.org.codehaus.jackson.JsonFactory p9, com.flurry.org.codehaus.jackson.map.SerializerProvider p10, com.flurry.org.codehaus.jackson.map.DeserializerProvider p11, com.flurry.org.codehaus.jackson.map.SerializationConfig p12, com.flurry.org.codehaus.jackson.map.DeserializationConfig p13)
    {
        this._rootDeserializers = new java.util.concurrent.ConcurrentHashMap(64, 1058642330, 2);
        if (p9 != null) {
            this._jsonFactory = p9;
            if (p9.getCodec() == null) {
                this._jsonFactory.setCodec(this);
            }
        } else {
            this._jsonFactory = new com.flurry.org.codehaus.jackson.map.MappingJsonFactory(this);
        }
        this._typeFactory = com.flurry.org.codehaus.jackson.map.type.TypeFactory.defaultInstance();
        if (p12 == null) {
            p12 = new com.flurry.org.codehaus.jackson.map.SerializationConfig(com.flurry.org.codehaus.jackson.map.ObjectMapper.DEFAULT_INTROSPECTOR, com.flurry.org.codehaus.jackson.map.ObjectMapper.DEFAULT_ANNOTATION_INTROSPECTOR, com.flurry.org.codehaus.jackson.map.ObjectMapper.STD_VISIBILITY_CHECKER, 0, 0, this._typeFactory, 0);
        }
        this._serializationConfig = p12;
        if (p13 == null) {
            p13 = new com.flurry.org.codehaus.jackson.map.DeserializationConfig(com.flurry.org.codehaus.jackson.map.ObjectMapper.DEFAULT_INTROSPECTOR, com.flurry.org.codehaus.jackson.map.ObjectMapper.DEFAULT_ANNOTATION_INTROSPECTOR, com.flurry.org.codehaus.jackson.map.ObjectMapper.STD_VISIBILITY_CHECKER, 0, 0, this._typeFactory, 0);
        }
        this._deserializationConfig = p13;
        if (p10 == null) {
            p10 = new com.flurry.org.codehaus.jackson.map.ser.StdSerializerProvider();
        }
        this._serializerProvider = p10;
        if (p11 == null) {
            p11 = new com.flurry.org.codehaus.jackson.map.deser.StdDeserializerProvider();
        }
        this._deserializerProvider = p11;
        this._serializerFactory = com.flurry.org.codehaus.jackson.map.ser.BeanSerializerFactory.instance;
        return;
    }

    public ObjectMapper(com.flurry.org.codehaus.jackson.map.SerializerFactory p2)
    {
        this(0, 0, 0);
        this.setSerializerFactory(p2);
        return;
    }

    private final void _configAndWriteCloseable(com.flurry.org.codehaus.jackson.JsonGenerator p6, Object p7, com.flurry.org.codehaus.jackson.map.SerializationConfig p8)
    {
        try {
            this._serializerProvider.serializeValue(p8, p6, p7, this._serializerFactory);
            p6.close();
            ((java.io.Closeable) p7).close();
        } catch (java.io.IOException v3_0) {
            if (0 != 0) {
                try {
                    0.close();
                } catch (java.io.IOException v4) {
                }
            }
            if (0 != 0) {
                try {
                    0.close();
                } catch (java.io.IOException v4) {
                }
            }
            throw v3_0;
        }
        if (0 != 0) {
            try {
                0.close();
            } catch (java.io.IOException v3) {
            }
        }
        if (0 != 0) {
            try {
                0.close();
            } catch (java.io.IOException v3) {
            }
        }
        return;
    }

    private final void _writeCloseableValue(com.flurry.org.codehaus.jackson.JsonGenerator p5, Object p6, com.flurry.org.codehaus.jackson.map.SerializationConfig p7)
    {
        try {
            this._serializerProvider.serializeValue(p7, p5, p6, this._serializerFactory);
        } catch (java.io.IOException v2_0) {
            if (((java.io.Closeable) p6) != null) {
                try {
                    ((java.io.Closeable) p6).close();
                } catch (java.io.IOException v3) {
                }
            }
            throw v2_0;
        }
        if (p7.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.FLUSH_AFTER_WRITE_VALUE)) {
            p5.flush();
        }
        ((java.io.Closeable) p6).close();
        if (0 != 0) {
            try {
                0.close();
            } catch (java.io.IOException v2) {
            }
        }
        return;
    }

    protected final void _configAndWriteValue(com.flurry.org.codehaus.jackson.JsonGenerator p5, Object p6)
    {
        com.flurry.org.codehaus.jackson.map.SerializationConfig v0 = this.copySerializationConfig();
        if (v0.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.INDENT_OUTPUT)) {
            p5.useDefaultPrettyPrinter();
        }
        if ((!v0.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.CLOSE_CLOSEABLE)) || (!(p6 instanceof java.io.Closeable))) {
            try {
                this._serializerProvider.serializeValue(v0, p5, p6, this._serializerFactory);
                p5.close();
            } catch (java.io.IOException v2_3) {
                if (1 == 0) {
                    try {
                        p5.close();
                    } catch (java.io.IOException v3) {
                    }
                }
                throw v2_3;
            }
            if (1 == 0) {
                try {
                    p5.close();
                } catch (java.io.IOException v2) {
                }
            }
        } else {
            this._configAndWriteCloseable(p5, p6, v0);
        }
        return;
    }

    protected final void _configAndWriteValue(com.flurry.org.codehaus.jackson.JsonGenerator p5, Object p6, Class p7)
    {
        com.flurry.org.codehaus.jackson.map.SerializationConfig v0 = this.copySerializationConfig().withView(p7);
        if (v0.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.INDENT_OUTPUT)) {
            p5.useDefaultPrettyPrinter();
        }
        if ((!v0.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.CLOSE_CLOSEABLE)) || (!(p6 instanceof java.io.Closeable))) {
            try {
                this._serializerProvider.serializeValue(v0, p5, p6, this._serializerFactory);
                p5.close();
            } catch (java.io.IOException v2_4) {
                if (1 == 0) {
                    try {
                        p5.close();
                    } catch (java.io.IOException v3) {
                    }
                }
                throw v2_4;
            }
            if (1 == 0) {
                try {
                    p5.close();
                } catch (java.io.IOException v2) {
                }
            }
        } else {
            this._configAndWriteCloseable(p5, p6, v0);
        }
        return;
    }

    protected Object _convert(Object p7, com.flurry.org.codehaus.jackson.type.JavaType p8)
    {
        Object v3;
        if (p7 != null) {
            com.flurry.org.codehaus.jackson.util.TokenBuffer v0_1 = new com.flurry.org.codehaus.jackson.util.TokenBuffer(this);
            try {
                this.writeValue(v0_1, p7);
                com.flurry.org.codehaus.jackson.JsonParser v2 = v0_1.asParser();
                v3 = this.readValue(v2, p8);
                v2.close();
            } catch (java.io.IOException v1) {
                throw new IllegalArgumentException(v1.getMessage(), v1);
            }
        } else {
            v3 = 0;
        }
        return v3;
    }

    protected com.flurry.org.codehaus.jackson.map.DeserializationContext _createDeserializationContext(com.flurry.org.codehaus.jackson.JsonParser p4, com.flurry.org.codehaus.jackson.map.DeserializationConfig p5)
    {
        return new com.flurry.org.codehaus.jackson.map.deser.StdDeserializationContext(p5, p4, this._deserializerProvider, this._injectableValues);
    }

    protected com.flurry.org.codehaus.jackson.PrettyPrinter _defaultPrettyPrinter()
    {
        return new com.flurry.org.codehaus.jackson.util.DefaultPrettyPrinter();
    }

    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _findRootDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p6, com.flurry.org.codehaus.jackson.type.JavaType p7)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v1;
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v0_1 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) this._rootDeserializers.get(p7));
        if (v0_1 == null) {
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v0_2 = this._deserializerProvider.findTypedValueDeserializer(p6, p7, 0);
            if (v0_2 != null) {
                this._rootDeserializers.put(p7, v0_2);
                v1 = v0_2;
            } else {
                throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Can not find a deserializer for type ").append(p7).toString());
            }
        } else {
            v1 = v0_1;
        }
        return v1;
    }

    protected com.flurry.org.codehaus.jackson.JsonToken _initForReading(com.flurry.org.codehaus.jackson.JsonParser p4)
    {
        com.flurry.org.codehaus.jackson.JsonToken v0 = p4.getCurrentToken();
        if (v0 == null) {
            v0 = p4.nextToken();
            if (v0 == null) {
                throw new java.io.EOFException("No content to map to Object due to end of input");
            }
        }
        return v0;
    }

    protected Object _readMapAndClose(com.flurry.org.codehaus.jackson.JsonParser p8, com.flurry.org.codehaus.jackson.type.JavaType p9)
    {
        try {
            Object v3;
            com.flurry.org.codehaus.jackson.JsonToken v4 = this._initForReading(p8);
        } catch (java.io.IOException v5_5) {
            try {
                p8.close();
            } catch (java.io.IOException v6) {
            }
            throw v5_5;
        }
        if (v4 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
            if ((v4 != com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) && (v4 != com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT)) {
                com.flurry.org.codehaus.jackson.map.DeserializationConfig v0 = this.copyDeserializationConfig();
                com.flurry.org.codehaus.jackson.map.DeserializationContext v1 = this._createDeserializationContext(p8, v0);
                com.flurry.org.codehaus.jackson.map.JsonDeserializer v2 = this._findRootDeserializer(v0, p9);
                if (!v0.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.UNWRAP_ROOT_VALUE)) {
                    v3 = v2.deserialize(p8, v1);
                } else {
                    v3 = this._unwrapAndDeserialize(p8, p9, v1, v2);
                }
            } else {
                v3 = 0;
            }
        } else {
            v3 = this._findRootDeserializer(this._deserializationConfig, p9).getNullValue();
        }
        p8.clearCurrentToken();
        try {
            p8.close();
        } catch (java.io.IOException v5) {
        }
        return v3;
    }

    protected Object _readValue(com.flurry.org.codehaus.jackson.map.DeserializationConfig p6, com.flurry.org.codehaus.jackson.JsonParser p7, com.flurry.org.codehaus.jackson.type.JavaType p8)
    {
        Object v2;
        com.flurry.org.codehaus.jackson.JsonToken v3 = this._initForReading(p7);
        if (v3 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
            if ((v3 != com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) && (v3 != com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT)) {
                com.flurry.org.codehaus.jackson.map.DeserializationContext v0 = this._createDeserializationContext(p7, p6);
                com.flurry.org.codehaus.jackson.map.JsonDeserializer v1 = this._findRootDeserializer(p6, p8);
                if (!p6.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.UNWRAP_ROOT_VALUE)) {
                    v2 = v1.deserialize(p7, v0);
                } else {
                    v2 = this._unwrapAndDeserialize(p7, p8, v0, v1);
                }
            } else {
                v2 = 0;
            }
        } else {
            v2 = this._findRootDeserializer(p6, p8).getNullValue();
        }
        p7.clearCurrentToken();
        return v2;
    }

    protected Object _unwrapAndDeserialize(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.type.JavaType p7, com.flurry.org.codehaus.jackson.map.DeserializationContext p8, com.flurry.org.codehaus.jackson.map.JsonDeserializer p9)
    {
        com.flurry.org.codehaus.jackson.io.SerializedString v2 = this._deserializerProvider.findExpectedRootName(p8.getConfig(), p7);
        if (p6.getCurrentToken() == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
            if (p6.nextToken() == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
                String v0 = p6.getCurrentName();
                if (v2.getValue().equals(v0)) {
                    p6.nextToken();
                    Object v1 = p9.deserialize(p6, p8);
                    if (p6.nextToken() == com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT) {
                        return v1;
                    } else {
                        throw com.flurry.org.codehaus.jackson.map.JsonMappingException.from(p6, new StringBuilder().append("Current token not END_OBJECT (to match wrapper object with root name \'").append(v2).append("\'), but ").append(p6.getCurrentToken()).toString());
                    }
                } else {
                    throw com.flurry.org.codehaus.jackson.map.JsonMappingException.from(p6, new StringBuilder().append("Root name \'").append(v0).append("\' does not match expected (\'").append(v2).append("\') for type ").append(p7).toString());
                }
            } else {
                throw com.flurry.org.codehaus.jackson.map.JsonMappingException.from(p6, new StringBuilder().append("Current token not FIELD_NAME (to contain expected root name \'").append(v2).append("\'), but ").append(p6.getCurrentToken()).toString());
            }
        } else {
            throw com.flurry.org.codehaus.jackson.map.JsonMappingException.from(p6, new StringBuilder().append("Current token not START_OBJECT (needed to unwrap root name \'").append(v2).append("\'), but ").append(p6.getCurrentToken()).toString());
        }
    }

    public boolean canDeserialize(com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return this._deserializerProvider.hasValueDeserializerFor(this.copyDeserializationConfig(), p3);
    }

    public boolean canSerialize(Class p4)
    {
        return this._serializerProvider.hasSerializerFor(this.copySerializationConfig(), p4, this._serializerFactory);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper configure(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p2, boolean p3)
    {
        this._jsonFactory.configure(p2, p3);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper configure(com.flurry.org.codehaus.jackson.JsonParser$Feature p2, boolean p3)
    {
        this._jsonFactory.configure(p2, p3);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper configure(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature p2, boolean p3)
    {
        this._deserializationConfig.set(p2, p3);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper configure(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature p2, boolean p3)
    {
        this._serializationConfig.set(p2, p3);
        return this;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType constructType(reflect.Type p2)
    {
        return this._typeFactory.constructType(p2);
    }

    public Object convertValue(Object p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return this._convert(p2, p3);
    }

    public Object convertValue(Object p2, com.flurry.org.codehaus.jackson.type.TypeReference p3)
    {
        return this._convert(p2, this._typeFactory.constructType(p3));
    }

    public Object convertValue(Object p2, Class p3)
    {
        return this._convert(p2, this._typeFactory.constructType(p3));
    }

    public com.flurry.org.codehaus.jackson.map.DeserializationConfig copyDeserializationConfig()
    {
        return this._deserializationConfig.createUnshared(this._subtypeResolver).passSerializationFeatures(this._serializationConfig._featureFlags);
    }

    public com.flurry.org.codehaus.jackson.map.SerializationConfig copySerializationConfig()
    {
        return this._serializationConfig.createUnshared(this._subtypeResolver);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.JsonNode createArrayNode()
    {
        return this.createArrayNode();
    }

    public com.flurry.org.codehaus.jackson.node.ArrayNode createArrayNode()
    {
        return this._deserializationConfig.getNodeFactory().arrayNode();
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.JsonNode createObjectNode()
    {
        return this.createObjectNode();
    }

    public com.flurry.org.codehaus.jackson.node.ObjectNode createObjectNode()
    {
        return this._deserializationConfig.getNodeFactory().objectNode();
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter defaultPrettyPrintingWriter()
    {
        return this.writerWithDefaultPrettyPrinter();
    }

    public varargs com.flurry.org.codehaus.jackson.map.ObjectMapper disable(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature[] p2)
    {
        this._deserializationConfig = this._deserializationConfig.without(p2);
        return this;
    }

    public varargs com.flurry.org.codehaus.jackson.map.ObjectMapper disable(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature[] p2)
    {
        this._serializationConfig = this._serializationConfig.without(p2);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper disableDefaultTyping()
    {
        return this.setDefaultTyping(0);
    }

    public varargs com.flurry.org.codehaus.jackson.map.ObjectMapper enable(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature[] p2)
    {
        this._deserializationConfig = this._deserializationConfig.with(p2);
        return this;
    }

    public varargs com.flurry.org.codehaus.jackson.map.ObjectMapper enable(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature[] p2)
    {
        this._serializationConfig = this._serializationConfig.with(p2);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper enableDefaultTyping()
    {
        return this.enableDefaultTyping(com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping.OBJECT_AND_NON_CONCRETE);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper enableDefaultTyping(com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping p2)
    {
        return this.enableDefaultTyping(p2, com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.WRAPPER_ARRAY);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper enableDefaultTyping(com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping p4, com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As p5)
    {
        return this.setDefaultTyping(new com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTypeResolverBuilder(p4).init(com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.CLASS, 0).inclusion(p5));
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper enableDefaultTypingAsProperty(com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping p4, String p5)
    {
        return this.setDefaultTyping(new com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTypeResolverBuilder(p4).init(com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.CLASS, 0).inclusion(com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.PROPERTY).typeProperty(p5));
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter filteredWriter(com.flurry.org.codehaus.jackson.map.ser.FilterProvider p2)
    {
        return this.writer(p2);
    }

    public com.flurry.org.codehaus.jackson.schema.JsonSchema generateJsonSchema(Class p2)
    {
        return this.generateJsonSchema(p2, this.copySerializationConfig());
    }

    public com.flurry.org.codehaus.jackson.schema.JsonSchema generateJsonSchema(Class p3, com.flurry.org.codehaus.jackson.map.SerializationConfig p4)
    {
        return this._serializerProvider.generateJsonSchema(p3, p4, this._serializerFactory);
    }

    public com.flurry.org.codehaus.jackson.map.DeserializationConfig getDeserializationConfig()
    {
        return this._deserializationConfig;
    }

    public com.flurry.org.codehaus.jackson.map.DeserializerProvider getDeserializerProvider()
    {
        return this._deserializerProvider;
    }

    public com.flurry.org.codehaus.jackson.JsonFactory getJsonFactory()
    {
        return this._jsonFactory;
    }

    public com.flurry.org.codehaus.jackson.node.JsonNodeFactory getNodeFactory()
    {
        return this._deserializationConfig.getNodeFactory();
    }

    public com.flurry.org.codehaus.jackson.map.SerializationConfig getSerializationConfig()
    {
        return this._serializationConfig;
    }

    public com.flurry.org.codehaus.jackson.map.SerializerProvider getSerializerProvider()
    {
        return this._serializerProvider;
    }

    public com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver getSubtypeResolver()
    {
        if (this._subtypeResolver == null) {
            this._subtypeResolver = new com.flurry.org.codehaus.jackson.map.jsontype.impl.StdSubtypeResolver();
        }
        return this._subtypeResolver;
    }

    public com.flurry.org.codehaus.jackson.map.type.TypeFactory getTypeFactory()
    {
        return this._typeFactory;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker getVisibilityChecker()
    {
        return this._serializationConfig.getDefaultVisibilityChecker();
    }

    public boolean isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p2)
    {
        return this._jsonFactory.isEnabled(p2);
    }

    public boolean isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature p2)
    {
        return this._jsonFactory.isEnabled(p2);
    }

    public boolean isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature p2)
    {
        return this._deserializationConfig.isEnabled(p2);
    }

    public boolean isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature p2)
    {
        return this._serializationConfig.isEnabled(p2);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter prettyPrintingWriter(com.flurry.org.codehaus.jackson.PrettyPrinter p2)
    {
        return this.writer(p2);
    }

    public com.flurry.org.codehaus.jackson.JsonNode readTree(com.flurry.org.codehaus.jackson.JsonParser p5)
    {
        com.flurry.org.codehaus.jackson.node.NullNode v1_1;
        com.flurry.org.codehaus.jackson.map.DeserializationConfig v0 = this.copyDeserializationConfig();
        if ((p5.getCurrentToken() != null) || (p5.nextToken() != null)) {
            v1_1 = ((com.flurry.org.codehaus.jackson.JsonNode) this._readValue(v0, p5, com.flurry.org.codehaus.jackson.map.ObjectMapper.JSON_NODE_TYPE));
            if (v1_1 == null) {
                v1_1 = this.getNodeFactory().nullNode();
            }
        } else {
            v1_1 = 0;
        }
        return v1_1;
    }

    public com.flurry.org.codehaus.jackson.JsonNode readTree(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationConfig p4)
    {
        com.flurry.org.codehaus.jackson.node.NullNode v0_1 = ((com.flurry.org.codehaus.jackson.JsonNode) this._readValue(p4, p3, com.flurry.org.codehaus.jackson.map.ObjectMapper.JSON_NODE_TYPE));
        if (v0_1 == null) {
            v0_1 = com.flurry.org.codehaus.jackson.node.NullNode.instance;
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.JsonNode readTree(java.io.File p4)
    {
        com.flurry.org.codehaus.jackson.node.NullNode v0_1 = ((com.flurry.org.codehaus.jackson.JsonNode) this._readMapAndClose(this._jsonFactory.createJsonParser(p4), com.flurry.org.codehaus.jackson.map.ObjectMapper.JSON_NODE_TYPE));
        if (v0_1 == null) {
            v0_1 = com.flurry.org.codehaus.jackson.node.NullNode.instance;
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.JsonNode readTree(java.io.InputStream p4)
    {
        com.flurry.org.codehaus.jackson.node.NullNode v0_1 = ((com.flurry.org.codehaus.jackson.JsonNode) this._readMapAndClose(this._jsonFactory.createJsonParser(p4), com.flurry.org.codehaus.jackson.map.ObjectMapper.JSON_NODE_TYPE));
        if (v0_1 == null) {
            v0_1 = com.flurry.org.codehaus.jackson.node.NullNode.instance;
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.JsonNode readTree(java.io.Reader p4)
    {
        com.flurry.org.codehaus.jackson.node.NullNode v0_1 = ((com.flurry.org.codehaus.jackson.JsonNode) this._readMapAndClose(this._jsonFactory.createJsonParser(p4), com.flurry.org.codehaus.jackson.map.ObjectMapper.JSON_NODE_TYPE));
        if (v0_1 == null) {
            v0_1 = com.flurry.org.codehaus.jackson.node.NullNode.instance;
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.JsonNode readTree(String p4)
    {
        com.flurry.org.codehaus.jackson.node.NullNode v0_1 = ((com.flurry.org.codehaus.jackson.JsonNode) this._readMapAndClose(this._jsonFactory.createJsonParser(p4), com.flurry.org.codehaus.jackson.map.ObjectMapper.JSON_NODE_TYPE));
        if (v0_1 == null) {
            v0_1 = com.flurry.org.codehaus.jackson.node.NullNode.instance;
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.JsonNode readTree(java.net.URL p4)
    {
        com.flurry.org.codehaus.jackson.node.NullNode v0_1 = ((com.flurry.org.codehaus.jackson.JsonNode) this._readMapAndClose(this._jsonFactory.createJsonParser(p4), com.flurry.org.codehaus.jackson.map.ObjectMapper.JSON_NODE_TYPE));
        if (v0_1 == null) {
            v0_1 = com.flurry.org.codehaus.jackson.node.NullNode.instance;
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.JsonNode readTree(byte[] p4)
    {
        com.flurry.org.codehaus.jackson.node.NullNode v0_1 = ((com.flurry.org.codehaus.jackson.JsonNode) this._readMapAndClose(this._jsonFactory.createJsonParser(p4), com.flurry.org.codehaus.jackson.map.ObjectMapper.JSON_NODE_TYPE));
        if (v0_1 == null) {
            v0_1 = com.flurry.org.codehaus.jackson.node.NullNode.instance;
        }
        return v0_1;
    }

    public Object readValue(com.flurry.org.codehaus.jackson.JsonNode p3, com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        return this._readValue(this.copyDeserializationConfig(), this.treeAsTokens(p3), p4);
    }

    public Object readValue(com.flurry.org.codehaus.jackson.JsonNode p4, com.flurry.org.codehaus.jackson.type.TypeReference p5)
    {
        return this._readValue(this.copyDeserializationConfig(), this.treeAsTokens(p4), this._typeFactory.constructType(p5));
    }

    public Object readValue(com.flurry.org.codehaus.jackson.JsonNode p4, Class p5)
    {
        return this._readValue(this.copyDeserializationConfig(), this.treeAsTokens(p4), this._typeFactory.constructType(p5));
    }

    public Object readValue(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return this._readValue(this.copyDeserializationConfig(), p2, p3);
    }

    public Object readValue(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.DeserializationConfig p4)
    {
        return this._readValue(p4, p2, p3);
    }

    public Object readValue(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.type.TypeReference p4)
    {
        return this._readValue(this.copyDeserializationConfig(), p3, this._typeFactory.constructType(p4));
    }

    public Object readValue(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.type.TypeReference p3, com.flurry.org.codehaus.jackson.map.DeserializationConfig p4)
    {
        return this._readValue(p4, p2, this._typeFactory.constructType(p3));
    }

    public Object readValue(com.flurry.org.codehaus.jackson.JsonParser p3, Class p4)
    {
        return this._readValue(this.copyDeserializationConfig(), p3, this._typeFactory.constructType(p4));
    }

    public Object readValue(com.flurry.org.codehaus.jackson.JsonParser p2, Class p3, com.flurry.org.codehaus.jackson.map.DeserializationConfig p4)
    {
        return this._readValue(p4, p2, this._typeFactory.constructType(p3));
    }

    public Object readValue(java.io.File p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p2), p3);
    }

    public Object readValue(java.io.File p3, com.flurry.org.codehaus.jackson.type.TypeReference p4)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p3), this._typeFactory.constructType(p4));
    }

    public Object readValue(java.io.File p3, Class p4)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p3), this._typeFactory.constructType(p4));
    }

    public Object readValue(java.io.InputStream p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p2), p3);
    }

    public Object readValue(java.io.InputStream p3, com.flurry.org.codehaus.jackson.type.TypeReference p4)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p3), this._typeFactory.constructType(p4));
    }

    public Object readValue(java.io.InputStream p3, Class p4)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p3), this._typeFactory.constructType(p4));
    }

    public Object readValue(java.io.Reader p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p2), p3);
    }

    public Object readValue(java.io.Reader p3, com.flurry.org.codehaus.jackson.type.TypeReference p4)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p3), this._typeFactory.constructType(p4));
    }

    public Object readValue(java.io.Reader p3, Class p4)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p3), this._typeFactory.constructType(p4));
    }

    public Object readValue(String p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p2), p3);
    }

    public Object readValue(String p3, com.flurry.org.codehaus.jackson.type.TypeReference p4)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p3), this._typeFactory.constructType(p4));
    }

    public Object readValue(String p3, Class p4)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p3), this._typeFactory.constructType(p4));
    }

    public Object readValue(java.net.URL p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p2), p3);
    }

    public Object readValue(java.net.URL p3, com.flurry.org.codehaus.jackson.type.TypeReference p4)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p3), this._typeFactory.constructType(p4));
    }

    public Object readValue(java.net.URL p3, Class p4)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p3), this._typeFactory.constructType(p4));
    }

    public Object readValue(byte[] p2, int p3, int p4, com.flurry.org.codehaus.jackson.type.JavaType p5)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p2, p3, p4), p5);
    }

    public Object readValue(byte[] p3, int p4, int p5, com.flurry.org.codehaus.jackson.type.TypeReference p6)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p3, p4, p5), this._typeFactory.constructType(p6));
    }

    public Object readValue(byte[] p3, int p4, int p5, Class p6)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p3, p4, p5), this._typeFactory.constructType(p6));
    }

    public Object readValue(byte[] p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p2), p3);
    }

    public Object readValue(byte[] p3, com.flurry.org.codehaus.jackson.type.TypeReference p4)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p3), this._typeFactory.constructType(p4));
    }

    public Object readValue(byte[] p3, Class p4)
    {
        return this._readMapAndClose(this._jsonFactory.createJsonParser(p3), this._typeFactory.constructType(p4));
    }

    public com.flurry.org.codehaus.jackson.map.MappingIterator readValues(com.flurry.org.codehaus.jackson.JsonParser p9, com.flurry.org.codehaus.jackson.type.JavaType p10)
    {
        com.flurry.org.codehaus.jackson.map.DeserializationConfig v7 = this.copyDeserializationConfig();
        return new com.flurry.org.codehaus.jackson.map.MappingIterator(p10, p9, this._createDeserializationContext(p9, v7), this._findRootDeserializer(v7, p10), 0, 0);
    }

    public com.flurry.org.codehaus.jackson.map.MappingIterator readValues(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.type.TypeReference p3)
    {
        return this.readValues(p2, this._typeFactory.constructType(p3));
    }

    public com.flurry.org.codehaus.jackson.map.MappingIterator readValues(com.flurry.org.codehaus.jackson.JsonParser p2, Class p3)
    {
        return this.readValues(p2, this._typeFactory.constructType(p3));
    }

    public bridge synthetic java.util.Iterator readValues(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return this.readValues(p2, p3);
    }

    public bridge synthetic java.util.Iterator readValues(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.type.TypeReference p3)
    {
        return this.readValues(p2, p3);
    }

    public bridge synthetic java.util.Iterator readValues(com.flurry.org.codehaus.jackson.JsonParser p2, Class p3)
    {
        return this.readValues(p2, p3);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectReader reader()
    {
        return new com.flurry.org.codehaus.jackson.map.ObjectReader(this, this.copyDeserializationConfig()).withInjectableValues(this._injectableValues);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectReader reader(com.flurry.org.codehaus.jackson.FormatSchema p8)
    {
        return new com.flurry.org.codehaus.jackson.map.ObjectReader(this, this.copyDeserializationConfig(), 0, 0, p8, this._injectableValues);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectReader reader(com.flurry.org.codehaus.jackson.map.InjectableValues p8)
    {
        return new com.flurry.org.codehaus.jackson.map.ObjectReader(this, this.copyDeserializationConfig(), 0, 0, 0, p8);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectReader reader(com.flurry.org.codehaus.jackson.node.JsonNodeFactory p3)
    {
        return new com.flurry.org.codehaus.jackson.map.ObjectReader(this, this.copyDeserializationConfig()).withNodeFactory(p3);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectReader reader(com.flurry.org.codehaus.jackson.type.JavaType p8)
    {
        return new com.flurry.org.codehaus.jackson.map.ObjectReader(this, this.copyDeserializationConfig(), p8, 0, 0, this._injectableValues);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectReader reader(com.flurry.org.codehaus.jackson.type.TypeReference p2)
    {
        return this.reader(this._typeFactory.constructType(p2));
    }

    public com.flurry.org.codehaus.jackson.map.ObjectReader reader(Class p2)
    {
        return this.reader(this._typeFactory.constructType(p2));
    }

    public com.flurry.org.codehaus.jackson.map.ObjectReader readerForUpdating(Object p8)
    {
        return new com.flurry.org.codehaus.jackson.map.ObjectReader(this, this.copyDeserializationConfig(), this._typeFactory.constructType(p8.getClass()), p8, 0, this._injectableValues);
    }

    public void registerModule(com.flurry.org.codehaus.jackson.map.Module p6)
    {
        if (p6.getModuleName() != null) {
            if (p6.version() != null) {
                p6.setupModule(new com.flurry.org.codehaus.jackson.map.ObjectMapper$1(this, this));
                return;
            } else {
                throw new IllegalArgumentException("Module without defined version");
            }
        } else {
            throw new IllegalArgumentException("Module without defined name");
        }
    }

    public varargs void registerSubtypes(com.flurry.org.codehaus.jackson.map.jsontype.NamedType[] p2)
    {
        this.getSubtypeResolver().registerSubtypes(p2);
        return;
    }

    public varargs void registerSubtypes(Class[] p2)
    {
        this.getSubtypeResolver().registerSubtypes(p2);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectReader schemaBasedReader(com.flurry.org.codehaus.jackson.FormatSchema p2)
    {
        return this.reader(p2);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter schemaBasedWriter(com.flurry.org.codehaus.jackson.FormatSchema p2)
    {
        return this.writer(p2);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper setAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p2)
    {
        this._serializationConfig = this._serializationConfig.withAnnotationIntrospector(p2);
        this._deserializationConfig = this._deserializationConfig.withAnnotationIntrospector(p2);
        return this;
    }

    public void setDateFormat(java.text.DateFormat p2)
    {
        this._deserializationConfig = this._deserializationConfig.withDateFormat(p2);
        this._serializationConfig = this._serializationConfig.withDateFormat(p2);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper setDefaultTyping(com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder p2)
    {
        this._deserializationConfig = this._deserializationConfig.withTypeResolverBuilder(p2);
        this._serializationConfig = this._serializationConfig.withTypeResolverBuilder(p2);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper setDeserializationConfig(com.flurry.org.codehaus.jackson.map.DeserializationConfig p1)
    {
        this._deserializationConfig = p1;
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper setDeserializerProvider(com.flurry.org.codehaus.jackson.map.DeserializerProvider p1)
    {
        this._deserializerProvider = p1;
        return this;
    }

    public void setFilters(com.flurry.org.codehaus.jackson.map.ser.FilterProvider p2)
    {
        this._serializationConfig = this._serializationConfig.withFilters(p2);
        return;
    }

    public void setHandlerInstantiator(com.flurry.org.codehaus.jackson.map.HandlerInstantiator p2)
    {
        this._deserializationConfig = this._deserializationConfig.withHandlerInstantiator(p2);
        this._serializationConfig = this._serializationConfig.withHandlerInstantiator(p2);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper setInjectableValues(com.flurry.org.codehaus.jackson.map.InjectableValues p1)
    {
        this._injectableValues = p1;
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper setNodeFactory(com.flurry.org.codehaus.jackson.node.JsonNodeFactory p2)
    {
        this._deserializationConfig = this._deserializationConfig.withNodeFactory(p2);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper setPropertyNamingStrategy(com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy p2)
    {
        this._serializationConfig = this._serializationConfig.withPropertyNamingStrategy(p2);
        this._deserializationConfig = this._deserializationConfig.withPropertyNamingStrategy(p2);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper setSerializationConfig(com.flurry.org.codehaus.jackson.map.SerializationConfig p1)
    {
        this._serializationConfig = p1;
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper setSerializationInclusion(com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion p2)
    {
        this._serializationConfig = this._serializationConfig.withSerializationInclusion(p2);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper setSerializerFactory(com.flurry.org.codehaus.jackson.map.SerializerFactory p1)
    {
        this._serializerFactory = p1;
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper setSerializerProvider(com.flurry.org.codehaus.jackson.map.SerializerProvider p1)
    {
        this._serializerProvider = p1;
        return this;
    }

    public void setSubtypeResolver(com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver p1)
    {
        this._subtypeResolver = p1;
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper setTypeFactory(com.flurry.org.codehaus.jackson.map.type.TypeFactory p2)
    {
        this._typeFactory = p2;
        this._deserializationConfig = this._deserializationConfig.withTypeFactory(p2);
        this._serializationConfig = this._serializationConfig.withTypeFactory(p2);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper setVisibility(com.flurry.org.codehaus.jackson.annotate.JsonMethod p2, com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p3)
    {
        this._deserializationConfig = this._deserializationConfig.withVisibility(p2, p3);
        this._serializationConfig = this._serializationConfig.withVisibility(p2, p3);
        return this;
    }

    public void setVisibilityChecker(com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p2)
    {
        this._deserializationConfig = this._deserializationConfig.withVisibilityChecker(p2);
        this._serializationConfig = this._serializationConfig.withVisibilityChecker(p2);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonParser treeAsTokens(com.flurry.org.codehaus.jackson.JsonNode p2)
    {
        return new com.flurry.org.codehaus.jackson.node.TreeTraversingParser(p2, this);
    }

    public Object treeToValue(com.flurry.org.codehaus.jackson.JsonNode p2, Class p3)
    {
        return this.readValue(this.treeAsTokens(p2), p3);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter typedWriter(com.flurry.org.codehaus.jackson.type.JavaType p2)
    {
        return this.writerWithType(p2);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter typedWriter(com.flurry.org.codehaus.jackson.type.TypeReference p2)
    {
        return this.writerWithType(p2);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter typedWriter(Class p2)
    {
        return this.writerWithType(p2);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectReader updatingReader(Object p2)
    {
        return this.readerForUpdating(p2);
    }

    public com.flurry.org.codehaus.jackson.JsonNode valueToTree(Object p7)
    {
        com.flurry.org.codehaus.jackson.JsonNode v3;
        if (p7 != null) {
            com.flurry.org.codehaus.jackson.util.TokenBuffer v0_1 = new com.flurry.org.codehaus.jackson.util.TokenBuffer(this);
            try {
                this.writeValue(v0_1, p7);
                com.flurry.org.codehaus.jackson.JsonParser v2 = v0_1.asParser();
                v3 = this.readTree(v2);
                v2.close();
            } catch (java.io.IOException v1) {
                throw new IllegalArgumentException(v1.getMessage(), v1);
            }
        } else {
            v3 = 0;
        }
        return v3;
    }

    public com.flurry.org.codehaus.jackson.Version version()
    {
        return com.flurry.org.codehaus.jackson.util.VersionUtil.versionFor(this.getClass());
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter viewWriter(Class p2)
    {
        return this.writerWithView(p2);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectMapper withModule(com.flurry.org.codehaus.jackson.map.Module p1)
    {
        this.registerModule(p1);
        return this;
    }

    public void writeTree(com.flurry.org.codehaus.jackson.JsonGenerator p4, com.flurry.org.codehaus.jackson.JsonNode p5)
    {
        com.flurry.org.codehaus.jackson.map.SerializationConfig v0 = this.copySerializationConfig();
        this._serializerProvider.serializeValue(v0, p4, p5, this._serializerFactory);
        if (v0.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.FLUSH_AFTER_WRITE_VALUE)) {
            p4.flush();
        }
        return;
    }

    public void writeTree(com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.JsonNode p4, com.flurry.org.codehaus.jackson.map.SerializationConfig p5)
    {
        this._serializerProvider.serializeValue(p5, p3, p4, this._serializerFactory);
        if (p5.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.FLUSH_AFTER_WRITE_VALUE)) {
            p3.flush();
        }
        return;
    }

    public void writeValue(com.flurry.org.codehaus.jackson.JsonGenerator p4, Object p5)
    {
        com.flurry.org.codehaus.jackson.map.SerializationConfig v0 = this.copySerializationConfig();
        if ((!v0.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.CLOSE_CLOSEABLE)) || (!(p5 instanceof java.io.Closeable))) {
            this._serializerProvider.serializeValue(v0, p4, p5, this._serializerFactory);
            if (v0.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.FLUSH_AFTER_WRITE_VALUE)) {
                p4.flush();
            }
        } else {
            this._writeCloseableValue(p4, p5, v0);
        }
        return;
    }

    public void writeValue(com.flurry.org.codehaus.jackson.JsonGenerator p3, Object p4, com.flurry.org.codehaus.jackson.map.SerializationConfig p5)
    {
        if ((!p5.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.CLOSE_CLOSEABLE)) || (!(p4 instanceof java.io.Closeable))) {
            this._serializerProvider.serializeValue(p5, p3, p4, this._serializerFactory);
            if (p5.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.FLUSH_AFTER_WRITE_VALUE)) {
                p3.flush();
            }
        } else {
            this._writeCloseableValue(p3, p4, p5);
        }
        return;
    }

    public void writeValue(java.io.File p3, Object p4)
    {
        this._configAndWriteValue(this._jsonFactory.createJsonGenerator(p3, com.flurry.org.codehaus.jackson.JsonEncoding.UTF8), p4);
        return;
    }

    public void writeValue(java.io.OutputStream p3, Object p4)
    {
        this._configAndWriteValue(this._jsonFactory.createJsonGenerator(p3, com.flurry.org.codehaus.jackson.JsonEncoding.UTF8), p4);
        return;
    }

    public void writeValue(java.io.Writer p2, Object p3)
    {
        this._configAndWriteValue(this._jsonFactory.createJsonGenerator(p2), p3);
        return;
    }

    public byte[] writeValueAsBytes(Object p5)
    {
        com.flurry.org.codehaus.jackson.util.ByteArrayBuilder v0_1 = new com.flurry.org.codehaus.jackson.util.ByteArrayBuilder(this._jsonFactory._getBufferRecycler());
        this._configAndWriteValue(this._jsonFactory.createJsonGenerator(v0_1, com.flurry.org.codehaus.jackson.JsonEncoding.UTF8), p5);
        byte[] v1 = v0_1.toByteArray();
        v0_1.release();
        return v1;
    }

    public String writeValueAsString(Object p3)
    {
        com.flurry.org.codehaus.jackson.io.SegmentedStringWriter v0_1 = new com.flurry.org.codehaus.jackson.io.SegmentedStringWriter(this._jsonFactory._getBufferRecycler());
        this._configAndWriteValue(this._jsonFactory.createJsonGenerator(v0_1), p3);
        return v0_1.getAndClear();
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter writer()
    {
        return new com.flurry.org.codehaus.jackson.map.ObjectWriter(this, this.copySerializationConfig());
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter writer(com.flurry.org.codehaus.jackson.FormatSchema p3)
    {
        return new com.flurry.org.codehaus.jackson.map.ObjectWriter(this, this.copySerializationConfig(), p3);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter writer(com.flurry.org.codehaus.jackson.PrettyPrinter p4)
    {
        if (p4 == null) {
            p4 = com.flurry.org.codehaus.jackson.map.ObjectWriter.NULL_PRETTY_PRINTER;
        }
        return new com.flurry.org.codehaus.jackson.map.ObjectWriter(this, this.copySerializationConfig(), 0, p4);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter writer(com.flurry.org.codehaus.jackson.map.ser.FilterProvider p3)
    {
        return new com.flurry.org.codehaus.jackson.map.ObjectWriter(this, this.copySerializationConfig().withFilters(p3));
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter writer(java.text.DateFormat p3)
    {
        return new com.flurry.org.codehaus.jackson.map.ObjectWriter(this, this.copySerializationConfig().withDateFormat(p3));
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter writerWithDefaultPrettyPrinter()
    {
        return new com.flurry.org.codehaus.jackson.map.ObjectWriter(this, this.copySerializationConfig(), 0, this._defaultPrettyPrinter());
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter writerWithType(com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        return new com.flurry.org.codehaus.jackson.map.ObjectWriter(this, this.copySerializationConfig(), p4, 0);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter writerWithType(com.flurry.org.codehaus.jackson.type.TypeReference p5)
    {
        com.flurry.org.codehaus.jackson.type.JavaType v0;
        if (p5 != null) {
            v0 = this._typeFactory.constructType(p5);
        } else {
            v0 = 0;
        }
        return new com.flurry.org.codehaus.jackson.map.ObjectWriter(this, this.copySerializationConfig(), v0, 0);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter writerWithType(Class p5)
    {
        com.flurry.org.codehaus.jackson.type.JavaType v0;
        if (p5 != null) {
            v0 = this._typeFactory.constructType(p5);
        } else {
            v0 = 0;
        }
        return new com.flurry.org.codehaus.jackson.map.ObjectWriter(this, this.copySerializationConfig(), v0, 0);
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter writerWithView(Class p3)
    {
        return new com.flurry.org.codehaus.jackson.map.ObjectWriter(this, this.copySerializationConfig().withView(p3));
    }
}
