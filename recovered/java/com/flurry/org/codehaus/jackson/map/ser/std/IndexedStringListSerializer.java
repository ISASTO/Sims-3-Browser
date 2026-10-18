package com.flurry.org.codehaus.jackson.map.ser.std;
public final class IndexedStringListSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.StaticListSerializerBase implements com.flurry.org.codehaus.jackson.map.ResolvableSerializer {
    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _serializer;

    public IndexedStringListSerializer(com.flurry.org.codehaus.jackson.map.BeanProperty p2)
    {
        super(java.util.List, p2);
        return;
    }

    private final void serializeContents(java.util.List p5, com.flurry.org.codehaus.jackson.JsonGenerator p6, com.flurry.org.codehaus.jackson.map.SerializerProvider p7)
    {
        int v1 = 0;
        try {
            int v2 = p5.size();
        } catch (Exception v0) {
            this.wrapAndThrow(p7, v0, p5, v1);
            return;
        }
        while (v1 < v2) {
            String v3_1 = ((String) p5.get(v1));
            if (v3_1 != null) {
                p6.writeString(v3_1);
            } else {
                p7.defaultSerializeNull(p6);
            }
            v1++;
        }
        return;
    }

    private final void serializeUsingCustom(java.util.List p6, com.flurry.org.codehaus.jackson.JsonGenerator p7, com.flurry.org.codehaus.jackson.map.SerializerProvider p8)
    {
        try {
            int v2 = p6.size();
            com.flurry.org.codehaus.jackson.map.JsonSerializer v3 = this._serializer;
            int v1 = 0;
        } catch (Exception v0) {
            this.wrapAndThrow(p8, v0, p6, v1);
            return;
        }
        while (v1 < v2) {
            String v4_1 = ((String) p6.get(v1));
            if (v4_1 != null) {
                v3.serialize(v4_1, p7, p8);
            } else {
                p8.defaultSerializeNull(p7);
            }
            v1++;
        }
        return;
    }

    protected com.flurry.org.codehaus.jackson.JsonNode contentSchema()
    {
        return this.createSchemaNode("string", 1);
    }

    public void resolve(com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v0 = p4.findValueSerializer(String, this._property);
        if (!this.isDefaultSerializer(v0)) {
            this._serializer = v0;
        }
        return;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((java.util.List) p1), p2, p3);
        return;
    }

    public void serialize(java.util.List p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        p3.writeStartArray();
        if (this._serializer != null) {
            this.serializeUsingCustom(p2, p3, p4);
        } else {
            this.serializeContents(p2, p3, p4);
        }
        p3.writeEndArray();
        return;
    }

    public bridge synthetic void serializeWithType(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4)
    {
        this.serializeWithType(((java.util.List) p1), p2, p3, p4);
        return;
    }

    public void serializeWithType(java.util.List p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4, com.flurry.org.codehaus.jackson.map.TypeSerializer p5)
    {
        p5.writeTypePrefixForArray(p2, p3);
        if (this._serializer != null) {
            this.serializeUsingCustom(p2, p3, p4);
        } else {
            this.serializeContents(p2, p3, p4);
        }
        p5.writeTypeSuffixForArray(p2, p3);
        return;
    }
}
