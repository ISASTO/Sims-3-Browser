package com.flurry.org.apache.avro;
 class Schema$ArraySchema extends com.flurry.org.apache.avro.Schema {
    private final com.flurry.org.apache.avro.Schema elementType;

    public Schema$ArraySchema(com.flurry.org.apache.avro.Schema p2)
    {
        super(com.flurry.org.apache.avro.Schema$Type.ARRAY);
        super.elementType = p2;
        return;
    }

    int computeHash()
    {
        return (super.computeHash() + this.elementType.computeHash());
    }

    public boolean equals(Object p6)
    {
        int v1 = 1;
        if (p6 != this) {
            if ((p6 instanceof com.flurry.org.apache.avro.Schema$ArraySchema)) {
                if ((!this.equalCachedHash(((com.flurry.org.apache.avro.Schema$ArraySchema) p6))) || ((!this.elementType.equals(((com.flurry.org.apache.avro.Schema$ArraySchema) p6).elementType)) || (!this.props.equals(((com.flurry.org.apache.avro.Schema$ArraySchema) p6).props)))) {
                    v1 = 0;
                }
            } else {
                v1 = 0;
            }
        }
        return v1;
    }

    public com.flurry.org.apache.avro.Schema getElementType()
    {
        return this.elementType;
    }

    void toJson(com.flurry.org.apache.avro.Schema$Names p3, com.flurry.org.codehaus.jackson.JsonGenerator p4)
    {
        p4.writeStartObject();
        p4.writeStringField("type", "array");
        p4.writeFieldName("items");
        this.elementType.toJson(p3, p4);
        this.props.write(p4);
        p4.writeEndObject();
        return;
    }
}
