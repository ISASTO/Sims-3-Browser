package com.flurry.org.apache.avro;
 class Schema$MapSchema extends com.flurry.org.apache.avro.Schema {
    private final com.flurry.org.apache.avro.Schema valueType;

    public Schema$MapSchema(com.flurry.org.apache.avro.Schema p2)
    {
        super(com.flurry.org.apache.avro.Schema$Type.MAP);
        super.valueType = p2;
        return;
    }

    int computeHash()
    {
        return (super.computeHash() + this.valueType.computeHash());
    }

    public boolean equals(Object p6)
    {
        int v1 = 1;
        if (p6 != this) {
            if ((p6 instanceof com.flurry.org.apache.avro.Schema$MapSchema)) {
                if ((!this.equalCachedHash(((com.flurry.org.apache.avro.Schema$MapSchema) p6))) || ((!this.valueType.equals(((com.flurry.org.apache.avro.Schema$MapSchema) p6).valueType)) || (!this.props.equals(((com.flurry.org.apache.avro.Schema$MapSchema) p6).props)))) {
                    v1 = 0;
                }
            } else {
                v1 = 0;
            }
        }
        return v1;
    }

    public com.flurry.org.apache.avro.Schema getValueType()
    {
        return this.valueType;
    }

    void toJson(com.flurry.org.apache.avro.Schema$Names p3, com.flurry.org.codehaus.jackson.JsonGenerator p4)
    {
        p4.writeStartObject();
        p4.writeStringField("type", "map");
        p4.writeFieldName("values");
        this.valueType.toJson(p3, p4);
        this.props.write(p4);
        p4.writeEndObject();
        return;
    }
}
