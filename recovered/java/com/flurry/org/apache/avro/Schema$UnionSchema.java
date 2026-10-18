package com.flurry.org.apache.avro;
 class Schema$UnionSchema extends com.flurry.org.apache.avro.Schema {
    private final java.util.Map indexByName;
    private final java.util.List types;

    public Schema$UnionSchema(com.flurry.org.apache.avro.Schema$LockableArrayList p9)
    {
        super(com.flurry.org.apache.avro.Schema$Type.UNION);
        super.indexByName = new java.util.HashMap();
        super.types = p9.lock();
        int v1 = 0;
        java.util.Iterator v0 = p9.iterator();
        while (v0.hasNext()) {
            com.flurry.org.apache.avro.Schema v4_1 = ((com.flurry.org.apache.avro.Schema) v0.next());
            if (v4_1.getType() != com.flurry.org.apache.avro.Schema$Type.UNION) {
                String v3 = v4_1.getFullName();
                if (v3 != null) {
                    if (super.indexByName.put(v3, Integer.valueOf(v1)) == null) {
                        v1++;
                    } else {
                        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Duplicate in union:").append(v3).toString());
                    }
                } else {
                    throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Nameless in union:").append(super).toString());
                }
            } else {
                throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Nested union: ").append(super).toString());
            }
        }
        return;
    }

    public void addProp(String p4, String p5)
    {
        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Can\'t set properties on a union: ").append(this).toString());
    }

    int computeHash()
    {
        int v0 = super.computeHash();
        java.util.Iterator v1 = this.types.iterator();
        while (v1.hasNext()) {
            v0 += ((com.flurry.org.apache.avro.Schema) v1.next()).computeHash();
        }
        return v0;
    }

    public boolean equals(Object p6)
    {
        int v1 = 1;
        if (p6 != this) {
            if ((p6 instanceof com.flurry.org.apache.avro.Schema$UnionSchema)) {
                if ((!this.equalCachedHash(((com.flurry.org.apache.avro.Schema$UnionSchema) p6))) || ((!this.types.equals(((com.flurry.org.apache.avro.Schema$UnionSchema) p6).types)) || (!this.props.equals(((com.flurry.org.apache.avro.Schema$UnionSchema) p6).props)))) {
                    v1 = 0;
                }
            } else {
                v1 = 0;
            }
        }
        return v1;
    }

    public Integer getIndexNamed(String p2)
    {
        return ((Integer) this.indexByName.get(p2));
    }

    public java.util.List getTypes()
    {
        return this.types;
    }

    void toJson(com.flurry.org.apache.avro.Schema$Names p4, com.flurry.org.codehaus.jackson.JsonGenerator p5)
    {
        p5.writeStartArray();
        java.util.Iterator v0 = this.types.iterator();
        while (v0.hasNext()) {
            ((com.flurry.org.apache.avro.Schema) v0.next()).toJson(p4, p5);
        }
        p5.writeEndArray();
        return;
    }
}
