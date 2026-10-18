package com.flurry.org.codehaus.jackson.map;
public class ObjectReader extends com.flurry.org.codehaus.jackson.ObjectCodec implements com.flurry.org.codehaus.jackson.Versioned {
    private static final com.flurry.org.codehaus.jackson.type.JavaType JSON_NODE_TYPE;
    protected final com.flurry.org.codehaus.jackson.map.DeserializationConfig _config;
    protected final com.flurry.org.codehaus.jackson.map.InjectableValues _injectableValues;
    protected final com.flurry.org.codehaus.jackson.JsonFactory _jsonFactory;
    protected final com.flurry.org.codehaus.jackson.map.DeserializerProvider _provider;
    protected final java.util.concurrent.ConcurrentHashMap _rootDeserializers;
    protected final com.flurry.org.codehaus.jackson.FormatSchema _schema;
    protected final boolean _unwrapRoot;
    protected final Object _valueToUpdate;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _valueType;

    static ObjectReader()
    {
        com.flurry.org.codehaus.jackson.map.ObjectReader.JSON_NODE_TYPE = com.flurry.org.codehaus.jackson.map.type.SimpleType.constructUnsafe(com.flurry.org.codehaus.jackson.JsonNode);
        return;
    }

    protected ObjectReader(com.flurry.org.codehaus.jackson.map.ObjectMapper p8, com.flurry.org.codehaus.jackson.map.DeserializationConfig p9)
    {
        this(p8, p9, 0, 0, 0, 0);
        return;
    }

    protected ObjectReader(com.flurry.org.codehaus.jackson.map.ObjectMapper p3, com.flurry.org.codehaus.jackson.map.DeserializationConfig p4, com.flurry.org.codehaus.jackson.type.JavaType p5, Object p6, com.flurry.org.codehaus.jackson.FormatSchema p7, com.flurry.org.codehaus.jackson.map.InjectableValues p8)
    {
        this._config = p4;
        this._rootDeserializers = p3._rootDeserializers;
        this._provider = p3._deserializerProvider;
        this._jsonFactory = p3._jsonFactory;
        this._valueType = p5;
        this._valueToUpdate = p6;
        if ((p6 == null) || (!p5.isArrayType())) {
            this._schema = p7;
            this._injectableValues = p8;
            this._unwrapRoot = p4.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.UNWRAP_ROOT_VALUE);
            return;
        } else {
            throw new IllegalArgumentException("Can not update an array value");
        }
    }

    protected ObjectReader(com.flurry.org.codehaus.jackson.map.ObjectReader p3, com.flurry.org.codehaus.jackson.map.DeserializationConfig p4, com.flurry.org.codehaus.jackson.type.JavaType p5, Object p6, com.flurry.org.codehaus.jackson.FormatSchema p7, com.flurry.org.codehaus.jackson.map.InjectableValues p8)
    {
        this._config = p4;
        this._rootDeserializers = p3._rootDeserializers;
        this._provider = p3._provider;
        this._jsonFactory = p3._jsonFactory;
        this._valueType = p5;
        this._valueToUpdate = p6;
        if ((p6 == null) || (!p5.isArrayType())) {
            this._schema = p7;
            this._injectableValues = p8;
            this._unwrapRoot = p4.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.UNWRAP_ROOT_VALUE);
            return;
        } else {
            throw new IllegalArgumentException("Can not update an array value");
        }
    }

    protected static com.flurry.org.codehaus.jackson.JsonToken _initForReading(com.flurry.org.codehaus.jackson.JsonParser p3)
    {
        com.flurry.org.codehaus.jackson.JsonToken v0 = p3.getCurrentToken();
        if (v0 == null) {
            v0 = p3.nextToken();
            if (v0 == null) {
                throw new java.io.EOFException("No content to map to Object due to end of input");
            }
        }
        return v0;
    }

    protected Object _bind(com.flurry.org.codehaus.jackson.JsonParser p7)
    {
        Object v2;
        com.flurry.org.codehaus.jackson.JsonToken v3 = com.flurry.org.codehaus.jackson.map.ObjectReader._initForReading(p7);
        if (v3 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
            if ((v3 != com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) && (v3 != com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT)) {
                com.flurry.org.codehaus.jackson.map.DeserializationContext v0 = this._createDeserializationContext(p7, this._config);
                com.flurry.org.codehaus.jackson.map.JsonDeserializer v1 = this._findRootDeserializer(this._config, this._valueType);
                if (!this._unwrapRoot) {
                    if (this._valueToUpdate != null) {
                        v1.deserialize(p7, v0, this._valueToUpdate);
                        v2 = this._valueToUpdate;
                    } else {
                        v2 = v1.deserialize(p7, v0);
                    }
                } else {
                    v2 = this._unwrapAndDeserialize(p7, v0, this._valueType, v1);
                }
            } else {
                v2 = this._valueToUpdate;
            }
        } else {
            if (this._valueToUpdate != null) {
                v2 = this._valueToUpdate;
            } else {
                v2 = this._findRootDeserializer(this._config, this._valueType).getNullValue();
            }
        }
        p7.clearCurrentToken();
        return v2;
    }

    protected Object _bindAndClose(com.flurry.org.codehaus.jackson.JsonParser p7)
    {
        if (this._schema != null) {
            p7.setSchema(this._schema);
        }
        try {
            Object v2;
            com.flurry.org.codehaus.jackson.JsonToken v3 = com.flurry.org.codehaus.jackson.map.ObjectReader._initForReading(p7);
        } catch (Object v4_10) {
            try {
                p7.close();
            } catch (com.flurry.org.codehaus.jackson.type.JavaType v5) {
            }
            throw v4_10;
        }
        if (v3 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
            if ((v3 != com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) && (v3 != com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT)) {
                com.flurry.org.codehaus.jackson.map.DeserializationContext v0 = this._createDeserializationContext(p7, this._config);
                com.flurry.org.codehaus.jackson.map.JsonDeserializer v1 = this._findRootDeserializer(this._config, this._valueType);
                if (!this._unwrapRoot) {
                    if (this._valueToUpdate != null) {
                        v1.deserialize(p7, v0, this._valueToUpdate);
                        v2 = this._valueToUpdate;
                    } else {
                        v2 = v1.deserialize(p7, v0);
                    }
                } else {
                    v2 = this._unwrapAndDeserialize(p7, v0, this._valueType, v1);
                }
            } else {
                v2 = this._valueToUpdate;
            }
        } else {
            if (this._valueToUpdate != null) {
                v2 = this._valueToUpdate;
            } else {
                v2 = this._findRootDeserializer(this._config, this._valueType).getNullValue();
            }
        }
        try {
            p7.close();
        } catch (Object v4) {
        }
        return v2;
    }

    protected com.flurry.org.codehaus.jackson.JsonNode _bindAndCloseAsTree(com.flurry.org.codehaus.jackson.JsonParser p3)
    {
        if (this._schema != null) {
            p3.setSchema(this._schema);
        }
        try {
            Throwable v0_2 = this._bindAsTree(p3);
            try {
                p3.close();
            } catch (java.io.IOException v1) {
            }
            return v0_2;
        } catch (Throwable v0_3) {
            try {
                p3.close();
            } catch (java.io.IOException v1) {
            }
            throw v0_3;
        }
    }

    protected com.flurry.org.codehaus.jackson.JsonNode _bindAsTree(com.flurry.org.codehaus.jackson.JsonParser p7)
    {
        com.flurry.org.codehaus.jackson.JsonNode v2_1;
        com.flurry.org.codehaus.jackson.JsonToken v3 = com.flurry.org.codehaus.jackson.map.ObjectReader._initForReading(p7);
        if ((v3 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) && ((v3 != com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) && (v3 != com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT))) {
            com.flurry.org.codehaus.jackson.map.DeserializationContext v0 = this._createDeserializationContext(p7, this._config);
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v1 = this._findRootDeserializer(this._config, com.flurry.org.codehaus.jackson.map.ObjectReader.JSON_NODE_TYPE);
            if (!this._unwrapRoot) {
                v2_1 = ((com.flurry.org.codehaus.jackson.JsonNode) v1.deserialize(p7, v0));
            } else {
                v2_1 = ((com.flurry.org.codehaus.jackson.JsonNode) this._unwrapAndDeserialize(p7, v0, com.flurry.org.codehaus.jackson.map.ObjectReader.JSON_NODE_TYPE, v1));
            }
        } else {
            v2_1 = com.flurry.org.codehaus.jackson.node.NullNode.instance;
        }
        p7.clearCurrentToken();
        return v2_1;
    }

    protected com.flurry.org.codehaus.jackson.map.DeserializationContext _createDeserializationContext(com.flurry.org.codehaus.jackson.JsonParser p4, com.flurry.org.codehaus.jackson.map.DeserializationConfig p5)
    {
        return new com.flurry.org.codehaus.jackson.map.deser.StdDeserializationContext(p5, p4, this._provider, this._injectableValues);
    }

    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _findRootDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p6, com.flurry.org.codehaus.jackson.type.JavaType p7)
    {
        if (p7 != null) {
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v1;
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v0_1 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) this._rootDeserializers.get(p7));
            if (v0_1 == null) {
                com.flurry.org.codehaus.jackson.map.JsonDeserializer v0_2 = this._provider.findTypedValueDeserializer(p6, p7, 0);
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
        } else {
            throw new com.flurry.org.codehaus.jackson.map.JsonMappingException("No value type configured for ObjectReader");
        }
    }

    protected Object _unwrapAndDeserialize(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7, com.flurry.org.codehaus.jackson.type.JavaType p8, com.flurry.org.codehaus.jackson.map.JsonDeserializer p9)
    {
        com.flurry.org.codehaus.jackson.io.SerializedString v2 = this._provider.findExpectedRootName(p7.getConfig(), p8);
        if (p6.getCurrentToken() == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
            if (p6.nextToken() == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
                String v0 = p6.getCurrentName();
                if (v2.getValue().equals(v0)) {
                    Object v1;
                    p6.nextToken();
                    if (this._valueToUpdate != null) {
                        p9.deserialize(p6, p7, this._valueToUpdate);
                        v1 = this._valueToUpdate;
                    } else {
                        v1 = p9.deserialize(p6, p7);
                    }
                    if (p6.nextToken() == com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT) {
                        return v1;
                    } else {
                        throw com.flurry.org.codehaus.jackson.map.JsonMappingException.from(p6, new StringBuilder().append("Current token not END_OBJECT (to match wrapper object with root name \'").append(v2).append("\'), but ").append(p6.getCurrentToken()).toString());
                    }
                } else {
                    throw com.flurry.org.codehaus.jackson.map.JsonMappingException.from(p6, new StringBuilder().append("Root name \'").append(v0).append("\' does not match expected (\'").append(v2).append("\') for type ").append(p8).toString());
                }
            } else {
                throw com.flurry.org.codehaus.jackson.map.JsonMappingException.from(p6, new StringBuilder().append("Current token not FIELD_NAME (to contain expected root name \'").append(v2).append("\'), but ").append(p6.getCurrentToken()).toString());
            }
        } else {
            throw com.flurry.org.codehaus.jackson.map.JsonMappingException.from(p6, new StringBuilder().append("Current token not START_OBJECT (needed to unwrap root name \'").append(v2).append("\'), but ").append(p6.getCurrentToken()).toString());
        }
    }

    public com.flurry.org.codehaus.jackson.JsonNode createArrayNode()
    {
        return this._config.getNodeFactory().arrayNode();
    }

    public com.flurry.org.codehaus.jackson.JsonNode createObjectNode()
    {
        return this._config.getNodeFactory().objectNode();
    }

    public com.flurry.org.codehaus.jackson.JsonNode readTree(com.flurry.org.codehaus.jackson.JsonParser p2)
    {
        return this._bindAsTree(p2);
    }

    public com.flurry.org.codehaus.jackson.JsonNode readTree(java.io.InputStream p2)
    {
        return this._bindAndCloseAsTree(this._jsonFactory.createJsonParser(p2));
    }

    public com.flurry.org.codehaus.jackson.JsonNode readTree(java.io.Reader p2)
    {
        return this._bindAndCloseAsTree(this._jsonFactory.createJsonParser(p2));
    }

    public com.flurry.org.codehaus.jackson.JsonNode readTree(String p2)
    {
        return this._bindAndCloseAsTree(this._jsonFactory.createJsonParser(p2));
    }

    public Object readValue(com.flurry.org.codehaus.jackson.JsonNode p2)
    {
        return this._bindAndClose(this.treeAsTokens(p2));
    }

    public Object readValue(com.flurry.org.codehaus.jackson.JsonParser p2)
    {
        return this._bind(p2);
    }

    public Object readValue(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return this.withType(p3).readValue(p2);
    }

    public Object readValue(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.type.TypeReference p3)
    {
        return this.withType(p3).readValue(p2);
    }

    public Object readValue(com.flurry.org.codehaus.jackson.JsonParser p2, Class p3)
    {
        return this.withType(p3).readValue(p2);
    }

    public Object readValue(java.io.File p2)
    {
        return this._bindAndClose(this._jsonFactory.createJsonParser(p2));
    }

    public Object readValue(java.io.InputStream p2)
    {
        return this._bindAndClose(this._jsonFactory.createJsonParser(p2));
    }

    public Object readValue(java.io.Reader p2)
    {
        return this._bindAndClose(this._jsonFactory.createJsonParser(p2));
    }

    public Object readValue(String p2)
    {
        return this._bindAndClose(this._jsonFactory.createJsonParser(p2));
    }

    public Object readValue(java.net.URL p2)
    {
        return this._bindAndClose(this._jsonFactory.createJsonParser(p2));
    }

    public Object readValue(byte[] p2)
    {
        return this._bindAndClose(this._jsonFactory.createJsonParser(p2));
    }

    public Object readValue(byte[] p2, int p3, int p4)
    {
        return this._bindAndClose(this._jsonFactory.createJsonParser(p2, p3, p4));
    }

    public com.flurry.org.codehaus.jackson.map.MappingIterator readValues(com.flurry.org.codehaus.jackson.JsonParser p8)
    {
        return new com.flurry.org.codehaus.jackson.map.MappingIterator(this._valueType, p8, this._createDeserializationContext(p8, this._config), this._findRootDeserializer(this._config, this._valueType), 0, this._valueToUpdate);
    }

    public com.flurry.org.codehaus.jackson.map.MappingIterator readValues(java.io.File p8)
    {
        com.flurry.org.codehaus.jackson.JsonParser v2 = this._jsonFactory.createJsonParser(p8);
        if (this._schema != null) {
            v2.setSchema(this._schema);
        }
        return new com.flurry.org.codehaus.jackson.map.MappingIterator(this._valueType, v2, this._createDeserializationContext(v2, this._config), this._findRootDeserializer(this._config, this._valueType), 1, this._valueToUpdate);
    }

    public com.flurry.org.codehaus.jackson.map.MappingIterator readValues(java.io.InputStream p8)
    {
        com.flurry.org.codehaus.jackson.JsonParser v2 = this._jsonFactory.createJsonParser(p8);
        if (this._schema != null) {
            v2.setSchema(this._schema);
        }
        return new com.flurry.org.codehaus.jackson.map.MappingIterator(this._valueType, v2, this._createDeserializationContext(v2, this._config), this._findRootDeserializer(this._config, this._valueType), 1, this._valueToUpdate);
    }

    public com.flurry.org.codehaus.jackson.map.MappingIterator readValues(java.io.Reader p8)
    {
        com.flurry.org.codehaus.jackson.JsonParser v2 = this._jsonFactory.createJsonParser(p8);
        if (this._schema != null) {
            v2.setSchema(this._schema);
        }
        return new com.flurry.org.codehaus.jackson.map.MappingIterator(this._valueType, v2, this._createDeserializationContext(v2, this._config), this._findRootDeserializer(this._config, this._valueType), 1, this._valueToUpdate);
    }

    public com.flurry.org.codehaus.jackson.map.MappingIterator readValues(String p8)
    {
        com.flurry.org.codehaus.jackson.JsonParser v2 = this._jsonFactory.createJsonParser(p8);
        if (this._schema != null) {
            v2.setSchema(this._schema);
        }
        return new com.flurry.org.codehaus.jackson.map.MappingIterator(this._valueType, v2, this._createDeserializationContext(v2, this._config), this._findRootDeserializer(this._config, this._valueType), 1, this._valueToUpdate);
    }

    public com.flurry.org.codehaus.jackson.map.MappingIterator readValues(java.net.URL p8)
    {
        com.flurry.org.codehaus.jackson.JsonParser v2 = this._jsonFactory.createJsonParser(p8);
        if (this._schema != null) {
            v2.setSchema(this._schema);
        }
        return new com.flurry.org.codehaus.jackson.map.MappingIterator(this._valueType, v2, this._createDeserializationContext(v2, this._config), this._findRootDeserializer(this._config, this._valueType), 1, this._valueToUpdate);
    }

    public final com.flurry.org.codehaus.jackson.map.MappingIterator readValues(byte[] p3)
    {
        return this.readValues(p3, 0, p3.length);
    }

    public com.flurry.org.codehaus.jackson.map.MappingIterator readValues(byte[] p8, int p9, int p10)
    {
        com.flurry.org.codehaus.jackson.JsonParser v2 = this._jsonFactory.createJsonParser(p8, p9, p10);
        if (this._schema != null) {
            v2.setSchema(this._schema);
        }
        return new com.flurry.org.codehaus.jackson.map.MappingIterator(this._valueType, v2, this._createDeserializationContext(v2, this._config), this._findRootDeserializer(this._config, this._valueType), 1, this._valueToUpdate);
    }

    public java.util.Iterator readValues(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return this.withType(p3).readValues(p2);
    }

    public java.util.Iterator readValues(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.type.TypeReference p3)
    {
        return this.withType(p3).readValues(p2);
    }

    public java.util.Iterator readValues(com.flurry.org.codehaus.jackson.JsonParser p2, Class p3)
    {
        return this.withType(p3).readValues(p2);
    }

    public com.flurry.org.codehaus.jackson.JsonParser treeAsTokens(com.flurry.org.codehaus.jackson.JsonNode p2)
    {
        return new com.flurry.org.codehaus.jackson.node.TreeTraversingParser(p2, this);
    }

    public Object treeToValue(com.flurry.org.codehaus.jackson.JsonNode p2, Class p3)
    {
        return this.readValue(this.treeAsTokens(p2), p3);
    }

    public com.flurry.org.codehaus.jackson.Version version()
    {
        return com.flurry.org.codehaus.jackson.util.VersionUtil.versionFor(this.getClass());
    }

    public com.flurry.org.codehaus.jackson.map.ObjectReader withInjectableValues(com.flurry.org.codehaus.jackson.map.InjectableValues p8)
    {
        if (this._injectableValues != p8) {
            this = new com.flurry.org.codehaus.jackson.map.ObjectReader(this, this._config, this._valueType, this._valueToUpdate, this._schema, p8);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectReader withNodeFactory(com.flurry.org.codehaus.jackson.node.JsonNodeFactory p8)
    {
        if (p8 != this._config.getNodeFactory()) {
            this = new com.flurry.org.codehaus.jackson.map.ObjectReader(this, this._config.withNodeFactory(p8), this._valueType, this._valueToUpdate, this._schema, this._injectableValues);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectReader withSchema(com.flurry.org.codehaus.jackson.FormatSchema p8)
    {
        if (this._schema != p8) {
            this = new com.flurry.org.codehaus.jackson.map.ObjectReader(this, this._config, this._valueType, this._valueToUpdate, p8, this._injectableValues);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectReader withType(com.flurry.org.codehaus.jackson.type.JavaType p8)
    {
        if (p8 != this._valueType) {
            this = new com.flurry.org.codehaus.jackson.map.ObjectReader(this, this._config, p8, this._valueToUpdate, this._schema, this._injectableValues);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectReader withType(com.flurry.org.codehaus.jackson.type.TypeReference p3)
    {
        return this.withType(this._config.getTypeFactory().constructType(p3.getType()));
    }

    public com.flurry.org.codehaus.jackson.map.ObjectReader withType(Class p2)
    {
        return this.withType(this._config.constructType(p2));
    }

    public com.flurry.org.codehaus.jackson.map.ObjectReader withType(reflect.Type p2)
    {
        return this.withType(this._config.getTypeFactory().constructType(p2));
    }

    public com.flurry.org.codehaus.jackson.map.ObjectReader withValueToUpdate(Object p8)
    {
        if (p8 != this._valueToUpdate) {
            if (p8 != null) {
                com.flurry.org.codehaus.jackson.type.JavaType v3;
                if (this._valueType != null) {
                    v3 = this._valueType;
                } else {
                    v3 = this._config.constructType(p8.getClass());
                }
                this = new com.flurry.org.codehaus.jackson.map.ObjectReader(this, this._config, v3, p8, this._schema, this._injectableValues);
            } else {
                throw new IllegalArgumentException("cat not update null value");
            }
        }
        return this;
    }

    public void writeTree(com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.JsonNode p4)
    {
        throw new UnsupportedOperationException("Not implemented for ObjectReader");
    }

    public void writeValue(com.flurry.org.codehaus.jackson.JsonGenerator p3, Object p4)
    {
        throw new UnsupportedOperationException("Not implemented for ObjectReader");
    }
}
