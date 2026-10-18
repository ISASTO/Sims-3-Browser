package com.flurry.org.codehaus.jackson.map.ser.std;
public class MapSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase implements com.flurry.org.codehaus.jackson.map.ResolvableSerializer {
    protected static final com.flurry.org.codehaus.jackson.type.JavaType UNSPECIFIED_TYPE;
    protected com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap _dynamicValueSerializers;
    protected final java.util.HashSet _ignoredEntries;
    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _keySerializer;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _keyType;
    protected final com.flurry.org.codehaus.jackson.map.BeanProperty _property;
    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _valueSerializer;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _valueType;
    protected final boolean _valueTypeIsStatic;
    protected final com.flurry.org.codehaus.jackson.map.TypeSerializer _valueTypeSerializer;

    static MapSerializer()
    {
        com.flurry.org.codehaus.jackson.map.ser.std.MapSerializer.UNSPECIFIED_TYPE = com.flurry.org.codehaus.jackson.map.type.TypeFactory.unknownType();
        return;
    }

    protected MapSerializer()
    {
        this(((java.util.HashSet) 0), 0, 0, 0, 0, 0, 0, 0);
        return;
    }

    protected MapSerializer(java.util.HashSet p3, com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.type.JavaType p5, boolean p6, com.flurry.org.codehaus.jackson.map.TypeSerializer p7, com.flurry.org.codehaus.jackson.map.JsonSerializer p8, com.flurry.org.codehaus.jackson.map.JsonSerializer p9, com.flurry.org.codehaus.jackson.map.BeanProperty p10)
    {
        super(java.util.Map, 0);
        super._property = p10;
        super._ignoredEntries = p3;
        super._keyType = p4;
        super._valueType = p5;
        super._valueTypeIsStatic = p6;
        super._valueTypeSerializer = p7;
        super._keySerializer = p8;
        super._valueSerializer = p9;
        super._dynamicValueSerializers = com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap.emptyMap();
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.ser.std.MapSerializer construct(String[] p7, com.flurry.org.codehaus.jackson.type.JavaType p8, boolean p9, com.flurry.org.codehaus.jackson.map.TypeSerializer p10, com.flurry.org.codehaus.jackson.map.BeanProperty p11)
    {
        return com.flurry.org.codehaus.jackson.map.ser.std.MapSerializer.construct(p7, p8, p9, p10, p11, 0, 0);
    }

    public static com.flurry.org.codehaus.jackson.map.ser.std.MapSerializer construct(String[] p9, com.flurry.org.codehaus.jackson.type.JavaType p10, boolean p11, com.flurry.org.codehaus.jackson.map.TypeSerializer p12, com.flurry.org.codehaus.jackson.map.BeanProperty p13, com.flurry.org.codehaus.jackson.map.JsonSerializer p14, com.flurry.org.codehaus.jackson.map.JsonSerializer p15)
    {
        com.flurry.org.codehaus.jackson.type.JavaType v2;
        com.flurry.org.codehaus.jackson.type.JavaType v3;
        java.util.HashSet v1 = com.flurry.org.codehaus.jackson.map.ser.std.MapSerializer.toSet(p9);
        if (p10 != null) {
            v2 = p10.getKeyType();
            v3 = p10.getContentType();
        } else {
            v3 = com.flurry.org.codehaus.jackson.map.ser.std.MapSerializer.UNSPECIFIED_TYPE;
            v2 = v3;
        }
        if (p11 == 0) {
            if ((v3 == null) || (!v3.isFinal())) {
                p11 = 0;
            } else {
                p11 = 1;
            }
        }
        return new com.flurry.org.codehaus.jackson.map.ser.std.MapSerializer(v1, v2, v3, p11, p12, p14, p15, p13);
    }

    private static java.util.HashSet toSet(String[] p6)
    {
        if ((p6 != null) && (p6.length != 0)) {
            java.util.HashSet v4_0 = new java.util.HashSet(p6.length);
            int v2 = p6.length;
            int v1 = 0;
            while (v1 < v2) {
                v4_0.add(p6[v1]);
                v1++;
            }
        } else {
            v4_0 = 0;
        }
        return v4_0;
    }

    protected final com.flurry.org.codehaus.jackson.map.JsonSerializer _findAndAddDynamic(com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap p3, com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5)
    {
        com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$SerializerAndMapResult v0 = p3.findAndAddSerializer(p4, p5, this._property);
        if (p3 != v0.map) {
            this._dynamicValueSerializers = v0.map;
        }
        return v0.serializer;
    }

    protected final com.flurry.org.codehaus.jackson.map.JsonSerializer _findAndAddDynamic(com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap p3, Class p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5)
    {
        com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$SerializerAndMapResult v0 = p3.findAndAddSerializer(p4, p5, this._property);
        if (p3 != v0.map) {
            this._dynamicValueSerializers = v0.map;
        }
        return v0.serializer;
    }

    public com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase _withValueTypeSerializer(com.flurry.org.codehaus.jackson.map.TypeSerializer p10)
    {
        com.flurry.org.codehaus.jackson.map.ser.std.MapSerializer v0_1 = new com.flurry.org.codehaus.jackson.map.ser.std.MapSerializer(this._ignoredEntries, this._keyType, this._valueType, this._valueTypeIsStatic, p10, this._keySerializer, this._valueSerializer, this._property);
        if (this._valueSerializer != null) {
            v0_1._valueSerializer = this._valueSerializer;
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p4, reflect.Type p5)
    {
        return this.createSchemaNode("object", 1);
    }

    public void resolve(com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        if ((this._valueTypeIsStatic) && (this._valueSerializer == null)) {
            this._valueSerializer = p3.findValueSerializer(this._valueType, this._property);
        }
        if (this._keySerializer == null) {
            this._keySerializer = p3.findKeySerializer(this._keyType, this._property);
        }
        return;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((java.util.Map) p1), p2, p3);
        return;
    }

    public void serialize(java.util.Map p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        p3.writeStartObject();
        if (!p2.isEmpty()) {
            if (this._valueSerializer == null) {
                this.serializeFields(p2, p3, p4);
            } else {
                this.serializeFieldsUsing(p2, p3, p4, this._valueSerializer);
            }
        }
        p3.writeEndObject();
        return;
    }

    public void serializeFields(java.util.Map p18, com.flurry.org.codehaus.jackson.JsonGenerator p19, com.flurry.org.codehaus.jackson.map.SerializerProvider p20)
    {
        if (this._valueTypeSerializer == null) {
            int v13;
            com.flurry.org.codehaus.jackson.map.JsonSerializer v10 = this._keySerializer;
            java.util.HashSet v7 = this._ignoredEntries;
            if (p20.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_NULL_MAP_VALUES)) {
                v13 = 0;
            } else {
                v13 = 1;
            }
            com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap v12 = this._dynamicValueSerializers;
            java.util.Iterator v6 = p18.entrySet().iterator();
            while (v6.hasNext()) {
                java.util.Map$Entry v5_1 = ((java.util.Map$Entry) v6.next());
                Object v14 = v5_1.getValue();
                Object v9 = v5_1.getKey();
                if (v9 != null) {
                    if (((v13 == 0) || (v14 != null)) && ((v7 == null) || (!v7.contains(v9)))) {
                        v10.serialize(v9, p19, p20);
                    }
                } else {
                    p20.getNullKeySerializer().serialize(0, p19, p20);
                }
                if (v14 != null) {
                    Class v3 = v14.getClass();
                    com.flurry.org.codehaus.jackson.map.JsonSerializer v11 = v12.serializerFor(v3);
                    if (v11 == null) {
                        if (!this._valueType.hasGenericTypes()) {
                            v11 = this._findAndAddDynamic(v12, v3, p20);
                        } else {
                            v11 = this._findAndAddDynamic(v12, p20.constructSpecializedType(this._valueType, v3), p20);
                        }
                        v12 = this._dynamicValueSerializers;
                    }
                    try {
                        v11.serialize(v14, p19, p20);
                    } catch (Exception v4) {
                        this.wrapAndThrow(p20, v4, p18, new StringBuilder().append("").append(v9).toString());
                    }
                } else {
                    p20.defaultSerializeNull(p19);
                }
            }
        } else {
            this.serializeTypedFields(p18, p19, p20);
        }
        return;
    }

    protected void serializeFieldsUsing(java.util.Map p16, com.flurry.org.codehaus.jackson.JsonGenerator p17, com.flurry.org.codehaus.jackson.map.SerializerProvider p18, com.flurry.org.codehaus.jackson.map.JsonSerializer p19)
    {
        int v10;
        com.flurry.org.codehaus.jackson.map.JsonSerializer v9 = this._keySerializer;
        java.util.HashSet v6 = this._ignoredEntries;
        com.flurry.org.codehaus.jackson.map.TypeSerializer v11 = this._valueTypeSerializer;
        if (p18.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_NULL_MAP_VALUES)) {
            v10 = 0;
        } else {
            v10 = 1;
        }
        java.util.Iterator v5 = p16.entrySet().iterator();
        while (v5.hasNext()) {
            java.util.Map$Entry v4_1 = ((java.util.Map$Entry) v5.next());
            Object v12 = v4_1.getValue();
            Object v8 = v4_1.getKey();
            if (v8 != null) {
                if (((v10 == 0) || (v12 != null)) && ((v6 == null) || (!v6.contains(v8)))) {
                    v9.serialize(v8, p17, p18);
                }
            } else {
                p18.getNullKeySerializer().serialize(0, p17, p18);
            }
            if (v12 != null) {
                try {
                    if (v11 != null) {
                        p19.serializeWithType(v12, p17, p18, v11);
                    } else {
                        p19.serialize(v12, p17, p18);
                    }
                } catch (Exception v3) {
                    this.wrapAndThrow(p18, v3, p16, new StringBuilder().append("").append(v8).toString());
                }
            } else {
                p18.defaultSerializeNull(p17);
            }
        }
        return;
    }

    protected void serializeTypedFields(java.util.Map p20, com.flurry.org.codehaus.jackson.JsonGenerator p21, com.flurry.org.codehaus.jackson.map.SerializerProvider p22)
    {
        int v15;
        com.flurry.org.codehaus.jackson.map.JsonSerializer v12 = this._keySerializer;
        com.flurry.org.codehaus.jackson.map.JsonSerializer v14 = 0;
        Class v13 = 0;
        java.util.HashSet v9 = this._ignoredEntries;
        if (p22.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_NULL_MAP_VALUES)) {
            v15 = 0;
        } else {
            v15 = 1;
        }
        java.util.Iterator v8 = p20.entrySet().iterator();
        while (v8.hasNext()) {
            java.util.Map$Entry v7_1 = ((java.util.Map$Entry) v8.next());
            Object v16 = v7_1.getValue();
            Object v11 = v7_1.getKey();
            if (v11 != null) {
                if (((v15 == 0) || (v16 != null)) && ((v9 == null) || (!v9.contains(v11)))) {
                    v12.serialize(v11, p21, p22);
                }
            } else {
                p22.getNullKeySerializer().serialize(0, p21, p22);
            }
            if (v16 != null) {
                com.flurry.org.codehaus.jackson.map.JsonSerializer v5;
                Class v4 = v16.getClass();
                if (v4 != v13) {
                    v5 = p22.findValueSerializer(v4, this._property);
                    v14 = v5;
                    v13 = v4;
                } else {
                    v5 = v14;
                }
                try {
                    v5.serializeWithType(v16, p21, p22, this._valueTypeSerializer);
                } catch (Exception v6) {
                    this.wrapAndThrow(p22, v6, p20, new StringBuilder().append("").append(v11).toString());
                }
            } else {
                p22.defaultSerializeNull(p21);
            }
        }
        return;
    }

    public bridge synthetic void serializeWithType(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4)
    {
        this.serializeWithType(((java.util.Map) p1), p2, p3, p4);
        return;
    }

    public void serializeWithType(java.util.Map p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4, com.flurry.org.codehaus.jackson.map.TypeSerializer p5)
    {
        p5.writeTypePrefixForObject(p2, p3);
        if (!p2.isEmpty()) {
            if (this._valueSerializer == null) {
                this.serializeFields(p2, p3, p4);
            } else {
                this.serializeFieldsUsing(p2, p3, p4, this._valueSerializer);
            }
        }
        p5.writeTypeSuffixForObject(p2, p3);
        return;
    }
}
