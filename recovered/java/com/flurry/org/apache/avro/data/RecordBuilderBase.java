package com.flurry.org.apache.avro.data;
public abstract class RecordBuilderBase implements com.flurry.org.apache.avro.data.RecordBuilder {
    private static final java.util.concurrent.ConcurrentMap DEFAULT_VALUE_CACHE;
    private static final com.flurry.org.apache.avro.Schema$Field[] EMPTY_FIELDS;
    private final com.flurry.org.apache.avro.generic.GenericData data;
    private com.flurry.org.apache.avro.io.BinaryDecoder decoder;
    private com.flurry.org.apache.avro.io.BinaryEncoder encoder;
    private final boolean[] fieldSetFlags;
    private final com.flurry.org.apache.avro.Schema$Field[] fields;
    private final com.flurry.org.apache.avro.Schema schema;

    static RecordBuilderBase()
    {
        com.flurry.org.apache.avro.data.RecordBuilderBase.DEFAULT_VALUE_CACHE = new java.util.concurrent.ConcurrentHashMap();
        com.flurry.org.apache.avro.Schema$Field[] v0_3 = new com.flurry.org.apache.avro.Schema$Field[0];
        com.flurry.org.apache.avro.data.RecordBuilderBase.EMPTY_FIELDS = v0_3;
        return;
    }

    protected RecordBuilderBase(com.flurry.org.apache.avro.Schema p3, com.flurry.org.apache.avro.generic.GenericData p4)
    {
        this.encoder = 0;
        this.decoder = 0;
        this.schema = p3;
        this.data = p4;
        this.fields = ((com.flurry.org.apache.avro.Schema$Field[]) ((com.flurry.org.apache.avro.Schema$Field[]) p3.getFields().toArray(com.flurry.org.apache.avro.data.RecordBuilderBase.EMPTY_FIELDS)));
        boolean[] v0_6 = new boolean[this.fields.length];
        this.fieldSetFlags = v0_6;
        return;
    }

    protected RecordBuilderBase(com.flurry.org.apache.avro.data.RecordBuilderBase p5, com.flurry.org.apache.avro.generic.GenericData p6)
    {
        this.encoder = 0;
        this.decoder = 0;
        this.schema = p5.schema;
        this.data = p6;
        this.fields = ((com.flurry.org.apache.avro.Schema$Field[]) ((com.flurry.org.apache.avro.Schema$Field[]) this.schema.getFields().toArray(com.flurry.org.apache.avro.data.RecordBuilderBase.EMPTY_FIELDS)));
        boolean[] v0_7 = new boolean[p5.fieldSetFlags.length];
        this.fieldSetFlags = v0_7;
        System.arraycopy(p5.fieldSetFlags, 0, this.fieldSetFlags, 0, this.fieldSetFlags.length);
        return;
    }

    protected static boolean isValidValue(com.flurry.org.apache.avro.Schema$Field p7, Object p8)
    {
        int v4 = 1;
        if (p8 == null) {
            com.flurry.org.apache.avro.Schema v2 = p7.schema();
            com.flurry.org.apache.avro.Schema$Type v3 = v2.getType();
            if (v3 != com.flurry.org.apache.avro.Schema$Type.NULL) {
                if (v3 == com.flurry.org.apache.avro.Schema$Type.UNION) {
                    java.util.Iterator v0 = v2.getTypes().iterator();
                    while (v0.hasNext()) {
                        if (((com.flurry.org.apache.avro.Schema) v0.next()).getType() == com.flurry.org.apache.avro.Schema$Type.NULL) {
                        }
                        return v4;
                    }
                }
                v4 = 0;
            }
        }
        return v4;
    }

    protected final com.flurry.org.apache.avro.generic.GenericData data()
    {
        return this.data;
    }

    protected Object defaultValue(com.flurry.org.apache.avro.Schema$Field p10)
    {
        com.flurry.org.codehaus.jackson.JsonNode v1 = p10.defaultValue();
        if (v1 != null) {
            if ((!v1.isNull()) || ((p10.schema().getType() != com.flurry.org.apache.avro.Schema$Type.NULL) && ((p10.schema().getType() != com.flurry.org.apache.avro.Schema$Type.UNION) || (((com.flurry.org.apache.avro.Schema) p10.schema().getTypes().get(0)).getType() != com.flurry.org.apache.avro.Schema$Type.NULL)))) {
                java.util.concurrent.ConcurrentMap v2_1 = ((java.util.concurrent.ConcurrentMap) com.flurry.org.apache.avro.data.RecordBuilderBase.DEFAULT_VALUE_CACHE.get(this.schema.getFullName()));
                if (v2_1 == null) {
                    com.flurry.org.apache.avro.data.RecordBuilderBase.DEFAULT_VALUE_CACHE.putIfAbsent(this.schema.getFullName(), new java.util.concurrent.ConcurrentHashMap(this.fields.length));
                    v2_1 = ((java.util.concurrent.ConcurrentMap) com.flurry.org.apache.avro.data.RecordBuilderBase.DEFAULT_VALUE_CACHE.get(this.schema.getFullName()));
                }
                Object v3 = v2_1.get(Integer.valueOf(p10.pos()));
                if (v3 == null) {
                    java.io.ByteArrayOutputStream v0_1 = new java.io.ByteArrayOutputStream();
                    this.encoder = com.flurry.org.apache.avro.io.EncoderFactory.get().binaryEncoder(v0_1, this.encoder);
                    com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.encode(this.encoder, p10.schema(), v1);
                    this.encoder.flush();
                    this.decoder = com.flurry.org.apache.avro.io.DecoderFactory.get().binaryDecoder(v0_1.toByteArray(), this.decoder);
                    v3 = this.data.createDatumReader(p10.schema()).read(0, this.decoder);
                    v2_1.putIfAbsent(Integer.valueOf(p10.pos()), v3);
                }
                Object v4_1 = this.data.deepCopy(p10.schema(), v3);
            } else {
                v4_1 = 0;
            }
            return v4_1;
        } else {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Field ").append(p10).append(" not set and has no default value").toString());
        }
    }

    public boolean equals(Object p6)
    {
        int v1 = 1;
        if (this != p6) {
            if (p6 != null) {
                if (this.getClass() == p6.getClass()) {
                    if (java.util.Arrays.equals(this.fieldSetFlags, ((com.flurry.org.apache.avro.data.RecordBuilderBase) p6).fieldSetFlags)) {
                        if (this.schema != null) {
                            if (!this.schema.equals(((com.flurry.org.apache.avro.data.RecordBuilderBase) p6).schema)) {
                                v1 = 0;
                            }
                        } else {
                            if (((com.flurry.org.apache.avro.data.RecordBuilderBase) p6).schema != null) {
                                v1 = 0;
                            }
                        }
                    } else {
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

    protected final boolean[] fieldSetFlags()
    {
        return this.fieldSetFlags;
    }

    protected final com.flurry.org.apache.avro.Schema$Field[] fields()
    {
        return this.fields;
    }

    public int hashCode()
    {
        int v2_0;
        int v1 = 1;
        int v3 = ((java.util.Arrays.hashCode(this.fieldSetFlags) + 31) * 31);
        if (this.schema != null) {
            v2_0 = this.schema.hashCode();
        } else {
            v2_0 = 0;
        }
        return (v3 + v2_0);
    }

    protected final com.flurry.org.apache.avro.Schema schema()
    {
        return this.schema;
    }

    protected void validate(com.flurry.org.apache.avro.Schema$Field p4, Object p5)
    {
        if ((com.flurry.org.apache.avro.data.RecordBuilderBase.isValidValue(p4, p5)) || (p4.defaultValue() != null)) {
            return;
        } else {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Field ").append(p4).append(" does not accept null values").toString());
        }
    }
}
