package com.flurry.org.codehaus.jackson.map.deser.std;
public final class StringCollectionDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.ContainerDeserializerBase implements com.flurry.org.codehaus.jackson.map.ResolvableDeserializer {
    protected final com.flurry.org.codehaus.jackson.type.JavaType _collectionType;
    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _delegateDeserializer;
    protected final boolean _isDefaultDeserializer;
    protected final com.flurry.org.codehaus.jackson.map.JsonDeserializer _valueDeserializer;
    protected final com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator _valueInstantiator;

    protected StringCollectionDeserializer(com.flurry.org.codehaus.jackson.map.deser.std.StringCollectionDeserializer p2)
    {
        super(p2._valueClass);
        super._collectionType = p2._collectionType;
        super._valueDeserializer = p2._valueDeserializer;
        super._valueInstantiator = p2._valueInstantiator;
        super._isDefaultDeserializer = p2._isDefaultDeserializer;
        return;
    }

    public StringCollectionDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.map.JsonDeserializer p3, com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator p4)
    {
        super(p2.getRawClass());
        super._collectionType = p2;
        super._valueDeserializer = p3;
        super._valueInstantiator = p4;
        super._isDefaultDeserializer = super.isDefaultSerializer(p3);
        return;
    }

    private java.util.Collection deserializeUsingCustom(com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6, java.util.Collection p7)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v0 = this._valueDeserializer;
        while(true) {
            com.flurry.org.codehaus.jackson.JsonToken v1 = p5.nextToken();
            if (v1 == com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
                break;
            }
            String v2_0;
            if (v1 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                v2_0 = ((String) v0.deserialize(p5, p6));
            } else {
                v2_0 = 0;
            }
            p7.add(v2_0);
        }
        return p7;
    }

    private final java.util.Collection handleNonArray(com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6, java.util.Collection p7)
    {
        if (p6.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.ACCEPT_SINGLE_VALUE_AS_ARRAY)) {
            String v1;
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v2 = this._valueDeserializer;
            if (p5.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                if (v2 != null) {
                    v1 = ((String) v2.deserialize(p5, p6));
                } else {
                    v1 = p5.getText();
                }
            } else {
                v1 = 0;
            }
            p7.add(v1);
            return p7;
        } else {
            throw p6.mappingException(this._collectionType.getRawClass());
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
        java.util.Collection v1_2;
        if (this._delegateDeserializer == null) {
            v1_2 = this.deserialize(p4, p5, ((java.util.Collection) this._valueInstantiator.createUsingDefault()));
        } else {
            v1_2 = ((java.util.Collection) this._valueInstantiator.createUsingDelegate(this._delegateDeserializer.deserialize(p4, p5)));
        }
        return v1_2;
    }

    public java.util.Collection deserialize(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4, java.util.Collection p5)
    {
        if (p3.isExpectedStartArrayToken()) {
            if (!this._isDefaultDeserializer) {
                p5 = this.deserializeUsingCustom(p3, p4, p5);
                return p5;
            }
            while(true) {
                com.flurry.org.codehaus.jackson.JsonToken v0 = p3.nextToken();
                if (v0 == com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
                    break;
                }
                String v1_1;
                if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                    v1_1 = p3.getText();
                } else {
                    v1_1 = 0;
                }
                p5.add(v1_1);
            }
        } else {
            p5 = this.handleNonArray(p3, p4, p5);
        }
        return p5;
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

    public void resolve(com.flurry.org.codehaus.jackson.map.DeserializationConfig p6, com.flurry.org.codehaus.jackson.map.DeserializerProvider p7)
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams v0 = this._valueInstantiator.getDelegateCreator();
        if (v0 != null) {
            com.flurry.org.codehaus.jackson.type.JavaType v1 = this._valueInstantiator.getDelegateType();
            this._delegateDeserializer = this.findDeserializer(p6, p7, v1, new com.flurry.org.codehaus.jackson.map.BeanProperty$Std(0, v1, 0, v0));
        }
        return;
    }
}
