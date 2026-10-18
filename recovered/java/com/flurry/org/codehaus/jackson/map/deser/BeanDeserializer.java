package com.flurry.org.codehaus.jackson.map.deser;
public class BeanDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer implements com.flurry.org.codehaus.jackson.map.ResolvableDeserializer {
    protected com.flurry.org.codehaus.jackson.map.deser.SettableAnyProperty _anySetter;
    protected final java.util.Map _backRefs;
    protected final com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap _beanProperties;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _beanType;
    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _delegateDeserializer;
    protected com.flurry.org.codehaus.jackson.map.deser.impl.ExternalTypeHandler _externalTypeIdHandler;
    protected final com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass _forClass;
    protected final java.util.HashSet _ignorableProps;
    protected final boolean _ignoreAllUnknown;
    protected final com.flurry.org.codehaus.jackson.map.deser.impl.ValueInjector[] _injectables;
    protected boolean _nonStandardCreation;
    protected final com.flurry.org.codehaus.jackson.map.BeanProperty _property;
    protected final com.flurry.org.codehaus.jackson.map.deser.impl.PropertyBasedCreator _propertyBasedCreator;
    protected java.util.HashMap _subDeserializers;
    protected com.flurry.org.codehaus.jackson.map.deser.impl.UnwrappedPropertyHandler _unwrappedPropertyHandler;
    protected final com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator _valueInstantiator;

    public BeanDeserializer(com.flurry.org.codehaus.jackson.map.BeanDescription p12, com.flurry.org.codehaus.jackson.map.BeanProperty p13, com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator p14, com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap p15, java.util.Map p16, java.util.HashSet p17, boolean p18, com.flurry.org.codehaus.jackson.map.deser.SettableAnyProperty p19, java.util.List p20)
    {
        this(p12.getClassInfo(), p12.getType(), p13, p14, p15, p16, p17, p18, p19, p20);
        return;
    }

    protected BeanDeserializer(com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer p2)
    {
        this(p2, p2._ignoreAllUnknown);
        return;
    }

    protected BeanDeserializer(com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer p2, boolean p3)
    {
        super(p2._beanType);
        super._forClass = p2._forClass;
        super._beanType = p2._beanType;
        super._property = p2._property;
        super._valueInstantiator = p2._valueInstantiator;
        super._delegateDeserializer = p2._delegateDeserializer;
        super._propertyBasedCreator = p2._propertyBasedCreator;
        super._beanProperties = p2._beanProperties;
        super._backRefs = p2._backRefs;
        super._ignorableProps = p2._ignorableProps;
        super._ignoreAllUnknown = p3;
        super._anySetter = p2._anySetter;
        super._injectables = p2._injectables;
        super._nonStandardCreation = p2._nonStandardCreation;
        super._unwrappedPropertyHandler = p2._unwrappedPropertyHandler;
        return;
    }

    protected BeanDeserializer(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3, com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.map.BeanProperty p5, com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator p6, com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap p7, java.util.Map p8, java.util.HashSet p9, boolean p10, com.flurry.org.codehaus.jackson.map.deser.SettableAnyProperty p11, java.util.List p12)
    {
        int v0_0 = 0;
        super(p4);
        super._forClass = p3;
        super._beanType = p4;
        super._property = p5;
        super._valueInstantiator = p6;
        if (!p6.canCreateFromObjectWith()) {
            super._propertyBasedCreator = 0;
        } else {
            super._propertyBasedCreator = new com.flurry.org.codehaus.jackson.map.deser.impl.PropertyBasedCreator(p6);
        }
        super._beanProperties = p7;
        super._backRefs = p8;
        super._ignorableProps = p9;
        super._ignoreAllUnknown = p10;
        super._anySetter = p11;
        if ((p12 != null) && (!p12.isEmpty())) {
            int v0_2 = new com.flurry.org.codehaus.jackson.map.deser.impl.ValueInjector[p12.size()];
            v0_0 = ((com.flurry.org.codehaus.jackson.map.deser.impl.ValueInjector[]) p12.toArray(v0_2));
        }
        int v0_8;
        super._injectables = v0_0;
        if ((!p6.canCreateUsingDelegate()) && ((super._propertyBasedCreator == null) && ((p6.canCreateUsingDefault()) && (super._unwrappedPropertyHandler == null)))) {
            v0_8 = 0;
        } else {
            v0_8 = 1;
        }
        super._nonStandardCreation = v0_8;
        return;
    }

    public BeanDeserializer(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p12, com.flurry.org.codehaus.jackson.type.JavaType p13, com.flurry.org.codehaus.jackson.map.BeanProperty p14, com.flurry.org.codehaus.jackson.map.deser.impl.CreatorCollector p15, com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap p16, java.util.Map p17, java.util.HashSet p18, boolean p19, com.flurry.org.codehaus.jackson.map.deser.SettableAnyProperty p20)
    {
        this(p12, p13, p14, p15.constructValueInstantiator(0), p16, p17, p18, p19, p20, 0);
        return;
    }

    private final void _handleUnknown(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4, Object p5, String p6)
    {
        if ((this._ignorableProps == null) || (!this._ignorableProps.contains(p6))) {
            if (this._anySetter == null) {
                this.handleUnknownProperty(p3, p4, p5, p6);
            } else {
                try {
                    this._anySetter.deserializeAndSet(p3, p4, p5, p6);
                } catch (Exception v0) {
                    this.wrapAndThrow(v0, p5, p6, p4);
                }
            }
        } else {
            p3.skipChildren();
        }
        return;
    }

    protected final Object _deserializeUsingPropertyBased(com.flurry.org.codehaus.jackson.JsonParser p14, com.flurry.org.codehaus.jackson.map.DeserializationContext p15)
    {
        Class v10 = 0;
        com.flurry.org.codehaus.jackson.map.deser.impl.PropertyBasedCreator v2 = this._propertyBasedCreator;
        com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValueBuffer v1 = v2.startBuilding(p14, p15);
        com.flurry.org.codehaus.jackson.util.TokenBuffer v8_0 = 0;
        com.flurry.org.codehaus.jackson.JsonToken v7 = p14.getCurrentToken();
        while (v7 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
            String v6 = p14.getCurrentName();
            p14.nextToken();
            com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v3 = v2.findCreatorProperty(v6);
            if (v3 == null) {
                com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v5 = this._beanProperties.find(v6);
                if (v5 == null) {
                    if ((this._ignorableProps == null) || (!this._ignorableProps.contains(v6))) {
                        if (this._anySetter == null) {
                            if (v8_0 == null) {
                                v8_0 = new com.flurry.org.codehaus.jackson.util.TokenBuffer(p14.getCodec());
                            }
                            v8_0.writeFieldName(v6);
                            v8_0.copyCurrentStructure(p14);
                        } else {
                            v1.bufferAnyProperty(this._anySetter, v6, this._anySetter.deserialize(p14, p15));
                        }
                    } else {
                        p14.skipChildren();
                    }
                } else {
                    v1.bufferProperty(v5, v5.deserialize(p14, p15));
                }
            } else {
                if (v1.assignParameter(v3.getPropertyIndex(), v3.deserialize(p14, p15))) {
                    p14.nextToken();
                    try {
                        Object v0_1 = v2.build(v1);
                        v10 = v0_1.getClass();
                    } catch (Exception v4_1) {
                        this.wrapAndThrow(v4_1, this._beanType.getRawClass(), v6, p15);
                    }
                    if (v10 == this._beanType.getRawClass()) {
                        if (v8_0 != null) {
                            v0_1 = this.handleUnknownProperties(p15, v0_1, v8_0);
                        }
                        Object v0_0 = this.deserialize(p14, p15, v0_1);
                    } else {
                        v0_0 = this.handlePolymorphic(p14, p15, v0_1, v8_0);
                    }
                    return v0_0;
                }
            }
            v7 = p14.nextToken();
        }
        try {
            v0_0 = v2.build(v1);
        } catch (Exception v4_0) {
            this.wrapInstantiationProblem(v4_0, p15);
            v0_0 = v10;
            return v0_0;
        }
        if (v8_0 != null) {
            if (v0_0.getClass() == this._beanType.getRawClass()) {
                v0_0 = this.handleUnknownProperties(p15, v0_0, v8_0);
            } else {
                v0_0 = this.handlePolymorphic(v10, p15, v0_0, v8_0);
            }
        }
        return v0_0;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _findSubclassDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationContext p8, Object p9, com.flurry.org.codehaus.jackson.util.TokenBuffer p10)
    {
        try {
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v1;
            if (this._subDeserializers != null) {
                v1 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) this._subDeserializers.get(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p9.getClass())));
            } else {
                v1 = 0;
            }
        } catch (java.util.HashMap v4_9) {
            throw v4_9;
        }
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v2;
        if (v1 == null) {
            com.flurry.org.codehaus.jackson.map.DeserializerProvider v0 = p8.getDeserializerProvider();
            try {
                if (v0 != null) {
                    v1 = v0.findValueDeserializer(p8.getConfig(), p8.constructType(p9.getClass()), this._property);
                    if (v1 != null) {
                        if (this._subDeserializers == null) {
                            this._subDeserializers = new java.util.HashMap();
                        }
                        this._subDeserializers.put(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p9.getClass()), v1);
                    }
                }
            } catch (java.util.HashMap v4_8) {
                throw v4_8;
            }
            v2 = v1;
        } else {
            v2 = v1;
        }
        return v2;
    }

    protected com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty _resolveInnerClassValuedProperty(com.flurry.org.codehaus.jackson.map.DeserializationConfig p13, com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p14)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v3 = p14.getValueDeserializer();
        if (((v3 instanceof com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer)) && (!((com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer) v3).getValueInstantiator().canCreateUsingDefault())) {
            Class v8 = p14.getType().getRawClass();
            Class v4 = com.flurry.org.codehaus.jackson.map.util.ClassUtil.getOuterClass(v8);
            if ((v4 != null) && (v4 == this._beanType.getRawClass())) {
                reflect.Constructor[] v0 = v8.getConstructors();
                int v6 = v0.length;
                int v5 = 0;
                while (v5 < v6) {
                    reflect.Constructor v2 = v0[v5];
                    Class[] v7 = v2.getParameterTypes();
                    if ((v7.length != 1) || (v7[0] != v4)) {
                        v5++;
                    } else {
                        if (p13.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS)) {
                            com.flurry.org.codehaus.jackson.map.util.ClassUtil.checkAndFixAccess(v2);
                        }
                        p14 = new com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$InnerClassProperty(p14, v2);
                        break;
                    }
                }
            }
        }
        return p14;
    }

    protected com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty _resolveManagedReferenceProperty(com.flurry.org.codehaus.jackson.map.DeserializationConfig p11, com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p12)
    {
        String v1 = p12.getManagedReferenceName();
        if (v1 != null) {
            com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v3;
            com.flurry.org.codehaus.jackson.map.deser.std.ContainerDeserializerBase v9_0 = p12.getValueDeserializer();
            int v5 = 0;
            if (!(v9_0 instanceof com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer)) {
                if (!(v9_0 instanceof com.flurry.org.codehaus.jackson.map.deser.std.ContainerDeserializerBase)) {
                    if (!(v9_0 instanceof com.flurry.org.codehaus.jackson.map.deser.AbstractDeserializer)) {
                        throw new IllegalArgumentException(new StringBuilder().append("Can not handle managed/back reference \'").append(v1).append("\': type for value deserializer is not BeanDeserializer or ContainerDeserializerBase, but ").append(v9_0.getClass().getName()).toString());
                    } else {
                        throw new IllegalArgumentException(new StringBuilder().append("Can not handle managed/back reference for abstract types (property ").append(this._beanType.getRawClass().getName()).append(".").append(p12.getName()).append(")").toString());
                    }
                } else {
                    com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer v7_0 = ((com.flurry.org.codehaus.jackson.map.deser.std.ContainerDeserializerBase) v9_0).getContentDeserializer();
                    if ((v7_0 instanceof com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer)) {
                        v3 = ((com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer) v7_0).findBackReference(v1);
                        v5 = 1;
                    } else {
                        throw new IllegalArgumentException(new StringBuilder().append("Can not handle managed/back reference \'").append(v1).append("\': value deserializer is of type ContainerDeserializerBase, but content type is not handled by a BeanDeserializer ").append(" (instead it\'s of type ").append(v7_0.getClass().getName()).append(")").toString());
                    }
                }
            } else {
                v3 = ((com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer) v9_0).findBackReference(v1);
            }
            if (v3 != null) {
                com.flurry.org.codehaus.jackson.type.JavaType v8 = this._beanType;
                com.flurry.org.codehaus.jackson.type.JavaType v6 = v3.getType();
                if (v6.getRawClass().isAssignableFrom(v8.getRawClass())) {
                    p12 = new com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$ManagedReferenceProperty(v1, p12, v3, this._forClass.getAnnotations(), v5);
                } else {
                    throw new IllegalArgumentException(new StringBuilder().append("Can not handle managed/back reference \'").append(v1).append("\': back reference type (").append(v6.getRawClass().getName()).append(") not compatible with managed type (").append(v8.getRawClass().getName()).append(")").toString());
                }
            } else {
                throw new IllegalArgumentException(new StringBuilder().append("Can not handle managed/back reference \'").append(v1).append("\': no back reference property found from type ").append(p12.getType()).toString());
            }
        }
        return p12;
    }

    protected com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty _resolveUnwrappedProperty(com.flurry.org.codehaus.jackson.map.DeserializationConfig p6, com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p7)
    {
        com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v3_0;
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember v0 = p7.getMember();
        if ((v0 == null) || (p6.getAnnotationIntrospector().shouldUnwrapProperty(v0) != Boolean.TRUE)) {
            v3_0 = 0;
        } else {
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v1 = p7.getValueDeserializer();
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v2 = v1.unwrappingDeserializer();
            if ((v2 == v1) || (v2 == null)) {
            } else {
                v3_0 = p7.withValueDeserializer(v2);
            }
        }
        return v3_0;
    }

    public final Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p4, com.flurry.org.codehaus.jackson.map.DeserializationContext p5)
    {
        Object v1_0;
        com.flurry.org.codehaus.jackson.JsonToken v0 = p4.getCurrentToken();
        if (v0 != com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
            switch (com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer$1.$SwitchMap$org$codehaus$jackson$JsonToken[v0.ordinal()]) {
                case 1:
                    v1_0 = this.deserializeFromString(p4, p5);
                    break;
                case 2:
                    v1_0 = this.deserializeFromNumber(p4, p5);
                    break;
                case 3:
                    v1_0 = this.deserializeFromDouble(p4, p5);
                    break;
                case 4:
                    v1_0 = p4.getEmbeddedObject();
                    break;
                case 5:
                case 6:
                    v1_0 = this.deserializeFromBoolean(p4, p5);
                    break;
                case 7:
                    v1_0 = this.deserializeFromArray(p4, p5);
                    break;
                case 8:
                case 9:
                    v1_0 = this.deserializeFromObject(p4, p5);
                    break;
                default:
                    throw p5.mappingException(this.getBeanClass());
            }
        } else {
            p4.nextToken();
            v1_0 = this.deserializeFromObject(p4, p5);
        }
        return v1_0;
    }

    public Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7, Object p8)
    {
        if (this._injectables != null) {
            this.injectValues(p7, p8);
        }
        if (this._unwrappedPropertyHandler == null) {
            if (this._externalTypeIdHandler == null) {
                com.flurry.org.codehaus.jackson.JsonToken v3 = p6.getCurrentToken();
                if (v3 == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
                    v3 = p6.nextToken();
                }
                while (v3 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
                    String v2 = p6.getCurrentName();
                    p6.nextToken();
                    com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v1 = this._beanProperties.find(v2);
                    if (v1 == null) {
                        if ((this._ignorableProps == null) || (!this._ignorableProps.contains(v2))) {
                            if (this._anySetter == null) {
                                this.handleUnknownProperty(p6, p7, p8, v2);
                            } else {
                                this._anySetter.deserializeAndSet(p6, p7, p8, v2);
                            }
                        } else {
                            p6.skipChildren();
                        }
                    } else {
                        try {
                            v1.deserializeAndSet(p6, p7, p8);
                        } catch (Exception v0) {
                            this.wrapAndThrow(v0, p8, v2, p7);
                        }
                    }
                    v3 = p6.nextToken();
                }
            } else {
                p8 = this.deserializeWithExternalTypeId(p6, p7, p8);
            }
        } else {
            p8 = this.deserializeWithUnwrapped(p6, p7, p8);
        }
        return p8;
    }

    public Object deserializeFromArray(com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        if (this._delegateDeserializer != null) {
            try {
                Object v0 = this._valueInstantiator.createUsingDelegate(this._delegateDeserializer.deserialize(p5, p6));
            } catch (Exception v1) {
                this.wrapInstantiationProblem(v1, p6);
            }
            if (this._injectables != null) {
                this.injectValues(p6, v0);
            }
            return v0;
        }
        throw p6.mappingException(this.getBeanClass());
    }

    public Object deserializeFromBoolean(com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        if ((this._delegateDeserializer == null) || (this._valueInstantiator.canCreateFromBoolean())) {
            int v1;
            if (p5.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_TRUE) {
                v1 = 0;
            } else {
                v1 = 1;
            }
            Object v0 = this._valueInstantiator.createFromBoolean(v1);
        } else {
            v0 = this._valueInstantiator.createUsingDelegate(this._delegateDeserializer.deserialize(p5, p6));
            if (this._injectables != null) {
                this.injectValues(p6, v0);
            }
        }
        return v0;
    }

    public Object deserializeFromDouble(com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        Object v0;
        switch (com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer$1.$SwitchMap$org$codehaus$jackson$JsonParser$NumberType[p5.getNumberType().ordinal()]) {
            case 3:
            case 4:
                if ((this._delegateDeserializer == null) || (this._valueInstantiator.canCreateFromDouble())) {
                    v0 = this._valueInstantiator.createFromDouble(p5.getDoubleValue());
                } else {
                    v0 = this._valueInstantiator.createUsingDelegate(this._delegateDeserializer.deserialize(p5, p6));
                    if (this._injectables == null) {
                    } else {
                        this.injectValues(p6, v0);
                    }
                }
                break;
            default:
                if (this._delegateDeserializer == null) {
                    throw p6.instantiationException(this.getBeanClass(), "no suitable creator method found to deserialize from JSON floating-point number");
                } else {
                    v0 = this._valueInstantiator.createUsingDelegate(this._delegateDeserializer.deserialize(p5, p6));
                }
        }
        return v0;
    }

    public Object deserializeFromNumber(com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        Object v0;
        switch (com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer$1.$SwitchMap$org$codehaus$jackson$JsonParser$NumberType[p5.getNumberType().ordinal()]) {
            case 1:
                if ((this._delegateDeserializer == null) || (this._valueInstantiator.canCreateFromInt())) {
                    v0 = this._valueInstantiator.createFromInt(p5.getIntValue());
                } else {
                    v0 = this._valueInstantiator.createUsingDelegate(this._delegateDeserializer.deserialize(p5, p6));
                    if (this._injectables == null) {
                    } else {
                        this.injectValues(p6, v0);
                    }
                }
                break;
            case 2:
                if ((this._delegateDeserializer == null) || (this._valueInstantiator.canCreateFromInt())) {
                    v0 = this._valueInstantiator.createFromLong(p5.getLongValue());
                } else {
                    v0 = this._valueInstantiator.createUsingDelegate(this._delegateDeserializer.deserialize(p5, p6));
                    if (this._injectables == null) {
                    } else {
                        this.injectValues(p6, v0);
                    }
                }
                break;
            default:
                if (this._delegateDeserializer == null) {
                    throw p6.instantiationException(this.getBeanClass(), "no suitable creator method found to deserialize from JSON integer number");
                } else {
                    v0 = this._valueInstantiator.createUsingDelegate(this._delegateDeserializer.deserialize(p5, p6));
                    if (this._injectables == null) {
                    } else {
                        this.injectValues(p6, v0);
                    }
                }
        }
        return v0;
    }

    public Object deserializeFromObject(com.flurry.org.codehaus.jackson.JsonParser p7, com.flurry.org.codehaus.jackson.map.DeserializationContext p8)
    {
        Object v0;
        if (!this._nonStandardCreation) {
            v0 = this._valueInstantiator.createUsingDefault();
            if (this._injectables != null) {
                this.injectValues(p8, v0);
            }
            while (p7.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT) {
                String v3 = p7.getCurrentName();
                p7.nextToken();
                com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v2 = this._beanProperties.find(v3);
                if (v2 == null) {
                    this._handleUnknown(p7, p8, v0, v3);
                } else {
                    try {
                        v2.deserializeAndSet(p7, p8, v0);
                    } catch (Exception v1) {
                        this.wrapAndThrow(v1, v0, v3, p8);
                    }
                }
                p7.nextToken();
            }
        } else {
            if (this._unwrappedPropertyHandler == null) {
                if (this._externalTypeIdHandler == null) {
                    v0 = this.deserializeFromObjectUsingNonDefault(p7, p8);
                } else {
                    v0 = this.deserializeWithExternalTypeId(p7, p8);
                }
            } else {
                v0 = this.deserializeWithUnwrapped(p7, p8);
            }
        }
        return v0;
    }

    protected Object deserializeFromObjectUsingNonDefault(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        com.flurry.org.codehaus.jackson.map.JsonMappingException v0_15;
        if (this._delegateDeserializer == null) {
            if (this._propertyBasedCreator == null) {
                if (!this._beanType.isAbstract()) {
                    throw com.flurry.org.codehaus.jackson.map.JsonMappingException.from(p3, new StringBuilder().append("No suitable constructor found for type ").append(this._beanType).append(": can not instantiate from JSON object (need to add/enable type information?)").toString());
                } else {
                    throw com.flurry.org.codehaus.jackson.map.JsonMappingException.from(p3, new StringBuilder().append("Can not instantiate abstract type ").append(this._beanType).append(" (need to add/enable type information?)").toString());
                }
            } else {
                v0_15 = this._deserializeUsingPropertyBased(p3, p4);
            }
        } else {
            v0_15 = this._valueInstantiator.createUsingDelegate(this._delegateDeserializer.deserialize(p3, p4));
        }
        return v0_15;
    }

    public Object deserializeFromString(com.flurry.org.codehaus.jackson.JsonParser p4, com.flurry.org.codehaus.jackson.map.DeserializationContext p5)
    {
        if ((this._delegateDeserializer == null) || (this._valueInstantiator.canCreateFromString())) {
            Object v0 = this._valueInstantiator.createFromString(p4.getText());
        } else {
            v0 = this._valueInstantiator.createUsingDelegate(this._delegateDeserializer.deserialize(p4, p5));
            if (this._injectables != null) {
                this.injectValues(p5, v0);
            }
        }
        return v0;
    }

    protected Object deserializeUsingPropertyBasedWithExternalTypeId(com.flurry.org.codehaus.jackson.JsonParser p14, com.flurry.org.codehaus.jackson.map.DeserializationContext p15)
    {
        com.flurry.org.codehaus.jackson.map.deser.impl.ExternalTypeHandler v5 = this._externalTypeIdHandler.start();
        com.flurry.org.codehaus.jackson.map.deser.impl.PropertyBasedCreator v2 = this._propertyBasedCreator;
        com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValueBuffer v1 = v2.startBuilding(p14, p15);
        com.flurry.org.codehaus.jackson.util.TokenBuffer v9_1 = new com.flurry.org.codehaus.jackson.util.TokenBuffer(p14.getCodec());
        v9_1.writeStartObject();
        com.flurry.org.codehaus.jackson.JsonToken v8_0 = p14.getCurrentToken();
        while (v8_0 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
            String v7 = p14.getCurrentName();
            p14.nextToken();
            com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v3 = v2.findCreatorProperty(v7);
            if (v3 == null) {
                com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v6 = this._beanProperties.find(v7);
                if (v6 == null) {
                    if (!v5.handleToken(p14, p15, v7, 0)) {
                        if ((this._ignorableProps == null) || (!this._ignorableProps.contains(v7))) {
                            if (this._anySetter != null) {
                                v1.bufferAnyProperty(this._anySetter, v7, this._anySetter.deserialize(p14, p15));
                            }
                        } else {
                            p14.skipChildren();
                        }
                    }
                } else {
                    v1.bufferProperty(v6, v6.deserialize(p14, p15));
                }
            } else {
                if (v1.assignParameter(v3.getPropertyIndex(), v3.deserialize(p14, p15))) {
                    com.flurry.org.codehaus.jackson.JsonToken v8_1 = p14.nextToken();
                    try {
                        Object v0_1 = v2.build(v1);
                    } catch (Exception v4_1) {
                        this.wrapAndThrow(v4_1, this._beanType.getRawClass(), v7, p15);
                    }
                    while (v8_1 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
                        p14.nextToken();
                        v9_1.copyCurrentStructure(p14);
                        v8_1 = p14.nextToken();
                    }
                    if (v0_1.getClass() == this._beanType.getRawClass()) {
                        Object v11_2 = v5.complete(p14, p15, v0_1);
                    } else {
                        throw p15.mappingException("Can not create polymorphic instances with unwrapped values");
                    }
                    return v11_2;
                }
            }
            v8_0 = p14.nextToken();
        }
        try {
            v11_2 = v5.complete(p14, p15, v2.build(v1));
        } catch (Exception v4_0) {
            this.wrapInstantiationProblem(v4_0, p15);
            v11_2 = 0;
        }
        return v11_2;
    }

    protected Object deserializeUsingPropertyBasedWithUnwrapped(com.flurry.org.codehaus.jackson.JsonParser p13, com.flurry.org.codehaus.jackson.map.DeserializationContext p14)
    {
        com.flurry.org.codehaus.jackson.map.deser.impl.PropertyBasedCreator v2 = this._propertyBasedCreator;
        com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValueBuffer v1 = v2.startBuilding(p13, p14);
        com.flurry.org.codehaus.jackson.util.TokenBuffer v8_1 = new com.flurry.org.codehaus.jackson.util.TokenBuffer(p13.getCodec());
        v8_1.writeStartObject();
        com.flurry.org.codehaus.jackson.JsonToken v7_1 = p13.getCurrentToken();
        while (v7_1 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
            String v6 = p13.getCurrentName();
            p13.nextToken();
            com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v3 = v2.findCreatorProperty(v6);
            if (v3 == null) {
                com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v5 = this._beanProperties.find(v6);
                if (v5 == null) {
                    if ((this._ignorableProps == null) || (!this._ignorableProps.contains(v6))) {
                        v8_1.writeFieldName(v6);
                        v8_1.copyCurrentStructure(p13);
                        if (this._anySetter != null) {
                            v1.bufferAnyProperty(this._anySetter, v6, this._anySetter.deserialize(p13, p14));
                        }
                    } else {
                        p13.skipChildren();
                    }
                } else {
                    v1.bufferProperty(v5, v5.deserialize(p13, p14));
                }
            } else {
                if (v1.assignParameter(v3.getPropertyIndex(), v3.deserialize(p13, p14))) {
                    com.flurry.org.codehaus.jackson.JsonToken v7_0 = p13.nextToken();
                    try {
                        Object v0_1 = v2.build(v1);
                    } catch (Exception v4_1) {
                        this.wrapAndThrow(v4_1, this._beanType.getRawClass(), v6, p14);
                    }
                    while (v7_0 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
                        p13.nextToken();
                        v8_1.copyCurrentStructure(p13);
                        v7_0 = p13.nextToken();
                    }
                    v8_1.writeEndObject();
                    if (v0_1.getClass() == this._beanType.getRawClass()) {
                        Object v10_2 = this._unwrappedPropertyHandler.processUnwrapped(p13, p14, v0_1, v8_1);
                    } else {
                        throw p14.mappingException("Can not create polymorphic instances with unwrapped values");
                    }
                    return v10_2;
                }
            }
            v7_1 = p13.nextToken();
        }
        try {
            v10_2 = this._unwrappedPropertyHandler.processUnwrapped(p13, p14, v2.build(v1), v8_1);
        } catch (Exception v4_0) {
            this.wrapInstantiationProblem(v4_0, p14);
            v10_2 = 0;
        }
        return v10_2;
    }

    protected Object deserializeWithExternalTypeId(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        Object v0_3;
        if (this._propertyBasedCreator == null) {
            v0_3 = this.deserializeWithExternalTypeId(p2, p3, this._valueInstantiator.createUsingDefault());
        } else {
            v0_3 = this.deserializeUsingPropertyBasedWithExternalTypeId(p2, p3);
        }
        return v0_3;
    }

    protected Object deserializeWithExternalTypeId(com.flurry.org.codehaus.jackson.JsonParser p7, com.flurry.org.codehaus.jackson.map.DeserializationContext p8, Object p9)
    {
        com.flurry.org.codehaus.jackson.map.deser.impl.ExternalTypeHandler v1 = this._externalTypeIdHandler.start();
        while (p7.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT) {
            String v3 = p7.getCurrentName();
            p7.nextToken();
            com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v2 = this._beanProperties.find(v3);
            if (v2 == null) {
                if ((this._ignorableProps == null) || (!this._ignorableProps.contains(v3))) {
                    if (!v1.handleToken(p7, p8, v3, p9)) {
                        if (this._anySetter == null) {
                            this.handleUnknownProperty(p7, p8, p9, v3);
                        } else {
                            try {
                                this._anySetter.deserializeAndSet(p7, p8, p9, v3);
                            } catch (Exception v0_0) {
                                this.wrapAndThrow(v0_0, p9, v3, p8);
                            }
                        }
                    }
                } else {
                    p7.skipChildren();
                }
            } else {
                try {
                    v2.deserializeAndSet(p7, p8, p9);
                } catch (Exception v0_1) {
                    this.wrapAndThrow(v0_1, p9, v3, p8);
                }
            }
            p7.nextToken();
        }
        return v1.complete(p7, p8, p9);
    }

    public Object deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4)
    {
        return p4.deserializeTypedFromObject(p2, p3);
    }

    protected Object deserializeWithUnwrapped(com.flurry.org.codehaus.jackson.JsonParser p8, com.flurry.org.codehaus.jackson.map.DeserializationContext p9)
    {
        Object v0;
        if (this._delegateDeserializer == null) {
            if (this._propertyBasedCreator == null) {
                com.flurry.org.codehaus.jackson.util.TokenBuffer v4_1 = new com.flurry.org.codehaus.jackson.util.TokenBuffer(p8.getCodec());
                v4_1.writeStartObject();
                v0 = this._valueInstantiator.createUsingDefault();
                if (this._injectables != null) {
                    this.injectValues(p9, v0);
                }
                while (p8.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT) {
                    String v3 = p8.getCurrentName();
                    p8.nextToken();
                    com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v2 = this._beanProperties.find(v3);
                    if (v2 == null) {
                        if ((this._ignorableProps == null) || (!this._ignorableProps.contains(v3))) {
                            v4_1.writeFieldName(v3);
                            v4_1.copyCurrentStructure(p8);
                            if (this._anySetter != null) {
                                try {
                                    this._anySetter.deserializeAndSet(p8, p9, v0, v3);
                                } catch (Exception v1_0) {
                                    this.wrapAndThrow(v1_0, v0, v3, p9);
                                }
                            }
                        } else {
                            p8.skipChildren();
                        }
                    } else {
                        try {
                            v2.deserializeAndSet(p8, p9, v0);
                        } catch (Exception v1_1) {
                            this.wrapAndThrow(v1_1, v0, v3, p9);
                        }
                    }
                    p8.nextToken();
                }
                v4_1.writeEndObject();
                this._unwrappedPropertyHandler.processUnwrapped(p8, p9, v0, v4_1);
            } else {
                v0 = this.deserializeUsingPropertyBasedWithUnwrapped(p8, p9);
            }
        } else {
            v0 = this._valueInstantiator.createUsingDelegate(this._delegateDeserializer.deserialize(p8, p9));
        }
        return v0;
    }

    protected Object deserializeWithUnwrapped(com.flurry.org.codehaus.jackson.JsonParser p7, com.flurry.org.codehaus.jackson.map.DeserializationContext p8, Object p9)
    {
        com.flurry.org.codehaus.jackson.JsonToken v3 = p7.getCurrentToken();
        if (v3 == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
            v3 = p7.nextToken();
        }
        com.flurry.org.codehaus.jackson.util.TokenBuffer v4_1 = new com.flurry.org.codehaus.jackson.util.TokenBuffer(p7.getCodec());
        v4_1.writeStartObject();
        while (v3 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
            String v2 = p7.getCurrentName();
            com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v1 = this._beanProperties.find(v2);
            p7.nextToken();
            if (v1 == null) {
                if ((this._ignorableProps == null) || (!this._ignorableProps.contains(v2))) {
                    v4_1.writeFieldName(v2);
                    v4_1.copyCurrentStructure(p7);
                    if (this._anySetter != null) {
                        this._anySetter.deserializeAndSet(p7, p8, p9, v2);
                    }
                } else {
                    p7.skipChildren();
                }
            } else {
                try {
                    v1.deserializeAndSet(p7, p8, p9);
                } catch (Exception v0) {
                    this.wrapAndThrow(v0, p9, v2, p8);
                }
            }
            v3 = p7.nextToken();
        }
        v4_1.writeEndObject();
        this._unwrappedPropertyHandler.processUnwrapped(p7, p8, p9, v4_1);
        return p9;
    }

    public com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty findBackReference(String p2)
    {
        com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v0_3;
        if (this._backRefs != null) {
            v0_3 = ((com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty) this._backRefs.get(p2));
        } else {
            v0_3 = 0;
        }
        return v0_3;
    }

    public final Class getBeanClass()
    {
        return this._beanType.getRawClass();
    }

    public int getPropertyCount()
    {
        return this._beanProperties.size();
    }

    public com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator getValueInstantiator()
    {
        return this._valueInstantiator;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getValueType()
    {
        return this._beanType;
    }

    protected Object handlePolymorphic(com.flurry.org.codehaus.jackson.JsonParser p4, com.flurry.org.codehaus.jackson.map.DeserializationContext p5, Object p6, com.flurry.org.codehaus.jackson.util.TokenBuffer p7)
    {
        Object v0;
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v2 = this._findSubclassDeserializer(p5, p6, p7);
        if (v2 == null) {
            if (p7 != null) {
                p6 = this.handleUnknownProperties(p5, p6, p7);
            }
            if (p4 != null) {
                p6 = this.deserialize(p4, p5, p6);
            }
            v0 = p6;
        } else {
            if (p7 != null) {
                p7.writeEndObject();
                com.flurry.org.codehaus.jackson.JsonParser v1 = p7.asParser();
                v1.nextToken();
                p6 = v2.deserialize(v1, p5, p6);
            }
            if (p4 != null) {
                p6 = v2.deserialize(p4, p5, p6);
            }
            v0 = p6;
        }
        return v0;
    }

    protected Object handleUnknownProperties(com.flurry.org.codehaus.jackson.map.DeserializationContext p5, Object p6, com.flurry.org.codehaus.jackson.util.TokenBuffer p7)
    {
        p7.writeEndObject();
        com.flurry.org.codehaus.jackson.JsonParser v0 = p7.asParser();
        while (v0.nextToken() != com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT) {
            String v1 = v0.getCurrentName();
            v0.nextToken();
            this.handleUnknownProperty(v0, p5, p6, v1);
        }
        return p6;
    }

    protected void handleUnknownProperty(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, Object p4, String p5)
    {
        if ((!this._ignoreAllUnknown) && ((this._ignorableProps == null) || (!this._ignorableProps.contains(p5)))) {
            super.handleUnknownProperty(p2, p3, p4, p5);
        } else {
            p2.skipChildren();
        }
        return;
    }

    public boolean hasProperty(String p2)
    {
        int v0_2;
        if (this._beanProperties.find(p2) == null) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    protected void injectValues(com.flurry.org.codehaus.jackson.map.DeserializationContext p5, Object p6)
    {
        com.flurry.org.codehaus.jackson.map.deser.impl.ValueInjector[] v0 = this._injectables;
        int v3 = v0.length;
        int v1 = 0;
        while (v1 < v3) {
            v0[v1].inject(p5, p6);
            v1++;
        }
        return;
    }

    public java.util.Iterator properties()
    {
        if (this._beanProperties != null) {
            return this._beanProperties.allProperties();
        } else {
            throw new IllegalStateException("Can only call before BeanDeserializer has been resolved");
        }
    }

    public void resolve(com.flurry.org.codehaus.jackson.map.DeserializationConfig p20, com.flurry.org.codehaus.jackson.map.DeserializerProvider p21)
    {
        java.util.Iterator v9 = this._beanProperties.allProperties();
        com.flurry.org.codehaus.jackson.map.deser.impl.UnwrappedPropertyHandler v15_1 = 0;
        com.flurry.org.codehaus.jackson.map.deser.impl.ExternalTypeHandler$Builder v7_1 = 0;
        while (v9.hasNext()) {
            com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v10_1 = ((com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty) v9.next());
            com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v11_2 = v10_1;
            if (!v11_2.hasValueDeserializer()) {
                v11_2 = v11_2.withValueDeserializer(this.findDeserializer(p20, p21, v11_2.getType(), v11_2));
            }
            com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v11_3 = this._resolveManagedReferenceProperty(p20, v11_2);
            com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v14 = this._resolveUnwrappedProperty(p20, v11_3);
            if (v14 != null) {
                v11_3 = v14;
                if (v15_1 == null) {
                    v15_1 = new com.flurry.org.codehaus.jackson.map.deser.impl.UnwrappedPropertyHandler();
                }
                v15_1.addProperty(v11_3);
            }
            com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v11_4 = this._resolveInnerClassValuedProperty(p20, v11_3);
            if (v11_4 != v10_1) {
                this._beanProperties.replace(v11_4);
            }
            if (v11_4.hasValueTypeDeserializer()) {
                com.flurry.org.codehaus.jackson.map.TypeDeserializer v13 = v11_4.getValueTypeDeserializer();
                if (v13.getTypeInclusion() == com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.EXTERNAL_PROPERTY) {
                    if (v7_1 == null) {
                        v7_1 = new com.flurry.org.codehaus.jackson.map.deser.impl.ExternalTypeHandler$Builder();
                    }
                    v7_1.addExternal(v11_4, v13.getPropertyName());
                    this._beanProperties.remove(v11_4);
                }
            }
        }
        if ((this._anySetter != null) && (!this._anySetter.hasValueDeserializer())) {
            this._anySetter = this._anySetter.withValueDeserializer(this.findDeserializer(p20, p21, this._anySetter.getType(), this._anySetter.getProperty()));
        }
        if (this._valueInstantiator.canCreateUsingDelegate()) {
            com.flurry.org.codehaus.jackson.type.JavaType v6 = this._valueInstantiator.getDelegateType();
            if (v6 != null) {
                this._delegateDeserializer = this.findDeserializer(p20, p21, v6, new com.flurry.org.codehaus.jackson.map.BeanProperty$Std(0, v6, this._forClass.getAnnotations(), this._valueInstantiator.getDelegateCreator()));
            } else {
                throw new IllegalArgumentException(new StringBuilder().append("Invalid delegate-creator definition for ").append(this._beanType).append(": value instantiator (").append(this._valueInstantiator.getClass().getName()).append(") returned true for \'canCreateUsingDelegate()\', but null for \'getDelegateType()\'").toString());
            }
        }
        if (this._propertyBasedCreator != null) {
            java.util.Iterator v8 = this._propertyBasedCreator.getCreatorProperties().iterator();
            while (v8.hasNext()) {
                com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v11_1 = ((com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty) v8.next());
                if (!v11_1.hasValueDeserializer()) {
                    this._propertyBasedCreator.assignDeserializer(v11_1, this.findDeserializer(p20, p21, v11_1.getType(), v11_1));
                }
            }
        }
        if (v7_1 != null) {
            this._externalTypeIdHandler = v7_1.build();
            this._nonStandardCreation = 1;
        }
        this._unwrappedPropertyHandler = v15_1;
        if (v15_1 != null) {
            this._nonStandardCreation = 1;
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer unwrappingDeserializer()
    {
        if (this.getClass() == com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer) {
            this = new com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer(this, 1);
        }
        return this;
    }

    public void wrapAndThrow(Throwable p2, Object p3, int p4)
    {
        this.wrapAndThrow(p2, p3, p4, 0);
        return;
    }

    public void wrapAndThrow(Throwable p3, Object p4, int p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        while (((p3 instanceof reflect.InvocationTargetException)) && (p3.getCause() != null)) {
            p3 = p3.getCause();
        }
        if (!(p3 instanceof Error)) {
            if ((p6 != null) && (!p6.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.WRAP_EXCEPTIONS))) {
                int v0 = 0;
            } else {
                v0 = 1;
            }
            if (!(p3 instanceof java.io.IOException)) {
                if ((v0 == 0) && ((p3 instanceof RuntimeException))) {
                    throw ((RuntimeException) p3);
                }
            } else {
                if ((v0 == 0) || (!(p3 instanceof com.flurry.org.codehaus.jackson.map.JsonMappingException))) {
                    throw ((java.io.IOException) p3);
                }
            }
            throw com.flurry.org.codehaus.jackson.map.JsonMappingException.wrapWithPath(p3, p4, p5);
        } else {
            throw ((Error) p3);
        }
    }

    public void wrapAndThrow(Throwable p2, Object p3, String p4)
    {
        this.wrapAndThrow(p2, p3, p4, 0);
        return;
    }

    public void wrapAndThrow(Throwable p3, Object p4, String p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        while (((p3 instanceof reflect.InvocationTargetException)) && (p3.getCause() != null)) {
            p3 = p3.getCause();
        }
        if (!(p3 instanceof Error)) {
            if ((p6 != null) && (!p6.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.WRAP_EXCEPTIONS))) {
                int v0 = 0;
            } else {
                v0 = 1;
            }
            if (!(p3 instanceof java.io.IOException)) {
                if ((v0 == 0) && ((p3 instanceof RuntimeException))) {
                    throw ((RuntimeException) p3);
                }
            } else {
                if ((v0 == 0) || (!(p3 instanceof com.flurry.org.codehaus.jackson.map.JsonMappingException))) {
                    throw ((java.io.IOException) p3);
                }
            }
            throw com.flurry.org.codehaus.jackson.map.JsonMappingException.wrapWithPath(p3, p4, p5);
        } else {
            throw ((Error) p3);
        }
    }

    protected void wrapInstantiationProblem(Throwable p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        while (((p3 instanceof reflect.InvocationTargetException)) && (p3.getCause() != null)) {
            p3 = p3.getCause();
        }
        if (!(p3 instanceof Error)) {
            if ((p4 != null) && (!p4.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.WRAP_EXCEPTIONS))) {
                int v0 = 0;
            } else {
                v0 = 1;
            }
            if (!(p3 instanceof java.io.IOException)) {
                if ((v0 != 0) || (!(p3 instanceof RuntimeException))) {
                    throw p4.instantiationException(this._beanType.getRawClass(), p3);
                } else {
                    throw ((RuntimeException) p3);
                }
            } else {
                throw ((java.io.IOException) p3);
            }
        } else {
            throw ((Error) p3);
        }
    }
}
