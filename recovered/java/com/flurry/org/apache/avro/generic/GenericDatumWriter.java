package com.flurry.org.apache.avro.generic;
public class GenericDatumWriter implements com.flurry.org.apache.avro.io.DatumWriter {
    private final com.flurry.org.apache.avro.generic.GenericData data;
    private com.flurry.org.apache.avro.Schema root;

    public GenericDatumWriter()
    {
        this(com.flurry.org.apache.avro.generic.GenericData.get());
        return;
    }

    public GenericDatumWriter(com.flurry.org.apache.avro.Schema p1)
    {
        this.setSchema(p1);
        return;
    }

    protected GenericDatumWriter(com.flurry.org.apache.avro.Schema p1, com.flurry.org.apache.avro.generic.GenericData p2)
    {
        this(p2);
        this.setSchema(p1);
        return;
    }

    protected GenericDatumWriter(com.flurry.org.apache.avro.generic.GenericData p1)
    {
        this.data = p1;
        return;
    }

    private void error(com.flurry.org.apache.avro.Schema p4, Object p5)
    {
        throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Not a ").append(p4).append(": ").append(p5).toString());
    }

    protected java.util.Iterator getArrayElements(Object p2)
    {
        return ((java.util.Collection) p2).iterator();
    }

    protected long getArraySize(Object p3)
    {
        return ((long) ((java.util.Collection) p3).size());
    }

    public com.flurry.org.apache.avro.generic.GenericData getData()
    {
        return this.data;
    }

    protected Iterable getMapEntries(Object p2)
    {
        return ((java.util.Map) p2).entrySet();
    }

    protected int getMapSize(Object p2)
    {
        return ((java.util.Map) p2).size();
    }

    protected NullPointerException npe(NullPointerException p4, String p5)
    {
        NullPointerException v0_1 = new NullPointerException(new StringBuilder().append(p4.getMessage()).append(p5).toString());
        if (p4.getCause() != null) {
            p4 = p4.getCause();
        }
        v0_1.initCause(p4);
        return v0_1;
    }

    protected int resolveUnion(com.flurry.org.apache.avro.Schema p2, Object p3)
    {
        return this.data.resolveUnion(p2, p3);
    }

    public void setSchema(com.flurry.org.apache.avro.Schema p1)
    {
        this.root = p1;
        return;
    }

    protected void write(com.flurry.org.apache.avro.Schema p5, Object p6, com.flurry.org.apache.avro.io.Encoder p7)
    {
        try {
            switch (com.flurry.org.apache.avro.generic.GenericDatumWriter$1.$SwitchMap$org$apache$avro$Schema$Type[p5.getType().ordinal()]) {
                case 1:
                    this.writeRecord(p5, p6, p7);
                    return;
                case 2:
                    this.writeEnum(p5, p6, p7);
                    return;
                case 3:
                    this.writeArray(p5, p6, p7);
                    return;
                case 4:
                    this.writeMap(p5, p6, p7);
                    return;
                case 5:
                    int v1 = this.resolveUnion(p5, p6);
                    p7.writeIndex(v1);
                    this.write(((com.flurry.org.apache.avro.Schema) p5.getTypes().get(v1)), p6, p7);
                    return;
                case 6:
                    this.writeFixed(p5, p6, p7);
                    return;
                case 7:
                    this.writeString(p5, p6, p7);
                    return;
                case 8:
                    this.writeBytes(p6, p7);
                    return;
                case 9:
                    p7.writeInt(((Number) p6).intValue());
                    return;
                case 10:
                    p7.writeLong(((Long) p6).longValue());
                    return;
                case 11:
                    p7.writeFloat(((Float) p6).floatValue());
                    return;
                case 12:
                    p7.writeDouble(((Double) p6).doubleValue());
                    return;
                case 13:
                    p7.writeBoolean(((Boolean) p6).booleanValue());
                    return;
                case 14:
                    p7.writeNull();
                    return;
                default:
                    this.error(p5, p6);
                    return;
            }
        } catch (NullPointerException v0) {
        }
        throw this.npe(v0, new StringBuilder().append(" of ").append(p5.getFullName()).toString());
    }

    public void write(Object p2, com.flurry.org.apache.avro.io.Encoder p3)
    {
        this.write(this.root, p2, p3);
        return;
    }

    protected void writeArray(com.flurry.org.apache.avro.Schema p6, Object p7, com.flurry.org.apache.avro.io.Encoder p8)
    {
        com.flurry.org.apache.avro.Schema v0 = p6.getElementType();
        long v2 = this.getArraySize(p7);
        p8.writeArrayStart();
        p8.setItemCount(v2);
        java.util.Iterator v1 = this.getArrayElements(p7);
        while (v1.hasNext()) {
            p8.startItem();
            this.write(v0, v1.next(), p8);
        }
        p8.writeArrayEnd();
        return;
    }

    protected void writeBytes(Object p1, com.flurry.org.apache.avro.io.Encoder p2)
    {
        p2.writeBytes(((java.nio.ByteBuffer) p1));
        return;
    }

    protected void writeEnum(com.flurry.org.apache.avro.Schema p2, Object p3, com.flurry.org.apache.avro.io.Encoder p4)
    {
        p4.writeEnum(p2.getEnumOrdinal(p3.toString()));
        return;
    }

    protected void writeFixed(com.flurry.org.apache.avro.Schema p4, Object p5, com.flurry.org.apache.avro.io.Encoder p6)
    {
        p6.writeFixed(((com.flurry.org.apache.avro.generic.GenericFixed) p5).bytes(), 0, p4.getFixedSize());
        return;
    }

    protected void writeMap(com.flurry.org.apache.avro.Schema p7, Object p8, com.flurry.org.apache.avro.io.Encoder p9)
    {
        com.flurry.org.apache.avro.Schema v3 = p7.getValueType();
        int v2 = this.getMapSize(p8);
        p9.writeMapStart();
        p9.setItemCount(((long) v2));
        java.util.Iterator v1 = this.getMapEntries(p8).iterator();
        while (v1.hasNext()) {
            java.util.Map$Entry v0_1 = ((java.util.Map$Entry) v1.next());
            p9.startItem();
            this.writeString(v0_1.getKey(), p9);
            this.write(v3, v0_1.getValue(), p9);
        }
        p9.writeMapEnd();
        return;
    }

    protected void writeRecord(com.flurry.org.apache.avro.Schema p9, Object p10, com.flurry.org.apache.avro.io.Encoder p11)
    {
        Object v3 = this.data.getRecordState(p10, p9);
        java.util.Iterator v2 = p9.getFields().iterator();
        while (v2.hasNext()) {
            com.flurry.org.apache.avro.Schema$Field v1_1 = ((com.flurry.org.apache.avro.Schema$Field) v2.next());
            try {
                this.write(v1_1.schema(), this.data.getField(p10, v1_1.name(), v1_1.pos(), v3), p11);
            } catch (NullPointerException v0) {
                throw this.npe(v0, new StringBuilder().append(" in field ").append(v1_1.name()).toString());
            }
        }
        return;
    }

    protected void writeString(com.flurry.org.apache.avro.Schema p1, Object p2, com.flurry.org.apache.avro.io.Encoder p3)
    {
        this.writeString(p2, p3);
        return;
    }

    protected void writeString(Object p1, com.flurry.org.apache.avro.io.Encoder p2)
    {
        p2.writeString(((CharSequence) p1));
        return;
    }
}
