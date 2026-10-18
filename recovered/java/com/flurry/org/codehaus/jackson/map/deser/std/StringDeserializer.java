package com.flurry.org.codehaus.jackson.map.deser.std;
public class StringDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer {

    public StringDeserializer()
    {
        super(String);
        return;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public String deserialize(com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        String v2_1;
        com.flurry.org.codehaus.jackson.JsonToken v0 = p5.getCurrentToken();
        if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
            if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_EMBEDDED_OBJECT) {
                if (!v0.isScalarValue()) {
                    throw p6.mappingException(this._valueClass, v0);
                } else {
                    v2_1 = p5.getText();
                }
            } else {
                byte[] v1_0 = p5.getEmbeddedObject();
                if (v1_0 != null) {
                    if (!(v1_0 instanceof byte[])) {
                        v2_1 = v1_0.toString();
                    } else {
                        v2_1 = com.flurry.org.codehaus.jackson.Base64Variants.getDefaultVariant().encode(((byte[]) ((byte[]) v1_0)), 0);
                    }
                } else {
                    v2_1 = 0;
                }
            }
        } else {
            v2_1 = p5.getText();
        }
        return v2_1;
    }

    public bridge synthetic Object deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4)
    {
        return this.deserializeWithType(p2, p3, p4);
    }

    public String deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4)
    {
        return this.deserialize(p2, p3);
    }
}
