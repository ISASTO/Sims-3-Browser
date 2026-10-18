package com.flurry.org.apache.avro;
 class Schema$FixedSchema extends com.flurry.org.apache.avro.Schema$NamedSchema {
    private final int size;

    public Schema$FixedSchema(com.flurry.org.apache.avro.Schema$Name p4, String p5, int p6)
    {
        super(com.flurry.org.apache.avro.Schema$Type.FIXED, p4, p5);
        if (p6 >= 0) {
            super.size = p6;
            return;
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("Invalid fixed size: ").append(p6).toString());
        }
    }

    int computeHash()
    {
        return (super.computeHash() + this.size);
    }

    public boolean equals(Object p6)
    {
        int v1 = 1;
        if (p6 != this) {
            if ((p6 instanceof com.flurry.org.apache.avro.Schema$FixedSchema)) {
                if ((!this.equalCachedHash(((com.flurry.org.apache.avro.Schema$FixedSchema) p6))) || ((!this.equalNames(((com.flurry.org.apache.avro.Schema$FixedSchema) p6))) || ((this.size != ((com.flurry.org.apache.avro.Schema$FixedSchema) p6).size) || (!this.props.equals(((com.flurry.org.apache.avro.Schema$FixedSchema) p6).props))))) {
                    v1 = 0;
                }
            } else {
                v1 = 0;
            }
        }
        return v1;
    }

    public int getFixedSize()
    {
        return this.size;
    }

    void toJson(com.flurry.org.apache.avro.Schema$Names p3, com.flurry.org.codehaus.jackson.JsonGenerator p4)
    {
        if (!this.writeNameRef(p3, p4)) {
            p4.writeStartObject();
            p4.writeStringField("type", "fixed");
            this.writeName(p3, p4);
            if (this.getDoc() != null) {
                p4.writeStringField("doc", this.getDoc());
            }
            p4.writeNumberField("size", this.size);
            this.props.write(p4);
            this.aliasesToJson(p4);
            p4.writeEndObject();
        }
        return;
    }
}
