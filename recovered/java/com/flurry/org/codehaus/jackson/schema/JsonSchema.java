package com.flurry.org.codehaus.jackson.schema;
public class JsonSchema {
    private final com.flurry.org.codehaus.jackson.node.ObjectNode schema;

    public JsonSchema(com.flurry.org.codehaus.jackson.node.ObjectNode p1)
    {
        this.schema = p1;
        return;
    }

    public static com.flurry.org.codehaus.jackson.JsonNode getDefaultSchemaNode()
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v0 = com.flurry.org.codehaus.jackson.node.JsonNodeFactory.instance.objectNode();
        v0.put("type", "any");
        return v0;
    }

    public boolean equals(Object p5)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v1_0 = 1;
        if (p5 != this) {
            if (p5 != null) {
                if ((p5 instanceof com.flurry.org.codehaus.jackson.schema.JsonSchema)) {
                    if (this.schema != null) {
                        v1_0 = this.schema.equals(((com.flurry.org.codehaus.jackson.schema.JsonSchema) p5).schema);
                    } else {
                        if (((com.flurry.org.codehaus.jackson.schema.JsonSchema) p5).schema != null) {
                            v1_0 = 0;
                        }
                    }
                } else {
                    v1_0 = 0;
                }
            } else {
                v1_0 = 0;
            }
        }
        return v1_0;
    }

    public com.flurry.org.codehaus.jackson.node.ObjectNode getSchemaNode()
    {
        return this.schema;
    }

    public String toString()
    {
        return this.schema.toString();
    }
}
