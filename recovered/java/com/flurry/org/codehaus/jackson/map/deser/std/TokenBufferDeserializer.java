package com.flurry.org.codehaus.jackson.map.deser.std;
public class TokenBufferDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer {

    public TokenBufferDeserializer()
    {
        super(com.flurry.org.codehaus.jackson.util.TokenBuffer);
        return;
    }

    public com.flurry.org.codehaus.jackson.util.TokenBuffer deserialize(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        com.flurry.org.codehaus.jackson.util.TokenBuffer v0_1 = new com.flurry.org.codehaus.jackson.util.TokenBuffer(p3.getCodec());
        v0_1.copyCurrentStructure(p3);
        return v0_1;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }
}
