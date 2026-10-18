package com.flurry.org.codehaus.jackson.map.ser.std;
public abstract class AsArraySerializerBase extends com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase implements com.flurry.org.codehaus.jackson.map.ResolvableSerializer {
    protected com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap _dynamicSerializers;
    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _elementSerializer;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _elementType;
    protected final com.flurry.org.codehaus.jackson.map.BeanProperty _property;
    protected final boolean _staticTyping;
    protected final com.flurry.org.codehaus.jackson.map.TypeSerializer _valueTypeSerializer;

    protected AsArraySerializerBase(Class p8, com.flurry.org.codehaus.jackson.type.JavaType p9, boolean p10, com.flurry.org.codehaus.jackson.map.TypeSerializer p11, com.flurry.org.codehaus.jackson.map.BeanProperty p12)
    {
        this(p8, p9, p10, p11, p12, 0);
        return;
    }

    protected AsArraySerializerBase(Class p3, com.flurry.org.codehaus.jackson.type.JavaType p4, boolean p5, com.flurry.org.codehaus.jackson.map.TypeSerializer p6, com.flurry.org.codehaus.jackson.map.BeanProperty p7, com.flurry.org.codehaus.jackson.map.JsonSerializer p8)
    {
        com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap v0_0 = 0;
        super(p3, 0);
        super._elementType = p4;
        if ((p5) || ((p4 != null) && (p4.isFinal()))) {
            v0_0 = 1;
        }
        super._staticTyping = v0_0;
        super._valueTypeSerializer = p6;
        super._property = p7;
        super._elementSerializer = p8;
        super._dynamicSerializers = com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap.emptyMap();
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

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p9, reflect.Type p10)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v2 = this.createSchemaNode("array", 1);
        com.flurry.org.codehaus.jackson.type.JavaType v0 = 0;
        if (p10 != null) {
            v0 = p9.constructType(p10).getContentType();
            if ((v0 == null) && ((p10 instanceof reflect.ParameterizedType))) {
                reflect.Type[] v5 = ((reflect.ParameterizedType) p10).getActualTypeArguments();
                if (v5.length == 1) {
                    v0 = p9.constructType(v5[0]);
                }
            }
        }
        if ((v0 == null) && (this._elementType != null)) {
            v0 = this._elementType;
        }
        if (v0 != null) {
            com.flurry.org.codehaus.jackson.JsonNode v3 = 0;
            if (v0.getRawClass() != Object) {
                com.flurry.org.codehaus.jackson.schema.SchemaAware v4_0 = p9.findValueSerializer(v0, this._property);
                if ((v4_0 instanceof com.flurry.org.codehaus.jackson.schema.SchemaAware)) {
                    v3 = ((com.flurry.org.codehaus.jackson.schema.SchemaAware) v4_0).getSchema(p9, 0);
                }
            }
            if (v3 == null) {
                v3 = com.flurry.org.codehaus.jackson.schema.JsonSchema.getDefaultSchemaNode();
            }
            v2.put("items", v3);
        }
        return v2;
    }

    public void resolve(com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        if ((this._staticTyping) && ((this._elementType != null) && (this._elementSerializer == null))) {
            this._elementSerializer = p3.findValueSerializer(this._elementType, this._property);
        }
        return;
    }

    public final void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        p2.writeStartArray();
        this.serializeContents(p1, p2, p3);
        p2.writeEndArray();
        return;
    }

    protected abstract void serializeContents(Object p0, com.flurry.org.codehaus.jackson.JsonGenerator p1, com.flurry.org.codehaus.jackson.map.SerializerProvider p2);

    public final void serializeWithType(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4)
    {
        p4.writeTypePrefixForArray(p1, p2);
        this.serializeContents(p1, p2, p3);
        p4.writeTypeSuffixForArray(p1, p2);
        return;
    }
}
