package com.flurry.org.codehaus.jackson.map.deser.std;
public class UntypedObjectDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer {
    private static final Object[] NO_OBJECTS;

    static UntypedObjectDeserializer()
    {
        Object[] v0_1 = new Object[0];
        com.flurry.org.codehaus.jackson.map.deser.std.UntypedObjectDeserializer.NO_OBJECTS = v0_1;
        return;
    }

    public UntypedObjectDeserializer()
    {
        super(Object);
        return;
    }

    public Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        Double v0_4;
        switch (com.flurry.org.codehaus.jackson.map.deser.std.UntypedObjectDeserializer$1.$SwitchMap$org$codehaus$jackson$JsonToken[p3.getCurrentToken().ordinal()]) {
            case 1:
                v0_4 = this.mapObject(p3, p4);
                break;
            case 2:
            case 4:
            default:
                throw p4.mappingException(Object);
                break;
            case 3:
                v0_4 = this.mapArray(p3, p4);
                break;
            case 5:
                v0_4 = this.mapObject(p3, p4);
                break;
            case 6:
                v0_4 = p3.getEmbeddedObject();
                break;
            case 7:
                v0_4 = p3.getText();
                break;
            case 8:
                if (!p4.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_BIG_INTEGER_FOR_INTS)) {
                    v0_4 = p3.getNumberValue();
                } else {
                    v0_4 = p3.getBigIntegerValue();
                }
                break;
            case 9:
                if (!p4.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_BIG_DECIMAL_FOR_FLOATS)) {
                    v0_4 = Double.valueOf(p3.getDoubleValue());
                } else {
                    v0_4 = p3.getDecimalValue();
                }
                break;
            case 10:
                v0_4 = Boolean.TRUE;
                break;
            case 11:
                v0_4 = Boolean.FALSE;
                break;
            case 12:
                v0_4 = 0;
                break;
        }
        return v0_4;
    }

    public Object deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p4, com.flurry.org.codehaus.jackson.map.DeserializationContext p5, com.flurry.org.codehaus.jackson.map.TypeDeserializer p6)
    {
        Double v1_3;
        switch (com.flurry.org.codehaus.jackson.map.deser.std.UntypedObjectDeserializer$1.$SwitchMap$org$codehaus$jackson$JsonToken[p4.getCurrentToken().ordinal()]) {
            case 1:
            case 3:
            case 5:
                v1_3 = p6.deserializeTypedFromAny(p4, p5);
                break;
            case 2:
            case 4:
            default:
                throw p5.mappingException(Object);
                break;
            case 6:
                v1_3 = p4.getEmbeddedObject();
                break;
            case 7:
                v1_3 = p4.getText();
                break;
            case 8:
                if (!p5.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_BIG_INTEGER_FOR_INTS)) {
                    v1_3 = Integer.valueOf(p4.getIntValue());
                } else {
                    v1_3 = p4.getBigIntegerValue();
                }
                break;
            case 9:
                if (!p5.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_BIG_DECIMAL_FOR_FLOATS)) {
                    v1_3 = Double.valueOf(p4.getDoubleValue());
                } else {
                    v1_3 = p4.getDecimalValue();
                }
                break;
            case 10:
                v1_3 = Boolean.TRUE;
                break;
            case 11:
                v1_3 = Boolean.FALSE;
                break;
            case 12:
                v1_3 = 0;
                break;
        }
        return v1_3;
    }

    protected Object mapArray(com.flurry.org.codehaus.jackson.JsonParser p10, com.flurry.org.codehaus.jackson.map.DeserializationContext p11)
    {
        java.util.ArrayList v3_1;
        if (!p11.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_JAVA_ARRAY_FOR_JSON_ARRAY)) {
            if (p10.nextToken() != com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
                com.flurry.org.codehaus.jackson.map.util.ObjectBuffer v0 = p11.leaseObjectBuffer();
                Object[] v6 = v0.resetAndStart();
                int v1 = 0;
                int v4 = 0;
                while(true) {
                    Object v5 = this.deserialize(p10, p11);
                    v4++;
                    if (v1 >= v6.length) {
                        v6 = v0.appendCompletedChunk(v6);
                        v1 = 0;
                    }
                    int v2 = (v1 + 1);
                    v6[v1] = v5;
                    if (p10.nextToken() == com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
                        break;
                    }
                    v1 = v2;
                }
                v3_1 = new java.util.ArrayList((((v4 >> 3) + v4) + 1));
                v0.completeAndClearBuffer(v6, v2, v3_1);
            } else {
                v3_1 = new java.util.ArrayList(4);
            }
        } else {
            v3_1 = this.mapArrayToArray(p10, p11);
        }
        return v3_1;
    }

    protected Object[] mapArrayToArray(com.flurry.org.codehaus.jackson.JsonParser p8, com.flurry.org.codehaus.jackson.map.DeserializationContext p9)
    {
        Object[] v5_3;
        if (p8.nextToken() != com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
            com.flurry.org.codehaus.jackson.map.util.ObjectBuffer v0 = p9.leaseObjectBuffer();
            Object[] v4 = v0.resetAndStart();
            int v1 = 0;
            while(true) {
                Object v3 = this.deserialize(p8, p9);
                if (v1 >= v4.length) {
                    v4 = v0.appendCompletedChunk(v4);
                    v1 = 0;
                }
                int v2 = (v1 + 1);
                v4[v1] = v3;
                if (p8.nextToken() == com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
                    break;
                }
                v1 = v2;
            }
            v5_3 = v0.completeAndClearBuffer(v4, v2);
        } else {
            v5_3 = com.flurry.org.codehaus.jackson.map.deser.std.UntypedObjectDeserializer.NO_OBJECTS;
        }
        return v5_3;
    }

    protected Object mapObject(com.flurry.org.codehaus.jackson.JsonParser p11, com.flurry.org.codehaus.jackson.map.DeserializationContext p12)
    {
        com.flurry.org.codehaus.jackson.JsonToken v4 = p11.getCurrentToken();
        if (v4 == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
            v4 = p11.nextToken();
        }
        java.util.LinkedHashMap v3_1;
        if (v4 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
            String v0 = p11.getText();
            p11.nextToken();
            Object v5 = this.deserialize(p11, p12);
            if (p11.nextToken() == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
                String v1 = p11.getText();
                p11.nextToken();
                Object v6 = this.deserialize(p11, p12);
                if (p11.nextToken() == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME) {
                    v3_1 = new java.util.LinkedHashMap();
                    v3_1.put(v0, v5);
                    v3_1.put(v1, v6);
                    do {
                        String v2 = p11.getText();
                        p11.nextToken();
                        v3_1.put(v2, this.deserialize(p11, p12));
                    } while(p11.nextToken() != com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT);
                } else {
                    v3_1 = new java.util.LinkedHashMap(4);
                    v3_1.put(v0, v5);
                    v3_1.put(v1, v6);
                }
            } else {
                v3_1 = new java.util.LinkedHashMap(4);
                v3_1.put(v0, v5);
            }
        } else {
            v3_1 = new java.util.LinkedHashMap(4);
        }
        return v3_1;
    }
}
