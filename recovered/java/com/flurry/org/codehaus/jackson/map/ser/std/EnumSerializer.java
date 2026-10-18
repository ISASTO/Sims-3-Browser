package com.flurry.org.codehaus.jackson.map.ser.std;
public class EnumSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.ScalarSerializerBase {
    protected final com.flurry.org.codehaus.jackson.map.util.EnumValues _values;

    public EnumSerializer(com.flurry.org.codehaus.jackson.map.util.EnumValues p3)
    {
        super(Enum, 0);
        super._values = p3;
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.ser.std.EnumSerializer construct(Class p3, com.flurry.org.codehaus.jackson.map.SerializationConfig p4, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p5)
    {
        com.flurry.org.codehaus.jackson.map.util.EnumValues v1;
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v0 = p4.getAnnotationIntrospector();
        if (!p4.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_ENUMS_USING_TO_STRING)) {
            v1 = com.flurry.org.codehaus.jackson.map.util.EnumValues.constructFromName(p3, v0);
        } else {
            v1 = com.flurry.org.codehaus.jackson.map.util.EnumValues.constructFromToString(p3, v0);
        }
        return new com.flurry.org.codehaus.jackson.map.ser.std.EnumSerializer(v1);
    }

    public com.flurry.org.codehaus.jackson.map.util.EnumValues getEnumValues()
    {
        return this._values;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p8, reflect.Type p9)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v2;
        if (!p8.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_ENUMS_USING_INDEX)) {
            v2 = this.createSchemaNode("string", 1);
            if ((p9 != null) && (p8.constructType(p9).isEnumType())) {
                com.flurry.org.codehaus.jackson.node.ArrayNode v0 = v2.putArray("enum");
                java.util.Iterator v1 = this._values.values().iterator();
                while (v1.hasNext()) {
                    v0.add(((com.flurry.org.codehaus.jackson.io.SerializedString) v1.next()).getValue());
                }
            }
        } else {
            v2 = this.createSchemaNode("integer", 1);
        }
        return v2;
    }

    public final void serialize(Enum p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        if (!p4.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_ENUMS_USING_INDEX)) {
            p3.writeString(this._values.serializedValueFor(p2));
        } else {
            p3.writeNumber(p2.ordinal());
        }
        return;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((Enum) p1), p2, p3);
        return;
    }
}
