package com.flurry.org.codehaus.jackson.map.deser.std;
abstract class BaseNodeDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer {

    public BaseNodeDeserializer(Class p1)
    {
        super(p1);
        return;
    }

    protected void _handleDuplicateField(String p1, com.flurry.org.codehaus.jackson.node.ObjectNode p2, com.flurry.org.codehaus.jackson.JsonNode p3, com.flurry.org.codehaus.jackson.JsonNode p4)
    {
        return;
    }

    protected void _reportProblem(com.flurry.org.codehaus.jackson.JsonParser p3, String p4)
    {
        throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(p4, p3.getTokenLocation());
    }

    protected final com.flurry.org.codehaus.jackson.JsonNode deserializeAny(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7, com.flurry.org.codehaus.jackson.node.JsonNodeFactory p8)
    {
        com.flurry.org.codehaus.jackson.node.NumericNode v3_1;
        switch (com.flurry.org.codehaus.jackson.map.deser.std.BaseNodeDeserializer$1.$SwitchMap$org$codehaus$jackson$JsonToken[p6.getCurrentToken().ordinal()]) {
            case 1:
                v3_1 = this.deserializeObject(p6, p7, p8);
                break;
            case 2:
                v3_1 = this.deserializeArray(p6, p7, p8);
                break;
            case 3:
                v3_1 = p8.textNode(p6.getText());
                break;
            case 4:
            default:
                throw p7.mappingException(this.getValueClass());
                break;
            case 5:
                v3_1 = this.deserializeObject(p6, p7, p8);
                break;
            case 6:
                byte[] v1_0 = p6.getEmbeddedObject();
                if (v1_0 != null) {
                    if (v1_0.getClass() != byte[]) {
                        v3_1 = p8.POJONode(v1_0);
                    } else {
                        v3_1 = p8.binaryNode(((byte[]) ((byte[]) v1_0)));
                    }
                } else {
                    v3_1 = p8.nullNode();
                }
                break;
            case 7:
                com.flurry.org.codehaus.jackson.JsonParser$NumberType v0_1 = p6.getNumberType();
                if ((v0_1 != com.flurry.org.codehaus.jackson.JsonParser$NumberType.BIG_INTEGER) && (!p7.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_BIG_INTEGER_FOR_INTS))) {
                    if (v0_1 != com.flurry.org.codehaus.jackson.JsonParser$NumberType.INT) {
                        v3_1 = p8.numberNode(p6.getLongValue());
                    } else {
                        v3_1 = p8.numberNode(p6.getIntValue());
                    }
                } else {
                    v3_1 = p8.numberNode(p6.getBigIntegerValue());
                }
                break;
            case 8:
                if ((p6.getNumberType() != com.flurry.org.codehaus.jackson.JsonParser$NumberType.BIG_DECIMAL) && (!p7.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_BIG_DECIMAL_FOR_FLOATS))) {
                    v3_1 = p8.numberNode(p6.getDoubleValue());
                } else {
                    v3_1 = p8.numberNode(p6.getDecimalValue());
                }
                break;
            case 9:
                v3_1 = p8.booleanNode(1);
                break;
            case 10:
                v3_1 = p8.booleanNode(0);
                break;
            case 11:
                v3_1 = p8.nullNode();
                break;
        }
        return v3_1;
    }

    protected final com.flurry.org.codehaus.jackson.node.ArrayNode deserializeArray(com.flurry.org.codehaus.jackson.JsonParser p4, com.flurry.org.codehaus.jackson.map.DeserializationContext p5, com.flurry.org.codehaus.jackson.node.JsonNodeFactory p6)
    {
        com.flurry.org.codehaus.jackson.node.ArrayNode v0 = p6.arrayNode();
        while(true) {
            switch (com.flurry.org.codehaus.jackson.map.deser.std.BaseNodeDeserializer$1.$SwitchMap$org$codehaus$jackson$JsonToken[p4.nextToken().ordinal()]) {
                case 1:
                    v0.add(this.deserializeObject(p4, p5, p6));
                    break;
                case 2:
                    v0.add(this.deserializeArray(p4, p5, p6));
                    break;
                case 3:
                    v0.add(p6.textNode(p4.getText()));
                    break;
                case 4:
                    return v0;
                default:
                    v0.add(this.deserializeAny(p4, p5, p6));
            }
        }
    }

    protected final com.flurry.org.codehaus.jackson.node.ObjectNode deserializeObject(com.flurry.org.codehaus.jackson.JsonParser p8, com.flurry.org.codehaus.jackson.map.DeserializationContext p9, com.flurry.org.codehaus.jackson.node.JsonNodeFactory p10)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v1 = p10.objectNode();
        com.flurry.org.codehaus.jackson.JsonToken v3 = p8.getCurrentToken();
        if (v3 == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
            v3 = p8.nextToken();
        }
        while (v3 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
            com.flurry.org.codehaus.jackson.node.TextNode v4;
            String v0 = p8.getCurrentName();
            switch (com.flurry.org.codehaus.jackson.map.deser.std.BaseNodeDeserializer$1.$SwitchMap$org$codehaus$jackson$JsonToken[p8.nextToken().ordinal()]) {
                case 1:
                    v4 = this.deserializeObject(p8, p9, p10);
                    break;
                case 2:
                    v4 = this.deserializeArray(p8, p9, p10);
                    break;
                case 3:
                    v4 = p10.textNode(p8.getText());
                    break;
                default:
                    v4 = this.deserializeAny(p8, p9, p10);
            }
            com.flurry.org.codehaus.jackson.JsonNode v2 = v1.put(v0, v4);
            if (v2 != null) {
                this._handleDuplicateField(v0, v1, v2, v4);
            }
            v3 = p8.nextToken();
        }
        return v1;
    }

    public Object deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4)
    {
        return p4.deserializeTypedFromAny(p2, p3);
    }
}
