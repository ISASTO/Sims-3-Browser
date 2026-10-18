package com.flurry.org.codehaus.jackson.map.ser.std;
public final class StdArraySerializers$StringArraySerializer extends com.flurry.org.codehaus.jackson.map.ser.std.StdArraySerializers$ArraySerializerBase implements com.flurry.org.codehaus.jackson.map.ResolvableSerializer {
    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _elementSerializer;

    public StdArraySerializers$StringArraySerializer(com.flurry.org.codehaus.jackson.map.BeanProperty p3)
    {
        super(String[], 0, p3);
        return;
    }

    private void serializeContentsSlow(String[] p5, com.flurry.org.codehaus.jackson.JsonGenerator p6, com.flurry.org.codehaus.jackson.map.SerializerProvider p7, com.flurry.org.codehaus.jackson.map.JsonSerializer p8)
    {
        int v0 = 0;
        int v1 = p5.length;
        while (v0 < v1) {
            if (p5[v0] != null) {
                p8.serialize(p5[v0], p6, p7);
            } else {
                p7.defaultSerializeNull(p6);
            }
            v0++;
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase _withValueTypeSerializer(com.flurry.org.codehaus.jackson.map.TypeSerializer p1)
    {
        return this;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p4, reflect.Type p5)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v0 = this.createSchemaNode("array", 1);
        v0.put("items", this.createSchemaNode("string"));
        return v0;
    }

    public void resolve(com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v0 = p4.findValueSerializer(String, this._property);
        if ((v0 != null) && (v0.getClass().getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JacksonStdImpl) == null)) {
            this._elementSerializer = v0;
        }
        return;
    }

    public bridge synthetic void serializeContents(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serializeContents(((String[]) p1), p2, p3);
        return;
    }

    public void serializeContents(String[] p5, com.flurry.org.codehaus.jackson.JsonGenerator p6, com.flurry.org.codehaus.jackson.map.SerializerProvider p7)
    {
        int v1 = p5.length;
        if (v1 != 0) {
            if (this._elementSerializer == null) {
                int v0 = 0;
                while (v0 < v1) {
                    if (p5[v0] != null) {
                        p6.writeString(p5[v0]);
                    } else {
                        p6.writeNull();
                    }
                    v0++;
                }
            } else {
                this.serializeContentsSlow(p5, p6, p7, this._elementSerializer);
            }
        }
        return;
    }
}
