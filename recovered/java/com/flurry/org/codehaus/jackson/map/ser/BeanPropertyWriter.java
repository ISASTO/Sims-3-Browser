package com.flurry.org.codehaus.jackson.map.ser;
public class BeanPropertyWriter implements com.flurry.org.codehaus.jackson.map.BeanProperty {
    protected final reflect.Method _accessorMethod;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _cfgSerializationType;
    protected final com.flurry.org.codehaus.jackson.map.util.Annotations _contextAnnotations;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _declaredType;
    protected com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap _dynamicSerializers;
    protected final reflect.Field _field;
    protected Class[] _includeInViews;
    protected java.util.HashMap _internalSettings;
    protected final com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember _member;
    protected final com.flurry.org.codehaus.jackson.io.SerializedString _name;
    protected com.flurry.org.codehaus.jackson.type.JavaType _nonTrivialBaseType;
    protected final com.flurry.org.codehaus.jackson.map.JsonSerializer _serializer;
    protected final boolean _suppressNulls;
    protected final Object _suppressableValue;
    protected com.flurry.org.codehaus.jackson.map.TypeSerializer _typeSerializer;

    public BeanPropertyWriter(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p2, com.flurry.org.codehaus.jackson.map.util.Annotations p3, com.flurry.org.codehaus.jackson.io.SerializedString p4, com.flurry.org.codehaus.jackson.type.JavaType p5, com.flurry.org.codehaus.jackson.map.JsonSerializer p6, com.flurry.org.codehaus.jackson.map.TypeSerializer p7, com.flurry.org.codehaus.jackson.type.JavaType p8, reflect.Method p9, reflect.Field p10, boolean p11, Object p12)
    {
        int v0;
        this._member = p2;
        this._contextAnnotations = p3;
        this._name = p4;
        this._declaredType = p5;
        this._serializer = p6;
        if (p6 != null) {
            v0 = 0;
        } else {
            v0 = com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap.emptyMap();
        }
        this._dynamicSerializers = v0;
        this._typeSerializer = p7;
        this._cfgSerializationType = p8;
        this._accessorMethod = p9;
        this._field = p10;
        this._suppressNulls = p11;
        this._suppressableValue = p12;
        return;
    }

    public BeanPropertyWriter(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p13, com.flurry.org.codehaus.jackson.map.util.Annotations p14, String p15, com.flurry.org.codehaus.jackson.type.JavaType p16, com.flurry.org.codehaus.jackson.map.JsonSerializer p17, com.flurry.org.codehaus.jackson.map.TypeSerializer p18, com.flurry.org.codehaus.jackson.type.JavaType p19, reflect.Method p20, reflect.Field p21, boolean p22, Object p23)
    {
        this(p13, p14, new com.flurry.org.codehaus.jackson.io.SerializedString(p15), p16, p17, p18, p19, p20, p21, p22, p23);
        return;
    }

    protected BeanPropertyWriter(com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter p2)
    {
        this(p2, p2._serializer);
        return;
    }

    protected BeanPropertyWriter(com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter p3, com.flurry.org.codehaus.jackson.map.JsonSerializer p4)
    {
        this._serializer = p4;
        this._member = p3._member;
        this._contextAnnotations = p3._contextAnnotations;
        this._declaredType = p3._declaredType;
        this._accessorMethod = p3._accessorMethod;
        this._field = p3._field;
        if (p3._internalSettings != null) {
            this._internalSettings = new java.util.HashMap(p3._internalSettings);
        }
        this._name = p3._name;
        this._cfgSerializationType = p3._cfgSerializationType;
        this._dynamicSerializers = p3._dynamicSerializers;
        this._suppressNulls = p3._suppressNulls;
        this._suppressableValue = p3._suppressableValue;
        this._includeInViews = p3._includeInViews;
        this._typeSerializer = p3._typeSerializer;
        this._nonTrivialBaseType = p3._nonTrivialBaseType;
        return;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _findAndAddDynamic(com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap p4, Class p5, com.flurry.org.codehaus.jackson.map.SerializerProvider p6)
    {
        com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap$SerializerAndMapResult v0;
        if (this._nonTrivialBaseType == null) {
            v0 = p4.findAndAddSerializer(p5, p6, this);
        } else {
            v0 = p4.findAndAddSerializer(p6.constructSpecializedType(this._nonTrivialBaseType, p5), p6, this);
        }
        if (p4 != v0.map) {
            this._dynamicSerializers = v0.map;
        }
        return v0.serializer;
    }

    protected void _reportSelfReference(Object p3)
    {
        throw new com.flurry.org.codehaus.jackson.map.JsonMappingException("Direct self-reference leading to cycle");
    }

    public final Object get(Object p3)
    {
        Object v0_2;
        if (this._accessorMethod == null) {
            v0_2 = this._field.get(p3);
        } else {
            Object[] v1_1 = new Object[0];
            v0_2 = 億.invokeHook(this._accessorMethod, p3, v1_1);
        }
        return v0_2;
    }

    public otation.Annotation getAnnotation(Class p2)
    {
        return this._member.getAnnotation(p2);
    }

    public otation.Annotation getContextAnnotation(Class p2)
    {
        return this._contextAnnotations.get(p2);
    }

    public reflect.Type getGenericPropertyType()
    {
        reflect.Type v0_2;
        if (this._accessorMethod == null) {
            v0_2 = this._field.getGenericType();
        } else {
            v0_2 = this._accessorMethod.getGenericReturnType();
        }
        return v0_2;
    }

    public Object getInternalSetting(Object p2)
    {
        Object v0_2;
        if (this._internalSettings != null) {
            v0_2 = this._internalSettings.get(p2);
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember getMember()
    {
        return this._member;
    }

    public String getName()
    {
        return this._name.getValue();
    }

    public Class getPropertyType()
    {
        Class v0_2;
        if (this._accessorMethod == null) {
            v0_2 = this._field.getType();
        } else {
            v0_2 = this._accessorMethod.getReturnType();
        }
        return v0_2;
    }

    public Class getRawSerializationType()
    {
        Class v0_2;
        if (this._cfgSerializationType != null) {
            v0_2 = this._cfgSerializationType.getRawClass();
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getSerializationType()
    {
        return this._cfgSerializationType;
    }

    public com.flurry.org.codehaus.jackson.io.SerializedString getSerializedName()
    {
        return this._name;
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer getSerializer()
    {
        return this._serializer;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getType()
    {
        return this._declaredType;
    }

    public Class[] getViews()
    {
        return this._includeInViews;
    }

    public boolean hasSerializer()
    {
        int v0_1;
        if (this._serializer == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public Object removeInternalSetting(Object p3)
    {
        Object v0 = 0;
        if (this._internalSettings != null) {
            v0 = this._internalSettings.remove(p3);
            if (this._internalSettings.size() == 0) {
                this._internalSettings = 0;
            }
        }
        return v0;
    }

    public void serializeAsField(Object p6, com.flurry.org.codehaus.jackson.JsonGenerator p7, com.flurry.org.codehaus.jackson.map.SerializerProvider p8)
    {
        Object v3 = this.get(p6);
        if (v3 != null) {
            if (v3 == p6) {
                this._reportSelfReference(p6);
            }
            if ((this._suppressableValue == null) || (!this._suppressableValue.equals(v3))) {
                com.flurry.org.codehaus.jackson.map.JsonSerializer v2 = this._serializer;
                if (v2 == null) {
                    Class v0 = v3.getClass();
                    com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap v1 = this._dynamicSerializers;
                    v2 = v1.serializerFor(v0);
                    if (v2 == null) {
                        v2 = this._findAndAddDynamic(v1, v0, p8);
                    }
                }
                p7.writeFieldName(this._name);
                if (this._typeSerializer != null) {
                    v2.serializeWithType(v3, p7, p8, this._typeSerializer);
                } else {
                    v2.serialize(v3, p7, p8);
                }
            }
        } else {
            if (!this._suppressNulls) {
                p7.writeFieldName(this._name);
                p8.defaultSerializeNull(p7);
            }
        }
        return;
    }

    public Object setInternalSetting(Object p2, Object p3)
    {
        if (this._internalSettings == null) {
            this._internalSettings = new java.util.HashMap();
        }
        return this._internalSettings.put(p2, p3);
    }

    public void setNonTrivialBaseType(com.flurry.org.codehaus.jackson.type.JavaType p1)
    {
        this._nonTrivialBaseType = p1;
        return;
    }

    public void setViews(Class[] p1)
    {
        this._includeInViews = p1;
        return;
    }

    public String toString()
    {
        StringBuilder v0_1 = new StringBuilder(40);
        v0_1.append("property \'").append(this.getName()).append("\' (");
        if (this._accessorMethod == null) {
            v0_1.append("field \"").append(this._field.getDeclaringClass().getName()).append("#").append(this._field.getName());
        } else {
            v0_1.append("via method ").append(this._accessorMethod.getDeclaringClass().getName()).append("#").append(this._accessorMethod.getName());
        }
        if (this._serializer != null) {
            v0_1.append(new StringBuilder().append(", static serializer of type ").append(this._serializer.getClass().getName()).toString());
        } else {
            v0_1.append(", no static serializer");
        }
        v0_1.append(41);
        return v0_1.toString();
    }

    public com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter unwrappingWriter()
    {
        return new com.flurry.org.codehaus.jackson.map.ser.impl.UnwrappingBeanPropertyWriter(this);
    }

    public com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter withSerializer(com.flurry.org.codehaus.jackson.map.JsonSerializer p3)
    {
        if (this.getClass() == com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter) {
            return new com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter(this, p3);
        } else {
            throw new IllegalStateException("BeanPropertyWriter sub-class does not override \'withSerializer()\'; needs to!");
        }
    }
}
