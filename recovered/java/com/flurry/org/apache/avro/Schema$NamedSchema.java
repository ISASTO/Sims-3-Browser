package com.flurry.org.apache.avro;
abstract class Schema$NamedSchema extends com.flurry.org.apache.avro.Schema {
    java.util.Set aliases;
    final String doc;
    final com.flurry.org.apache.avro.Schema$Name name;

    public Schema$NamedSchema(com.flurry.org.apache.avro.Schema$Type p4, com.flurry.org.apache.avro.Schema$Name p5, String p6)
    {
        super(p4);
        super.name = p5;
        super.doc = p6;
        if (!com.flurry.org.apache.avro.Schema$NamedSchema.PRIMITIVES.containsKey(com.flurry.org.apache.avro.Schema$Name.access$400(p5))) {
            return;
        } else {
            throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Schemas may not be named after primitives: ").append(com.flurry.org.apache.avro.Schema$Name.access$400(p5)).toString());
        }
    }

    public void addAlias(String p4)
    {
        if (this.aliases == null) {
            this.aliases = new java.util.LinkedHashSet();
        }
        this.aliases.add(new com.flurry.org.apache.avro.Schema$Name(p4, com.flurry.org.apache.avro.Schema$Name.access$600(this.name)));
        return;
    }

    public void aliasesToJson(com.flurry.org.codehaus.jackson.JsonGenerator p4)
    {
        if ((this.aliases != null) && (this.aliases.size() != 0)) {
            p4.writeFieldName("aliases");
            p4.writeStartArray();
            java.util.Iterator v1 = this.aliases.iterator();
            while (v1.hasNext()) {
                p4.writeString(((com.flurry.org.apache.avro.Schema$Name) v1.next()).getQualified(com.flurry.org.apache.avro.Schema$Name.access$600(this.name)));
            }
            p4.writeEndArray();
        }
        return;
    }

    int computeHash()
    {
        return (super.computeHash() + this.name.hashCode());
    }

    public boolean equalNames(com.flurry.org.apache.avro.Schema$NamedSchema p3)
    {
        return this.name.equals(p3.name);
    }

    public java.util.Set getAliases()
    {
        java.util.LinkedHashSet v2_1 = new java.util.LinkedHashSet();
        if (this.aliases != null) {
            java.util.Iterator v1 = this.aliases.iterator();
            while (v1.hasNext()) {
                v2_1.add(com.flurry.org.apache.avro.Schema$Name.access$400(((com.flurry.org.apache.avro.Schema$Name) v1.next())));
            }
        }
        return v2_1;
    }

    public String getDoc()
    {
        return this.doc;
    }

    public String getFullName()
    {
        return com.flurry.org.apache.avro.Schema$Name.access$400(this.name);
    }

    public String getName()
    {
        return com.flurry.org.apache.avro.Schema$Name.access$500(this.name);
    }

    public String getNamespace()
    {
        return com.flurry.org.apache.avro.Schema$Name.access$600(this.name);
    }

    public void writeName(com.flurry.org.apache.avro.Schema$Names p2, com.flurry.org.codehaus.jackson.JsonGenerator p3)
    {
        this.name.writeName(p2, p3);
        return;
    }

    public boolean writeNameRef(com.flurry.org.apache.avro.Schema$Names p3, com.flurry.org.codehaus.jackson.JsonGenerator p4)
    {
        int v0_2;
        if (!this.equals(p3.get(this.name))) {
            if (com.flurry.org.apache.avro.Schema$Name.access$500(this.name) != null) {
                p3.put(this.name, this);
            }
            v0_2 = 0;
        } else {
            p4.writeString(this.name.getQualified(p3.space()));
            v0_2 = 1;
        }
        return v0_2;
    }
}
