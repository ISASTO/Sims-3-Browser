package com.flurry.org.codehaus.jackson.map.ser.std;
public abstract class StaticListSerializerBase extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {
    protected final com.flurry.org.codehaus.jackson.map.BeanProperty _property;

    protected StaticListSerializerBase(Class p2, com.flurry.org.codehaus.jackson.map.BeanProperty p3)
    {
        super(p2, 0);
        super._property = p3;
        return;
    }

    protected abstract com.flurry.org.codehaus.jackson.JsonNode contentSchema();

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p4, reflect.Type p5)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v0 = this.createSchemaNode("array", 1);
        v0.put("items", this.contentSchema());
        return v0;
    }
}
