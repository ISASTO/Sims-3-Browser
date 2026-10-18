package com.flurry.org.apache.avro;
 class Schema$RecordSchema extends com.flurry.org.apache.avro.Schema$NamedSchema {
    private java.util.Map fieldMap;
    private java.util.List fields;
    private final boolean isError;

    public Schema$RecordSchema(com.flurry.org.apache.avro.Schema$Name p2, String p3, boolean p4)
    {
        super(com.flurry.org.apache.avro.Schema$Type.RECORD, p2, p3);
        super.isError = p4;
        return;
    }

    int computeHash()
    {
        Throwable v2_2;
        java.util.Map v1_1 = ((java.util.Map) com.flurry.org.apache.avro.Schema.access$1000().get());
        if (!v1_1.containsKey(this)) {
            boolean v0 = v1_1.isEmpty();
            try {
                v1_1.put(this, this);
                v2_2 = (super.computeHash() + this.fields.hashCode());
            } catch (Throwable v2_3) {
                if (v0) {
                    v1_1.clear();
                }
                throw v2_3;
            }
            if (v0) {
                v1_1.clear();
            }
        } else {
            v2_2 = 0;
        }
        return v2_2;
    }

    public boolean equals(Object p9)
    {
        Throwable v4_0 = 1;
        if (p9 != this) {
            if ((p9 instanceof com.flurry.org.apache.avro.Schema$RecordSchema)) {
                if (this.equalCachedHash(((com.flurry.org.apache.avro.Schema$RecordSchema) p9))) {
                    if (this.equalNames(((com.flurry.org.apache.avro.Schema$RecordSchema) p9))) {
                        if (this.props.equals(((com.flurry.org.apache.avro.Schema$RecordSchema) p9).props)) {
                            java.util.Set v2_1 = ((java.util.Set) com.flurry.org.apache.avro.Schema.access$800().get());
                            com.flurry.org.apache.avro.Schema$SeenPair v1_1 = new com.flurry.org.apache.avro.Schema$SeenPair(this, p9, 0);
                            if (!v2_1.contains(v1_1)) {
                                boolean v0 = v2_1.isEmpty();
                                try {
                                    v2_1.add(v1_1);
                                    v4_0 = this.fields.equals(((com.flurry.org.apache.avro.Schema$RecordSchema) p9).fields);
                                } catch (Throwable v4_2) {
                                    if (v0) {
                                        v2_1.clear();
                                    }
                                    throw v4_2;
                                }
                                if (v0) {
                                    v2_1.clear();
                                }
                            }
                        } else {
                            v4_0 = 0;
                        }
                    } else {
                        v4_0 = 0;
                    }
                } else {
                    v4_0 = 0;
                }
            } else {
                v4_0 = 0;
            }
        }
        return v4_0;
    }

    void fieldsToJson(com.flurry.org.apache.avro.Schema$Names p7, com.flurry.org.codehaus.jackson.JsonGenerator p8)
    {
        p8.writeStartArray();
        java.util.Iterator v2 = this.fields.iterator();
        while (v2.hasNext()) {
            com.flurry.org.apache.avro.Schema$Field v1_1 = ((com.flurry.org.apache.avro.Schema$Field) v2.next());
            p8.writeStartObject();
            p8.writeStringField("name", v1_1.name());
            p8.writeFieldName("type");
            v1_1.schema().toJson(p7, p8);
            if (v1_1.doc() != null) {
                p8.writeStringField("doc", v1_1.doc());
            }
            if (v1_1.defaultValue() != null) {
                p8.writeFieldName("default");
                p8.writeTree(v1_1.defaultValue());
            }
            if (v1_1.order() != com.flurry.org.apache.avro.Schema$Field$Order.ASCENDING) {
                p8.writeStringField("order", com.flurry.org.apache.avro.Schema$Field$Order.access$1200(v1_1.order()));
            }
            if ((com.flurry.org.apache.avro.Schema$Field.access$1300(v1_1) != null) && (com.flurry.org.apache.avro.Schema$Field.access$1300(v1_1).size() != 0)) {
                p8.writeFieldName("aliases");
                p8.writeStartArray();
                java.util.Iterator v3 = com.flurry.org.apache.avro.Schema$Field.access$1300(v1_1).iterator();
                while (v3.hasNext()) {
                    p8.writeString(((String) v3.next()));
                }
                p8.writeEndArray();
            }
            com.flurry.org.apache.avro.Schema$Field.access$1400(v1_1).write(p8);
            p8.writeEndObject();
        }
        p8.writeEndArray();
        return;
    }

    public com.flurry.org.apache.avro.Schema$Field getField(String p3)
    {
        if (this.fieldMap != null) {
            return ((com.flurry.org.apache.avro.Schema$Field) this.fieldMap.get(p3));
        } else {
            throw new com.flurry.org.apache.avro.AvroRuntimeException("Schema fields not set yet");
        }
    }

    public java.util.List getFields()
    {
        if (this.fields != null) {
            return this.fields;
        } else {
            throw new com.flurry.org.apache.avro.AvroRuntimeException("Schema fields not set yet");
        }
    }

    public boolean isError()
    {
        return this.isError;
    }

    public void setFields(java.util.List p9)
    {
        if (this.fields == null) {
            int v2 = 0;
            this.fieldMap = new java.util.HashMap();
            com.flurry.org.apache.avro.Schema$LockableArrayList v1_1 = new com.flurry.org.apache.avro.Schema$LockableArrayList();
            java.util.Iterator v4 = p9.iterator();
            while (v4.hasNext()) {
                com.flurry.org.apache.avro.Schema$Field v0_1 = ((com.flurry.org.apache.avro.Schema$Field) v4.next());
                if (com.flurry.org.apache.avro.Schema$Field.access$700(v0_1) == -1) {
                    int v3 = (v2 + 1);
                    com.flurry.org.apache.avro.Schema$Field.access$702(v0_1, v2);
                    this.fieldMap.put(v0_1.name(), v0_1);
                    v1_1.add(v0_1);
                    v2 = v3;
                } else {
                    throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Field already used: ").append(v0_1).toString());
                }
            }
            this.fields = v1_1.lock();
            this.hashCode = -2147483648;
            return;
        } else {
            throw new com.flurry.org.apache.avro.AvroRuntimeException("Fields are already set");
        }
    }

    void toJson(com.flurry.org.apache.avro.Schema$Names p4, com.flurry.org.codehaus.jackson.JsonGenerator p5)
    {
        if (!this.writeNameRef(p4, p5)) {
            com.flurry.org.apache.avro.Schema$Props v1_1;
            String v0 = com.flurry.org.apache.avro.Schema$Names.access$1100(p4);
            p5.writeStartObject();
            if (!this.isError) {
                v1_1 = "record";
            } else {
                v1_1 = "error";
            }
            p5.writeStringField("type", v1_1);
            this.writeName(p4, p5);
            com.flurry.org.apache.avro.Schema$Names.access$1102(p4, com.flurry.org.apache.avro.Schema$Name.access$600(this.name));
            if (this.getDoc() != null) {
                p5.writeStringField("doc", this.getDoc());
            }
            p5.writeFieldName("fields");
            this.fieldsToJson(p4, p5);
            this.props.write(p5);
            this.aliasesToJson(p5);
            p5.writeEndObject();
            com.flurry.org.apache.avro.Schema$Names.access$1102(p4, v0);
        }
        return;
    }
}
