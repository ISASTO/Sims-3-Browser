package com.flurry.org.codehaus.jackson.map.ser.std;
public abstract class BeanSerializerBase extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase implements com.flurry.org.codehaus.jackson.map.ResolvableSerializer, com.flurry.org.codehaus.jackson.schema.SchemaAware {
    protected static final com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] NO_PROPS;
    protected final com.flurry.org.codehaus.jackson.map.ser.AnyGetterWriter _anyGetterWriter;
    protected final com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] _filteredProps;
    protected final Object _propertyFilterId;
    protected final com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] _props;

    static BeanSerializerBase()
    {
        com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] v0_1 = new com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[0];
        com.flurry.org.codehaus.jackson.map.ser.std.BeanSerializerBase.NO_PROPS = v0_1;
        return;
    }

    protected BeanSerializerBase(com.flurry.org.codehaus.jackson.map.ser.std.BeanSerializerBase p7)
    {
        this(p7._handledType, p7._props, p7._filteredProps, p7._anyGetterWriter, p7._propertyFilterId);
        return;
    }

    protected BeanSerializerBase(com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] p2, com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] p3, com.flurry.org.codehaus.jackson.map.ser.AnyGetterWriter p4, Object p5)
    {
        super(p1);
        super._props = p2;
        super._filteredProps = p3;
        super._anyGetterWriter = p4;
        super._propertyFilterId = p5;
        return;
    }

    public BeanSerializerBase(Class p1, com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] p2, com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] p3, com.flurry.org.codehaus.jackson.map.ser.AnyGetterWriter p4, Object p5)
    {
        super(p1);
        super._props = p2;
        super._filteredProps = p3;
        super._anyGetterWriter = p4;
        super._propertyFilterId = p5;
        return;
    }

    protected com.flurry.org.codehaus.jackson.map.ser.BeanPropertyFilter findFilter(com.flurry.org.codehaus.jackson.map.SerializerProvider p7)
    {
        Object v1 = this._propertyFilterId;
        com.flurry.org.codehaus.jackson.map.ser.FilterProvider v2 = p7.getFilterProvider();
        if (v2 != null) {
            return v2.findFilter(v1);
        } else {
            throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Can not resolve BeanPropertyFilter with id \'").append(v1).append("\'; no FilterProvider configured").toString());
        }
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p12, reflect.Type p13)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v2 = this.createSchemaNode("object", 1);
        com.flurry.org.codehaus.jackson.node.ObjectNode v5 = v2.objectNode();
        int v1 = 0;
        while (v1 < this._props.length) {
            Class v0;
            com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter v3 = this._props[v1];
            com.flurry.org.codehaus.jackson.type.JavaType v4 = v3.getSerializationType();
            if (v4 != null) {
                v0 = v4.getRawClass();
            } else {
                v0 = v3.getGenericPropertyType();
            }
            com.flurry.org.codehaus.jackson.schema.SchemaAware v7_0 = v3.getSerializer();
            if (v7_0 == null) {
                Class v8 = v3.getRawSerializationType();
                if (v8 == null) {
                    v8 = v3.getPropertyType();
                }
                v7_0 = p12.findValueSerializer(v8, v3);
            }
            com.flurry.org.codehaus.jackson.JsonNode v6;
            if (!(v7_0 instanceof com.flurry.org.codehaus.jackson.schema.SchemaAware)) {
                v6 = com.flurry.org.codehaus.jackson.schema.JsonSchema.getDefaultSchemaNode();
            } else {
                v6 = ((com.flurry.org.codehaus.jackson.schema.SchemaAware) v7_0).getSchema(p12, v0);
            }
            v5.put(v3.getName(), v6);
            v1++;
        }
        v2.put("properties", v5);
        return v2;
    }

    public void resolve(com.flurry.org.codehaus.jackson.map.SerializerProvider p12)
    {
        int v0;
        if (this._filteredProps != null) {
            v0 = this._filteredProps.length;
        } else {
            v0 = 0;
        }
        int v1 = 0;
        int v2 = this._props.length;
        while (v1 < v2) {
            com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter v3_0 = this._props[v1];
            if (!v3_0.hasSerializer()) {
                com.flurry.org.codehaus.jackson.type.JavaType v6 = v3_0.getSerializationType();
                if (v6 == null) {
                    v6 = p12.constructType(v3_0.getGenericPropertyType());
                    if (!v6.isFinal()) {
                        if ((!v6.isContainerType()) && (v6.containedTypeCount() <= 0)) {
                            v1++;
                        } else {
                            v3_0.setNonTrivialBaseType(v6);
                        }
                    }
                }
                com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase v4_0 = p12.findValueSerializer(v6, v3_0);
                if (v6.isContainerType()) {
                    com.flurry.org.codehaus.jackson.map.TypeSerializer v7_1 = ((com.flurry.org.codehaus.jackson.map.TypeSerializer) v6.getContentType().getTypeHandler());
                    if ((v7_1 != null) && ((v4_0 instanceof com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase))) {
                        v4_0 = ((com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase) v4_0).withValueTypeSerializer(v7_1);
                    }
                }
                this._props[v1] = v3_0.withSerializer(v4_0);
                if (v1 < v0) {
                    com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter v8 = this._filteredProps[v1];
                    if (v8 != null) {
                        this._filteredProps[v1] = v8.withSerializer(v4_0);
                    }
                }
            }
        }
        if (this._anyGetterWriter != null) {
            this._anyGetterWriter.resolve(p12);
        }
        return;
    }

    public abstract void serialize(Object p0, com.flurry.org.codehaus.jackson.JsonGenerator p1, com.flurry.org.codehaus.jackson.map.SerializerProvider p2);

    protected void serializeFields(Object p9, com.flurry.org.codehaus.jackson.JsonGenerator p10, com.flurry.org.codehaus.jackson.map.SerializerProvider p11)
    {
        if ((this._filteredProps == null) || (p11.getSerializationView() == null)) {
            com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] v6 = this._props;
        } else {
            v6 = this._filteredProps;
        }
        int v1 = 0;
        try {
            int v2 = v6.length;
        } catch (StackOverflowError v0) {
            if (v1 != v6.length) {
                String v4_1 = v6[v1].getName();
            } else {
                v4_1 = "[anySetter]";
            }
            this.wrapAndThrow(p11, v0, p9, v4_1);
            return;
        } catch (StackOverflowError v0) {
            com.flurry.org.codehaus.jackson.map.JsonMappingException v3_1 = new com.flurry.org.codehaus.jackson.map.JsonMappingException("Infinite recursion (StackOverflowError)");
            if (v1 != v6.length) {
                String v4_0 = v6[v1].getName();
            } else {
                v4_0 = "[anySetter]";
            }
            v3_1.prependPath(new com.flurry.org.codehaus.jackson.map.JsonMappingException$Reference(p9, v4_0));
            throw v3_1;
        }
        while (v1 < v2) {
            com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter v5 = v6[v1];
            if (v5 != null) {
                v5.serializeAsField(p9, p10, p11);
            }
            v1++;
        }
        if (this._anyGetterWriter == null) {
            return;
        } else {
            this._anyGetterWriter.getAndSerialize(p9, p10, p11);
            return;
        }
    }

    protected void serializeFieldsFiltered(Object p10, com.flurry.org.codehaus.jackson.JsonGenerator p11, com.flurry.org.codehaus.jackson.map.SerializerProvider p12)
    {
        if ((this._filteredProps == null) || (p12.getSerializationView() == null)) {
            com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] v7 = this._props;
        } else {
            v7 = this._filteredProps;
        }
        com.flurry.org.codehaus.jackson.map.ser.BeanPropertyFilter v1 = this.findFilter(p12);
        if (v1 != null) {
            int v2 = 0;
            try {
                int v3 = v7.length;
            } catch (StackOverflowError v0) {
                if (v2 != v7.length) {
                    String v5_1 = v7[v2].getName();
                } else {
                    v5_1 = "[anySetter]";
                }
                this.wrapAndThrow(p12, v0, p10, v5_1);
            } catch (StackOverflowError v0) {
                com.flurry.org.codehaus.jackson.map.JsonMappingException v4_1 = new com.flurry.org.codehaus.jackson.map.JsonMappingException("Infinite recursion (StackOverflowError)");
                if (v2 != v7.length) {
                    String v5_0 = v7[v2].getName();
                } else {
                    v5_0 = "[anySetter]";
                }
                v4_1.prependPath(new com.flurry.org.codehaus.jackson.map.JsonMappingException$Reference(p10, v5_0));
                throw v4_1;
            }
            while (v2 < v3) {
                com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter v6 = v7[v2];
                if (v6 != null) {
                    v1.serializeAsField(p10, p11, p12, v6);
                }
                v2++;
            }
            if (this._anyGetterWriter != null) {
                this._anyGetterWriter.getAndSerialize(p10, p11, p12);
            }
        } else {
            this.serializeFields(p10, p11, p12);
        }
        return;
    }

    public void serializeWithType(Object p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4, com.flurry.org.codehaus.jackson.map.TypeSerializer p5)
    {
        p5.writeTypePrefixForObject(p2, p3);
        if (this._propertyFilterId == null) {
            this.serializeFields(p2, p3, p4);
        } else {
            this.serializeFieldsFiltered(p2, p3, p4);
        }
        p5.writeTypeSuffixForObject(p2, p3);
        return;
    }
}
