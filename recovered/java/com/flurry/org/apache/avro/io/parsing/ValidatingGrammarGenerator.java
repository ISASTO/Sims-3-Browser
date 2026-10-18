package com.flurry.org.apache.avro.io.parsing;
public class ValidatingGrammarGenerator {

    public ValidatingGrammarGenerator()
    {
        return;
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol generate(com.flurry.org.apache.avro.Schema p4)
    {
        com.flurry.org.apache.avro.io.parsing.Symbol v0_1 = new com.flurry.org.apache.avro.io.parsing.Symbol[1];
        v0_1[0] = this.generate(p4, new java.util.HashMap());
        return com.flurry.org.apache.avro.io.parsing.Symbol.root(v0_1);
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol generate(com.flurry.org.apache.avro.Schema p20, java.util.Map p21)
    {
        com.flurry.org.apache.avro.io.parsing.Symbol v9_0;
        switch (com.flurry.org.apache.avro.io.parsing.ValidatingGrammarGenerator$1.$SwitchMap$org$apache$avro$Schema$Type[p20.getType().ordinal()]) {
            case 1:
                v9_0 = com.flurry.org.apache.avro.io.parsing.Symbol.NULL;
                break;
            case 2:
                v9_0 = com.flurry.org.apache.avro.io.parsing.Symbol.BOOLEAN;
                break;
            case 3:
                v9_0 = com.flurry.org.apache.avro.io.parsing.Symbol.INT;
                break;
            case 4:
                v9_0 = com.flurry.org.apache.avro.io.parsing.Symbol.LONG;
                break;
            case 5:
                v9_0 = com.flurry.org.apache.avro.io.parsing.Symbol.FLOAT;
                break;
            case 6:
                v9_0 = com.flurry.org.apache.avro.io.parsing.Symbol.DOUBLE;
                break;
            case 7:
                v9_0 = com.flurry.org.apache.avro.io.parsing.Symbol.STRING;
                break;
            case 8:
                v9_0 = com.flurry.org.apache.avro.io.parsing.Symbol.BYTES;
                break;
            case 9:
                com.flurry.org.apache.avro.io.parsing.Symbol v13_8 = new com.flurry.org.apache.avro.io.parsing.Symbol[2];
                v13_8[0] = new com.flurry.org.apache.avro.io.parsing.Symbol$IntCheckAction(p20.getFixedSize());
                v13_8[1] = com.flurry.org.apache.avro.io.parsing.Symbol.FIXED;
                v9_0 = com.flurry.org.apache.avro.io.parsing.Symbol.seq(v13_8);
                break;
            case 10:
                com.flurry.org.apache.avro.io.parsing.Symbol v13_6 = new com.flurry.org.apache.avro.io.parsing.Symbol[2];
                v13_6[0] = new com.flurry.org.apache.avro.io.parsing.Symbol$IntCheckAction(p20.getEnumSymbols().size());
                v13_6[1] = com.flurry.org.apache.avro.io.parsing.Symbol.ENUM;
                v9_0 = com.flurry.org.apache.avro.io.parsing.Symbol.seq(v13_6);
                break;
            case 11:
                com.flurry.org.apache.avro.io.parsing.Symbol v13_3 = new com.flurry.org.apache.avro.io.parsing.Symbol[2];
                com.flurry.org.apache.avro.io.parsing.ValidatingGrammarGenerator v0_1 = new com.flurry.org.apache.avro.io.parsing.Symbol[1];
                com.flurry.org.apache.avro.io.parsing.Symbol[] v16_1 = v0_1;
                v16_1[0] = this.generate(p20.getElementType(), p21);
                v13_3[0] = com.flurry.org.apache.avro.io.parsing.Symbol.repeat(com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_END, v16_1);
                v13_3[1] = com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_START;
                v9_0 = com.flurry.org.apache.avro.io.parsing.Symbol.seq(v13_3);
                break;
            case 12:
                com.flurry.org.apache.avro.io.parsing.Symbol v13_25 = new com.flurry.org.apache.avro.io.parsing.Symbol[2];
                com.flurry.org.apache.avro.io.parsing.ValidatingGrammarGenerator v0_9 = new com.flurry.org.apache.avro.io.parsing.Symbol[2];
                com.flurry.org.apache.avro.io.parsing.Symbol[] v16_6 = v0_9;
                v16_6[0] = this.generate(p20.getValueType(), p21);
                v16_6[1] = com.flurry.org.apache.avro.io.parsing.Symbol.STRING;
                v13_25[0] = com.flurry.org.apache.avro.io.parsing.Symbol.repeat(com.flurry.org.apache.avro.io.parsing.Symbol.MAP_END, v16_6);
                v13_25[1] = com.flurry.org.apache.avro.io.parsing.Symbol.MAP_START;
                v9_0 = com.flurry.org.apache.avro.io.parsing.Symbol.seq(v13_25);
                break;
            case 13:
                com.flurry.org.apache.avro.io.parsing.ValidatingGrammarGenerator$LitS v12_1 = new com.flurry.org.apache.avro.io.parsing.ValidatingGrammarGenerator$LitS(p20);
                v9_0 = ((com.flurry.org.apache.avro.io.parsing.Symbol) p21.get(v12_1));
                if (v9_0 != null) {
                } else {
                    com.flurry.org.apache.avro.io.parsing.Symbol[] v8 = new com.flurry.org.apache.avro.io.parsing.Symbol[p20.getFields().size()];
                    v9_0 = com.flurry.org.apache.avro.io.parsing.Symbol.seq(v8);
                    p21.put(v12_1, v9_0);
                    int v5_1 = v8.length;
                    java.util.Iterator v6_1 = p20.getFields().iterator();
                    while (v6_1.hasNext()) {
                        v5_1--;
                        v8[v5_1] = this.generate(((com.flurry.org.apache.avro.Schema$Field) v6_1.next()).schema(), p21);
                    }
                }
                break;
            case 14:
                java.util.List v10 = p20.getTypes();
                com.flurry.org.apache.avro.io.parsing.Symbol[] v11 = new com.flurry.org.apache.avro.io.parsing.Symbol[v10.size()];
                String[] v7 = new String[v10.size()];
                int v5_0 = 0;
                java.util.Iterator v6_0 = p20.getTypes().iterator();
                while (v6_0.hasNext()) {
                    com.flurry.org.apache.avro.Schema v3_1 = ((com.flurry.org.apache.avro.Schema) v6_0.next());
                    v11[v5_0] = this.generate(v3_1, p21);
                    v7[v5_0] = v3_1.getFullName();
                    v5_0++;
                }
                com.flurry.org.apache.avro.io.parsing.Symbol v13_14 = new com.flurry.org.apache.avro.io.parsing.Symbol[2];
                v13_14[0] = com.flurry.org.apache.avro.io.parsing.Symbol.alt(v11, v7);
                v13_14[1] = com.flurry.org.apache.avro.io.parsing.Symbol.UNION;
                v9_0 = com.flurry.org.apache.avro.io.parsing.Symbol.seq(v13_14);
                break;
            default:
                throw new RuntimeException("Unexpected schema type");
        }
        return v9_0;
    }
}
