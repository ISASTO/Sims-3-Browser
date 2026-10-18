package com.flurry.org.codehaus.jackson.map.ser.std;
public abstract class SerializerBase extends com.flurry.org.codehaus.jackson.map.JsonSerializer implements com.flurry.org.codehaus.jackson.schema.SchemaAware {
    protected final Class _handledType;

    protected SerializerBase(com.flurry.org.codehaus.jackson.type.JavaType p2)
    {
        this._handledType = p2.getRawClass();
        return;
    }

    protected SerializerBase(Class p1)
    {
        this._handledType = p1;
        return;
    }

    protected SerializerBase(Class p1, boolean p2)
    {
        this._handledType = p1;
        return;
    }

    protected com.flurry.org.codehaus.jackson.node.ObjectNode createObjectNode()
    {
        return com.flurry.org.codehaus.jackson.node.JsonNodeFactory.instance.objectNode();
    }

    protected com.flurry.org.codehaus.jackson.node.ObjectNode createSchemaNode(String p3)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v0 = this.createObjectNode();
        v0.put("type", p3);
        return v0;
    }

    protected com.flurry.org.codehaus.jackson.node.ObjectNode createSchemaNode(String p4, boolean p5)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v0 = this.createSchemaNode(p4);
        if (!p5) {
            int v1;
            if (p5) {
                v1 = 0;
            } else {
                v1 = 1;
            }
            v0.put("required", v1);
        }
        return v0;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p2, reflect.Type p3)
    {
        return this.createSchemaNode("string");
    }

    public final Class handledType()
    {
        return this._handledType;
    }

    protected boolean isDefaultSerializer(com.flurry.org.codehaus.jackson.map.JsonSerializer p3)
    {
        if ((p3 == null) || (p3.getClass().getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JacksonStdImpl) == null)) {
            int v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public abstract void serialize(Object p0, com.flurry.org.codehaus.jackson.JsonGenerator p1, com.flurry.org.codehaus.jackson.map.SerializerProvider p2);

    public void wrapAndThrow(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, Throwable p4, Object p5, int p6)
    {
        while (((p4 instanceof reflect.InvocationTargetException)) && (p4.getCause() != null)) {
            p4 = p4.getCause();
        }
        if (!(p4 instanceof Error)) {
            if ((p3 != null) && (!p3.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRAP_EXCEPTIONS))) {
                int v0 = 0;
            } else {
                v0 = 1;
            }
            if (!(p4 instanceof java.io.IOException)) {
                if ((v0 == 0) && ((p4 instanceof RuntimeException))) {
                    throw ((RuntimeException) p4);
                }
            } else {
                if ((v0 == 0) || (!(p4 instanceof com.flurry.org.codehaus.jackson.map.JsonMappingException))) {
                    throw ((java.io.IOException) p4);
                }
            }
            throw com.flurry.org.codehaus.jackson.map.JsonMappingException.wrapWithPath(p4, p5, p6);
        } else {
            throw ((Error) p4);
        }
    }

    public void wrapAndThrow(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, Throwable p4, Object p5, String p6)
    {
        while (((p4 instanceof reflect.InvocationTargetException)) && (p4.getCause() != null)) {
            p4 = p4.getCause();
        }
        if (!(p4 instanceof Error)) {
            if ((p3 != null) && (!p3.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRAP_EXCEPTIONS))) {
                int v0 = 0;
            } else {
                v0 = 1;
            }
            if (!(p4 instanceof java.io.IOException)) {
                if ((v0 == 0) && ((p4 instanceof RuntimeException))) {
                    throw ((RuntimeException) p4);
                }
            } else {
                if ((v0 == 0) || (!(p4 instanceof com.flurry.org.codehaus.jackson.map.JsonMappingException))) {
                    throw ((java.io.IOException) p4);
                }
            }
            throw com.flurry.org.codehaus.jackson.map.JsonMappingException.wrapWithPath(p4, p5, p6);
        } else {
            throw ((Error) p4);
        }
    }

    public void wrapAndThrow(Throwable p2, Object p3, int p4)
    {
        this.wrapAndThrow(0, p2, p3, p4);
        return;
    }

    public void wrapAndThrow(Throwable p2, Object p3, String p4)
    {
        this.wrapAndThrow(0, p2, p3, p4);
        return;
    }
}
