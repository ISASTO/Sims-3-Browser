package com.flurry.org.apache.avro.data;
public class Json {
    public static final com.flurry.org.apache.avro.Schema SCHEMA;

    static Json()
    {
        try {
            com.flurry.org.apache.avro.data.Json.SCHEMA = com.flurry.org.apache.avro.Schema.parse(com.flurry.org.apache.avro.data.Json.getResourceAsStream("/com/flurry/org/apache/avro/data/Json.avsc"));
            return;
        } catch (java.io.IOException v0) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v0);
        }
    }

    private Json()
    {
        return;
    }

    public static com.flurry.org.codehaus.jackson.JsonNode read(com.flurry.org.apache.avro.io.Decoder p13)
    {
        String v6_3;
        switch (com.flurry.org.apache.avro.data.Json$1.$SwitchMap$org$apache$avro$data$Json$JsonType[com.flurry.org.apache.avro.data.Json$JsonType.values()[p13.readIndex()].ordinal()]) {
            case 1:
                v6_3 = new com.flurry.org.codehaus.jackson.node.LongNode(p13.readLong());
                break;
            case 2:
                v6_3 = new com.flurry.org.codehaus.jackson.node.DoubleNode(p13.readDouble());
                break;
            case 3:
                v6_3 = new com.flurry.org.codehaus.jackson.node.TextNode(p13.readString());
                break;
            case 4:
                if (!p13.readBoolean()) {
                    v6_3 = com.flurry.org.codehaus.jackson.node.BooleanNode.FALSE;
                } else {
                    v6_3 = com.flurry.org.codehaus.jackson.node.BooleanNode.TRUE;
                }
                break;
            case 5:
                p13.readNull();
                v6_3 = com.flurry.org.codehaus.jackson.node.NullNode.getInstance();
                break;
            case 6:
                com.flurry.org.codehaus.jackson.node.ArrayNode v0 = com.flurry.org.codehaus.jackson.node.JsonNodeFactory.instance.arrayNode();
                long v3_1 = p13.readArrayStart();
                while (v3_1 > 0) {
                    long v1_1 = 0;
                    while (v1_1 < v3_1) {
                        v0.add(com.flurry.org.apache.avro.data.Json.read(p13));
                        v1_1++;
                    }
                    v3_1 = p13.arrayNext();
                }
                v6_3 = v0;
                break;
            case 7:
                com.flurry.org.codehaus.jackson.node.ObjectNode v5 = com.flurry.org.codehaus.jackson.node.JsonNodeFactory.instance.objectNode();
                long v3_0 = p13.readMapStart();
                while (v3_0 > 0) {
                    long v1_0 = 0;
                    while (v1_0 < v3_0) {
                        v5.put(p13.readString(), com.flurry.org.apache.avro.data.Json.read(p13));
                        v1_0++;
                    }
                    v3_0 = p13.mapNext();
                }
                v6_3 = v5;
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Unexpected Json node type");
        }
        return v6_3;
    }

    public static void write(com.flurry.org.codehaus.jackson.JsonNode p7, com.flurry.org.apache.avro.io.Encoder p8)
    {
        switch (com.flurry.org.apache.avro.data.Json$1.$SwitchMap$org$codehaus$jackson$JsonToken[p7.asToken().ordinal()]) {
            case 1:
                p8.writeIndex(com.flurry.org.apache.avro.data.Json$JsonType.LONG.ordinal());
                p8.writeLong(p7.getLongValue());
                break;
            case 2:
                p8.writeIndex(com.flurry.org.apache.avro.data.Json$JsonType.DOUBLE.ordinal());
                p8.writeDouble(p7.getDoubleValue());
                break;
            case 3:
                p8.writeIndex(com.flurry.org.apache.avro.data.Json$JsonType.STRING.ordinal());
                p8.writeString(p7.getTextValue());
                break;
            case 4:
                p8.writeIndex(com.flurry.org.apache.avro.data.Json$JsonType.BOOLEAN.ordinal());
                p8.writeBoolean(1);
                break;
            case 5:
                p8.writeIndex(com.flurry.org.apache.avro.data.Json$JsonType.BOOLEAN.ordinal());
                p8.writeBoolean(0);
                break;
            case 6:
                p8.writeIndex(com.flurry.org.apache.avro.data.Json$JsonType.NULL.ordinal());
                p8.writeNull();
                break;
            case 7:
                p8.writeIndex(com.flurry.org.apache.avro.data.Json$JsonType.ARRAY.ordinal());
                p8.writeArrayStart();
                p8.setItemCount(((long) p7.size()));
                java.util.Iterator v2 = p7.iterator();
                while (v2.hasNext()) {
                    com.flurry.org.codehaus.jackson.JsonNode v0_1 = ((com.flurry.org.codehaus.jackson.JsonNode) v2.next());
                    p8.startItem();
                    com.flurry.org.apache.avro.data.Json.write(v0_1, p8);
                }
                p8.writeArrayEnd();
                break;
            case 8:
                p8.writeIndex(com.flurry.org.apache.avro.data.Json$JsonType.OBJECT.ordinal());
                p8.writeMapStart();
                p8.setItemCount(((long) p7.size()));
                java.util.Iterator v1 = p7.getFieldNames();
                while (v1.hasNext()) {
                    p8.startItem();
                    String v3_1 = ((String) v1.next());
                    p8.writeString(v3_1);
                    com.flurry.org.apache.avro.data.Json.write(p7.get(v3_1), p8);
                }
                p8.writeMapEnd();
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append(p7.asToken()).append(" unexpected: ").append(p7).toString());
        }
        return;
    }
}
