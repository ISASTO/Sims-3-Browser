package com.flurry.org.codehaus.jackson.map.ser.std;
public class SerializableWithTypeSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {
    public static final com.flurry.org.codehaus.jackson.map.ser.std.SerializableWithTypeSerializer instance;

    static SerializableWithTypeSerializer()
    {
        com.flurry.org.codehaus.jackson.map.ser.std.SerializableWithTypeSerializer.instance = new com.flurry.org.codehaus.jackson.map.ser.std.SerializableWithTypeSerializer();
        return;
    }

    protected SerializableWithTypeSerializer()
    {
        super(com.flurry.org.codehaus.jackson.map.JsonSerializableWithType);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p11, reflect.Type p12)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v2 = this.createObjectNode();
        String v6 = "any";
        String v3 = 0;
        String v1 = 0;
        if (p12 != null) {
            Class v4 = com.flurry.org.codehaus.jackson.map.type.TypeFactory.rawClass(p12);
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

    public void serialize(com.flurry.org.codehaus.jackson.map.JsonSerializableWithType p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        p1.serialize(p2, p3);
        return;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((com.flurry.org.codehaus.jackson.map.JsonSerializableWithType) p1), p2, p3);
        return;
    }

    public final void serializeWithType(com.flurry.org.codehaus.jackson.map.JsonSerializableWithType p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4)
    {
        p1.serializeWithType(p2, p3, p4);
        return;
    }

    public bridge synthetic void serializeWithType(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4)
    {
        this.serializeWithType(((com.flurry.org.codehaus.jackson.map.JsonSerializableWithType) p1), p2, p3, p4);
        return;
    }
}
