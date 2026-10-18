package com.flurry.org.codehaus.jackson.map.ser;
public final class StdSerializers$BooleanSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.NonTypedScalarSerializerBase {
    final boolean _forPrimitive;

    public StdSerializers$BooleanSerializer(boolean p2)
    {
        super(Boolean);
        super._forPrimitive = p2;
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v0_1;
        if (this._forPrimitive) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return this.createSchemaNode("boolean", v0_1);
    }

    public void serialize(Boolean p2, com.flurry.org.codehaus.jackson.JsonGenerator p3, com.flurry.org.codehaus.jackson.map.SerializerProvider p4)
    {
        p3.writeBoolean(p2.booleanValue());
        return;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((Boolean) p1), p2, p3);
        return;
    }
}
