package com.flurry.org.codehaus.jackson.map.ser.std;
public class SerializableSerializer extends com.flurry.org.codehaus.jackson.map.ser.SerializerBase {
    public static final com.flurry.org.codehaus.jackson.map.ser.std.SerializableSerializer instance;

    static SerializableSerializer()
    {
        com.flurry.org.codehaus.jackson.map.ser.std.SerializableSerializer.instance = new com.flurry.org.codehaus.jackson.map.ser.std.SerializableSerializer();
        return;
    }

    protected SerializableSerializer()
    {
        super(com.flurry.org.codehaus.jackson.map.JsonSerializable);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p11, reflect.Type p12)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v2 = this.createObjectNode();
        String v6 = "any";
        String v3 = 0;
        String v1 = 0;
        if (p12 != null) {
            Class v4 = com.flurry.org.codehaus.jackson.map.type.TypeFactory.type(p12).getRawClass();
            if (v4.isAnnotationPresent(com.flurry.org.codehaus.jackson.schema.JsonSerializableSchema)) {
                com.flurry.org.codehaus.jackson.schema.JsonSerializableSchema v5_1 = ((com.flurry.org.codehaus.jackson.schema.JsonSerializableSchema) v4.getAnnotation(com.flurry.org.codehaus.jackson.schema.JsonSerializableSchema));
                v6 = v5_1.schemaType();
                if (!"##irrelevant".equals(v5_1.schemaObjectPropertiesDefinition())) {
                    v3 = v5_1.schemaObjectPropertiesDefinition();
                }
                if (!"##irrelevant".equals(v5_1.schemaItemDefinition())) {
                    v1 = v5_1.schemaItemDefinition();
                }
            }
        }
        v2.put("type", v6);
        if (v3 != null) {
            try {
                v2.put("properties", ((com.flurry.org.codehaus.jackson.JsonNode) new com.flurry.org.codehaus.jackson.map.ObjectMapper().readValue(v3, com.flurry.org.codehaus.jackson.JsonNode)));
            } catch (java.io.IOException v0_0) {
                throw new IllegalStateException(v0_0);
            }
        }
        if (v1 != null) {
            try {
                v2.put("items", ((com.flurry.org.codehaus.jackson.JsonNode) new com.flurry.org.codehaus.jackson.map.ObjectMapper().readValue(v1, com.flurry.org.codehaus.jackson.JsonNode)));
            } catch (java.io.IOException v0_1) {
                throw new IllegalStateException(v0_1);
            }
        }
        return v2;
    }

    public void serialize(com.flurry.org.codehaus.jackson.map.JsonSerializable p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        p1.serialize(p2, p3);
        return;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((com.flurry.org.codehaus.jackson.map.JsonSerializable) p1), p2, p3);
        return;
    }

    public final void serializeWithType(com.flurry.org.codehaus.jackson.map.JsonSerializable p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4, com.flurry.org.codehaus.jackson.map.TypeSerializer p5)
    {
        if (!(p2 instanceof com.flurry.org.codehaus.jackson.map.JsonSerializableWithType)) {
            this.serialize(p2, p3, p4);
        } else {
            ((com.flurry.org.codehaus.jackson.map.JsonSerializableWithType) p2).serializeWithType(p3, p4, p5);
        }
        return;
    }

    public bridge synthetic void serializeWithType(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4)
    {
        this.serializeWithType(((com.flurry.org.codehaus.jackson.map.JsonSerializable) p1), p2, p3, p4);
        return;
    }
}
