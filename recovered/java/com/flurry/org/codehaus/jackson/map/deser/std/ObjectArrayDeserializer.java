package com.flurry.org.codehaus.jackson.map.deser.std;
public class ObjectArrayDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.ContainerDeserializerBase {
    protected final com.flurry.org.codehaus.jackson.type.JavaType _arrayType;
    protected final Class _elementClass;
    protected final com.flurry.org.codehaus.jackson.map.JsonDeserializer _elementDeserializer;
    protected final com.flurry.org.codehaus.jackson.map.TypeDeserializer _elementTypeDeserializer;
    protected final boolean _untyped;

    public ObjectArrayDeserializer(com.flurry.org.codehaus.jackson.map.type.ArrayType p3, com.flurry.org.codehaus.jackson.map.JsonDeserializer p4, com.flurry.org.codehaus.jackson.map.TypeDeserializer p5)
    {
        int v0_1;
        super(Object[]);
        super._arrayType = p3;
        super._elementClass = p3.getContentType().getRawClass();
        if (super._elementClass != Object) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        super._untyped = v0_1;
        super._elementDeserializer = p4;
        super._elementTypeDeserializer = p5;
        return;
    }

    private final Object[] handleNonArray(com.flurry.org.codehaus.jackson.JsonParser p8, com.flurry.org.codehaus.jackson.map.DeserializationContext p9)
    {
        if ((p8.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) || ((!p9.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.ACCEPT_EMPTY_STRING_AS_NULL_OBJECT)) || (p8.getText().length() != 0))) {
            if (p9.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.ACCEPT_SINGLE_VALUE_AS_ARRAY)) {
                Object v3;
                if (p8.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                    if (this._elementTypeDeserializer != null) {
                        v3 = this._elementDeserializer.deserializeWithType(p8, p9, this._elementTypeDeserializer);
                    } else {
                        v3 = this._elementDeserializer.deserialize(p8, p9);
                    }
                } else {
                    v3 = 0;
                }
                Object[] v0_1;
                if (!this._untyped) {
                    v0_1 = ((Object[]) ((Object[]) reflect.Array.newInstance(this._elementClass, 1)));
                } else {
                    v0_1 = new Object[1];
                }
                v0_1[0] = v3;
            } else {
                if ((p8.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) || (this._elementClass != Byte)) {
                    throw p9.mappingException(this._arrayType.getRawClass());
                } else {
                    v0_1 = this.deserializeFromBase64(p8, p9);
                }
            }
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public Object[] deserialize(com.flurry.org.codehaus.jackson.JsonParser p10, com.flurry.org.codehaus.jackson.map.DeserializationContext p11)
    {
        Object[] v4;
        if (p10.isExpectedStartArrayToken()) {
            com.flurry.org.codehaus.jackson.map.util.ObjectBuffer v0 = p11.leaseObjectBuffer();
            Object[] v1 = v0.resetAndStart();
            int v2 = 0;
            com.flurry.org.codehaus.jackson.map.TypeDeserializer v6 = this._elementTypeDeserializer;
            while(true) {
                com.flurry.org.codehaus.jackson.JsonToken v5 = p10.nextToken();
                if (v5 == com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
                    break;
                }
                Object v7;
                if (v5 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                    if (v6 != null) {
                        v7 = this._elementDeserializer.deserializeWithType(p10, p11, v6);
                    } else {
                        v7 = this._elementDeserializer.deserialize(p10, p11);
                    }
                } else {
                    v7 = 0;
                }
                if (v2 >= v1.length) {
                    v1 = v0.appendCompletedChunk(v1);
                    v2 = 0;
                }
                int v3 = (v2 + 1);
                v1[v2] = v7;
                v2 = v3;
            }
            if (!this._untyped) {
                v4 = v0.completeAndClearBuffer(v1, v2, this._elementClass);
            } else {
                v4 = v0.completeAndClearBuffer(v1, v2);
            }
            p11.returnObjectBuffer(v0);
        } else {
            v4 = this.handleNonArray(p10, p11);
        }
        return v4;
    }

    protected Byte[] deserializeFromBase64(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7)
    {
        byte[] v0 = p6.getBinaryValue(p7.getBase64Variant());
        Byte[] v3 = new Byte[v0.length];
        int v1 = 0;
        int v2 = v0.length;
        while (v1 < v2) {
            v3[v1] = Byte.valueOf(v0[v1]);
            v1++;
        }
        return v3;
    }

    public bridge synthetic Object deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4)
    {
        return this.deserializeWithType(p2, p3, p4);
    }

    public Object[] deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4)
    {
        return ((Object[]) ((Object[]) p4.deserializeTypedFromArray(p2, p3)));
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer getContentDeserializer()
    {
        return this._elementDeserializer;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getContentType()
    {
        return this._arrayType.getContentType();
    }
}
