package com.flurry.org.apache.avro;
 class Schema$EnumSchema extends com.flurry.org.apache.avro.Schema$NamedSchema {
    private final java.util.Map ordinals;
    private final java.util.List symbols;

    public Schema$EnumSchema(com.flurry.org.apache.avro.Schema$Name p8, String p9, com.flurry.org.apache.avro.Schema$LockableArrayList p10)
    {
        super(com.flurry.org.apache.avro.Schema$Type.ENUM, p8, p9);
        super.symbols = p10.lock();
        super.ordinals = new java.util.HashMap();
        int v0 = 0;
        java.util.Iterator v2 = p10.iterator();
        while (v2.hasNext()) {
            String v3_1 = ((String) v2.next());
            if (super.ordinals.put(com.flurry.org.apache.avro.Schema.access$200(v3_1), Integer.valueOf(v0)) == null) {
                v0++;
            } else {
                throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("Duplicate enum symbol: ").append(v3_1).toString());
            }
        }
        return;
    }

    int computeHash()
    {
        return (super.computeHash() + this.symbols.hashCode());
    }

    public boolean equals(Object p6)
    {
        int v1 = 1;
        if (p6 != this) {
            if ((p6 instanceof com.flurry.org.apache.avro.Schema$EnumSchema)) {
                if ((!this.equalCachedHash(((com.flurry.org.apache.avro.Schema$EnumSchema) p6))) || ((!this.equalNames(((com.flurry.org.apache.avro.Schema$EnumSchema) p6))) || ((!this.symbols.equals(((com.flurry.org.apache.avro.Schema$EnumSchema) p6).symbols)) || (!this.props.equals(((com.flurry.org.apache.avro.Schema$EnumSchema) p6).props))))) {
                    v1 = 0;
                }
            } else {
                v1 = 0;
            }
        }
        return v1;
    }

    public int getEnumOrdinal(String p2)
    {
        return ((Integer) this.ordinals.get(p2)).intValue();
    }

    public java.util.List getEnumSymbols()
    {
        return this.symbols;
    }

    public boolean hasEnumSymbol(String p2)
    {
        return this.ordinals.containsKey(p2);
    }

    void toJson(com.flurry.org.apache.avro.Schema$Names p5, com.flurry.org.codehaus.jackson.JsonGenerator p6)
    {
        if (!this.writeNameRef(p5, p6)) {
            p6.writeStartObject();
            p6.writeStringField("type", "enum");
            this.writeName(p5, p6);
            if (this.getDoc() != null) {
                p6.writeStringField("doc", this.getDoc());
            }
            p6.writeArrayFieldStart("symbols");
            java.util.Iterator v0 = this.symbols.iterator();
            while (v0.hasNext()) {
                p6.writeString(((String) v0.next()));
            }
            p6.writeEndArray();
            this.props.write(p6);
            this.aliasesToJson(p6);
            p6.writeEndObject();
        }
        return;
    }
}
