package com.flurry.org.apache.avro.io.parsing;
public class JsonGrammarGenerator extends com.flurry.org.apache.avro.io.parsing.ValidatingGrammarGenerator {

    public JsonGrammarGenerator()
    {
        return;
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol generate(com.flurry.org.apache.avro.Schema p4)
    {
        com.flurry.org.apache.avro.io.parsing.Symbol v0_1 = new com.flurry.org.apache.avro.io.parsing.Symbol[1];
        v0_1[0] = this.generate(p4, new java.util.HashMap());
        return com.flurry.org.apache.avro.io.parsing.Symbol.root(v0_1);
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol generate(com.flurry.org.apache.avro.Schema p14, java.util.Map p15)
    {
        com.flurry.org.apache.avro.io.parsing.Symbol v5_1;
        switch (com.flurry.org.apache.avro.io.parsing.JsonGrammarGenerator$1.$SwitchMap$org$apache$avro$Schema$Type[p14.getType().ordinal()]) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
                v5_1 = super.generate(p14, p15);
                break;
            case 11:
                com.flurry.org.apache.avro.io.parsing.Symbol v7_2 = new com.flurry.org.apache.avro.io.parsing.Symbol[2];
                v7_2[0] = new com.flurry.org.apache.avro.io.parsing.Symbol$EnumLabelsAction(p14.getEnumSymbols());
                v7_2[1] = com.flurry.org.apache.avro.io.parsing.Symbol.ENUM;
                v5_1 = com.flurry.org.apache.avro.io.parsing.Symbol.seq(v7_2);
                break;
            case 12:
                com.flurry.org.apache.avro.io.parsing.Symbol v7_22 = new com.flurry.org.apache.avro.io.parsing.Symbol[2];
                com.flurry.org.apache.avro.io.parsing.Symbol[] v10_4 = new com.flurry.org.apache.avro.io.parsing.Symbol[2];
                v10_4[0] = com.flurry.org.apache.avro.io.parsing.Symbol.ITEM_END;
                v10_4[1] = this.generate(p14.getElementType(), p15);
                v7_22[0] = com.flurry.org.apache.avro.io.parsing.Symbol.repeat(com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_END, v10_4);
                v7_22[1] = com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_START;
                v5_1 = com.flurry.org.apache.avro.io.parsing.Symbol.seq(v7_22);
                break;
            case 13:
                com.flurry.org.apache.avro.io.parsing.Symbol v7_20 = new com.flurry.org.apache.avro.io.parsing.Symbol[2];
                com.flurry.org.apache.avro.io.parsing.Symbol[] v10_2 = new com.flurry.org.apache.avro.io.parsing.Symbol[4];
                v10_2[0] = com.flurry.org.apache.avro.io.parsing.Symbol.ITEM_END;
                v10_2[1] = this.generate(p14.getValueType(), p15);
                v10_2[2] = com.flurry.org.apache.avro.io.parsing.Symbol.MAP_KEY_MARKER;
                v10_2[3] = com.flurry.org.apache.avro.io.parsing.Symbol.STRING;
                v7_20[0] = com.flurry.org.apache.avro.io.parsing.Symbol.repeat(com.flurry.org.apache.avro.io.parsing.Symbol.MAP_END, v10_2);
                v7_20[1] = com.flurry.org.apache.avro.io.parsing.Symbol.MAP_START;
                v5_1 = com.flurry.org.apache.avro.io.parsing.Symbol.seq(v7_20);
                break;
            case 14:
                com.flurry.org.apache.avro.io.parsing.ValidatingGrammarGenerator$LitS v6_1 = new com.flurry.org.apache.avro.io.parsing.ValidatingGrammarGenerator$LitS(p14);
                v5_1 = ((com.flurry.org.apache.avro.io.parsing.Symbol) p15.get(v6_1));
                if (v5_1 != null) {
                } else {
                    com.flurry.org.apache.avro.io.parsing.Symbol[] v4 = new com.flurry.org.apache.avro.io.parsing.Symbol[((p14.getFields().size() * 3) + 2)];
                    v5_1 = com.flurry.org.apache.avro.io.parsing.Symbol.seq(v4);
                    p15.put(v6_1, v5_1);
                    int v3 = 0;
                    int v1_1 = (v4.length - 1);
                    v4[v1_1] = com.flurry.org.apache.avro.io.parsing.Symbol.RECORD_START;
                    java.util.Iterator v2 = p14.getFields().iterator();
                    while (v2.hasNext()) {
                        com.flurry.org.apache.avro.Schema$Field v0_1 = ((com.flurry.org.apache.avro.Schema$Field) v2.next());
                        int v1_3 = (v1_1 - 1);
                        v4[v1_3] = new com.flurry.org.apache.avro.io.parsing.Symbol$FieldAdjustAction(v3, v0_1.name());
                        int v1_4 = (v1_3 - 1);
                        v4[v1_4] = this.generate(v0_1.schema(), p15);
                        v1_1 = (v1_4 - 1);
                        v4[v1_1] = com.flurry.org.apache.avro.io.parsing.Symbol.FIELD_END;
                        v3++;
                    }
                    v4[(v1_1 - 1)] = com.flurry.org.apache.avro.io.parsing.Symbol.RECORD_END;
                }
                break;
            default:
                throw new RuntimeException("Unexpected schema type");
        }
        return v5_1;
    }
}
