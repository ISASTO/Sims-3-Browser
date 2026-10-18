package com.flurry.org.apache.avro;
 class Schema$Names extends java.util.LinkedHashMap {
    private String space;

    public Schema$Names()
    {
        return;
    }

    public Schema$Names(String p1)
    {
        this.space = p1;
        return;
    }

    static synthetic String access$1100(com.flurry.org.apache.avro.Schema$Names p1)
    {
        return p1.space;
    }

    static synthetic String access$1102(com.flurry.org.apache.avro.Schema$Names p0, String p1)
    {
        p0.space = p1;
        return p1;
    }

    public void add(com.flurry.org.apache.avro.Schema p2)
    {
        this.put(((com.flurry.org.apache.avro.Schema$NamedSchema) p2).name, p2);
        return;
    }

    public boolean contains(com.flurry.org.apache.avro.Schema p2)
    {
        int v0_2;
        if (this.get(((com.flurry.org.apache.avro.Schema$NamedSchema) p2).name) == null) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public com.flurry.org.apache.avro.Schema get(Object p5)
    {
        com.flurry.org.apache.avro.Schema$Name v0_1;
        com.flurry.org.apache.avro.Schema v2_3;
        if (!(p5 instanceof String)) {
            v0_1 = ((com.flurry.org.apache.avro.Schema$Name) p5);
            v2_3 = ((com.flurry.org.apache.avro.Schema) super.get(v0_1));
        } else {
            com.flurry.org.apache.avro.Schema$Type v1_1 = ((com.flurry.org.apache.avro.Schema$Type) com.flurry.org.apache.avro.Schema.PRIMITIVES.get(((String) p5)));
            if (v1_1 == null) {
                v0_1 = new com.flurry.org.apache.avro.Schema$Name(((String) p5), this.space);
            } else {
                v2_3 = com.flurry.org.apache.avro.Schema.create(v1_1);
            }
        }
        return v2_3;
    }

    public bridge synthetic Object get(Object p2)
    {
        return this.get(p2);
    }

    public com.flurry.org.apache.avro.Schema put(com.flurry.org.apache.avro.Schema$Name p4, com.flurry.org.apache.avro.Schema p5)
    {
        if (!this.containsKey(p4)) {
            return ((com.flurry.org.apache.avro.Schema) super.put(p4, p5));
        } else {
            throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("Can\'t redefine: ").append(p4).toString());
        }
    }

    public bridge synthetic Object put(Object p2, Object p3)
    {
        return this.put(((com.flurry.org.apache.avro.Schema$Name) p2), ((com.flurry.org.apache.avro.Schema) p3));
    }

    public String space()
    {
        return this.space;
    }

    public void space(String p1)
    {
        this.space = p1;
        return;
    }
}
