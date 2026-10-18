package com.flurry.org.apache.avro.io.parsing;
public class ResolvingGrammarGenerator extends com.flurry.org.apache.avro.io.parsing.ValidatingGrammarGenerator {
    private static synthetic int[] $SWITCH_TABLE$org$apache$avro$Schema$Type;
    private static com.flurry.org.apache.avro.io.EncoderFactory factory;

    static synthetic int[] $SWITCH_TABLE$org$apache$avro$Schema$Type()
    {
        int[] v0_0 = com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.$SWITCH_TABLE$org$apache$avro$Schema$Type;
        if (v0_0 == null) {
            v0_0 = new int[com.flurry.org.apache.avro.Schema$Type.values().length];
            try {
                com.flurry.org.apache.avro.Schema$Type.ARRAY.ordinal()[NoSuchFieldError v1_24] = 3;
                try {
                    com.flurry.org.apache.avro.Schema$Type.BOOLEAN.ordinal()[NoSuchFieldError v1_1] = 13;
                    try {
                        com.flurry.org.apache.avro.Schema$Type.BYTES.ordinal()[NoSuchFieldError v1_3] = 8;
                        try {
                            com.flurry.org.apache.avro.Schema$Type.DOUBLE.ordinal()[NoSuchFieldError v1_5] = 12;
                            try {
                                com.flurry.org.apache.avro.Schema$Type.ENUM.ordinal()[NoSuchFieldError v1_7] = 2;
                                try {
                                    com.flurry.org.apache.avro.Schema$Type.FIXED.ordinal()[NoSuchFieldError v1_9] = 6;
                                    try {
                                        com.flurry.org.apache.avro.Schema$Type.FLOAT.ordinal()[NoSuchFieldError v1_11] = 11;
                                        try {
                                            com.flurry.org.apache.avro.Schema$Type.INT.ordinal()[NoSuchFieldError v1_13] = 9;
                                            try {
                                                com.flurry.org.apache.avro.Schema$Type.LONG.ordinal()[NoSuchFieldError v1_15] = 10;
                                                try {
                                                    com.flurry.org.apache.avro.Schema$Type.MAP.ordinal()[NoSuchFieldError v1_18] = 4;
                                                    try {
                                                        com.flurry.org.apache.avro.Schema$Type.NULL.ordinal()[NoSuchFieldError v1_20] = 14;
                                                        try {
                                                            com.flurry.org.apache.avro.Schema$Type.RECORD.ordinal()[NoSuchFieldError v1_22] = 1;
                                                            try {
                                                                com.flurry.org.apache.avro.Schema$Type.STRING.ordinal()[NoSuchFieldError v1_25] = 7;
                                                                try {
                                                                    com.flurry.org.apache.avro.Schema$Type.UNION.ordinal()[NoSuchFieldError v1_27] = 5;
                                                                } catch (NoSuchFieldError v1) {
                                                                }
                                                                com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.$SWITCH_TABLE$org$apache$avro$Schema$Type = v0_0;
                                                            } catch (NoSuchFieldError v1) {
                                                            }
                                                        } catch (NoSuchFieldError v1) {
                                                        }
                                                    } catch (NoSuchFieldError v1) {
                                                    }
                                                } catch (NoSuchFieldError v1) {
                                                }
                                            } catch (NoSuchFieldError v1) {
                                            }
                                        } catch (NoSuchFieldError v1) {
                                        }
                                    } catch (NoSuchFieldError v1) {
                                    }
                                } catch (NoSuchFieldError v1) {
                                }
                            } catch (NoSuchFieldError v1) {
                            }
                        } catch (NoSuchFieldError v1) {
                        }
                    } catch (NoSuchFieldError v1) {
                    }
                } catch (NoSuchFieldError v1) {
                }
            } catch (NoSuchFieldError v1) {
            }
        }
        return v0_0;
    }

    static ResolvingGrammarGenerator()
    {
        com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.factory = new com.flurry.org.apache.avro.io.EncoderFactory().configureBufferSize(32);
        return;
    }

    public ResolvingGrammarGenerator()
    {
        return;
    }

    private static int bestBranch(com.flurry.org.apache.avro.Schema p8, com.flurry.org.apache.avro.Schema p9)
    {
        com.flurry.org.apache.avro.Schema$Type v4 = p9.getType();
        int v2_0 = 0;
        int v5_4 = p8.getTypes().iterator();
        while (v5_4.hasNext()) {
            com.flurry.org.apache.avro.Schema v0_1 = ((com.flurry.org.apache.avro.Schema) v5_4.next());
            if (v4 == v0_1.getType()) {
                if ((v4 != com.flurry.org.apache.avro.Schema$Type.RECORD) && ((v4 != com.flurry.org.apache.avro.Schema$Type.ENUM) && (v4 != com.flurry.org.apache.avro.Schema$Type.FIXED))) {
                    int v5_0 = v2_0;
                    return v5_0;
                } else {
                    String v3 = p9.getFullName();
                    String v1 = v0_1.getFullName();
                    if (((v3 != null) && (v3.equals(v1))) || ((v3 == v1) && (v4 == com.flurry.org.apache.avro.Schema$Type.RECORD))) {
                        v5_0 = v2_0;
                        return v5_0;
                    }
                }
            }
            v2_0++;
        }
        int v2_1 = 0;
        int v5_3 = p8.getTypes().iterator();
        while (v5_3.hasNext()) {
            com.flurry.org.apache.avro.Schema v0_3 = ((com.flurry.org.apache.avro.Schema) v5_3.next());
            switch (com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.$SWITCH_TABLE$org$apache$avro$Schema$Type()[v4.ordinal()]) {
                case 9:
                    switch (com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.$SWITCH_TABLE$org$apache$avro$Schema$Type()[v0_3.getType().ordinal()]) {
                        case 10:
                        case 12:
                            v5_0 = v2_1;
                            return v5_0;
                        case 11:
                        default:
                            break;
                    }
                    break;
                case 10:
                case 11:
                    switch (com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.$SWITCH_TABLE$org$apache$avro$Schema$Type()[v0_3.getType().ordinal()]) {
                        case 12:
                            v5_0 = v2_1;
                            return v5_0;
                        default:
                    }
                    break;
            }
            v2_1++;
        }
        v5_0 = -1;
        return v5_0;
    }

    public static void encode(com.flurry.org.apache.avro.io.Encoder p12, com.flurry.org.apache.avro.Schema p13, com.flurry.org.codehaus.jackson.JsonNode p14)
    {
        switch (com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.$SWITCH_TABLE$org$apache$avro$Schema$Type()[p13.getType().ordinal()]) {
            case 1:
                com.flurry.org.apache.avro.AvroTypeException v9_35 = p13.getFields().iterator();
                while (v9_35.hasNext()) {
                    com.flurry.org.apache.avro.Schema$Field v1_1 = ((com.flurry.org.apache.avro.Schema$Field) v9_35.next());
                    String v5 = v1_1.name();
                    com.flurry.org.codehaus.jackson.JsonNode v8_1 = p14.get(v5);
                    if (v8_1 == null) {
                        v8_1 = v1_1.defaultValue();
                    }
                    if (v8_1 != null) {
                        com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.encode(p12, v1_1.schema(), v8_1);
                    } else {
                        throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder("No default value for: ").append(v5).toString());
                    }
                }
                break;
            case 2:
                p12.writeEnum(p13.getEnumOrdinal(p14.getTextValue()));
                break;
            case 3:
                p12.writeArrayStart();
                p12.setItemCount(((long) p14.size()));
                com.flurry.org.apache.avro.Schema v2 = p13.getElementType();
                com.flurry.org.apache.avro.AvroTypeException v9_31 = p14.iterator();
                while (v9_31.hasNext()) {
                    com.flurry.org.codehaus.jackson.JsonNode v7_1 = ((com.flurry.org.codehaus.jackson.JsonNode) v9_31.next());
                    p12.startItem();
                    com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.encode(p12, v2, v7_1);
                }
                p12.writeArrayEnd();
                break;
            case 4:
                p12.writeMapStart();
                p12.setItemCount(((long) p14.size()));
                com.flurry.org.codehaus.jackson.JsonNode v8_0 = p13.getValueType();
                java.util.Iterator v3 = p14.getFieldNames();
                while (v3.hasNext()) {
                    p12.startItem();
                    String v4_1 = ((String) v3.next());
                    p12.writeString(v4_1);
                    com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.encode(p12, v8_0, p14.get(v4_1));
                }
                p12.writeMapEnd();
                break;
            case 5:
                p12.writeIndex(0);
                com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.encode(p12, ((com.flurry.org.apache.avro.Schema) p13.getTypes().get(0)), p14);
                break;
            case 6:
                if (p14.isTextual()) {
                    byte[] v0 = p14.getTextValue().getBytes("ISO-8859-1");
                    if (v0.length != p13.getFixedSize()) {
                        com.flurry.org.apache.avro.AvroTypeException v9_17;
                        byte[] v6 = new byte[p13.getFixedSize()];
                        if (p13.getFixedSize() <= v0.length) {
                            v9_17 = p13.getFixedSize();
                        } else {
                            v9_17 = v0.length;
                        }
                        System.arraycopy(v0, 0, v6, 0, v9_17);
                        v0 = v6;
                    }
                    p12.writeFixed(v0);
                } else {
                    throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder("Non-string default value for fixed: ").append(p14).toString());
                }
                break;
            case 7:
                if (p14.isTextual()) {
                    p12.writeString(p14.getTextValue());
                } else {
                    throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder("Non-string default value for string: ").append(p14).toString());
                }
                break;
            case 8:
                if (p14.isTextual()) {
                    p12.writeBytes(p14.getTextValue().getBytes("ISO-8859-1"));
                } else {
                    throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder("Non-string default value for bytes: ").append(p14).toString());
                }
                break;
            case 9:
                if (p14.isNumber()) {
                    p12.writeInt(p14.getIntValue());
                } else {
                    throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder("Non-numeric default value for int: ").append(p14).toString());
                }
                break;
            case 10:
                if (p14.isNumber()) {
                    p12.writeLong(p14.getLongValue());
                } else {
                    throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder("Non-numeric default value for long: ").append(p14).toString());
                }
                break;
            case 11:
                if (p14.isNumber()) {
                    p12.writeFloat(((float) p14.getDoubleValue()));
                } else {
                    throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder("Non-numeric default value for float: ").append(p14).toString());
                }
                break;
            case 12:
                if (p14.isNumber()) {
                    p12.writeDouble(p14.getDoubleValue());
                } else {
                    throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder("Non-numeric default value for double: ").append(p14).toString());
                }
                break;
            case 13:
                if (p14.isBoolean()) {
                    p12.writeBoolean(p14.getBooleanValue());
                } else {
                    throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder("Non-boolean default for boolean: ").append(p14).toString());
                }
                break;
            case 14:
                if (p14.isNull()) {
                    p12.writeNull();
                } else {
                    throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder("Non-null default value for null type: ").append(p14).toString());
                }
                break;
        }
        return;
    }

    private static byte[] getBinary(com.flurry.org.apache.avro.Schema p4, com.flurry.org.codehaus.jackson.JsonNode p5)
    {
        java.io.ByteArrayOutputStream v1_1 = new java.io.ByteArrayOutputStream();
        com.flurry.org.apache.avro.io.BinaryEncoder v0 = com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.factory.binaryEncoder(v1_1, 0);
        com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.encode(v0, p4, p5);
        v0.flush();
        return v1_1.toByteArray();
    }

    private static com.flurry.org.apache.avro.io.parsing.Symbol mkEnumAdjust(java.util.List p5, java.util.List p6)
    {
        Object[] v0 = new Object[p5.size()];
        int v1 = 0;
        while (v1 < v0.length) {
            Integer v3_3;
            int v2 = p6.indexOf(p5.get(v1));
            if (v2 != -1) {
                v3_3 = new Integer(v2);
            } else {
                v3_3 = new StringBuilder("No match for ").append(((String) p5.get(v1))).toString();
            }
            v0[v1] = v3_3;
            v1++;
        }
        return new com.flurry.org.apache.avro.io.parsing.Symbol$EnumAdjustAction(p6.size(), v0);
    }

    private com.flurry.org.apache.avro.io.parsing.Symbol resolveRecords(com.flurry.org.apache.avro.Schema p25, com.flurry.org.apache.avro.Schema p26, java.util.Map p27)
    {
        com.flurry.org.apache.avro.io.parsing.Symbol v12;
        com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator$LitS2 v19 = new com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator$LitS2;
        v19(p25, p26);
        com.flurry.org.apache.avro.io.parsing.Symbol v11_2 = ((com.flurry.org.apache.avro.io.parsing.Symbol) p27.get(v19));
        if (v11_2 != null) {
            v12 = v11_2;
        } else {
            java.util.List v18 = p25.getFields();
            java.util.List v14 = p26.getFields();
            com.flurry.org.apache.avro.Schema$Field[] v10 = new com.flurry.org.apache.avro.Schema$Field[v14.size()];
            int v15 = 0;
            int v5_3 = (v18.size() + 1);
            String v20_4 = v18.iterator();
            while (v20_4.hasNext()) {
                com.flurry.org.apache.avro.Schema$Field v9 = p26.getField(((com.flurry.org.apache.avro.Schema$Field) v20_4.next()).name());
                if (v9 != null) {
                    int v16_0 = (v15 + 1);
                    v10[v15] = v9;
                    v15 = v16_0;
                }
            }
            String v20_5 = v14.iterator();
            while (v20_5.hasNext()) {
                com.flurry.org.apache.avro.Schema$Field v13_4 = ((com.flurry.org.apache.avro.Schema$Field) v20_5.next());
                if (p25.getField(v13_4.name()) == null) {
                    if (v13_4.defaultValue() != null) {
                        int v16_1 = (v15 + 1);
                        v10[v15] = v13_4;
                        v5_3 += 3;
                        v15 = v16_1;
                    } else {
                        com.flurry.org.apache.avro.io.parsing.Symbol v11_1 = com.flurry.org.apache.avro.io.parsing.Symbol.error(new StringBuilder("Found ").append(p25.toString(1)).append(", expecting ").append(p26.toString(1)).toString());
                        p27.put(v19, v11_1);
                        v12 = v11_1;
                    }
                }
            }
            com.flurry.org.apache.avro.io.parsing.Symbol[] v8 = new com.flurry.org.apache.avro.io.parsing.Symbol[v5_3];
            int v5_0 = (v5_3 - 1);
            String v20_12 = new com.flurry.org.apache.avro.io.parsing.Symbol$FieldOrderAction;
            v20_12(v10);
            v8[v5_0] = v20_12;
            v11_2 = com.flurry.org.apache.avro.io.parsing.Symbol.seq(v8);
            p27.put(v19, v11_2);
            String v20_0 = v18.iterator();
            while (v20_0.hasNext()) {
                com.flurry.org.apache.avro.Schema$Field v17_1 = ((com.flurry.org.apache.avro.Schema$Field) v20_0.next());
                com.flurry.org.apache.avro.Schema$Field v13_0 = p26.getField(v17_1.name());
                if (v13_0 != null) {
                    v5_0--;
                    v8[v5_0] = this.generate(v17_1.schema(), v13_0.schema(), p27);
                } else {
                    v5_0--;
                    v8[v5_0] = new com.flurry.org.apache.avro.io.parsing.Symbol$SkipAction(this.generate(v17_1.schema(), v17_1.schema(), p27));
                }
            }
            String v20_1 = v14.iterator();
            while (v20_1.hasNext()) {
                com.flurry.org.apache.avro.Schema$Field v13_2 = ((com.flurry.org.apache.avro.Schema$Field) v20_1.next());
                if (p25.getField(v13_2.name()) == null) {
                    int v5_1 = (v5_0 - 1);
                    com.flurry.org.apache.avro.io.parsing.Symbol v21_7 = new com.flurry.org.apache.avro.io.parsing.Symbol$DefaultStartAction;
                    v21_7(com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.getBinary(v13_2.schema(), v13_2.defaultValue()));
                    v8[v5_1] = v21_7;
                    int v5_2 = (v5_1 - 1);
                    v8[v5_2] = this.generate(v13_2.schema(), v13_2.schema(), p27);
                    v5_0 = (v5_2 - 1);
                    v8[v5_0] = com.flurry.org.apache.avro.io.parsing.Symbol.DEFAULT_END_ACTION;
                }
            }
        }
        return v12;
    }

    private com.flurry.org.apache.avro.io.parsing.Symbol resolveUnion(com.flurry.org.apache.avro.Schema p10, com.flurry.org.apache.avro.Schema p11, java.util.Map p12)
    {
        java.util.List v0 = p10.getTypes();
        int v3 = v0.size();
        com.flurry.org.apache.avro.io.parsing.Symbol[] v4 = new com.flurry.org.apache.avro.io.parsing.Symbol[v3];
        String[] v2 = new String[v3];
        int v1 = 0;
        com.flurry.org.apache.avro.io.parsing.Symbol v6_3 = v0.iterator();
        while (v6_3.hasNext()) {
            com.flurry.org.apache.avro.Schema v5_1 = ((com.flurry.org.apache.avro.Schema) v6_3.next());
            v4[v1] = this.generate(v5_1, p11, p12);
            v2[v1] = v5_1.getFullName();
            v1++;
        }
        com.flurry.org.apache.avro.io.parsing.Symbol v6_1 = new com.flurry.org.apache.avro.io.parsing.Symbol[2];
        v6_1[0] = com.flurry.org.apache.avro.io.parsing.Symbol.alt(v4, v2);
        v6_1[1] = new com.flurry.org.apache.avro.io.parsing.Symbol$WriterUnionAction();
        return com.flurry.org.apache.avro.io.parsing.Symbol.seq(v6_1);
    }

    public final com.flurry.org.apache.avro.io.parsing.Symbol generate(com.flurry.org.apache.avro.Schema p4, com.flurry.org.apache.avro.Schema p5)
    {
        com.flurry.org.apache.avro.io.parsing.Symbol v0_1 = new com.flurry.org.apache.avro.io.parsing.Symbol[1];
        v0_1[0] = this.generate(p4, p5, new java.util.HashMap());
        return com.flurry.org.apache.avro.io.parsing.Symbol.root(v0_1);
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol generate(com.flurry.org.apache.avro.Schema p12, com.flurry.org.apache.avro.Schema p13, java.util.Map p14)
    {
        com.flurry.org.apache.avro.io.parsing.Symbol v4_3;
        com.flurry.org.apache.avro.Schema$Type v3 = p12.getType();
        com.flurry.org.apache.avro.Schema$Type v1 = p13.getType();
        if (v3 != v1) {
            if (v3 != com.flurry.org.apache.avro.Schema$Type.UNION) {
                switch (com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.$SWITCH_TABLE$org$apache$avro$Schema$Type()[v1.ordinal()]) {
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    case 7:
                    case 8:
                    case 9:
                    case 13:
                    case 14:
                        v4_3 = com.flurry.org.apache.avro.io.parsing.Symbol.error(new StringBuilder("Found ").append(p12.toString(1)).append(", expecting ").append(p13.toString(1)).toString());
                        break;
                    case 5:
                        int v0 = com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.bestBranch(p13, p12);
                        if (v0 < 0) {
                        } else {
                            com.flurry.org.apache.avro.io.parsing.Symbol v4_31 = new com.flurry.org.apache.avro.io.parsing.Symbol[2];
                            v4_31[0] = new com.flurry.org.apache.avro.io.parsing.Symbol$UnionAdjustAction(v0, this.generate(p12, ((com.flurry.org.apache.avro.Schema) p13.getTypes().get(v0)), p14));
                            v4_31[1] = com.flurry.org.apache.avro.io.parsing.Symbol.UNION;
                            v4_3 = com.flurry.org.apache.avro.io.parsing.Symbol.seq(v4_31);
                        }
                        break;
                    case 6:
                    default:
                        throw new RuntimeException(new StringBuilder("Unexpected schema type: ").append(v1).toString());
                        break;
                    case 10:
                        switch (com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.$SWITCH_TABLE$org$apache$avro$Schema$Type()[v3.ordinal()]) {
                            case 9:
                                v4_3 = com.flurry.org.apache.avro.io.parsing.Symbol.resolve(super.generate(p12, p14), com.flurry.org.apache.avro.io.parsing.Symbol.LONG);
                                break;
                            default:
                        }
                        break;
                    case 11:
                        switch (com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.$SWITCH_TABLE$org$apache$avro$Schema$Type()[v3.ordinal()]) {
                            case 9:
                            case 10:
                                v4_3 = com.flurry.org.apache.avro.io.parsing.Symbol.resolve(super.generate(p12, p14), com.flurry.org.apache.avro.io.parsing.Symbol.FLOAT);
                                break;
                            default:
                        }
                        break;
                    case 12:
                        switch (com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.$SWITCH_TABLE$org$apache$avro$Schema$Type()[v3.ordinal()]) {
                            case 9:
                            case 10:
                            case 11:
                                v4_3 = com.flurry.org.apache.avro.io.parsing.Symbol.resolve(super.generate(p12, p14), com.flurry.org.apache.avro.io.parsing.Symbol.DOUBLE);
                                break;
                            default:
                        }
                        break;
                }
            } else {
                v4_3 = this.resolveUnion(p12, p13, p14);
            }
        } else {
            switch (com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.$SWITCH_TABLE$org$apache$avro$Schema$Type()[v3.ordinal()]) {
                case 1:
                    v4_3 = this.resolveRecords(p12, p13, p14);
                    break;
                case 2:
                    if ((p12.getFullName() != null) && (!p12.getFullName().equals(p13.getFullName()))) {
                    } else {
                        com.flurry.org.apache.avro.io.parsing.Symbol v4_17 = new com.flurry.org.apache.avro.io.parsing.Symbol[2];
                        v4_17[0] = com.flurry.org.apache.avro.io.parsing.ResolvingGrammarGenerator.mkEnumAdjust(p12.getEnumSymbols(), p13.getEnumSymbols());
                        v4_17[1] = com.flurry.org.apache.avro.io.parsing.Symbol.ENUM;
                        v4_3 = com.flurry.org.apache.avro.io.parsing.Symbol.seq(v4_17);
                    }
                    break;
                case 3:
                    com.flurry.org.apache.avro.io.parsing.Symbol v4_5 = new com.flurry.org.apache.avro.io.parsing.Symbol[2];
                    int v6_3 = new com.flurry.org.apache.avro.io.parsing.Symbol[1];
                    v6_3[0] = this.generate(p12.getElementType(), p13.getElementType(), p14);
                    v4_5[0] = com.flurry.org.apache.avro.io.parsing.Symbol.repeat(com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_END, v6_3);
                    v4_5[1] = com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_START;
                    v4_3 = com.flurry.org.apache.avro.io.parsing.Symbol.seq(v4_5);
                    break;
                case 4:
                    com.flurry.org.apache.avro.io.parsing.Symbol v4_4 = new com.flurry.org.apache.avro.io.parsing.Symbol[2];
                    int v6_2 = new com.flurry.org.apache.avro.io.parsing.Symbol[2];
                    v6_2[0] = this.generate(p12.getValueType(), p13.getValueType(), p14);
                    v6_2[1] = com.flurry.org.apache.avro.io.parsing.Symbol.STRING;
                    v4_4[0] = com.flurry.org.apache.avro.io.parsing.Symbol.repeat(com.flurry.org.apache.avro.io.parsing.Symbol.MAP_END, v6_2);
                    v4_4[1] = com.flurry.org.apache.avro.io.parsing.Symbol.MAP_START;
                    v4_3 = com.flurry.org.apache.avro.io.parsing.Symbol.seq(v4_4);
                    break;
                case 5:
                    v4_3 = this.resolveUnion(p12, p13, p14);
                    break;
                case 6:
                    if ((!p12.getFullName().equals(p13.getFullName())) || (p12.getFixedSize() != p13.getFixedSize())) {
                    } else {
                        com.flurry.org.apache.avro.io.parsing.Symbol v4_1 = new com.flurry.org.apache.avro.io.parsing.Symbol[2];
                        v4_1[0] = new com.flurry.org.apache.avro.io.parsing.Symbol$IntCheckAction(p12.getFixedSize());
                        v4_1[1] = com.flurry.org.apache.avro.io.parsing.Symbol.FIXED;
                        v4_3 = com.flurry.org.apache.avro.io.parsing.Symbol.seq(v4_1);
                    }
                    break;
                case 7:
                    v4_3 = com.flurry.org.apache.avro.io.parsing.Symbol.STRING;
                    break;
                case 8:
                    v4_3 = com.flurry.org.apache.avro.io.parsing.Symbol.BYTES;
                    break;
                case 9:
                    v4_3 = com.flurry.org.apache.avro.io.parsing.Symbol.INT;
                    break;
                case 10:
                    v4_3 = com.flurry.org.apache.avro.io.parsing.Symbol.LONG;
                    break;
                case 11:
                    v4_3 = com.flurry.org.apache.avro.io.parsing.Symbol.FLOAT;
                    break;
                case 12:
                    v4_3 = com.flurry.org.apache.avro.io.parsing.Symbol.DOUBLE;
                    break;
                case 13:
                    v4_3 = com.flurry.org.apache.avro.io.parsing.Symbol.BOOLEAN;
                    break;
                case 14:
                    v4_3 = com.flurry.org.apache.avro.io.parsing.Symbol.NULL;
                    break;
                default:
                    throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder("Unkown type for schema: ").append(v3).toString());
            }
        }
        return v4_3;
    }
}
