package com.flurry.org.codehaus.jackson.map.ser.std;
public final class StdArraySerializers$DoubleArraySerializer extends com.flurry.org.codehaus.jackson.map.ser.std.StdArraySerializers$ArraySerializerBase {

    public StdArraySerializers$DoubleArraySerializer()
    {
        super(double[], 0, 0);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase _withValueTypeSerializer(com.flurry.org.codehaus.jackson.map.TypeSerializer p1)
    {
        return this;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p4, reflect.Type p5)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v0 = this.createSchemaNode("array", 1);
        v0.put("items", this.createSchemaNode("number"));
        return v0;
    }

    public bridge synthetic void serializeContents(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serializeContents(((double[]) p1), p2, p3);
        return;
    }

    public void serializeContents(double[] p5, com.flurry.org.codehaus.jackson.JsonGenerator p6, com.flurry.org.codehaus.jackson.map.SerializerProvider p7)
    {
        int v0 = 0;
        int v1 = p5.length;
        while (v0 < v1) {
            p6.writeNumber(p5[v0]);
            v0++;
        }
        return;
    }
}
