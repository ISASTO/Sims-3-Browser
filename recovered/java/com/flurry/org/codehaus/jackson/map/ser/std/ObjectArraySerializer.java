package com.flurry.org.codehaus.jackson.map.ser.std;
public class ObjectArraySerializer extends com.flurry.org.codehaus.jackson.map.ser.std.StdArraySerializers$ArraySerializerBase implements com.flurry.org.codehaus.jackson.map.ResolvableSerializer {
    protected com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap _dynamicSerializers;
    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _elementSerializer;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _elementType;
    protected final boolean _staticTyping;

    public ObjectArraySerializer(com.flurry.org.codehaus.jackson.type.JavaType p7, boolean p8, com.flurry.org.codehaus.jackson.map.TypeSerializer p9, com.flurry.org.codehaus.jackson.map.BeanProperty p10)
    {
        this(p7, p8, p9, p10, 0);
        return;
    }

    public ObjectArraySerializer(com.flurry.org.codehaus.jackson.type.JavaType p2, boolean p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4, com.flurry.org.codehaus.jackson.map.BeanProperty p5, com.flurry.org.codehaus.jackson.map.JsonSerializer p6)
    {
        super(Object[], p4, p5);
        super._elementType = p2;
        super._staticTyping = p3;
        super._dynamicSerializers = com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap.emptyMap();
        super._elementSerializer = p6;
        return;
    }

    protected final com.flurry.org.codehaus.jackson.map.JsonSerializer _findAndAddDynamic(com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap p3, com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5)
    {
        com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$SerializerAndMapResult v0 = p3.findAndAddSerializer(p4, p5, this._property);
        if (p3 != v0.map) {
            this._dynamicSerializers = v0.map;
        }
        return v0.serializer;
    }

    protected final com.flurry.org.codehaus.jackson.map.JsonSerializer _findAndAddDynamic(com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap p3, Class p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5)
    {
        com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$SerializerAndMapResult v0 = p3.findAndAddSerializer(p4, p5, this._property);
        if (p3 != v0.map) {
            this._dynamicSerializers = v0.map;
        }
        return v0.serializer;
    }

    public com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase _withValueTypeSerializer(com.flurry.org.codehaus.jackson.map.TypeSerializer p7)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.std.ObjectArraySerializer(this._elementType, this._staticTyping, p7, this._property, this._elementSerializer);
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p8, reflect.Type p9)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v2 = this.createSchemaNode("array", 1);
        if (p9 != null) {
            com.flurry.org.codehaus.jackson.map.type.ArrayType v1_1 = p8.constructType(p9);
            if (v1_1.isArrayType()) {
                Class v0 = ((com.flurry.org.codehaus.jackson.map.type.ArrayType) v1_1).getContentType().getRawClass();
                if (v0 != Object) {
                    com.flurry.org.codehaus.jackson.JsonNode v3;
                    com.flurry.org.codehaus.jackson.schema.SchemaAware v4_0 = p8.findValueSerializer(v0, this._property);
                    if (!(v4_0 instanceof com.flurry.org.codehaus.jackson.schema.SchemaAware)) {
                        v3 = com.flurry.org.codehaus.jackson.schema.JsonSchema.getDefaultSchemaNode();
                    } else {
                        v3 = ((com.flurry.org.codehaus.jackson.schema.SchemaAware) v4_0).getSchema(p8, 0);
                    }
                    v2.put("items", v3);
                } else {
                    v2.put("items", com.flurry.org.codehaus.jackson.schema.JsonSchema.getDefaultSchemaNode());
                }
            }
        }
        return v2;
    }

    public void resolve(com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        if ((this._staticTyping) && (this._elementSerializer == null)) {
            this._elementSerializer = p3.findValueSerializer(this._elementType, this._property);
        }
        return;
    }

    public bridge synthetic void serializeContents(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serializeContents(((Object[]) p1), p2, p3);
        return;
    }

    public void serializeContents(Object[] p11, com.flurry.org.codehaus.jackson.JsonGenerator p12, com.flurry.org.codehaus.jackson.map.SerializerProvider p13)
    {
        int v5 = p11.length;
        if (v5 != 0) {
            if (this._elementSerializer == null) {
                if (this._valueTypeSerializer == null) {
                    int v3 = 0;
                    Object v2 = 0;
                    try {
                        com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap v7 = this._dynamicSerializers;
                    } catch (java.io.IOException v4) {
                        throw v4;
                    } catch (Exception v1) {
                        Error v8_0 = v1;
                    }
                    while (v3 < v5) {
                        v2 = p11[v3];
                        if (v2 != null) {
                            Class v0 = v2.getClass();
                            com.flurry.org.codehaus.jackson.map.JsonSerializer v6 = v7.serializerFor(v0);
                            if (v6 == null) {
                                if (!this._elementType.hasGenericTypes()) {
                                    v6 = this._findAndAddDynamic(v7, v0, p13);
                                } else {
                                    v6 = this._findAndAddDynamic(v7, p13.constructSpecializedType(this._elementType, v0), p13);
                                }
                            }
                            v6.serialize(v2, p12, p13);
                        } else {
                            p13.defaultSerializeNull(p12);
                        }
                        v3++;
                    }
                } else {
                    this.serializeTypedContents(p11, p12, p13);
                }
            } else {
                this.serializeContentsUsing(p11, p12, p13, this._elementSerializer);
            }
        }
        return;
    }

    public void serializeContentsUsing(Object[] p9, com.flurry.org.codehaus.jackson.JsonGenerator p10, com.flurry.org.codehaus.jackson.map.SerializerProvider p11, com.flurry.org.codehaus.jackson.map.JsonSerializer p12)
    {
        int v4 = p9.length;
        com.flurry.org.codehaus.jackson.map.TypeSerializer v6 = this._valueTypeSerializer;
        int v2 = 0;
        while (v2 < v4) {
            try {
                Object v1 = p9[v2];
            } catch (java.io.IOException v3) {
                throw v3;
            } catch (Exception v0) {
                Error v5_0 = v0;
            }
            if (v1 != null) {
                if (v6 != null) {
                    p12.serializeWithType(v1, p10, p11, v6);
                } else {
                    p12.serialize(v1, p10, p11);
                }
            } else {
                p11.defaultSerializeNull(p10);
            }
            v2++;
        }
        return;
    }

    public void serializeTypedContents(Object[] p12, com.flurry.org.codehaus.jackson.JsonGenerator p13, com.flurry.org.codehaus.jackson.map.SerializerProvider p14)
    {
        int v5 = p12.length;
        com.flurry.org.codehaus.jackson.map.TypeSerializer v9 = this._valueTypeSerializer;
        int v3 = 0;
        Object v2 = 0;
        try {
            com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap v7 = this._dynamicSerializers;
        } catch (java.io.IOException v4) {
            throw v4;
        } catch (Exception v1) {
            Error v8_0 = v1;
        }
        while (v3 < v5) {
            v2 = p12[v3];
            if (v2 != null) {
                Class v0 = v2.getClass();
                com.flurry.org.codehaus.jackson.map.JsonSerializer v6 = v7.serializerFor(v0);
                if (v6 == null) {
                    v6 = this._findAndAddDynamic(v7, v0, p14);
                }
                v6.serializeWithType(v2, p13, p14, v9);
            } else {
                p14.defaultSerializeNull(p13);
            }
            v3++;
        }
        return;
    }
}
