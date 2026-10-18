package com.flurry.org.codehaus.jackson.map.ser.std;
public final class StdArraySerializers$LongArraySerializer extends com.flurry.org.codehaus.jackson.map.ser.std.StdArraySerializers$ArraySerializerBase {

    public StdArraySerializers$LongArraySerializer()
    {
        this(0);
        return;
    }

    public StdArraySerializers$LongArraySerializer(com.flurry.org.codehaus.jackson.map.TypeSerializer p3)
    {
        super(long[], p3, 0);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase _withValueTypeSerializer(com.flurry.org.codehaus.jackson.map.TypeSerializer p2)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.std.StdArraySerializers$LongArraySerializer(p2);
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p5, reflect.Type p6)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v0 = this.createSchemaNode("array", 1);
        v0.put("items", this.createSchemaNode("number", 1));
        return v0;
    }

    public bridge synthetic void serializeContents(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serializeContents(((long[]) p1), p2, p3);
        return;
    }

    public void serializeContents(long[] p5, com.flurry.org.codehaus.jackson.JsonGenerator p6, com.flurry.org.codehaus.jackson.map.SerializerProvider p7)
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
