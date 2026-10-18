package com.flurry.org.codehaus.jackson.map.ser.std;
public final class StdArraySerializers$IntArraySerializer extends com.flurry.org.codehaus.jackson.map.ser.std.StdArraySerializers$ArraySerializerBase {

    public StdArraySerializers$IntArraySerializer()
    {
        super(int[], 0, 0);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase _withValueTypeSerializer(com.flurry.org.codehaus.jackson.map.TypeSerializer p1)
    {
        return this;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p4, reflect.Type p5)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v0 = this.createSchemaNode("array", 1);
        v0.put("items", this.createSchemaNode("integer"));
        return v0;
    }

    public bridge synthetic void serializeContents(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serializeContents(((int[]) p1), p2, p3);
        return;
    }

    public void serializeContents(int[] p4, com.flurry.org.codehaus.jackson.JsonGenerator p5, com.flurry.org.codehaus.jackson.map.SerializerProvider p6)
    {
        int v0 = 0;
        int v1 = p4.length;
        while (v0 < v1) {
            p5.writeNumber(p4[v0]);
            v0++;
        }
        return;
    }
}
