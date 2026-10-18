package com.flurry.org.codehaus.jackson.map.ser.std;
public class StringCollectionSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.StaticListSerializerBase implements com.flurry.org.codehaus.jackson.map.ResolvableSerializer {
    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _serializer;

    public StringCollectionSerializer(com.flurry.org.codehaus.jackson.map.BeanProperty p2)
    {
        super(java.util.Collection, p2);
        return;
    }

    private final void serializeContents(java.util.Collection p6, com.flurry.org.codehaus.jackson.JsonGenerator p7, com.flurry.org.codehaus.jackson.map.SerializerProvider p8)
    {
        if (this._serializer == null) {
            int v1 = 0;
            java.util.Iterator v2 = p6.iterator();
            while (v2.hasNext()) {
                String v3_0 = ((String) v2.next());
                try {
                    if (v3_0 != null) {
                        p7.writeString(v3_0);
                    } else {
                        p8.defaultSerializeNull(p7);
                    }
                    v1++;
                } catch (Exception v0) {
                    this.wrapAndThrow(p8, v0, p6, v1);
                }
            }
        } else {
            this.serializeUsingCustom(p6, p7, p8);
        }
        return;
    }

    private void serializeUsingCustom(java.util.Collection p7, com.flurry.org.codehaus.jackson.JsonGenerator p8, com.flurry.org.codehaus.jackson.map.SerializerProvider p9)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v3 = this._serializer;
        java.util.Iterator v2 = p7.iterator();
        while (v2.hasNext()) {
            String v4_0 = ((String) v2.next());
            try {
                if (v4_0 != null) {
                    v3.serialize(v4_0, p8, p9);
                } else {
                    p9.defaultSerializeNull(p8);
                }
            } catch (Exception v0) {
                this.wrapAndThrow(p9, v0, p7, 0);
            }
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
        this.serialize(((java.util.Collection) p1), p2, p3);
        return;
    }

    public void serialize(java.util.Collection p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
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
        this.serializeWithType(((java.util.Collection) p1), p2, p3, p4);
        return;
    }

    public void serializeWithType(java.util.Collection p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4, com.flurry.org.codehaus.jackson.map.TypeSerializer p5)
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
