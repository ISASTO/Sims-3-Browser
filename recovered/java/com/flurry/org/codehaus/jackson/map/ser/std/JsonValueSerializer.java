package com.flurry.org.codehaus.jackson.map.ser.std;
public class JsonValueSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase implements com.flurry.org.codehaus.jackson.map.ResolvableSerializer, com.flurry.org.codehaus.jackson.schema.SchemaAware {
    protected final reflect.Method _accessorMethod;
    protected boolean _forceTypeInformation;
    protected final com.flurry.org.codehaus.jackson.map.BeanProperty _property;
    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _valueSerializer;

    public JsonValueSerializer(reflect.Method p2, com.flurry.org.codehaus.jackson.map.JsonSerializer p3, com.flurry.org.codehaus.jackson.map.BeanProperty p4)
    {
        super(Object);
        super._accessorMethod = p2;
        super._valueSerializer = p3;
        super._property = p4;
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        com.flurry.org.codehaus.jackson.JsonNode v0_2;
        if (!(this._valueSerializer instanceof com.flurry.org.codehaus.jackson.schema.SchemaAware)) {
            v0_2 = com.flurry.org.codehaus.jackson.schema.JsonSchema.getDefaultSchemaNode();
        } else {
            v0_2 = ((com.flurry.org.codehaus.jackson.schema.SchemaAware) this._valueSerializer).getSchema(p3, 0);
        }
        return v0_2;
    }

    protected boolean isNaturalTypeWithStdHandling(com.flurry.org.codehaus.jackson.type.JavaType p5, com.flurry.org.codehaus.jackson.map.JsonSerializer p6)
    {
        int v1 = 0;
        Class v0 = p5.getRawClass();
        if (!p5.isPrimitive()) {
            if ((v0 == String) || ((v0 == Integer) || ((v0 == Boolean) || (v0 == Double)))) {
                if (p6.getClass().getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JacksonStdImpl) != null) {
                    v1 = 1;
                }
            }
        } else {
            if ((v0 == Integer.TYPE) || ((v0 == Boolean.TYPE) || (v0 == Double.TYPE))) {
            }
        }
        return v1;
    }

    public void resolve(com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        if ((this._valueSerializer == null) && ((p4.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.USE_STATIC_TYPING)) || (reflect.Modifier.isFinal(this._accessorMethod.getReturnType().getModifiers())))) {
            com.flurry.org.codehaus.jackson.type.JavaType v0 = p4.constructType(this._accessorMethod.getGenericReturnType());
            this._valueSerializer = p4.findTypedValueSerializer(v0, 0, this._property);
            this._forceTypeInformation = this.isNaturalTypeWithStdHandling(v0, this._valueSerializer);
        }
        return;
    }

    public void serialize(Object p9, com.flurry.org.codehaus.jackson.JsonGenerator p10, com.flurry.org.codehaus.jackson.map.SerializerProvider p11)
    {
        try {
            String v7_2 = new Object[0];
            Object v5 = 億.invokeHook(this._accessorMethod, p9, v7_2);
        } catch (java.io.IOException v2) {
            throw v2;
        } catch (Exception v1) {
            Error v4_0 = v1;
        }
        if (v5 != null) {
            com.flurry.org.codehaus.jackson.map.JsonSerializer v3 = this._valueSerializer;
            if (v3 == null) {
                v3 = p11.findTypedValueSerializer(v5.getClass(), 1, this._property);
            }
            v3.serialize(v5, p10, p11);
        } else {
            p11.defaultSerializeNull(p10);
        }
        return;
    }

    public void serializeWithType(Object p9, com.flurry.org.codehaus.jackson.JsonGenerator p10, com.flurry.org.codehaus.jackson.map.SerializerProvider p11, com.flurry.org.codehaus.jackson.map.TypeSerializer p12)
    {
        try {
            String v7_2 = new Object[0];
            Object v5 = 億.invokeHook(this._accessorMethod, p9, v7_2);
        } catch (java.io.IOException v2) {
            throw v2;
        } catch (Exception v1) {
            Error v4_0 = v1;
        }
        if (v5 != null) {
            com.flurry.org.codehaus.jackson.map.JsonSerializer v3_1 = this._valueSerializer;
            if (v3_1 == null) {
                p11.findTypedValueSerializer(v5.getClass(), 1, this._property).serialize(v5, p10, p11);
            } else {
                if (this._forceTypeInformation) {
                    p12.writeTypePrefixForScalar(p9, p10);
                }
                v3_1.serializeWithType(v5, p10, p11, p12);
                if (this._forceTypeInformation) {
                    p12.writeTypeSuffixForScalar(p9, p10);
                }
            }
        } else {
            p11.defaultSerializeNull(p10);
        }
        return;
    }

    public String toString()
    {
        return new StringBuilder().append("(@JsonValue serializer for method ").append(this._accessorMethod.getDeclaringClass()).append("#").append(this._accessorMethod.getName()).append(")").toString();
    }
}
