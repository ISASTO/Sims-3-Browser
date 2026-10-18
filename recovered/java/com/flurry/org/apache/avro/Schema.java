package com.flurry.org.apache.avro;
public abstract class Schema {
    static final com.flurry.org.codehaus.jackson.JsonFactory FACTORY = None;
    private static final java.util.Set FIELD_RESERVED = None;
    static final com.flurry.org.codehaus.jackson.map.ObjectMapper MAPPER = None;
    private static final int NO_HASHCODE = 2147483648;
    static final java.util.Map PRIMITIVES;
    private static final java.util.Set SCHEMA_RESERVED;
    private static final ThreadLocal SEEN_EQUALS;
    private static final ThreadLocal SEEN_HASHCODE;
    private static ThreadLocal validateNames;
    int hashCode;
    com.flurry.org.apache.avro.Schema$Props props;
    private final com.flurry.org.apache.avro.Schema$Type type;

    static Schema()
    {
        com.flurry.org.apache.avro.Schema.FACTORY = new com.flurry.org.codehaus.jackson.JsonFactory();
        com.flurry.org.apache.avro.Schema.MAPPER = new com.flurry.org.codehaus.jackson.map.ObjectMapper(com.flurry.org.apache.avro.Schema.FACTORY);
        com.flurry.org.apache.avro.Schema.FACTORY.enable(com.flurry.org.codehaus.jackson.JsonParser$Feature.ALLOW_COMMENTS);
        com.flurry.org.apache.avro.Schema.FACTORY.setCodec(com.flurry.org.apache.avro.Schema.MAPPER);
        com.flurry.org.apache.avro.Schema.SCHEMA_RESERVED = new java.util.HashSet();
        String v1_4 = new String[9];
        v1_4[0] = "doc";
        v1_4[1] = "fields";
        v1_4[2] = "items";
        v1_4[3] = "name";
        v1_4[4] = "namespace";
        v1_4[5] = "size";
        v1_4[6] = "symbols";
        v1_4[7] = "values";
        v1_4[8] = "type";
        java.util.Collections.addAll(com.flurry.org.apache.avro.Schema.SCHEMA_RESERVED, v1_4);
        com.flurry.org.apache.avro.Schema.FIELD_RESERVED = new java.util.HashSet();
        String v1_6 = new String[5];
        v1_6[0] = "default";
        v1_6[1] = "doc";
        v1_6[2] = "name";
        v1_6[3] = "order";
        v1_6[4] = "type";
        java.util.Collections.addAll(com.flurry.org.apache.avro.Schema.FIELD_RESERVED, v1_6);
        com.flurry.org.apache.avro.Schema.SEEN_EQUALS = new com.flurry.org.apache.avro.Schema$1();
        com.flurry.org.apache.avro.Schema.SEEN_HASHCODE = new com.flurry.org.apache.avro.Schema$2();
        com.flurry.org.apache.avro.Schema.PRIMITIVES = new java.util.HashMap();
        com.flurry.org.apache.avro.Schema.PRIMITIVES.put("string", com.flurry.org.apache.avro.Schema$Type.STRING);
        com.flurry.org.apache.avro.Schema.PRIMITIVES.put("bytes", com.flurry.org.apache.avro.Schema$Type.BYTES);
        com.flurry.org.apache.avro.Schema.PRIMITIVES.put("int", com.flurry.org.apache.avro.Schema$Type.INT);
        com.flurry.org.apache.avro.Schema.PRIMITIVES.put("long", com.flurry.org.apache.avro.Schema$Type.LONG);
        com.flurry.org.apache.avro.Schema.PRIMITIVES.put("float", com.flurry.org.apache.avro.Schema$Type.FLOAT);
        com.flurry.org.apache.avro.Schema.PRIMITIVES.put("double", com.flurry.org.apache.avro.Schema$Type.DOUBLE);
        com.flurry.org.apache.avro.Schema.PRIMITIVES.put("boolean", com.flurry.org.apache.avro.Schema$Type.BOOLEAN);
        com.flurry.org.apache.avro.Schema.PRIMITIVES.put("null", com.flurry.org.apache.avro.Schema$Type.NULL);
        com.flurry.org.apache.avro.Schema.validateNames = new com.flurry.org.apache.avro.Schema$3();
        return;
    }

    Schema(com.flurry.org.apache.avro.Schema$Type p3)
    {
        this.props = new com.flurry.org.apache.avro.Schema$Props(com.flurry.org.apache.avro.Schema.SCHEMA_RESERVED);
        this.hashCode = -2147483648;
        this.type = p3;
        return;
    }

    static synthetic java.util.Set access$100()
    {
        return com.flurry.org.apache.avro.Schema.FIELD_RESERVED;
    }

    static synthetic ThreadLocal access$1000()
    {
        return com.flurry.org.apache.avro.Schema.SEEN_HASHCODE;
    }

    static synthetic ThreadLocal access$1500()
    {
        return com.flurry.org.apache.avro.Schema.validateNames;
    }

    static synthetic String access$200(String p1)
    {
        return com.flurry.org.apache.avro.Schema.validateName(p1);
    }

    static synthetic com.flurry.org.apache.avro.Schema$Type access$300(com.flurry.org.apache.avro.Schema p1)
    {
        return p1.type;
    }

    static synthetic ThreadLocal access$800()
    {
        return com.flurry.org.apache.avro.Schema.SEEN_EQUALS;
    }

    public static com.flurry.org.apache.avro.Schema applyAliases(com.flurry.org.apache.avro.Schema p4, com.flurry.org.apache.avro.Schema p5)
    {
        if (p4 != p5) {
            java.util.IdentityHashMap v2_1 = new java.util.IdentityHashMap(1);
            java.util.HashMap v0_1 = new java.util.HashMap(1);
            java.util.HashMap v1_1 = new java.util.HashMap(1);
            com.flurry.org.apache.avro.Schema.getAliases(p5, v2_1, v0_1, v1_1);
            if ((v0_1.size() != 0) || (v1_1.size() != 0)) {
                v2_1.clear();
                p4 = com.flurry.org.apache.avro.Schema.applyAliases(p4, v2_1, v0_1, v1_1);
            }
        }
        return p4;
    }

    private static com.flurry.org.apache.avro.Schema applyAliases(com.flurry.org.apache.avro.Schema p19, java.util.Map p20, java.util.Map p21, java.util.Map p22)
    {
        com.flurry.org.apache.avro.Schema$Name v13_1;
        if (!(p19 instanceof com.flurry.org.apache.avro.Schema$NamedSchema)) {
            v13_1 = 0;
        } else {
            v13_1 = ((com.flurry.org.apache.avro.Schema$NamedSchema) p19).name;
        }
        com.flurry.org.apache.avro.Schema$Props v6_12;
        com.flurry.org.apache.avro.Schema v15 = p19;
        switch (com.flurry.org.apache.avro.Schema$4.$SwitchMap$org$apache$avro$Schema$Type[p19.getType().ordinal()]) {
            case 9:
                if (!p20.containsKey(p19)) {
                    if (p21.containsKey(v13_1)) {
                        v13_1 = ((com.flurry.org.apache.avro.Schema$Name) p21.get(v13_1));
                    }
                    v15 = com.flurry.org.apache.avro.Schema.createRecord(com.flurry.org.apache.avro.Schema$Name.access$400(v13_1), p19.getDoc(), 0, p19.isError());
                    p20.put(p19, v15);
                    java.util.ArrayList v14_1 = new java.util.ArrayList();
                    java.util.Iterator v12_0 = p19.getFields().iterator();
                    while (v12_0.hasNext()) {
                        com.flurry.org.apache.avro.Schema$Field v11_1 = ((com.flurry.org.apache.avro.Schema$Field) v12_0.next());
                        com.flurry.org.apache.avro.Schema$Field v3_1 = new com.flurry.org.apache.avro.Schema$Field(com.flurry.org.apache.avro.Schema.getFieldAlias(v13_1, com.flurry.org.apache.avro.Schema$Field.access$1700(v11_1), p22), com.flurry.org.apache.avro.Schema.applyAliases(com.flurry.org.apache.avro.Schema$Field.access$1600(v11_1), p20, p21, p22), com.flurry.org.apache.avro.Schema$Field.access$1800(v11_1), com.flurry.org.apache.avro.Schema$Field.access$1900(v11_1), com.flurry.org.apache.avro.Schema$Field.access$2000(v11_1));
                        com.flurry.org.apache.avro.Schema$Field.access$1400(v3_1).putAll(com.flurry.org.apache.avro.Schema$Field.access$1400(v11_1));
                        v14_1.add(v3_1);
                    }
                    v15.setFields(v14_1);
                    if (v15 != p19) {
                        v15.props.putAll(p19.props);
                    }
                    v6_12 = v15;
                } else {
                    v6_12 = ((com.flurry.org.apache.avro.Schema) p20.get(p19));
                }
                break;
            case 10:
                if (!p21.containsKey(v13_1)) {
                } else {
                    v15 = com.flurry.org.apache.avro.Schema.createEnum(com.flurry.org.apache.avro.Schema$Name.access$400(((com.flurry.org.apache.avro.Schema$Name) p21.get(v13_1))), p19.getDoc(), 0, p19.getEnumSymbols());
                }
                break;
            case 11:
                com.flurry.org.apache.avro.Schema v10 = com.flurry.org.apache.avro.Schema.applyAliases(p19.getElementType(), p20, p21, p22);
                if (v10 == p19.getElementType()) {
                } else {
                    v15 = com.flurry.org.apache.avro.Schema.createArray(v10);
                }
                break;
            case 12:
                com.flurry.org.apache.avro.Schema v17 = com.flurry.org.apache.avro.Schema.applyAliases(p19.getValueType(), p20, p21, p22);
                if (v17 == p19.getValueType()) {
                } else {
                    v15 = com.flurry.org.apache.avro.Schema.createMap(v17);
                }
                break;
            case 13:
                java.util.ArrayList v16_1 = new java.util.ArrayList();
                java.util.Iterator v12_1 = p19.getTypes().iterator();
                while (v12_1.hasNext()) {
                    v16_1.add(com.flurry.org.apache.avro.Schema.applyAliases(((com.flurry.org.apache.avro.Schema) v12_1.next()), p20, p21, p22));
                }
                v15 = com.flurry.org.apache.avro.Schema.createUnion(v16_1);
                break;
            case 14:
                if (!p21.containsKey(v13_1)) {
                } else {
                    v15 = com.flurry.org.apache.avro.Schema.createFixed(com.flurry.org.apache.avro.Schema$Name.access$400(((com.flurry.org.apache.avro.Schema$Name) p21.get(v13_1))), p19.getDoc(), 0, p19.getFixedSize());
                }
                break;
            default:
        }
        return v6_12;
    }

    public static com.flurry.org.apache.avro.Schema create(com.flurry.org.apache.avro.Schema$Type p3)
    {
        com.flurry.org.apache.avro.Schema$NullSchema v0_1;
        switch (com.flurry.org.apache.avro.Schema$4.$SwitchMap$org$apache$avro$Schema$Type[p3.ordinal()]) {
            case 1:
                v0_1 = new com.flurry.org.apache.avro.Schema$StringSchema();
                break;
            case 2:
                v0_1 = new com.flurry.org.apache.avro.Schema$BytesSchema();
                break;
            case 3:
                v0_1 = new com.flurry.org.apache.avro.Schema$IntSchema();
                break;
            case 4:
                v0_1 = new com.flurry.org.apache.avro.Schema$LongSchema();
                break;
            case 5:
                v0_1 = new com.flurry.org.apache.avro.Schema$FloatSchema();
                break;
            case 6:
                v0_1 = new com.flurry.org.apache.avro.Schema$DoubleSchema();
                break;
            case 7:
                v0_1 = new com.flurry.org.apache.avro.Schema$BooleanSchema();
                break;
            case 8:
                v0_1 = new com.flurry.org.apache.avro.Schema$NullSchema();
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Can\'t create a: ").append(p3).toString());
        }
        return v0_1;
    }

    public static com.flurry.org.apache.avro.Schema createArray(com.flurry.org.apache.avro.Schema p1)
    {
        return new com.flurry.org.apache.avro.Schema$ArraySchema(p1);
    }

    public static com.flurry.org.apache.avro.Schema createEnum(String p3, String p4, String p5, java.util.List p6)
    {
        return new com.flurry.org.apache.avro.Schema$EnumSchema(new com.flurry.org.apache.avro.Schema$Name(p3, p5), p4, new com.flurry.org.apache.avro.Schema$LockableArrayList(p6));
    }

    public static com.flurry.org.apache.avro.Schema createFixed(String p2, String p3, String p4, int p5)
    {
        return new com.flurry.org.apache.avro.Schema$FixedSchema(new com.flurry.org.apache.avro.Schema$Name(p2, p4), p3, p5);
    }

    public static com.flurry.org.apache.avro.Schema createMap(com.flurry.org.apache.avro.Schema p1)
    {
        return new com.flurry.org.apache.avro.Schema$MapSchema(p1);
    }

    public static com.flurry.org.apache.avro.Schema createRecord(String p2, String p3, String p4, boolean p5)
    {
        return new com.flurry.org.apache.avro.Schema$RecordSchema(new com.flurry.org.apache.avro.Schema$Name(p2, p4), p3, p5);
    }

    public static com.flurry.org.apache.avro.Schema createRecord(java.util.List p3)
    {
        com.flurry.org.apache.avro.Schema v0 = com.flurry.org.apache.avro.Schema.createRecord(0, 0, 0, 0);
        v0.setFields(p3);
        return v0;
    }

    public static com.flurry.org.apache.avro.Schema createUnion(java.util.List p2)
    {
        return new com.flurry.org.apache.avro.Schema$UnionSchema(new com.flurry.org.apache.avro.Schema$LockableArrayList(p2));
    }

    private static void getAliases(com.flurry.org.apache.avro.Schema p12, java.util.Map p13, java.util.Map p14, java.util.Map p15)
    {
        if (((p12 instanceof com.flurry.org.apache.avro.Schema$NamedSchema)) && (((com.flurry.org.apache.avro.Schema$NamedSchema) p12).aliases != null)) {
            java.util.Iterator v3_3 = ((com.flurry.org.apache.avro.Schema$NamedSchema) p12).aliases.iterator();
            while (v3_3.hasNext()) {
                p14.put(((com.flurry.org.apache.avro.Schema$Name) v3_3.next()), ((com.flurry.org.apache.avro.Schema$NamedSchema) p12).name);
            }
        }
        switch (com.flurry.org.apache.avro.Schema$4.$SwitchMap$org$apache$avro$Schema$Type[p12.getType().ordinal()]) {
            case 9:
                if (p13.containsKey(p12)) {
                } else {
                    p13.put(p12, p12);
                    java.util.Iterator v3_1 = p12.getFields().iterator();
                    while (v3_1.hasNext()) {
                        com.flurry.org.apache.avro.Schema$Field v1_1 = ((com.flurry.org.apache.avro.Schema$Field) v3_1.next());
                        if (com.flurry.org.apache.avro.Schema$Field.access$1300(v1_1) != null) {
                            java.util.Iterator v4 = com.flurry.org.apache.avro.Schema$Field.access$1300(v1_1).iterator();
                            while (v4.hasNext()) {
                                String v2_1 = ((String) v4.next());
                                java.util.HashMap v8_1 = ((java.util.Map) p15.get(((com.flurry.org.apache.avro.Schema$RecordSchema) p12).name));
                                if (v8_1 == null) {
                                    Object v10_26 = ((com.flurry.org.apache.avro.Schema$RecordSchema) p12).name;
                                    v8_1 = new java.util.HashMap();
                                    p15.put(v10_26, v8_1);
                                }
                                v8_1.put(v2_1, com.flurry.org.apache.avro.Schema$Field.access$1700(v1_1));
                            }
                        }
                        com.flurry.org.apache.avro.Schema.getAliases(com.flurry.org.apache.avro.Schema$Field.access$1600(v1_1), p13, p14, p15);
                    }
                    if ((((com.flurry.org.apache.avro.Schema$RecordSchema) p12).aliases == null) || (!p15.containsKey(((com.flurry.org.apache.avro.Schema$RecordSchema) p12).name))) {
                    } else {
                        java.util.Iterator v3_2 = ((com.flurry.org.apache.avro.Schema$RecordSchema) p12).aliases.iterator();
                        while (v3_2.hasNext()) {
                            p15.put(((com.flurry.org.apache.avro.Schema$Name) v3_2.next()), p15.get(((com.flurry.org.apache.avro.Schema$RecordSchema) p12).name));
                        }
                    }
                }
                break;
            case 10:
            default:
                break;
            case 11:
                com.flurry.org.apache.avro.Schema.getAliases(p12.getElementType(), p13, p14, p15);
                break;
            case 12:
                com.flurry.org.apache.avro.Schema.getAliases(p12.getValueType(), p13, p14, p15);
                break;
            case 13:
                java.util.Iterator v3_0 = p12.getTypes().iterator();
                while (v3_0.hasNext()) {
                    com.flurry.org.apache.avro.Schema.getAliases(((com.flurry.org.apache.avro.Schema) v3_0.next()), p13, p14, p15);
                }
                break;
        }
        return;
    }

    private static String getFieldAlias(com.flurry.org.apache.avro.Schema$Name p2, String p3, java.util.Map p4)
    {
        java.util.Map v1_1 = ((java.util.Map) p4.get(p2));
        if (v1_1 != null) {
            String v0_1 = ((String) v1_1.get(p3));
            if (v0_1 != null) {
                p3 = v0_1;
            }
        }
        return p3;
    }

    private static String getOptionalText(com.flurry.org.codehaus.jackson.JsonNode p2, String p3)
    {
        int v1;
        com.flurry.org.codehaus.jackson.JsonNode v0 = p2.get(p3);
        if (v0 == null) {
            v1 = 0;
        } else {
            v1 = v0.getTextValue();
        }
        return v1;
    }

    private static String getRequiredText(com.flurry.org.codehaus.jackson.JsonNode p4, String p5, String p6)
    {
        String v0 = com.flurry.org.apache.avro.Schema.getOptionalText(p4, p5);
        if (v0 != null) {
            return v0;
        } else {
            throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append(p6).append(": ").append(p4).toString());
        }
    }

    static com.flurry.org.apache.avro.Schema parse(com.flurry.org.codehaus.jackson.JsonNode p38, com.flurry.org.apache.avro.Schema$Names p39)
    {
        com.flurry.org.apache.avro.Schema$FixedSchema v24;
        if (!p38.isTextual()) {
            if (!p38.isObject()) {
                if (!p38.isArray()) {
                    throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("Schema not yet supported: ").append(p38).toString());
                } else {
                    com.flurry.org.apache.avro.Schema$LockableArrayList v32 = new com.flurry.org.apache.avro.Schema$LockableArrayList;
                    v32(p38.size());
                    java.util.Iterator v18_1 = p38.iterator();
                    while (v18_1.hasNext()) {
                        v32.add(com.flurry.org.apache.avro.Schema.parse(((com.flurry.org.codehaus.jackson.JsonNode) v18_1.next()), p39));
                    }
                    v24 = new com.flurry.org.apache.avro.Schema$UnionSchema;
                    v24(v32);
                }
            } else {
                String v30 = com.flurry.org.apache.avro.Schema.getRequiredText(p38, "type", "No type");
                com.flurry.org.apache.avro.Schema$Name v21 = 0;
                String v25 = 0;
                String v12 = 0;
                if ((v30.equals("record")) || ((v30.equals("error")) || ((v30.equals("enum")) || (v30.equals("fixed"))))) {
                    String v27 = com.flurry.org.apache.avro.Schema.getOptionalText(p38, "namespace");
                    v12 = com.flurry.org.apache.avro.Schema.getOptionalText(p38, "doc");
                    if (v27 == null) {
                        v27 = p39.space();
                    }
                    v21 = new com.flurry.org.apache.avro.Schema$Name;
                    v21(com.flurry.org.apache.avro.Schema.getRequiredText(p38, "name", "No name in schema"), v27);
                    if (com.flurry.org.apache.avro.Schema$Name.access$600(v21) != null) {
                        v25 = p39.space();
                        p39.space(com.flurry.org.apache.avro.Schema$Name.access$600(v21));
                    }
                }
                if (!com.flurry.org.apache.avro.Schema.PRIMITIVES.containsKey(v30)) {
                    if ((!v30.equals("record")) && (!v30.equals("error"))) {
                        if (!v30.equals("enum")) {
                            if (!v30.equals("array")) {
                                if (!v30.equals("map")) {
                                    if (!v30.equals("fixed")) {
                                        throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("Type not supported: ").append(v30).toString());
                                    } else {
                                        com.flurry.org.codehaus.jackson.JsonNode v26 = p38.get("size");
                                        if ((v26 != null) && (v26.isInt())) {
                                            v24 = new com.flurry.org.apache.avro.Schema$FixedSchema;
                                            v24(v21, v12, v26.getIntValue());
                                            if (v21 != null) {
                                                p39.add(v24);
                                            }
                                        } else {
                                            throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("Invalid or no size: ").append(p38).toString());
                                        }
                                    }
                                } else {
                                    com.flurry.org.codehaus.jackson.JsonNode v34 = p38.get("values");
                                    if (v34 != null) {
                                        v24 = new com.flurry.org.apache.avro.Schema$MapSchema;
                                        v24(com.flurry.org.apache.avro.Schema.parse(v34, p39));
                                    } else {
                                        throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("Map has no values type: ").append(p38).toString());
                                    }
                                }
                            } else {
                                com.flurry.org.codehaus.jackson.JsonNode v19 = p38.get("items");
                                if (v19 != null) {
                                    v24 = new com.flurry.org.apache.avro.Schema$ArraySchema;
                                    v24(com.flurry.org.apache.avro.Schema.parse(v19, p39));
                                } else {
                                    throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("Array has no items type: ").append(p38).toString());
                                }
                            }
                        } else {
                            com.flurry.org.codehaus.jackson.JsonNode v29 = p38.get("symbols");
                            if ((v29 != null) && (v29.isArray())) {
                                com.flurry.org.apache.avro.Schema$LockableArrayList v28_1 = new com.flurry.org.apache.avro.Schema$LockableArrayList();
                                java.util.Iterator v18_0 = v29.iterator();
                                while (v18_0.hasNext()) {
                                    v28_1.add(((com.flurry.org.codehaus.jackson.JsonNode) v18_0.next()).getTextValue());
                                }
                                v24 = new com.flurry.org.apache.avro.Schema$EnumSchema;
                                v24(v21, v12, v28_1);
                                if (v21 != null) {
                                    p39.add(v24);
                                }
                            } else {
                                throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("Enum has no symbols: ").append(p38).toString());
                            }
                        }
                    } else {
                        java.util.ArrayList v15_1 = new java.util.ArrayList();
                        v24 = new com.flurry.org.apache.avro.Schema$RecordSchema;
                        v24(v21, v12, v30.equals("error"));
                        if (v21 != null) {
                            p39.add(v24);
                        }
                        com.flurry.org.codehaus.jackson.JsonNode v16 = p38.get("fields");
                        if ((v16 != null) && (v16.isArray())) {
                            java.util.Iterator v18_2 = v16.iterator();
                            while (v18_2.hasNext()) {
                                com.flurry.org.codehaus.jackson.JsonNode v13_1 = ((com.flurry.org.codehaus.jackson.JsonNode) v18_2.next());
                                String v4 = com.flurry.org.apache.avro.Schema.getRequiredText(v13_1, "name", "No field name");
                                String v6 = com.flurry.org.apache.avro.Schema.getOptionalText(v13_1, "doc");
                                com.flurry.org.codehaus.jackson.JsonNode v14 = v13_1.get("type");
                                if (v14 != null) {
                                    if ((!v14.isTextual()) || (p39.get(v14.getTextValue()) != null)) {
                                        com.flurry.org.apache.avro.Schema v5 = com.flurry.org.apache.avro.Schema.parse(v14, p39);
                                        com.flurry.org.apache.avro.Schema$Field$Order v8 = com.flurry.org.apache.avro.Schema$Field$Order.ASCENDING;
                                        com.flurry.org.codehaus.jackson.JsonNode v22 = v13_1.get("order");
                                        if (v22 != null) {
                                            v8 = com.flurry.org.apache.avro.Schema$Field$Order.valueOf(v22.getTextValue().toUpperCase());
                                        }
                                        com.flurry.org.codehaus.jackson.node.DoubleNode v7 = v13_1.get("default");
                                        if (((v7 != null) && ((com.flurry.org.apache.avro.Schema$Type.FLOAT.equals(v5.getType())) || (com.flurry.org.apache.avro.Schema$Type.DOUBLE.equals(v5.getType())))) && (v7.isTextual())) {
                                            v7 = new com.flurry.org.codehaus.jackson.node.DoubleNode(Double.valueOf(v7.getTextValue()).doubleValue());
                                        }
                                        com.flurry.org.apache.avro.Schema$Field v3_1 = new com.flurry.org.apache.avro.Schema$Field(v4, v5, v6, v7, v8);
                                        java.util.Iterator v17_0 = v13_1.getFieldNames();
                                        while (v17_0.hasNext()) {
                                            String v23_1 = ((String) v17_0.next());
                                            String v33_0 = v13_1.get(v23_1).getTextValue();
                                            if ((!com.flurry.org.apache.avro.Schema.FIELD_RESERVED.contains(v23_1)) && (v33_0 != null)) {
                                                v3_1.addProp(v23_1, v33_0);
                                            }
                                        }
                                        com.flurry.org.apache.avro.Schema$Field.access$1302(v3_1, com.flurry.org.apache.avro.Schema.parseAliases(v13_1));
                                        v15_1.add(v3_1);
                                    } else {
                                        throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append(v14).append(" is not a defined name.").append(" The type of the \"").append(v4).append("\" field must be").append(" a defined name or a {\"type\": ...} expression.").toString());
                                    }
                                } else {
                                    throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("No field type: ").append(v13_1).toString());
                                }
                            }
                            v24.setFields(v15_1);
                        } else {
                            throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("Record has no fields: ").append(p38).toString());
                        }
                    }
                } else {
                    v24 = com.flurry.org.apache.avro.Schema.create(((com.flurry.org.apache.avro.Schema$Type) com.flurry.org.apache.avro.Schema.PRIMITIVES.get(v30)));
                }
                java.util.Iterator v17_1 = p38.getFieldNames();
                while (v17_1.hasNext()) {
                    String v23_3 = ((String) v17_1.next());
                    String v33_1 = p38.get(v23_3).getTextValue();
                    if ((!com.flurry.org.apache.avro.Schema.SCHEMA_RESERVED.contains(v23_3)) && (v33_1 != null)) {
                        v24.addProp(v23_3, v33_1);
                    }
                }
                if (v25 != null) {
                    p39.space(v25);
                }
                if ((v24 instanceof com.flurry.org.apache.avro.Schema$NamedSchema)) {
                    java.util.Set v10 = com.flurry.org.apache.avro.Schema.parseAliases(p38);
                    if (v10 != null) {
                        java.util.Iterator v18_3 = v10.iterator();
                        while (v18_3.hasNext()) {
                            v24.addAlias(((String) v18_3.next()));
                        }
                    }
                }
            }
        } else {
            v24 = p39.get(p38.getTextValue());
            if (v24 == null) {
                throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("Undefined name: ").append(p38).toString());
            }
        }
        return v24;
    }

    public static com.flurry.org.apache.avro.Schema parse(java.io.File p1)
    {
        return new com.flurry.org.apache.avro.Schema$Parser().parse(p1);
    }

    public static com.flurry.org.apache.avro.Schema parse(java.io.InputStream p1)
    {
        return new com.flurry.org.apache.avro.Schema$Parser().parse(p1);
    }

    public static com.flurry.org.apache.avro.Schema parse(String p1)
    {
        return new com.flurry.org.apache.avro.Schema$Parser().parse(p1);
    }

    public static com.flurry.org.apache.avro.Schema parse(String p1, boolean p2)
    {
        return new com.flurry.org.apache.avro.Schema$Parser().setValidate(p2).parse(p1);
    }

    private static java.util.Set parseAliases(com.flurry.org.codehaus.jackson.JsonNode p7)
    {
        java.util.LinkedHashSet v1_0;
        com.flurry.org.codehaus.jackson.JsonNode v2 = p7.get("aliases");
        if (v2 != null) {
            if (v2.isArray()) {
                v1_0 = new java.util.LinkedHashSet();
                java.util.Iterator v3 = v2.iterator();
                while (v3.hasNext()) {
                    com.flurry.org.codehaus.jackson.JsonNode v0_1 = ((com.flurry.org.codehaus.jackson.JsonNode) v3.next());
                    if (v0_1.isTextual()) {
                        v1_0.add(v0_1.getTextValue());
                    } else {
                        throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("alias not a string: ").append(v0_1).toString());
                    }
                }
            } else {
                throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("aliases not an array: ").append(p7).toString());
            }
        } else {
            v1_0 = 0;
        }
        return v1_0;
    }

    static com.flurry.org.codehaus.jackson.JsonNode parseJson(String p4)
    {
        try {
            return com.flurry.org.apache.avro.Schema.MAPPER.readTree(com.flurry.org.apache.avro.Schema.FACTORY.createJsonParser(new java.io.StringReader(p4)));
        } catch (java.io.IOException v0_0) {
            throw new RuntimeException(v0_0);
        } catch (java.io.IOException v0_1) {
            throw new RuntimeException(v0_1);
        }
    }

    private static String validateName(String p7)
    {
        if (((Boolean) com.flurry.org.apache.avro.Schema.validateNames.get()).booleanValue()) {
            int v3 = p7.length();
            if (v3 != 0) {
                char v1 = p7.charAt(0);
                if ((Character.isLetter(v1)) || (v1 == 95)) {
                    int v2 = 1;
                    while (v2 < v3) {
                        char v0 = p7.charAt(v2);
                        if ((Character.isLetterOrDigit(v0)) || (v0 == 95)) {
                            v2++;
                        } else {
                            throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("Illegal character in: ").append(p7).toString());
                        }
                    }
                } else {
                    throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("Illegal initial character: ").append(p7).toString());
                }
            } else {
                throw new com.flurry.org.apache.avro.SchemaParseException("Empty name");
            }
        }
        return p7;
    }

    public void addAlias(String p4)
    {
        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not a named type: ").append(this).toString());
    }

    public declared_synchronized void addProp(String p2, String p3)
    {
        try {
            this.props.add(p2, p3);
            this.hashCode = -2147483648;
            return;
        } catch (Throwable v0_2) {
            throw v0_2;
        }
    }

    int computeHash()
    {
        return (this.getType().hashCode() + this.props.hashCode());
    }

    final boolean equalCachedHash(com.flurry.org.apache.avro.Schema p4)
    {
        if ((this.hashCode != p4.hashCode) && ((this.hashCode != -2147483648) && (p4.hashCode != -2147483648))) {
            int v0_3 = 0;
        } else {
            v0_3 = 1;
        }
        return v0_3;
    }

    public boolean equals(Object p6)
    {
        int v1 = 1;
        if (p6 != this) {
            if ((p6 instanceof com.flurry.org.apache.avro.Schema)) {
                if (this.type == ((com.flurry.org.apache.avro.Schema) p6).type) {
                    if ((!this.equalCachedHash(((com.flurry.org.apache.avro.Schema) p6))) || (!this.props.equals(((com.flurry.org.apache.avro.Schema) p6).props))) {
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

    void fieldsToJson(com.flurry.org.apache.avro.Schema$Names p4, com.flurry.org.codehaus.jackson.JsonGenerator p5)
    {
        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not a record: ").append(this).toString());
    }

    public java.util.Set getAliases()
    {
        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not a named type: ").append(this).toString());
    }

    public String getDoc()
    {
        return 0;
    }

    public com.flurry.org.apache.avro.Schema getElementType()
    {
        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not an array: ").append(this).toString());
    }

    public int getEnumOrdinal(String p4)
    {
        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not an enum: ").append(this).toString());
    }

    public java.util.List getEnumSymbols()
    {
        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not an enum: ").append(this).toString());
    }

    public com.flurry.org.apache.avro.Schema$Field getField(String p4)
    {
        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not a record: ").append(this).toString());
    }

    public java.util.List getFields()
    {
        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not a record: ").append(this).toString());
    }

    public int getFixedSize()
    {
        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not fixed: ").append(this).toString());
    }

    public String getFullName()
    {
        return this.getName();
    }

    public Integer getIndexNamed(String p4)
    {
        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not a union: ").append(this).toString());
    }

    public String getName()
    {
        return com.flurry.org.apache.avro.Schema$Type.access$000(this.type);
    }

    public String getNamespace()
    {
        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not a named type: ").append(this).toString());
    }

    public declared_synchronized String getProp(String p2)
    {
        try {
            return ((String) this.props.get(p2));
        } catch (Throwable v0_3) {
            throw v0_3;
        }
    }

    public java.util.Map getProps()
    {
        return java.util.Collections.unmodifiableMap(this.props);
    }

    public com.flurry.org.apache.avro.Schema$Type getType()
    {
        return this.type;
    }

    public java.util.List getTypes()
    {
        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not a union: ").append(this).toString());
    }

    public com.flurry.org.apache.avro.Schema getValueType()
    {
        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not a map: ").append(this).toString());
    }

    public boolean hasEnumSymbol(String p4)
    {
        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not an enum: ").append(this).toString());
    }

    public final int hashCode()
    {
        if (this.hashCode == -2147483648) {
            this.hashCode = this.computeHash();
        }
        return this.hashCode;
    }

    public boolean isError()
    {
        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not a record: ").append(this).toString());
    }

    public void setFields(java.util.List p4)
    {
        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not a record: ").append(this).toString());
    }

    void toJson(com.flurry.org.apache.avro.Schema$Names p3, com.flurry.org.codehaus.jackson.JsonGenerator p4)
    {
        if (this.props.size() != 0) {
            p4.writeStartObject();
            p4.writeStringField("type", this.getName());
            this.props.write(p4);
            p4.writeEndObject();
        } else {
            p4.writeString(this.getName());
        }
        return;
    }

    public String toString()
    {
        return this.toString(0);
    }

    public String toString(boolean p5)
    {
        try {
            java.io.StringWriter v2_1 = new java.io.StringWriter();
            com.flurry.org.codehaus.jackson.JsonGenerator v1 = com.flurry.org.apache.avro.Schema.FACTORY.createJsonGenerator(v2_1);
        } catch (java.io.IOException v0) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v0);
        }
        if (p5) {
            v1.useDefaultPrettyPrinter();
        }
        this.toJson(new com.flurry.org.apache.avro.Schema$Names(), v1);
        v1.flush();
        return v2_1.toString();
    }
}
