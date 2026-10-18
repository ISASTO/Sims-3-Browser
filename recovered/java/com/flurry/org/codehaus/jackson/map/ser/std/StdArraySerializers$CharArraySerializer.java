package com.flurry.org.codehaus.jackson.map.ser.std;
public final class StdArraySerializers$CharArraySerializer extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {

    public StdArraySerializers$CharArraySerializer()
    {
        super(char[]);
        return;
    }

    private final void _writeArrayContents(com.flurry.org.codehaus.jackson.JsonGenerator p4, char[] p5)
    {
        int v0 = 0;
        int v1 = p5.length;
        while (v0 < v1) {
            p4.writeString(p5, v0, 1);
            v0++;
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p5, reflect.Type p6)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v1 = this.createSchemaNode("array", 1);
        com.flurry.org.codehaus.jackson.node.ObjectNode v0 = this.createSchemaNode("string");
        v0.put("type", "string");
        v1.put("items", v0);
        return v1;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((char[]) p1), p2, p3);
        return;
    }

    public void serialize(char[] p3, com.flurry.org.codehaus.jackson.JsonGenerator p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5)
    {
        if (!p5.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_CHAR_ARRAYS_AS_JSON_ARRAYS)) {
            p4.writeString(p3, 0, p3.length);
        } else {
            p4.writeStartArray();
            this._writeArrayContents(p4, p3);
            p4.writeEndArray();
        }
        return;
    }

    public bridge synthetic void serializeWithType(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4)
    {
        this.serializeWithType(((char[]) p1), p2, p3, p4);
        return;
    }

    public void serializeWithType(char[] p3, com.flurry.org.codehaus.jackson.JsonGenerator p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5, com.flurry.org.codehaus.jackson.map.TypeSerializer p6)
    {
        if (!p5.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_CHAR_ARRAYS_AS_JSON_ARRAYS)) {
            p6.writeTypePrefixForScalar(p3, p4);
            p4.writeString(p3, 0, p3.length);
            p6.writeTypeSuffixForScalar(p3, p4);
        } else {
            p6.writeTypePrefixForArray(p3, p4);
            this._writeArrayContents(p4, p3);
            p6.writeTypeSuffixForArray(p3, p4);
        }
        return;
    }
}
