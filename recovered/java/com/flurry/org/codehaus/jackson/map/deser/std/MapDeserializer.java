package com.flurry.org.codehaus.jackson.map.deser.std;
public class MapDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.ContainerDeserializerBase implements com.flurry.org.codehaus.jackson.map.ResolvableDeserializer {
    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _delegateDeserializer;
    protected final boolean _hasDefaultCreator;
    protected java.util.HashSet _ignorableProperties;
    protected final com.flurry.org.codehaus.jackson.map.KeyDeserializer _keyDeserializer;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _mapType;
    protected com.flurry.org.codehaus.jackson.map.deser.impl.PropertyBasedCreator _propertyBasedCreator;
    protected final com.flurry.org.codehaus.jackson.map.JsonDeserializer _valueDeserializer;
    protected final com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator _valueInstantiator;
    protected final com.flurry.org.codehaus.jackson.map.TypeDeserializer _valueTypeDeserializer;

    protected MapDeserializer(com.flurry.org.codehaus.jackson.map.deser.std.MapDeserializer p2)
    {
        super(p2._valueClass);
        super._mapType = p2._mapType;
        super._keyDeserializer = p2._keyDeserializer;
        super._valueDeserializer = p2._valueDeserializer;
        super._valueTypeDeserializer = p2._valueTypeDeserializer;
        super._valueInstantiator = p2._valueInstantiator;
        super._propertyBasedCreator = p2._propertyBasedCreator;
        super._delegateDeserializer = p2._delegateDeserializer;
        super._hasDefaultCreator = p2._hasDefaultCreator;
        super._ignorableProperties = p2._ignorableProperties;
        return;
    }

    public MapDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator p3, com.flurry.org.codehaus.jackson.map.KeyDeserializer p4, com.flurry.org.codehaus.jackson.map.JsonDeserializer p5, com.flurry.org.codehaus.jackson.map.TypeDeserializer p6)
    {
        super(java.util.Map);
        super._mapType = p2;
        super._keyDeserializer = p4;
        super._valueDeserializer = p5;
        super._valueTypeDeserializer = p6;
        super._valueInstantiator = p3;
        if (!p3.canCreateFromObjectWith()) {
            super._propertyBasedCreator = 0;
        } else {
            super._propertyBasedCreator = new com.flurry.org.codehaus.jackson.map.deser.impl.PropertyBasedCreator(p3);
        }
        super._hasDefaultCreator = p3.canCreateUsingDefault();
        return;
    }

    protected MapDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p7, reflect.Constructor p8, com.flurry.org.codehaus.jackson.map.KeyDeserializer p9, com.flurry.org.codehaus.jackson.map.JsonDeserializer p10, com.flurry.org.codehaus.jackson.map.TypeDeserializer p11)
    {
        super(java.util.Map);
        super._mapType = p7;
        super._keyDeserializer = p9;
        super._valueDeserializer = p10;
        super._valueTypeDeserializer = p11;
        com.flurry.org.codehaus.jackson.map.deser.std.StdValueInstantiator v0_1 = new com.flurry.org.codehaus.jackson.map.deser.std.StdValueInstantiator(0, p7);
        if (p8 != null) {
            v0_1.configureFromObjectSettings(new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor(p8, 0, 0), 0, 0, 0, 0);
        }
        int v2_1;
        if (p8 == null) {
            v2_1 = 0;
        } else {
            v2_1 = 1;
        }
        super._hasDefaultCreator = v2_1;
        super._valueInstantiator = v0_1;
        return;
    }

    public java.util.Map _deserializeUsingCreator(com.flurry.org.codehaus.jackson.JsonParser p14, com.flurry.org.codehaus.jackson.map.DeserializationContext p15)
    {
        com.flurry.org.codehaus.jackson.map.deser.impl.PropertyBasedCreator v1 = this._propertyBasedCreator;
        com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValueBuffer v0 = v1.startBuilding(p14, p15);
        com.flurry.org.codehaus.jackson.JsonToken v8_1 = p14.getCurrentToken();
        if (v8_1 == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
            v8_1 = p14.nextToken();
        }
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v11 = this._valueDeserializer;
        com.flurry.org.codehaus.jackson.map.TypeDeserializer v9 = this._valueTypeDeserializer;
        while (v8_1 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
            String v6 = p14.getCurrentName();
            com.flurry.org.codehaus.jackson.JsonToken v8_0 = p14.nextToken();
            if ((this._ignorableProperties == null) || (!this._ignorableProperties.contains(v6))) {
                com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v5 = v1.findCreatorProperty(v6);
                if (v5 == null) {
                    Object v10_0;
                    Object v4 = this._keyDeserializer.deserializeKey(p14.getCurrentName(), p15);
                    if (v8_0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                        if (v9 != null) {
                            v10_0 = v11.deserializeWithType(p14, p15, v9);
                        } else {
                            v10_0 = v11.deserialize(p14, p15);
                        }
                    } else {
                        v10_0 = 0;
                    }
                    v0.bufferMapProperty(v4, v10_0);
                } else {
                    if (v0.assignParameter(v5.getPropertyIndex(), v5.deserialize(p14, p15))) {
                        p14.nextToken();
                        try {
                            int v7_0 = ((java.util.Map) v1.build(v0));
                            this._readAndBind(p14, p15, v7_0);
                        } catch (Exception v2_1) {
                            this.wrapAndThrow(v2_1, this._mapType.getRawClass());
                            v7_0 = 0;
                        }
                        return v7_0;
                    }
                }
            } else {
                p14.skipChildren();
            }
            v8_1 = p14.nextToken();
        }
        try {
            v7_0 = ((java.util.Map) v1.build(v0));
        } catch (Exception v2_0) {
            this.wrapAndThrow(v2_0, this._mapType.getRawClass());
            v7_0 = 0;
        }
        return v7_0;
    }

    protected final void _readAndBind(com.flurry.org.codehaus.jackson.JsonParser p9, com.flurry.org.codehaus.jackson.map.DeserializationContext p10, java.util.Map p11)
    {
        com.flurry.org.codehaus.jackson.JsonToken v3_0 = p9.getCurrentToken();
        if (v3_0 == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
            v3_0 = p9.nextToken();
        }
        com.flurry.org.codehaus.jackson.map.KeyDeserializer v2 = this._keyDeserializer;
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v6 = this._valueDeserializer;
        com.flurry.org.codehaus.jackson.map.TypeDeserializer v4 = this._valueTypeDeserializer;
        while (v3_0 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
            String v0 = p9.getCurrentName();
            Object v1 = v2.deserializeKey(v0, p10);
            com.flurry.org.codehaus.jackson.JsonToken v3_1 = p9.nextToken();
            if ((this._ignorableProperties == null) || (!this._ignorableProperties.contains(v0))) {
                Object v5;
                if (v3_1 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                    if (v4 != null) {
                        v5 = v6.deserializeWithType(p9, p10, v4);
                    } else {
                        v5 = v6.deserialize(p9, p10);
                    }
                } else {
                    v5 = 0;
                }
                p11.put(v1, v5);
            } else {
                p9.skipChildren();
            }
            v3_0 = p9.nextToken();
        }
        return;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, Object p4)
    {
        return this.deserialize(p2, p3, ((java.util.Map) p4));
    }

    public java.util.Map deserialize(com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        com.flurry.org.codehaus.jackson.map.JsonMappingException v2_4;
        if (this._propertyBasedCreator == null) {
            if (this._delegateDeserializer == null) {
                if (this._hasDefaultCreator) {
                    com.flurry.org.codehaus.jackson.JsonToken v1 = p5.getCurrentToken();
                    if ((v1 == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) || ((v1 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) || (v1 == com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT))) {
                        java.util.Map v0_1 = ((java.util.Map) this._valueInstantiator.createUsingDefault());
                        this._readAndBind(p5, p6, v0_1);
                        v2_4 = v0_1;
                    } else {
                        if (v1 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                            throw p6.mappingException(this.getMapClass());
                        } else {
                            v2_4 = ((java.util.Map) this._valueInstantiator.createFromString(p5.getText()));
                        }
                    }
                } else {
                    throw p6.instantiationException(this.getMapClass(), "No default constructor found");
                }
            } else {
                v2_4 = ((java.util.Map) this._valueInstantiator.createUsingDelegate(this._delegateDeserializer.deserialize(p5, p6)));
            }
        } else {
            v2_4 = this._deserializeUsingCreator(p5, p6);
        }
        return v2_4;
    }

    public java.util.Map deserialize(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4, java.util.Map p5)
    {
        com.flurry.org.codehaus.jackson.JsonToken v0 = p3.getCurrentToken();
        if ((v0 == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) || (v0 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME)) {
            this._readAndBind(p3, p4, p5);
            return p5;
        } else {
            throw p4.mappingException(this.getMapClass());
        }
    }

    public Object deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4)
    {
        return p4.deserializeTypedFromObject(p2, p3);
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer getContentDeserializer()
    {
        return this._valueDeserializer;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getContentType()
    {
        return this._mapType.getContentType();
    }

    public final Class getMapClass()
    {
        return this._mapType.getRawClass();
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getValueType()
    {
        return this._mapType;
    }

    public void resolve(com.flurry.org.codehaus.jackson.map.DeserializationConfig p9, com.flurry.org.codehaus.jackson.map.DeserializerProvider p10)
    {
        if (this._valueInstantiator.canCreateUsingDelegate()) {
            com.flurry.org.codehaus.jackson.type.JavaType v1 = this._valueInstantiator.getDelegateType();
            if (v1 != null) {
                this._delegateDeserializer = this.findDeserializer(p9, p10, v1, new com.flurry.org.codehaus.jackson.map.BeanProperty$Std(0, v1, 0, this._valueInstantiator.getDelegateCreator()));
            } else {
                throw new IllegalArgumentException(new StringBuilder().append("Invalid delegate-creator definition for ").append(this._mapType).append(": value instantiator (").append(this._valueInstantiator.getClass().getName()).append(") returned true for \'canCreateUsingDelegate()\', but null for \'getDelegateType()\'").toString());
            }
        }
        if (this._propertyBasedCreator != null) {
            java.util.Iterator v2 = this._propertyBasedCreator.getCreatorProperties().iterator();
            while (v2.hasNext()) {
                com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v3_1 = ((com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty) v2.next());
                if (!v3_1.hasValueDeserializer()) {
                    this._propertyBasedCreator.assignDeserializer(v3_1, this.findDeserializer(p9, p10, v3_1.getType(), v3_1));
                }
            }
        }
        return;
    }

    public void setIgnorableProperties(String[] p2)
    {
        if ((p2 != null) && (p2.length != 0)) {
            java.util.HashSet v0_1 = com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.arrayToSet(p2);
        } else {
            v0_1 = 0;
        }
        this._ignorableProperties = v0_1;
        return;
    }

    protected void wrapAndThrow(Throwable p2, Object p3)
    {
        while (((p2 instanceof reflect.InvocationTargetException)) && (p2.getCause() != null)) {
            p2 = p2.getCause();
        }
        if (!(p2 instanceof Error)) {
            if ((!(p2 instanceof java.io.IOException)) || ((p2 instanceof com.flurry.org.codehaus.jackson.map.JsonMappingException))) {
                throw com.flurry.org.codehaus.jackson.map.JsonMappingException.wrapWithPath(p2, p3, 0);
            } else {
                throw ((java.io.IOException) p2);
            }
        } else {
            throw ((Error) p2);
        }
    }
}
