package com.flurry.org.apache.avro.generic;
public class GenericData {
    private static final com.flurry.org.apache.avro.generic.GenericData INSTANCE = None;
    private static final com.flurry.org.apache.avro.Schema STRINGS = None;
    protected static final String STRING_PROP = "avro.java.string";
    protected static final String STRING_TYPE_STRING = "String";

    static GenericData()
    {
        com.flurry.org.apache.avro.generic.GenericData.INSTANCE = new com.flurry.org.apache.avro.generic.GenericData();
        com.flurry.org.apache.avro.generic.GenericData.STRINGS = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.STRING);
        return;
    }

    protected GenericData()
    {
        return;
    }

    static synthetic com.flurry.org.apache.avro.generic.GenericData access$000()
    {
        return com.flurry.org.apache.avro.generic.GenericData.INSTANCE;
    }

    public static com.flurry.org.apache.avro.generic.GenericData get()
    {
        return com.flurry.org.apache.avro.generic.GenericData.INSTANCE;
    }

    public static void setStringType(com.flurry.org.apache.avro.Schema p2, com.flurry.org.apache.avro.generic.GenericData$StringType p3)
    {
        if (p3 == com.flurry.org.apache.avro.generic.GenericData$StringType.String) {
            p2.addProp("avro.java.string", "String");
        }
        return;
    }

    private void writeEscapedString(String p6, StringBuilder p7)
    {
        int v2 = 0;
        while (v2 < p6.length()) {
            char v0 = p6.charAt(v2);
            switch (v0) {
                case 8:
                    p7.append("\\b");
                    break;
                case 9:
                    p7.append("\\t");
                    break;
                case 10:
                    p7.append("\\n");
                    break;
                case 12:
                    p7.append("\\f");
                    break;
                case 13:
                    p7.append("\\r");
                    break;
                case 34:
                    p7.append("\\\"");
                    break;
                case 47:
                    p7.append("\\/");
                    break;
                case 92:
                    p7.append("\\\\");
                    break;
                default:
                    if (v0 < 0) {
                        if ((v0 >= 127) && (v0 <= 159)) {
                            Integer.toHexString(v0);
                            p7.append("\\u");
                            int v3 = 0;
                            while (v3 < (4 - p7.length())) {
                                p7.append(48);
                                v3++;
                            }
                            p7.append(p6.toUpperCase());
                        } else {
                            if ((v0 < 8192) || (v0 > 8447)) {
                                p7.append(v0);
                            } else {
                            }
                        }
                    } else {
                        if (v0 <= 31) {
                        } else {
                        }
                    }
            }
            v2++;
        }
        return;
    }

    public int compare(Object p2, Object p3, com.flurry.org.apache.avro.Schema p4)
    {
        return this.compare(p2, p3, p4, 0);
    }

    protected int compare(Object p23, Object p24, com.flurry.org.apache.avro.Schema p25, boolean p26)
    {
        int v19_0;
        if (p23 != p24) {
            switch (com.flurry.org.apache.avro.generic.GenericData$1.$SwitchMap$org$apache$avro$Schema$Type[p25.getType().ordinal()]) {
                case 1:
                    java.util.Iterator v12 = p25.getFields().iterator();
                    while (v12.hasNext()) {
                        com.flurry.org.apache.avro.Schema$Field v11_1 = ((com.flurry.org.apache.avro.Schema$Field) v12.next());
                        if (v11_1.order() != com.flurry.org.apache.avro.Schema$Field$Order.IGNORE) {
                            int v16 = v11_1.pos();
                            String v15 = v11_1.name();
                            int v7_1 = this.compare(this.getField(p23, v15, v16), this.getField(p24, v15, v16), v11_1.schema(), p26);
                            if (v7_1 != 0) {
                                if (v11_1.order() == com.flurry.org.apache.avro.Schema$Field$Order.DESCENDING) {
                                    v7_1 = (- v7_1);
                                }
                                v19_0 = v7_1;
                            }
                        }
                    }
                    v19_0 = 0;
                    break;
                case 2:
                    v19_0 = (p25.getEnumOrdinal(p23.toString()) - p25.getEnumOrdinal(p24.toString()));
                    break;
                case 3:
                    java.util.Iterator v8 = ((java.util.Collection) p23).iterator();
                    java.util.Iterator v9 = ((java.util.Collection) p24).iterator();
                    com.flurry.org.apache.avro.Schema v10 = p25.getElementType();
                    while ((v8.hasNext()) && (v9.hasNext())) {
                        int v7_0 = this.compare(v8.next(), v9.next(), v10, p26);
                        if (v7_0 != 0) {
                            v19_0 = v7_0;
                        }
                    }
                    if (!v8.hasNext()) {
                        if (!v9.hasNext()) {
                            v19_0 = 0;
                        } else {
                            v19_0 = -1;
                        }
                    } else {
                        v19_0 = 1;
                    }
                    break;
                case 4:
                    if (!p26) {
                        throw new com.flurry.org.apache.avro.AvroRuntimeException("Can\'t compare maps!");
                    } else {
                        if (!((java.util.Map) p23).equals(p24)) {
                            v19_0 = 1;
                        } else {
                            v19_0 = 0;
                        }
                    }
                    break;
                case 5:
                    int v13 = this.resolveUnion(p25, p23);
                    int v14 = this.resolveUnion(p25, p24);
                    if (v13 != v14) {
                        v19_0 = (v13 - v14);
                    } else {
                        v19_0 = this.compare(p23, p24, ((com.flurry.org.apache.avro.Schema) p25.getTypes().get(v13)), p26);
                    }
                    break;
                case 6:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                default:
                    v19_0 = ((Comparable) p23).compareTo(p24);
                    break;
                case 7:
                    com.flurry.org.apache.avro.util.Utf8 v17;
                    if (!(p23 instanceof com.flurry.org.apache.avro.util.Utf8)) {
                        v17 = new com.flurry.org.apache.avro.util.Utf8;
                        v17(p23.toString());
                    } else {
                        v17 = ((com.flurry.org.apache.avro.util.Utf8) p23);
                    }
                    com.flurry.org.apache.avro.util.Utf8 v18_1;
                    if (!(p24 instanceof com.flurry.org.apache.avro.util.Utf8)) {
                        v18_1 = new com.flurry.org.apache.avro.util.Utf8(p24.toString());
                    } else {
                        v18_1 = ((com.flurry.org.apache.avro.util.Utf8) p24);
                    }
                    v19_0 = v17.compareTo(v18_1);
                    break;
                case 14:
                    v19_0 = 0;
                    break;
            }
        } else {
            v19_0 = 0;
        }
        return v19_0;
    }

    public com.flurry.org.apache.avro.io.DatumReader createDatumReader(com.flurry.org.apache.avro.Schema p2)
    {
        return new com.flurry.org.apache.avro.generic.GenericDatumReader(p2, p2, this);
    }

    public Object createFixed(Object p3, com.flurry.org.apache.avro.Schema p4)
    {
        if ((!(p3 instanceof com.flurry.org.apache.avro.generic.GenericFixed)) || (((com.flurry.org.apache.avro.generic.GenericFixed) p3).bytes().length != p4.getFixedSize())) {
            p3 = new com.flurry.org.apache.avro.generic.GenericData$Fixed(p4);
        }
        return p3;
    }

    public Object createFixed(Object p5, byte[] p6, com.flurry.org.apache.avro.Schema p7)
    {
        com.flurry.org.apache.avro.generic.GenericFixed v0_1 = ((com.flurry.org.apache.avro.generic.GenericFixed) this.createFixed(p5, p7));
        System.arraycopy(p6, 0, v0_1.bytes(), 0, p7.getFixedSize());
        return v0_1;
    }

    public Object deepCopy(com.flurry.org.apache.avro.Schema p18, Object p19)
    {
        if (p19 != null) {
            switch (com.flurry.org.apache.avro.generic.GenericData$1.$SwitchMap$org$apache$avro$Schema$Type[p18.getType().ordinal()]) {
                case 1:
                    com.flurry.org.apache.avro.generic.IndexedRecord v12_1 = ((com.flurry.org.apache.avro.generic.IndexedRecord) this.newRecord(0, p18));
                    java.util.Iterator v8_1 = p18.getFields().iterator();
                    while (v8_1.hasNext()) {
                        com.flurry.org.apache.avro.Schema$Field v7_1 = ((com.flurry.org.apache.avro.Schema$Field) v8_1.next());
                        v12_1.put(v7_1.pos(), this.deepCopy(v7_1.schema(), ((com.flurry.org.apache.avro.generic.IndexedRecord) p19).get(v7_1.pos())));
                    }
                    p19 = v12_1;
                case 2:
                    break;
                case 3:
                    com.flurry.org.apache.avro.util.Utf8 v2_1 = new com.flurry.org.apache.avro.generic.GenericData$Array(((java.util.List) p19).size(), p18);
                    java.util.Iterator v8_0 = ((java.util.List) p19).iterator();
                    while (v8_0.hasNext()) {
                        v2_1.add(this.deepCopy(p18.getElementType(), v8_0.next()));
                    }
                    p19 = v2_1;
                    break;
                case 4:
                    java.util.HashMap v9_1 = new java.util.HashMap(((java.util.Map) p19).size());
                    java.util.Iterator v8_2 = ((java.util.Map) p19).entrySet().iterator();
                    while (v8_2.hasNext()) {
                        java.util.Map$Entry v6_0 = ((java.util.Map$Entry) v8_2.next());
                        v9_1.put(((CharSequence) ((CharSequence) this.deepCopy(com.flurry.org.apache.avro.generic.GenericData.STRINGS, v6_0.getKey()))), this.deepCopy(p18.getValueType(), v6_0.getValue()));
                    }
                    p19 = v9_1;
                    break;
                case 5:
                    p19 = this.deepCopy(((com.flurry.org.apache.avro.Schema) p18.getTypes().get(this.resolveUnion(p18, p19))), p19);
                    break;
                case 6:
                    p19 = this.createFixed(0, ((com.flurry.org.apache.avro.generic.GenericFixed) p19).bytes(), p18);
                    break;
                case 7:
                    if (!(p19 instanceof String)) {
                        if (!(p19 instanceof com.flurry.org.apache.avro.util.Utf8)) {
                            p19 = new com.flurry.org.apache.avro.util.Utf8(p19.toString());
                        } else {
                            p19 = new com.flurry.org.apache.avro.util.Utf8(((com.flurry.org.apache.avro.util.Utf8) p19));
                        }
                    }
                    break;
                case 8:
                    byte[] v5 = new byte[((java.nio.ByteBuffer) p19).capacity()];
                    ((java.nio.ByteBuffer) p19).rewind();
                    ((java.nio.ByteBuffer) p19).get(v5);
                    ((java.nio.ByteBuffer) p19).rewind();
                    p19 = java.nio.ByteBuffer.wrap(v5);
                    break;
                case 9:
                    p19 = new Integer(((Integer) p19).intValue());
                    break;
                case 10:
                    p19 = new Long(((Long) p19).longValue());
                    break;
                case 11:
                    p19 = new Float(((Float) p19).floatValue());
                    break;
                case 12:
                    p19 = new Double(((Double) p19).doubleValue());
                    break;
                case 13:
                    p19 = new Boolean(((Boolean) p19).booleanValue());
                    break;
                case 14:
                    p19 = 0;
                    break;
                default:
                    throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Deep copy failed for schema \"").append(p18).append("\" and value \"").append(p19).append("\"").toString());
            }
        } else {
            p19 = 0;
        }
        return p19;
    }

    protected com.flurry.org.apache.avro.Schema getEnumSchema(Object p2)
    {
        return ((com.flurry.org.apache.avro.generic.GenericContainer) p2).getSchema();
    }

    public Object getField(Object p2, String p3, int p4)
    {
        return ((com.flurry.org.apache.avro.generic.IndexedRecord) p2).get(p4);
    }

    protected Object getField(Object p2, String p3, int p4, Object p5)
    {
        return this.getField(p2, p3, p4);
    }

    protected com.flurry.org.apache.avro.Schema getFixedSchema(Object p2)
    {
        return ((com.flurry.org.apache.avro.generic.GenericContainer) p2).getSchema();
    }

    protected com.flurry.org.apache.avro.Schema getRecordSchema(Object p2)
    {
        return ((com.flurry.org.apache.avro.generic.GenericContainer) p2).getSchema();
    }

    protected Object getRecordState(Object p2, com.flurry.org.apache.avro.Schema p3)
    {
        return 0;
    }

    protected String getSchemaName(Object p4)
    {
        com.flurry.org.apache.avro.AvroRuntimeException v0_13;
        if (p4 != null) {
            if (!this.isRecord(p4)) {
                if (!this.isEnum(p4)) {
                    if (!this.isArray(p4)) {
                        if (!this.isMap(p4)) {
                            if (!this.isFixed(p4)) {
                                if (!this.isString(p4)) {
                                    if (!this.isBytes(p4)) {
                                        if (!(p4 instanceof Integer)) {
                                            if (!(p4 instanceof Long)) {
                                                if (!(p4 instanceof Float)) {
                                                    if (!(p4 instanceof Double)) {
                                                        if (!(p4 instanceof Boolean)) {
                                                            throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Unknown datum type: ").append(p4).toString());
                                                        } else {
                                                            v0_13 = com.flurry.org.apache.avro.Schema$Type.BOOLEAN.getName();
                                                        }
                                                    } else {
                                                        v0_13 = com.flurry.org.apache.avro.Schema$Type.DOUBLE.getName();
                                                    }
                                                } else {
                                                    v0_13 = com.flurry.org.apache.avro.Schema$Type.FLOAT.getName();
                                                }
                                            } else {
                                                v0_13 = com.flurry.org.apache.avro.Schema$Type.LONG.getName();
                                            }
                                        } else {
                                            v0_13 = com.flurry.org.apache.avro.Schema$Type.INT.getName();
                                        }
                                    } else {
                                        v0_13 = com.flurry.org.apache.avro.Schema$Type.BYTES.getName();
                                    }
                                } else {
                                    v0_13 = com.flurry.org.apache.avro.Schema$Type.STRING.getName();
                                }
                            } else {
                                v0_13 = this.getFixedSchema(p4).getFullName();
                            }
                        } else {
                            v0_13 = com.flurry.org.apache.avro.Schema$Type.MAP.getName();
                        }
                    } else {
                        v0_13 = com.flurry.org.apache.avro.Schema$Type.ARRAY.getName();
                    }
                } else {
                    v0_13 = this.getEnumSchema(p4).getFullName();
                }
            } else {
                v0_13 = this.getRecordSchema(p4).getFullName();
            }
        } else {
            v0_13 = com.flurry.org.apache.avro.Schema$Type.NULL.getName();
        }
        return v0_13;
    }

    public int hashCode(Object p10, com.flurry.org.apache.avro.Schema p11)
    {
        int v4;
        if (p10 != null) {
            v4 = 1;
            switch (com.flurry.org.apache.avro.generic.GenericData$1.$SwitchMap$org$apache$avro$Schema$Type[p11.getType().ordinal()]) {
                case 1:
                    java.util.Iterator v5_1 = p11.getFields().iterator();
                    while (v5_1.hasNext()) {
                        com.flurry.org.apache.avro.Schema$Field v3_1 = ((com.flurry.org.apache.avro.Schema$Field) v5_1.next());
                        if (v3_1.order() != com.flurry.org.apache.avro.Schema$Field$Order.IGNORE) {
                            v4 = this.hashCodeAdd(v4, this.getField(p10, v3_1.name(), v3_1.pos()), v3_1.schema());
                        }
                    }
                    break;
                case 2:
                    v4 = p11.getEnumOrdinal(p10.toString());
                    break;
                case 3:
                    com.flurry.org.apache.avro.Schema v2 = p11.getElementType();
                    java.util.Iterator v5_0 = ((java.util.Collection) p10).iterator();
                    while (v5_0.hasNext()) {
                        v4 = this.hashCodeAdd(v4, v5_0.next(), v2);
                    }
                    break;
                case 4:
                case 6:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                default:
                    v4 = p10.hashCode();
                    break;
                case 5:
                    v4 = this.hashCode(p10, ((com.flurry.org.apache.avro.Schema) p11.getTypes().get(this.resolveUnion(p11, p10))));
                    break;
                case 7:
                    if (!(p10 instanceof com.flurry.org.apache.avro.util.Utf8)) {
                        p10 = new com.flurry.org.apache.avro.util.Utf8(p10.toString());
                    }
                    v4 = p10.hashCode();
                    break;
                case 14:
                    v4 = 0;
                    break;
            }
        } else {
            v4 = 0;
        }
        return v4;
    }

    protected int hashCodeAdd(int p3, Object p4, com.flurry.org.apache.avro.Schema p5)
    {
        return ((p3 * 31) + this.hashCode(p4, p5));
    }

    public com.flurry.org.apache.avro.Schema induce(Object p10)
    {
        com.flurry.org.apache.avro.AvroTypeException v6_9;
        if (!this.isRecord(p10)) {
            if (!(p10 instanceof java.util.Collection)) {
                if (!(p10 instanceof java.util.Map)) {
                    if (!(p10 instanceof com.flurry.org.apache.avro.generic.GenericFixed)) {
                        if (!(p10 instanceof CharSequence)) {
                            if (!(p10 instanceof java.nio.ByteBuffer)) {
                                if (!(p10 instanceof Integer)) {
                                    if (!(p10 instanceof Long)) {
                                        if (!(p10 instanceof Float)) {
                                            if (!(p10 instanceof Double)) {
                                                if (!(p10 instanceof Boolean)) {
                                                    if (p10 != null) {
                                                        throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Can\'t create schema for: ").append(p10).toString());
                                                    } else {
                                                        v6_9 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.NULL);
                                                    }
                                                } else {
                                                    v6_9 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.BOOLEAN);
                                                }
                                            } else {
                                                v6_9 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.DOUBLE);
                                            }
                                        } else {
                                            v6_9 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.FLOAT);
                                        }
                                    } else {
                                        v6_9 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.LONG);
                                    }
                                } else {
                                    v6_9 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.INT);
                                }
                            } else {
                                v6_9 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.BYTES);
                            }
                        } else {
                            v6_9 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.STRING);
                        }
                    } else {
                        v6_9 = com.flurry.org.apache.avro.Schema.createFixed(0, 0, 0, ((com.flurry.org.apache.avro.generic.GenericFixed) p10).bytes().length);
                    }
                } else {
                    com.flurry.org.apache.avro.Schema v5 = 0;
                    java.util.Iterator v3_1 = ((java.util.Map) p10).entrySet().iterator();
                    while (v3_1.hasNext()) {
                        java.util.Map$Entry v2_1 = ((java.util.Map$Entry) v3_1.next());
                        if (v5 != null) {
                            if (!v5.equals(this.induce(v2_1.getValue()))) {
                                throw new com.flurry.org.apache.avro.AvroTypeException("No mixed type map values.");
                            }
                        } else {
                            v5 = this.induce(v2_1.getValue());
                        }
                    }
                    if (v5 != null) {
                        v6_9 = com.flurry.org.apache.avro.Schema.createMap(v5);
                    } else {
                        throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Empty map: ").append(p10).toString());
                    }
                }
            } else {
                com.flurry.org.apache.avro.Schema v1 = 0;
                java.util.Iterator v3_0 = ((java.util.Collection) p10).iterator();
                while (v3_0.hasNext()) {
                    Object v0 = v3_0.next();
                    if (v1 != null) {
                        if (!v1.equals(this.induce(v0))) {
                            throw new com.flurry.org.apache.avro.AvroTypeException("No mixed type arrays.");
                        }
                    } else {
                        v1 = this.induce(v0);
                    }
                }
                if (v1 != null) {
                    v6_9 = com.flurry.org.apache.avro.Schema.createArray(v1);
                } else {
                    throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Empty array: ").append(p10).toString());
                }
            }
        } else {
            v6_9 = this.getRecordSchema(p10);
        }
        return v6_9;
    }

    protected boolean instanceOf(com.flurry.org.apache.avro.Schema p5, Object p6)
    {
        boolean v0_0 = 1;
        boolean v1_0 = 0;
        switch (com.flurry.org.apache.avro.generic.GenericData$1.$SwitchMap$org$apache$avro$Schema$Type[p5.getType().ordinal()]) {
            case 1:
                if (this.isRecord(p6)) {
                    if (p5.getFullName() != null) {
                        v0_0 = p5.getFullName().equals(this.getRecordSchema(p6).getFullName());
                    } else {
                        if (this.getRecordSchema(p6).getFullName() != null) {
                            v0_0 = 0;
                        }
                    }
                    v1_0 = v0_0;
                } else {
                }
                break;
            case 2:
                if (!this.isEnum(p6)) {
                } else {
                    v1_0 = p5.getFullName().equals(this.getEnumSchema(p6).getFullName());
                }
                break;
            case 3:
                v1_0 = this.isArray(p6);
                break;
            case 4:
                v1_0 = this.isMap(p6);
                break;
            case 5:
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Unexpected type: ").append(p5).toString());
                break;
            case 6:
                if (!this.isFixed(p6)) {
                } else {
                    v1_0 = p5.getFullName().equals(this.getFixedSchema(p6).getFullName());
                }
                break;
            case 7:
                v1_0 = this.isString(p6);
                break;
            case 8:
                v1_0 = this.isBytes(p6);
                break;
            case 9:
                v1_0 = (p6 instanceof Integer);
                break;
            case 10:
                v1_0 = (p6 instanceof Long);
                break;
            case 11:
                v1_0 = (p6 instanceof Float);
                break;
            case 12:
                v1_0 = (p6 instanceof Double);
                break;
            case 13:
                v1_0 = (p6 instanceof Boolean);
                break;
            case 14:
                if (p6 != null) {
                    v0_0 = 0;
                }
                v1_0 = v0_0;
                break;
        }
        return v1_0;
    }

    protected boolean isArray(Object p2)
    {
        return (p2 instanceof java.util.Collection);
    }

    protected boolean isBytes(Object p2)
    {
        return (p2 instanceof java.nio.ByteBuffer);
    }

    protected boolean isEnum(Object p2)
    {
        return (p2 instanceof com.flurry.org.apache.avro.generic.GenericEnumSymbol);
    }

    protected boolean isFixed(Object p2)
    {
        return (p2 instanceof com.flurry.org.apache.avro.generic.GenericFixed);
    }

    protected boolean isMap(Object p2)
    {
        return (p2 instanceof java.util.Map);
    }

    protected boolean isRecord(Object p2)
    {
        return (p2 instanceof com.flurry.org.apache.avro.generic.IndexedRecord);
    }

    protected boolean isString(Object p2)
    {
        return (p2 instanceof CharSequence);
    }

    public Object newRecord(Object p3, com.flurry.org.apache.avro.Schema p4)
    {
        com.flurry.org.apache.avro.generic.GenericData$Record v0_1;
        if (!(p3 instanceof com.flurry.org.apache.avro.generic.IndexedRecord)) {
            v0_1 = new com.flurry.org.apache.avro.generic.GenericData$Record(p4);
        } else {
            v0_1 = ((com.flurry.org.apache.avro.generic.IndexedRecord) p3);
            if (((com.flurry.org.apache.avro.generic.IndexedRecord) p3).getSchema() != p4) {
            }
        }
        return v0_1;
    }

    public int resolveUnion(com.flurry.org.apache.avro.Schema p3, Object p4)
    {
        Integer v0 = p3.getIndexNamed(this.getSchemaName(p4));
        if (v0 == null) {
            throw new com.flurry.org.apache.avro.UnresolvedUnionException(p3, p4);
        } else {
            return v0.intValue();
        }
    }

    public void setField(Object p1, String p2, int p3, Object p4)
    {
        ((com.flurry.org.apache.avro.generic.IndexedRecord) p1).put(p3, p4);
        return;
    }

    protected void setField(Object p1, String p2, int p3, Object p4, Object p5)
    {
        this.setField(p1, p2, p3, p4);
        return;
    }

    public String toString(Object p3)
    {
        StringBuilder v0_1 = new StringBuilder();
        this.toString(p3, v0_1);
        return v0_1.toString();
    }

    protected void toString(Object p20, StringBuilder p21)
    {
        if (!this.isRecord(p20)) {
            if (!(p20 instanceof java.util.Collection)) {
                if (!(p20 instanceof java.util.Map)) {
                    if ((!(p20 instanceof CharSequence)) && (!(p20 instanceof com.flurry.org.apache.avro.generic.GenericEnumSymbol))) {
                        if (!(p20 instanceof java.nio.ByteBuffer)) {
                            p21.append(p20);
                        } else {
                            p21.append("{\"bytes\": \"");
                            int v10_1 = ((java.nio.ByteBuffer) p20).position();
                            while (v10_1 < ((java.nio.ByteBuffer) p20).limit()) {
                                p21.append(((char) ((java.nio.ByteBuffer) p20).get(v10_1)));
                                v10_1++;
                            }
                            p21.append("\"}");
                        }
                    } else {
                        p21.append("\"");
                        this.writeEscapedString(p20.toString(), p21);
                        p21.append("\"");
                    }
                } else {
                    p21.append("{");
                    int v6_0 = 0;
                    java.util.Iterator v12_2 = ((java.util.Map) p20).entrySet().iterator();
                    while (v12_2.hasNext()) {
                        java.util.Map$Entry v8_1 = ((java.util.Map$Entry) v12_2.next());
                        this.toString(v8_1.getKey(), p21);
                        p21.append(": ");
                        this.toString(v8_1.getValue(), p21);
                        v6_0++;
                        if (v6_0 < ((java.util.Map) p20).size()) {
                            p21.append(", ");
                        }
                    }
                    p21.append("}");
                }
            } else {
                p21.append("[");
                long v13 = ((long) (((java.util.Collection) p20).size() - 1));
                int v10_0 = 0;
                java.util.Iterator v12_0 = ((java.util.Collection) p20).iterator();
                while (v12_0.hasNext()) {
                    this.toString(v12_0.next(), p21);
                    int v11 = (v10_0 + 1);
                    if (((long) v10_0) < v13) {
                        p21.append(", ");
                    }
                    v10_0 = v11;
                }
                p21.append("]");
            }
        } else {
            p21.append("{");
            int v6_1 = 0;
            com.flurry.org.apache.avro.Schema v16 = this.getRecordSchema(p20);
            java.util.Iterator v12_1 = v16.getFields().iterator();
            while (v12_1.hasNext()) {
                com.flurry.org.apache.avro.Schema$Field v9_1 = ((com.flurry.org.apache.avro.Schema$Field) v12_1.next());
                this.toString(v9_1.name(), p21);
                p21.append(": ");
                this.toString(this.getField(p20, v9_1.name(), v9_1.pos()), p21);
                v6_1++;
                if (v6_1 < v16.getFields().size()) {
                    p21.append(", ");
                }
            }
            p21.append("}");
        }
        return;
    }

    public boolean validate(com.flurry.org.apache.avro.Schema p12, Object p13)
    {
        boolean v6_0 = 1;
        boolean v7_0 = 0;
        switch (com.flurry.org.apache.avro.generic.GenericData$1.$SwitchMap$org$apache$avro$Schema$Type[p12.getType().ordinal()]) {
            case 1:
                if (!this.isRecord(p13)) {
                } else {
                    java.util.Iterator v3_3 = p12.getFields().iterator();
                    while (v3_3.hasNext()) {
                        com.flurry.org.apache.avro.Schema$Field v2_1 = ((com.flurry.org.apache.avro.Schema$Field) v3_3.next());
                        if (!this.validate(v2_1.schema(), this.getField(p13, v2_1.name(), v2_1.pos()))) {
                        }
                    }
                    v7_0 = 1;
                }
                break;
            case 2:
                v7_0 = p12.getEnumSymbols().contains(p13.toString());
                break;
            case 3:
                if (!(p13 instanceof java.util.Collection)) {
                } else {
                    java.util.Iterator v3_2 = ((java.util.Collection) p13).iterator();
                    while (v3_2.hasNext()) {
                        if (!this.validate(p12.getElementType(), v3_2.next())) {
                        }
                    }
                    v7_0 = 1;
                }
                break;
            case 4:
                if (!(p13 instanceof java.util.Map)) {
                } else {
                    java.util.Iterator v3_1 = ((java.util.Map) p13).entrySet().iterator();
                    while (v3_1.hasNext()) {
                        if (!this.validate(p12.getValueType(), ((java.util.Map$Entry) v3_1.next()).getValue())) {
                        }
                    }
                    v7_0 = 1;
                }
                break;
            case 5:
                java.util.Iterator v3_0 = p12.getTypes().iterator();
                while (v3_0.hasNext()) {
                    if (this.validate(((com.flurry.org.apache.avro.Schema) v3_0.next()), p13)) {
                        v7_0 = 1;
                        break;
                    }
                }
                break;
            case 6:
                if ((!(p13 instanceof com.flurry.org.apache.avro.generic.GenericFixed)) || (((com.flurry.org.apache.avro.generic.GenericFixed) p13).bytes().length != p12.getFixedSize())) {
                    v6_0 = 0;
                }
                v7_0 = v6_0;
                break;
            case 7:
                v7_0 = this.isString(p13);
                break;
            case 8:
                v7_0 = this.isBytes(p13);
                break;
            case 9:
                v7_0 = (p13 instanceof Integer);
                break;
            case 10:
                v7_0 = (p13 instanceof Long);
                break;
            case 11:
                v7_0 = (p13 instanceof Float);
                break;
            case 12:
                v7_0 = (p13 instanceof Double);
                break;
            case 13:
                v7_0 = (p13 instanceof Boolean);
                break;
            case 14:
                if (p13 != null) {
                    v6_0 = 0;
                }
                v7_0 = v6_0;
                break;
        }
        return v7_0;
    }
}
