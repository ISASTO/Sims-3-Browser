package com.flurry.org.codehaus.jackson.map.deser.std;
public class JavaTypeDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer {

    public JavaTypeDeserializer()
    {
        super(com.flurry.org.codehaus.jackson.type.JavaType);
        return;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType deserialize(com.flurry.org.codehaus.jackson.JsonParser p4, com.flurry.org.codehaus.jackson.map.DeserializationContext p5)
    {
        com.flurry.org.codehaus.jackson.map.JsonMappingException v2_1;
        com.flurry.org.codehaus.jackson.JsonToken v0 = p4.getCurrentToken();
        if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
            if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_EMBEDDED_OBJECT) {
                throw p5.mappingException(this._valueClass);
            } else {
                v2_1 = ((com.flurry.org.codehaus.jackson.type.JavaType) p4.getEmbeddedObject());
            }
        } else {
            String v1 = p4.getText().trim();
            if (v1.length() != 0) {
                v2_1 = p5.getTypeFactory().constructFromCanonical(v1);
            } else {
                v2_1 = ((com.flurry.org.codehaus.jackson.type.JavaType) this.getEmptyValue());
            }
        }
        return v2_1;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }
}
