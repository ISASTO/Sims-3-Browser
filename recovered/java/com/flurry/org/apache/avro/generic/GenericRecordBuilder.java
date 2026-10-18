package com.flurry.org.apache.avro.generic;
public class GenericRecordBuilder extends com.flurry.org.apache.avro.data.RecordBuilderBase {
    private final com.flurry.org.apache.avro.generic.GenericData$Record record;

    public GenericRecordBuilder(com.flurry.org.apache.avro.Schema p2)
    {
        super(p2, com.flurry.org.apache.avro.generic.GenericData.get());
        super.record = new com.flurry.org.apache.avro.generic.GenericData$Record(p2);
        return;
    }

    public GenericRecordBuilder(com.flurry.org.apache.avro.generic.GenericData$Record p6)
    {
        super(p6.getSchema(), com.flurry.org.apache.avro.generic.GenericData.get());
        super.record = new com.flurry.org.apache.avro.generic.GenericData$Record(p6, 1);
        java.util.Iterator v1 = super.schema().getFields().iterator();
        while (v1.hasNext()) {
            com.flurry.org.apache.avro.Schema$Field v0_1 = ((com.flurry.org.apache.avro.Schema$Field) v1.next());
            Object v2 = p6.get(v0_1.pos());
            if (com.flurry.org.apache.avro.generic.GenericRecordBuilder.isValidValue(v0_1, v2)) {
                super.set(v0_1, super.data().deepCopy(v0_1.schema(), v2));
            }
        }
        return;
    }

    public GenericRecordBuilder(com.flurry.org.apache.avro.generic.GenericRecordBuilder p4)
    {
        super(p4, com.flurry.org.apache.avro.generic.GenericData.get());
        super.record = new com.flurry.org.apache.avro.generic.GenericData$Record(p4.record, 1);
        return;
    }

    private Object getWithDefault(com.flurry.org.apache.avro.Schema$Field p3)
    {
        Object v0_1;
        if (!this.fieldSetFlags()[p3.pos()]) {
            v0_1 = this.defaultValue(p3);
        } else {
            v0_1 = this.record.get(p3.pos());
        }
        return v0_1;
    }

    private com.flurry.org.apache.avro.generic.GenericRecordBuilder set(com.flurry.org.apache.avro.Schema$Field p3, int p4, Object p5)
    {
        this.validate(p3, p5);
        this.record.put(p4, p5);
        this.fieldSetFlags()[p4] = 1;
        return this;
    }

    public com.flurry.org.apache.avro.generic.GenericData$Record build()
    {
        try {
            com.flurry.org.apache.avro.generic.GenericData$Record v5_1 = new com.flurry.org.apache.avro.generic.GenericData$Record(this.schema());
            com.flurry.org.apache.avro.Schema$Field[] v0 = this.fields();
            int v4 = v0.length;
            int v3 = 0;
        } catch (java.io.IOException v1_1) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v1_1);
        }
        while (v3 < v4) {
            com.flurry.org.apache.avro.Schema$Field v2 = v0[v3];
            try {
                Object v6 = this.getWithDefault(v2);
            } catch (java.io.IOException v1_0) {
                throw new com.flurry.org.apache.avro.AvroRuntimeException(v1_0);
            }
            if (v6 != null) {
                v5_1.put(v2.pos(), v6);
            }
            v3++;
        }
        return v5_1;
    }

    public bridge synthetic Object build()
    {
        return this.build();
    }

    protected com.flurry.org.apache.avro.generic.GenericRecordBuilder clear(int p3)
    {
        this.record.put(p3, 0);
        this.fieldSetFlags()[p3] = 0;
        return this;
    }

    public com.flurry.org.apache.avro.generic.GenericRecordBuilder clear(com.flurry.org.apache.avro.Schema$Field p2)
    {
        return this.clear(p2.pos());
    }

    public com.flurry.org.apache.avro.generic.GenericRecordBuilder clear(String p2)
    {
        return this.clear(this.schema().getField(p2));
    }

    public boolean equals(Object p6)
    {
        int v1 = 1;
        if (this != p6) {
            if (super.equals(p6)) {
                if (this.getClass() == p6.getClass()) {
                    if (this.record != null) {
                        if (!this.record.equals(((com.flurry.org.apache.avro.generic.GenericRecordBuilder) p6).record)) {
                            v1 = 0;
                        }
                    } else {
                        if (((com.flurry.org.apache.avro.generic.GenericRecordBuilder) p6).record != null) {
                            v1 = 0;
                        }
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

    protected Object get(int p2)
    {
        return this.record.get(p2);
    }

    public Object get(com.flurry.org.apache.avro.Schema$Field p2)
    {
        return this.get(p2.pos());
    }

    public Object get(String p2)
    {
        return this.get(this.schema().getField(p2));
    }

    protected boolean has(int p2)
    {
        return this.fieldSetFlags()[p2];
    }

    public boolean has(com.flurry.org.apache.avro.Schema$Field p2)
    {
        return this.has(p2.pos());
    }

    public boolean has(String p2)
    {
        return this.has(this.schema().getField(p2));
    }

    public int hashCode()
    {
        int v2_2;
        int v3 = (super.hashCode() * 31);
        if (this.record != null) {
            v2_2 = this.record.hashCode();
        } else {
            v2_2 = 0;
        }
        return (v3 + v2_2);
    }

    protected com.flurry.org.apache.avro.generic.GenericRecordBuilder set(int p2, Object p3)
    {
        return this.set(this.fields()[p2], p2, p3);
    }

    public com.flurry.org.apache.avro.generic.GenericRecordBuilder set(com.flurry.org.apache.avro.Schema$Field p2, Object p3)
    {
        return this.set(p2, p2.pos(), p3);
    }

    public com.flurry.org.apache.avro.generic.GenericRecordBuilder set(String p2, Object p3)
    {
        return this.set(this.schema().getField(p2), p3);
    }
}
