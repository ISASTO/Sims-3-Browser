package com.flurry.org.codehaus.jackson.map.deser.std;
public class CollectionDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.ContainerDeserializerBase implements com.flurry.org.codehaus.jackson.map.ResolvableDeserializer {
    protected final com.flurry.org.codehaus.jackson.type.JavaType _collectionType;
    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _delegateDeserializer;
    protected final com.flurry.org.codehaus.jackson.map.JsonDeserializer _valueDeserializer;
    protected final com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator _valueInstantiator;
    protected final com.flurry.org.codehaus.jackson.map.TypeDeserializer _valueTypeDeserializer;

    protected CollectionDeserializer(com.flurry.org.codehaus.jackson.map.deser.std.CollectionDeserializer p2)
    {
        super(p2._valueClass);
        super._collectionType = p2._collectionType;
        super._valueDeserializer = p2._valueDeserializer;
        super._valueTypeDeserializer = p2._valueTypeDeserializer;
        super._valueInstantiator = p2._valueInstantiator;
        super._delegateDeserializer = p2._delegateDeserializer;
        return;
    }

    public CollectionDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.map.JsonDeserializer p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4, com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator p5)
    {
        super(p2.getRawClass());
        super._collectionType = p2;
        super._valueDeserializer = p3;
        super._valueTypeDeserializer = p4;
        super._valueInstantiator = p5;
        return;
    }

    protected CollectionDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p7, com.flurry.org.codehaus.jackson.map.JsonDeserializer p8, com.flurry.org.codehaus.jackson.map.TypeDeserializer p9, reflect.Constructor p10)
    {
        super(p7.getRawClass());
        super._collectionType = p7;
        super._valueDeserializer = p8;
        super._valueTypeDeserializer = p9;
        com.flurry.org.codehaus.jackson.map.deser.std.StdValueInstantiator v0_1 = new com.flurry.org.codehaus.jackson.map.deser.std.StdValueInstantiator(0, p7);
        if (p10 != null) {
            v0_1.configureFromObjectSettings(new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor(p10, 0, 0), 0, 0, 0, 0);
        }
        super._valueInstantiator = v0_1;
        return;
    }

    private final java.util.Collection handleNonArray(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7, java.util.Collection p8)
    {
        if (p7.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.ACCEPT_SINGLE_VALUE_AS_ARRAY)) {
            Object v2;
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v3 = this._valueDeserializer;
            com.flurry.org.codehaus.jackson.map.TypeDeserializer v1 = this._valueTypeDeserializer;
            if (p6.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                if (v1 != null) {
                    v2 = v3.deserializeWithType(p6, p7, v1);
                } else {
                    v2 = v3.deserialize(p6, p7);
                }
            } else {
                v2 = 0;
            }
            p8.add(v2);
            return p8;
        } else {
            throw p7.mappingException(this._collectionType.getRawClass());
        }
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, Object p4)
    {
        return this.deserialize(p2, p3, ((java.util.Collection) p4));
    }

    public java.util.Collection deserialize(com.flurry.org.codehaus.jackson.JsonParser p4, com.flurry.org.codehaus.jackson.map.DeserializationContext p5)
    {
        java.util.Collection v1_4;
        if (this._delegateDeserializer == null) {
            if (p4.getCurrentToken() == com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                String v0 = p4.getText();
                if (v0.length() == 0) {
                    v1_4 = ((java.util.Collection) this._valueInstantiator.createFromString(v0));
                    return v1_4;
                }
            }
            v1_4 = this.deserialize(p4, p5, ((java.util.Collection) this._valueInstantiator.createUsingDefault()));
        } else {
            v1_4 = ((java.util.Collection) this._valueInstantiator.createUsingDelegate(this._delegateDeserializer.deserialize(p4, p5)));
        }
        return v1_4;
    }

    public java.util.Collection deserialize(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7, java.util.Collection p8)
    {
        if (p6.isExpectedStartArrayToken()) {
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v3 = this._valueDeserializer;
            com.flurry.org.codehaus.jackson.map.TypeDeserializer v1 = this._valueTypeDeserializer;
            while(true) {
                com.flurry.org.codehaus.jackson.JsonToken v0 = p6.nextToken();
                if (v0 == com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
                    break;
                }
                Object v2;
                if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                    if (v1 != null) {
                        v2 = v3.deserializeWithType(p6, p7, v1);
                    } else {
                        v2 = v3.deserialize(p6, p7);
                    }
                } else {
                    v2 = 0;
                }
                p8.add(v2);
            }
        } else {
            p8 = this.handleNonArray(p6, p7, p8);
        }
        return p8;
    }

    public Object deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4)
    {
        return p4.deserializeTypedFromArray(p2, p3);
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer getContentDeserializer()
    {
        return this._valueDeserializer;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getContentType()
    {
        return this._collectionType.getContentType();
    }

    public void resolve(com.flurry.org.codehaus.jackson.map.DeserializationConfig p7, com.flurry.org.codehaus.jackson.map.DeserializerProvider p8)
    {
        if (this._valueInstantiator.canCreateUsingDelegate()) {
            com.flurry.org.codehaus.jackson.type.JavaType v1 = this._valueInstantiator.getDelegateType();
            if (v1 != null) {
                this._delegateDeserializer = this.findDeserializer(p7, p8, v1, new com.flurry.org.codehaus.jackson.map.BeanProperty$Std(0, v1, 0, this._valueInstantiator.getDelegateCreator()));
            } else {
                throw new IllegalArgumentException(new StringBuilder().append("Invalid delegate-creator definition for ").append(this._collectionType).append(": value instantiator (").append(this._valueInstantiator.getClass().getName()).append(") returned true for \'canCreateUsingDelegate()\', but null for \'getDelegateType()\'").toString());
            }
        }
        return;
    }
}
