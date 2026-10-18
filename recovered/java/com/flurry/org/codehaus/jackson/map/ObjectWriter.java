package com.flurry.org.codehaus.jackson.map;
public class ObjectWriter implements com.flurry.org.codehaus.jackson.Versioned {
    protected static final com.flurry.org.codehaus.jackson.PrettyPrinter NULL_PRETTY_PRINTER;
    protected final com.flurry.org.codehaus.jackson.map.SerializationConfig _config;
    protected final com.flurry.org.codehaus.jackson.JsonFactory _jsonFactory;
    protected final com.flurry.org.codehaus.jackson.PrettyPrinter _prettyPrinter;
    protected final com.flurry.org.codehaus.jackson.map.SerializerProvider _provider;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _rootType;
    protected final com.flurry.org.codehaus.jackson.FormatSchema _schema;
    protected final com.flurry.org.codehaus.jackson.map.SerializerFactory _serializerFactory;

    static ObjectWriter()
    {
        com.flurry.org.codehaus.jackson.map.ObjectWriter.NULL_PRETTY_PRINTER = new com.flurry.org.codehaus.jackson.util.MinimalPrettyPrinter();
        return;
    }

    protected ObjectWriter(com.flurry.org.codehaus.jackson.map.ObjectMapper p3, com.flurry.org.codehaus.jackson.map.SerializationConfig p4)
    {
        this._config = p4;
        this._provider = p3._serializerProvider;
        this._serializerFactory = p3._serializerFactory;
        this._jsonFactory = p3._jsonFactory;
        this._rootType = 0;
        this._prettyPrinter = 0;
        this._schema = 0;
        return;
    }

    protected ObjectWriter(com.flurry.org.codehaus.jackson.map.ObjectMapper p3, com.flurry.org.codehaus.jackson.map.SerializationConfig p4, com.flurry.org.codehaus.jackson.FormatSchema p5)
    {
        this._config = p4;
        this._provider = p3._serializerProvider;
        this._serializerFactory = p3._serializerFactory;
        this._jsonFactory = p3._jsonFactory;
        this._rootType = 0;
        this._prettyPrinter = 0;
        this._schema = p5;
        return;
    }

    protected ObjectWriter(com.flurry.org.codehaus.jackson.map.ObjectMapper p2, com.flurry.org.codehaus.jackson.map.SerializationConfig p3, com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.PrettyPrinter p5)
    {
        this._config = p3;
        this._provider = p2._serializerProvider;
        this._serializerFactory = p2._serializerFactory;
        this._jsonFactory = p2._jsonFactory;
        this._rootType = p4;
        this._prettyPrinter = p5;
        this._schema = 0;
        return;
    }

    protected ObjectWriter(com.flurry.org.codehaus.jackson.map.ObjectWriter p2, com.flurry.org.codehaus.jackson.map.SerializationConfig p3)
    {
        this._config = p3;
        this._provider = p2._provider;
        this._serializerFactory = p2._serializerFactory;
        this._jsonFactory = p2._jsonFactory;
        this._schema = p2._schema;
        this._rootType = p2._rootType;
        this._prettyPrinter = p2._prettyPrinter;
        return;
    }

    protected ObjectWriter(com.flurry.org.codehaus.jackson.map.ObjectWriter p2, com.flurry.org.codehaus.jackson.map.SerializationConfig p3, com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.PrettyPrinter p5, com.flurry.org.codehaus.jackson.FormatSchema p6)
    {
        this._config = p3;
        this._provider = p2._provider;
        this._serializerFactory = p2._serializerFactory;
        this._jsonFactory = p2._jsonFactory;
        this._rootType = p4;
        this._prettyPrinter = p5;
        this._schema = p6;
        return;
    }

    private final void _configAndWriteCloseable(com.flurry.org.codehaus.jackson.JsonGenerator p10, Object p11, com.flurry.org.codehaus.jackson.map.SerializationConfig p12)
    {
        try {
            if (this._rootType != null) {
                this._provider.serializeValue(p12, p10, p11, this._rootType, this._serializerFactory);
            } else {
                this._provider.serializeValue(p12, p10, p11, this._serializerFactory);
            }
        } catch (java.io.IOException v0_3) {
            if (p10 != 0) {
                try {
                    p10.close();
                } catch (java.io.IOException v1) {
                }
            }
            if (((java.io.Closeable) p11) != null) {
                try {
                    ((java.io.Closeable) p11).close();
                } catch (java.io.IOException v1) {
                }
            }
            throw v0_3;
        }
        if (this._schema != null) {
            p10.setSchema(this._schema);
        }
        p10.close();
        ((java.io.Closeable) p11).close();
        if (0 != 0) {
            try {
                0.close();
            } catch (java.io.IOException v0) {
            }
        }
        if (0 != 0) {
            try {
                0.close();
            } catch (java.io.IOException v0) {
            }
        }
        return;
    }

    private final void _writeCloseableValue(com.flurry.org.codehaus.jackson.JsonGenerator p9, Object p10, com.flurry.org.codehaus.jackson.map.SerializationConfig p11)
    {
        try {
            if (this._rootType != null) {
                this._provider.serializeValue(p11, p9, p10, this._rootType, this._serializerFactory);
            } else {
                this._provider.serializeValue(p11, p9, p10, this._serializerFactory);
            }
        } catch (java.io.IOException v0_4) {
            if (((java.io.Closeable) p10) != null) {
                try {
                    ((java.io.Closeable) p10).close();
                } catch (java.io.IOException v1) {
                }
            }
            throw v0_4;
        }
        if (this._config.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.FLUSH_AFTER_WRITE_VALUE)) {
            p9.flush();
        }
        ((java.io.Closeable) p10).close();
        if (0 != 0) {
            try {
                0.close();
            } catch (java.io.IOException v0) {
            }
        }
        return;
    }

    protected final void _configAndWriteValue(com.flurry.org.codehaus.jackson.JsonGenerator p9, Object p10)
    {
        if (this._prettyPrinter == null) {
            if (this._config.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.INDENT_OUTPUT)) {
                p9.useDefaultPrettyPrinter();
            }
        } else {
            int v7 = this._prettyPrinter;
            if (v7 == com.flurry.org.codehaus.jackson.map.ObjectWriter.NULL_PRETTY_PRINTER) {
                v7 = 0;
            }
            p9.setPrettyPrinter(v7);
        }
        if (this._schema != null) {
            p9.setSchema(this._schema);
        }
        if ((!this._config.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.CLOSE_CLOSEABLE)) || (!(p10 instanceof java.io.Closeable))) {
            try {
                if (this._rootType != null) {
                    this._provider.serializeValue(this._config, p9, p10, this._rootType, this._serializerFactory);
                } else {
                    this._provider.serializeValue(this._config, p9, p10, this._serializerFactory);
                }
            } catch (java.io.IOException v0_10) {
                if (0 == 0) {
                    try {
                        p9.close();
                    } catch (java.io.IOException v1) {
                    }
                }
                throw v0_10;
            }
            p9.close();
            if (1 == 0) {
                try {
                    p9.close();
                } catch (java.io.IOException v0) {
                }
            }
        } else {
            this._configAndWriteCloseable(p9, p10, this._config);
        }
        return;
    }

    public boolean canSerialize(Class p4)
    {
        return this._provider.hasSerializerFor(this._config, p4, this._serializerFactory);
    }

    public com.flurry.org.codehaus.jackson.Version version()
    {
        return com.flurry.org.codehaus.jackson.util.VersionUtil.versionFor(this.getClass());
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter withDateFormat(java.text.DateFormat p3)
    {
        com.flurry.org.codehaus.jackson.map.SerializationConfig v0 = this._config.withDateFormat(p3);
        if (v0 != this._config) {
            this = new com.flurry.org.codehaus.jackson.map.ObjectWriter(this, v0);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter withDefaultPrettyPrinter()
    {
        return this.withPrettyPrinter(new com.flurry.org.codehaus.jackson.util.DefaultPrettyPrinter());
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter withFilters(com.flurry.org.codehaus.jackson.map.ser.FilterProvider p3)
    {
        if (p3 != this._config.getFilterProvider()) {
            this = new com.flurry.org.codehaus.jackson.map.ObjectWriter(this, this._config.withFilters(p3));
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter withPrettyPrinter(com.flurry.org.codehaus.jackson.PrettyPrinter p7)
    {
        if (p7 != this._prettyPrinter) {
            if (p7 == null) {
                p7 = com.flurry.org.codehaus.jackson.map.ObjectWriter.NULL_PRETTY_PRINTER;
            }
            this = new com.flurry.org.codehaus.jackson.map.ObjectWriter(this, this._config, this._rootType, p7, this._schema);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter withSchema(com.flurry.org.codehaus.jackson.FormatSchema p7)
    {
        if (this._schema != p7) {
            this = new com.flurry.org.codehaus.jackson.map.ObjectWriter(this, this._config, this._rootType, this._prettyPrinter, p7);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter withType(com.flurry.org.codehaus.jackson.type.JavaType p7)
    {
        if (p7 != this._rootType) {
            this = new com.flurry.org.codehaus.jackson.map.ObjectWriter(this, this._config, p7, this._prettyPrinter, this._schema);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter withType(com.flurry.org.codehaus.jackson.type.TypeReference p3)
    {
        return this.withType(this._config.getTypeFactory().constructType(p3.getType()));
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter withType(Class p2)
    {
        return this.withType(this._config.constructType(p2));
    }

    public com.flurry.org.codehaus.jackson.map.ObjectWriter withView(Class p3)
    {
        if (p3 != this._config.getSerializationView()) {
            this = new com.flurry.org.codehaus.jackson.map.ObjectWriter(this, this._config.withView(p3));
        }
        return this;
    }

    public void writeValue(com.flurry.org.codehaus.jackson.JsonGenerator p7, Object p8)
    {
        if ((!this._config.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.CLOSE_CLOSEABLE)) || (!(p8 instanceof java.io.Closeable))) {
            if (this._rootType != null) {
                this._provider.serializeValue(this._config, p7, p8, this._rootType, this._serializerFactory);
            } else {
                this._provider.serializeValue(this._config, p7, p8, this._serializerFactory);
            }
            if (this._config.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.FLUSH_AFTER_WRITE_VALUE)) {
                p7.flush();
            }
        } else {
            this._writeCloseableValue(p7, p8, this._config);
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
}
