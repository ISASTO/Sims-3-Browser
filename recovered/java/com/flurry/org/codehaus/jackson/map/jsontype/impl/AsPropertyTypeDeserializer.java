package com.flurry.org.codehaus.jackson.map.jsontype.impl;
public class AsPropertyTypeDeserializer extends com.flurry.org.codehaus.jackson.map.jsontype.impl.AsArrayTypeDeserializer {
    protected final String _typePropertyName;

    public AsPropertyTypeDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3, Class p4, String p5)
    {
        super(p1, p2, p3, p4);
        super._typePropertyName = p5;
        return;
    }

    public AsPropertyTypeDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p7, com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver p8, com.flurry.org.codehaus.jackson.map.BeanProperty p9, String p10)
    {
        this(p7, p8, p9, 0, p10);
        return;
    }

    protected Object _deserializeIfNatural(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        Boolean v0_2;
        switch (com.flurry.org.codehaus.jackson.map.jsontype.impl.AsPropertyTypeDeserializer$1.$SwitchMap$org$codehaus$jackson$JsonToken[p3.getCurrentToken().ordinal()]) {
            case 1:
                if (!this._baseType.getRawClass().isAssignableFrom(String)) {
                    v0_2 = 0;
                } else {
                    v0_2 = p3.getText();
                }
                break;
            case 2:
                if (!this._baseType.getRawClass().isAssignableFrom(Integer)) {
                } else {
                    v0_2 = Integer.valueOf(p3.getIntValue());
                }
                break;
            case 3:
                if (!this._baseType.getRawClass().isAssignableFrom(Double)) {
                } else {
                    v0_2 = Double.valueOf(p3.getDoubleValue());
                }
                break;
            case 4:
                if (!this._baseType.getRawClass().isAssignableFrom(Boolean)) {
                } else {
                    v0_2 = Boolean.TRUE;
                }
                break;
            case 5:
                if (!this._baseType.getRawClass().isAssignableFrom(Boolean)) {
                } else {
                    v0_2 = Boolean.FALSE;
                }
                break;
            default:
        }
        return v0_2;
    }

    protected Object _deserializeTypedUsingDefaultImpl(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7, com.flurry.org.codehaus.jackson.util.TokenBuffer p8)
    {
        Object v1;
        if (this._defaultImpl == null) {
            v1 = this._deserializeIfNatural(p6, p7);
            if (v1 == null) {
                if (p6.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY) {
                    throw p7.wrongTokenException(p6, com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME, new StringBuilder().append("missing property \'").append(this._typePropertyName).append("\' that is to contain type id  (for class ").append(this.baseTypeName()).append(")").toString());
                } else {
                    v1 = super.deserializeTypedFromAny(p6, p7);
                }
            }
        } else {
            com.flurry.org.codehaus.jackson.map.JsonDeserializer v0 = this._findDefaultImplDeserializer(p7);
            if (p8 != null) {
                p8.writeEndObject();
                p6 = p8.asParser(p6);
                p6.nextToken();
            }
            v1 = v0.deserialize(p6, p7);
        }
        return v1;
    }

    public Object deserializeTypedFromAny(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        Object v0_1;
        if (p3.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY) {
            v0_1 = this.deserializeTypedFromObject(p3, p4);
        } else {
            v0_1 = super.deserializeTypedFromArray(p3, p4);
        }
        return v0_1;
    }

    public Object deserializeTypedFromObject(com.flurry.org.codehaus.jackson.JsonParser p8, com.flurry.org.codehaus.jackson.map.DeserializationContext p9)
    {
        Object v5_0;
        com.flurry.org.codehaus.jackson.JsonToken v2 = p8.getCurrentToken();
        if (v2 != com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
            if (v2 != com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY) {
                if (v2 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
                    com.flurry.org.codehaus.jackson.util.TokenBuffer v3_0 = 0;
                    while (v2 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
                        String v1 = p8.getCurrentName();
                        p8.nextToken();
                        if (!this._typePropertyName.equals(v1)) {
                            if (v3_0 == null) {
                                v3_0 = new com.flurry.org.codehaus.jackson.util.TokenBuffer(0);
                            }
                            v3_0.writeFieldName(v1);
                            v3_0.copyCurrentStructure(p8);
                            v2 = p8.nextToken();
                        } else {
                            com.flurry.org.codehaus.jackson.map.JsonDeserializer v0 = this._findDeserializer(p9, p8.getText());
                            if (v3_0 != null) {
                                p8 = com.flurry.org.codehaus.jackson.util.JsonParserSequence.createFlattened(v3_0.asParser(p8), p8);
                            }
                            p8.nextToken();
                            v5_0 = v0.deserialize(p8, p9);
                        }
                    }
                    v5_0 = this._deserializeTypedUsingDefaultImpl(p8, p9, v3_0);
                } else {
                    v5_0 = this._deserializeTypedUsingDefaultImpl(p8, p9, 0);
                }
            } else {
                v5_0 = this._deserializeTypedUsingDefaultImpl(p8, p9, 0);
            }
        } else {
            v2 = p8.nextToken();
        }
        return v5_0;
    }

    public String getPropertyName()
    {
        return this._typePropertyName;
    }

    public com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As getTypeInclusion()
    {
        return com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.PROPERTY;
    }
}
