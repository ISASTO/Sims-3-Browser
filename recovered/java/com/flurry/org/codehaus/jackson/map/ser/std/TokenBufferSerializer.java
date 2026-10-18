package com.flurry.org.codehaus.jackson.map.ser.std;
public class TokenBufferSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {

    public TokenBufferSerializer()
    {
        super(com.flurry.org.codehaus.jackson.util.TokenBuffer);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        return this.createSchemaNode("any", 1);
    }

    public void serialize(com.flurry.org.codehaus.jackson.util.TokenBuffer p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        p1.serialize(p2);
        return;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((com.flurry.org.codehaus.jackson.util.TokenBuffer) p1), p2, p3);
        return;
    }

    public final void serializeWithType(com.flurry.org.codehaus.jackson.util.TokenBuffer p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4)
    {
        p4.writeTypePrefixForScalar(p1, p2);
        this.serialize(p1, p2, p3);
        p4.writeTypeSuffixForScalar(p1, p2);
        return;
    }

    public bridge synthetic void serializeWithType(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3, com.flurry.org.codehaus.jackson.map.TypeSerializer p4)
    {
        this.serializeWithType(((com.flurry.org.codehaus.jackson.util.TokenBuffer) p1), p2, p3, p4);
        return;
    }
}
