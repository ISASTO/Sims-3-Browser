package com.flurry.org.apache.avro.generic;
public class GenericData$Record implements com.flurry.org.apache.avro.generic.GenericRecord, java.lang.Comparable {
    private final com.flurry.org.apache.avro.Schema schema;
    private final Object[] values;

    public GenericData$Record(com.flurry.org.apache.avro.Schema p4)
    {
        if ((p4 != null) && (com.flurry.org.apache.avro.Schema$Type.RECORD.equals(p4.getType()))) {
            this.schema = p4;
            Object[] v0_2 = new Object[p4.getFields().size()];
            this.values = v0_2;
            return;
        } else {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not a record schema: ").append(p4).toString());
        }
    }

    public GenericData$Record(com.flurry.org.apache.avro.generic.GenericData$Record p6, boolean p7)
    {
        this.schema = p6.schema;
        Object v1_13 = new Object[this.schema.getFields().size()];
        this.values = v1_13;
        if (!p7) {
            System.arraycopy(p6.values, 0, this.values, 0, p6.values.length);
        } else {
            int v0 = 0;
            while (v0 < this.values.length) {
                this.values[v0] = com.flurry.org.apache.avro.generic.GenericData.access$000().deepCopy(((com.flurry.org.apache.avro.Schema$Field) this.schema.getFields().get(v0)).schema(), p6.values[v0]);
                v0++;
            }
        }
        return;
    }

    public int compareTo(com.flurry.org.apache.avro.generic.GenericData$Record p3)
    {
        return com.flurry.org.apache.avro.generic.GenericData.get().compare(this, p3, this.schema);
    }

    public bridge synthetic int compareTo(Object p2)
    {
        return this.compareTo(((com.flurry.org.apache.avro.generic.GenericData$Record) p2));
    }

    public boolean equals(Object p6)
    {
        int v1 = 1;
        if (p6 != this) {
            if ((p6 instanceof com.flurry.org.apache.avro.generic.GenericData$Record)) {
                if (this.schema.getFullName().equals(((com.flurry.org.apache.avro.generic.GenericData$Record) p6).schema.getFullName())) {
                    if (com.flurry.org.apache.avro.generic.GenericData.get().compare(this, ((com.flurry.org.apache.avro.generic.GenericData$Record) p6), this.schema, 1) != 0) {
                        v1 = 0;
                    }
                } else {
                    v1 = 0;
                }
            } else {
                v1 = 0;
            }
        }
        return v1;
    }

    public Object get(int p2)
    {
        return this.values[p2];
    }

    public Object get(String p4)
    {
        Object v1_2;
        com.flurry.org.apache.avro.Schema$Field v0 = this.schema.getField(p4);
        if (v0 != null) {
            v1_2 = this.values[v0.pos()];
        } else {
            v1_2 = 0;
        }
        return v1_2;
    }

    public com.flurry.org.apache.avro.Schema getSchema()
    {
        return this.schema;
    }

    public int hashCode()
    {
        return com.flurry.org.apache.avro.generic.GenericData.get().hashCode(this, this.schema);
    }

    public void put(int p2, Object p3)
    {
        this.values[p2] = p3;
        return;
    }

    public void put(String p5, Object p6)
    {
        com.flurry.org.apache.avro.Schema$Field v0 = this.schema.getField(p5);
        if (v0 != null) {
            this.values[v0.pos()] = p6;
            return;
        } else {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not a valid schema field: ").append(p5).toString());
        }
    }

    public String toString()
    {
        return com.flurry.org.apache.avro.generic.GenericData.get().toString(this);
    }
}
