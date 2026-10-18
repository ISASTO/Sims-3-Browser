package com.flurry.org.codehaus.jackson.map.ser.std;
public class EnumMapSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase implements com.flurry.org.codehaus.jackson.map.ResolvableSerializer {
    protected final com.flurry.org.codehaus.jackson.map.util.EnumValues _keyEnums;
    protected final com.flurry.org.codehaus.jackson.map.BeanProperty _property;
    protected final boolean _staticTyping;
    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _valueSerializer;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _valueType;
    protected final com.flurry.org.codehaus.jackson.map.TypeSerializer _valueTypeSerializer;

    public EnumMapSerializer(com.flurry.org.codehaus.jackson.type.JavaType p8, boolean p9, com.flurry.org.codehaus.jackson.map.util.EnumValues p10, com.flurry.org.codehaus.jackson.map.TypeSerializer p11, com.flurry.org.codehaus.jackson.map.BeanProperty p12)
    {
        this(p8, p9, p10, p11, p12, 0);
        return;
    }

    public EnumMapSerializer(com.flurry.org.codehaus.jackson.type.JavaType p3, boolean p4, com.flurry.org.codehaus.jackson.map.util.EnumValues p5, com.flurry.org.codehaus.jackson.map.TypeSerializer p6, com.flurry.org.codehaus.jackson.map.BeanProperty p7, com.flurry.org.codehaus.jackson.map.JsonSerializer p8)
    {
        int v0 = 0;
        super(java.util.EnumMap, 0);
        if ((p4) || ((p3 != null) && (p3.isFinal()))) {
            v0 = 1;
        }
        super._staticTyping = v0;
        super._valueType = p3;
        super._keyEnums = p5;
        super._valueTypeSerializer = p6;
        super._property = p7;
        super._valueSerializer = p8;
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase _withValueTypeSerializer(com.flurry.org.codehaus.jackson.map.TypeSerializer p8)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.std.EnumMapSerializer(this._valueType, this._staticTyping, this._keyEnums, p8, this._property, this._valueSerializer);
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p16, reflect.Type p17)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v7 = this.createSchemaNode("object", 1);
        if ((p17 instanceof reflect.ParameterizedType)) {
            reflect.Type[] v11 = ((reflect.ParameterizedType) p17).getActualTypeArguments();
            if (v11.length == 2) {
                com.flurry.org.codehaus.jackson.type.JavaType v3 = p16.constructType(v11[0]);
                com.flurry.org.codehaus.jackson.type.JavaType v12 = p16.constructType(v11[1]);
                com.flurry.org.codehaus.jackson.node.ObjectNode v8 = com.flurry.org.codehaus.jackson.node.JsonNodeFactory.instance.objectNode();
                Enum[] v1_1 = ((Enum[]) v3.getRawClass().getEnumConstants());
                int v6 = v1_1.length;
                int v5 = 0;
                while (v5 < v6) {
                    com.flurry.org.codehaus.jackson.JsonNode v9;
                    Enum v4 = v1_1[v5];
                    com.flurry.org.codehaus.jackson.schema.SchemaAware v10_0 = p16.findValueSerializer(v12.getRawClass(), this._property);
                    if (!(v10_0 instanceof com.flurry.org.codehaus.jackson.schema.SchemaAware)) {
                        v9 = com.flurry.org.codehaus.jackson.schema.JsonSchema.getDefaultSchemaNode();
                    } else {
                        v9 = ((com.flurry.org.codehaus.jackson.schema.SchemaAware) v10_0).getSchema(p16, 0);
                    }
                    v8.put(p16.getConfig().getAnnotationIntrospector().findEnumValue(v4), v9);
                    v5++;
                }
                v7.put("properties", v8);
            }
        }
        return v7;
    }

    public void resolve(com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        if ((this._staticTyping) && (this._valueSerializer == null)) {
            this._valueSerializer = p3.findValueSerializer(this._valueType, this._property);
        }
        return;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((java.util.EnumMap) p1), p2, p3);
        return;
    }

    public void serialize(java.util.EnumMap p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        p3.writeStartObject();
        if (!p2.isEmpty()) {
            this.serializeContents(p2, p3, p4);
        }
        p3.writeEndObject();
        return;
    }

    protected void serializeContents(java.util.EnumMap p18, com.flurry.org.codehaus.jackson.JsonGenerator p19, com.flurry.org.codehaus.jackson.map.SerializerProvider p20)
    {
        if (this._valueSerializer == null) {
            com.flurry.org.codehaus.jackson.map.JsonSerializer v12 = 0;
            Class v11 = 0;
            com.flurry.org.codehaus.jackson.map.util.EnumValues v10 = this._keyEnums;
            java.util.Iterator v8 = p18.entrySet().iterator();
            while (v8.hasNext()) {
                java.util.Map$Entry v7_1 = ((java.util.Map$Entry) v8.next());
                Enum v9_1 = ((Enum) v7_1.getKey());
                if (v10 == null) {
                    v10 = ((com.flurry.org.codehaus.jackson.map.ser.std.EnumSerializer) ((com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase) p20.findValueSerializer(v9_1.getDeclaringClass(), this._property))).getEnumValues();
                }
                p19.writeFieldName(v10.serializedValueFor(v9_1));
                Object v14 = v7_1.getValue();
                if (v14 != null) {
                    com.flurry.org.codehaus.jackson.map.JsonSerializer v5;
                    Class v4 = v14.getClass();
                    if (v4 != v11) {
                        v5 = p20.findValueSerializer(v4, this._property);
                        v12 = v5;
                        v11 = v4;
                    } else {
                        v5 = v12;
                    }
                    try {
                        v5.serialize(v14, p19, p20);
                    } catch (Exception v6) {
                        this.wrapAndThrow(p20, v6, p18, ((Enum) v7_1.getKey()).name());
                    }
                } else {
                    p20.defaultSerializeNull(p19);
                }
            }
        } else {
            this.serializeContentsUsing(p18, p19, p20, this._valueSerializer);
        }
        return;
    }

    protected void serializeContentsUsing(java.util.EnumMap p10, com.flurry.org.codehaus.jackson.JsonGenerator p11, com.flurry.org.codehaus.jackson.map.SerializerProvider p12, com.flurry.org.codehaus.jackson.map.JsonSerializer p13)
    {
        com.flurry.org.codehaus.jackson.map.util.EnumValues v4 = this._keyEnums;
        java.util.Iterator v2 = p10.entrySet().iterator();
        while (v2.hasNext()) {
            java.util.Map$Entry v1_1 = ((java.util.Map$Entry) v2.next());
            Enum v3_1 = ((Enum) v1_1.getKey());
            if (v4 == null) {
                v4 = ((com.flurry.org.codehaus.jackson.map.ser.std.EnumSerializer) ((com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase) p12.findValueSerializer(v3_1.getDeclaringClass(), this._property))).getEnumValues();
            }
            p11.writeFieldName(v4.serializedValueFor(v3_1));
            Object v6 = v1_1.getValue();
            if (v6 != null) {
                try {
                    p13.serialize(v6, p11, p12);
                } catch (Exception v0) {
                    this.wrapAndThrow(p12, v0, p10, ((Enum) v1_1.getKey()).name());
                }
            } else {
                p12.defaultSerializeNull(p11);
            }
        }
        return;
    }

    public bridge synthetic void serializeWithType(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4)
    {
        this.serializeWithType(((java.util.EnumMap) p1), p2, p3, p4);
        return;
    }

    public void serializeWithType(java.util.EnumMap p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4, com.flurry.org.codehaus.jackson.map.TypeSerializer p5)
    {
        p5.writeTypePrefixForObject(p2, p3);
        if (!p2.isEmpty()) {
            this.serializeContents(p2, p3, p4);
        }
        p5.writeTypeSuffixForObject(p2, p3);
        return;
    }
}
