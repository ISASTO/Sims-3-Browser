package com.flurry.org.codehaus.jackson.map.deser;
public final class SettableAnyProperty {
    protected final com.flurry.org.codehaus.jackson.map.BeanProperty _property;
    protected final reflect.Method _setter;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _type;
    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _valueDeserializer;

    public SettableAnyProperty(com.flurry.org.codehaus.jackson.map.BeanProperty p2, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p3, com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        this(p2, p3, p4, 0);
        return;
    }

    public SettableAnyProperty(com.flurry.org.codehaus.jackson.map.BeanProperty p2, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p3, com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.map.JsonDeserializer p5)
    {
        this(p2, p3.getAnnotated(), p4, p5);
        return;
    }

    public SettableAnyProperty(com.flurry.org.codehaus.jackson.map.BeanProperty p1, reflect.Method p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.JsonDeserializer p4)
    {
        this._property = p1;
        this._type = p3;
        this._setter = p2;
        this._valueDeserializer = p4;
        return;
    }

    private String getClassName()
    {
        return this._setter.getDeclaringClass().getName();
    }

    protected void _throwAsIOE(Exception p8, String p9, Object p10)
    {
        if (!(p8 instanceof IllegalArgumentException)) {
            if (!(p8 instanceof java.io.IOException)) {
                if (!(p8 instanceof RuntimeException)) {
                    Throwable v3 = p8;
                    while (v3.getCause() != null) {
                        v3 = v3.getCause();
                    }
                    throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(v3.getMessage(), 0, v3);
                } else {
                    throw ((RuntimeException) p8);
                }
            } else {
                throw ((java.io.IOException) p8);
            }
        } else {
            String v0;
            if (p10 != null) {
                v0 = p10.getClass().getName();
            } else {
                v0 = "[NULL]";
            }
            StringBuilder v1 = new StringBuilder("Problem deserializing \"any\" property \'").append(p9);
            v1.append(new StringBuilder().append("\' of class ").append(this.getClassName()).append(" (expected type: ").toString()).append(this._type);
            v1.append("; actual type: ").append(v0).append(")");
            String v2 = p8.getMessage();
            if (v2 == null) {
                v1.append(" (no error message provided)");
            } else {
                v1.append(", problem: ").append(v2);
            }
            throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(v1.toString(), 0, p8);
        }
    }

    public final Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        Object v1_2;
        if (p3.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
            v1_2 = this._valueDeserializer.deserialize(p3, p4);
        } else {
            v1_2 = 0;
        }
        return v1_2;
    }

    public final void deserializeAndSet(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, Object p4, String p5)
    {
        this.set(p4, p5, this.deserialize(p2, p3));
        return;
    }

    public com.flurry.org.codehaus.jackson.map.BeanProperty getProperty()
    {
        return this._property;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getType()
    {
        return this._type;
    }

    public boolean hasValueDeserializer()
    {
        int v0_1;
        if (this._valueDeserializer == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public final void set(Object p5, String p6, Object p7)
    {
        try {
            reflect.Method v1 = this._setter;
            Object[] v2_1 = new Object[2];
            v2_1[0] = p6;
            v2_1[1] = p7;
            億.invokeHook(v1, p5, v2_1);
        } catch (Exception v0) {
            this._throwAsIOE(v0, p6, p7);
        }
        return;
    }

    public void setValueDeserializer(com.flurry.org.codehaus.jackson.map.JsonDeserializer p3)
    {
        if (this._valueDeserializer == null) {
            this._valueDeserializer = p3;
            return;
        } else {
            throw new IllegalStateException("Already had assigned deserializer for SettableAnyProperty");
        }
    }

    public String toString()
    {
        return new StringBuilder().append("[any property on class ").append(this.getClassName()).append("]").toString();
    }

    public com.flurry.org.codehaus.jackson.map.deser.SettableAnyProperty withValueDeserializer(com.flurry.org.codehaus.jackson.map.JsonDeserializer p5)
    {
        return new com.flurry.org.codehaus.jackson.map.deser.SettableAnyProperty(this._property, this._setter, this._type, p5);
    }
}
