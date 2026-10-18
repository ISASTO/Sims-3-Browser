package com.flurry.org.apache.avro.io.parsing;
public abstract class Symbol {
    public static final com.flurry.org.apache.avro.io.parsing.Symbol ARRAY_END;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol ARRAY_START;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol BOOLEAN;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol BYTES;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol DEFAULT_END_ACTION;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol DOUBLE;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol ENUM;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol FIELD_ACTION;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol FIELD_END;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol FIXED;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol FLOAT;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol INT;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol ITEM_END;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol LONG;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol MAP_END;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol MAP_KEY_MARKER;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol MAP_START;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol NULL;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol RECORD_END;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol RECORD_START;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol STRING;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol UNION;
    public static final com.flurry.org.apache.avro.io.parsing.Symbol UNION_END;
    public final com.flurry.org.apache.avro.io.parsing.Symbol$Kind kind;
    public final com.flurry.org.apache.avro.io.parsing.Symbol[] production;

    static Symbol()
    {
        com.flurry.org.apache.avro.io.parsing.Symbol.NULL = new com.flurry.org.apache.avro.io.parsing.Symbol$Terminal("null");
        com.flurry.org.apache.avro.io.parsing.Symbol.BOOLEAN = new com.flurry.org.apache.avro.io.parsing.Symbol$Terminal("boolean");
        com.flurry.org.apache.avro.io.parsing.Symbol.INT = new com.flurry.org.apache.avro.io.parsing.Symbol$Terminal("int");
        com.flurry.org.apache.avro.io.parsing.Symbol.LONG = new com.flurry.org.apache.avro.io.parsing.Symbol$Terminal("long");
        com.flurry.org.apache.avro.io.parsing.Symbol.FLOAT = new com.flurry.org.apache.avro.io.parsing.Symbol$Terminal("float");
        com.flurry.org.apache.avro.io.parsing.Symbol.DOUBLE = new com.flurry.org.apache.avro.io.parsing.Symbol$Terminal("double");
        com.flurry.org.apache.avro.io.parsing.Symbol.STRING = new com.flurry.org.apache.avro.io.parsing.Symbol$Terminal("string");
        com.flurry.org.apache.avro.io.parsing.Symbol.BYTES = new com.flurry.org.apache.avro.io.parsing.Symbol$Terminal("bytes");
        com.flurry.org.apache.avro.io.parsing.Symbol.FIXED = new com.flurry.org.apache.avro.io.parsing.Symbol$Terminal("fixed");
        com.flurry.org.apache.avro.io.parsing.Symbol.ENUM = new com.flurry.org.apache.avro.io.parsing.Symbol$Terminal("enum");
        com.flurry.org.apache.avro.io.parsing.Symbol.UNION = new com.flurry.org.apache.avro.io.parsing.Symbol$Terminal("union");
        com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_START = new com.flurry.org.apache.avro.io.parsing.Symbol$Terminal("array-start");
        com.flurry.org.apache.avro.io.parsing.Symbol.ARRAY_END = new com.flurry.org.apache.avro.io.parsing.Symbol$Terminal("array-end");
        com.flurry.org.apache.avro.io.parsing.Symbol.MAP_START = new com.flurry.org.apache.avro.io.parsing.Symbol$Terminal("map-start");
        com.flurry.org.apache.avro.io.parsing.Symbol.MAP_END = new com.flurry.org.apache.avro.io.parsing.Symbol$Terminal("map-end");
        com.flurry.org.apache.avro.io.parsing.Symbol.ITEM_END = new com.flurry.org.apache.avro.io.parsing.Symbol$Terminal("item-end");
        com.flurry.org.apache.avro.io.parsing.Symbol.FIELD_ACTION = new com.flurry.org.apache.avro.io.parsing.Symbol$Terminal("field-action");
        com.flurry.org.apache.avro.io.parsing.Symbol.RECORD_START = new com.flurry.org.apache.avro.io.parsing.Symbol$ImplicitAction(0, 0);
        com.flurry.org.apache.avro.io.parsing.Symbol.RECORD_END = new com.flurry.org.apache.avro.io.parsing.Symbol$ImplicitAction(1, 0);
        com.flurry.org.apache.avro.io.parsing.Symbol.UNION_END = new com.flurry.org.apache.avro.io.parsing.Symbol$ImplicitAction(1, 0);
        com.flurry.org.apache.avro.io.parsing.Symbol.FIELD_END = new com.flurry.org.apache.avro.io.parsing.Symbol$ImplicitAction(1, 0);
        com.flurry.org.apache.avro.io.parsing.Symbol.DEFAULT_END_ACTION = new com.flurry.org.apache.avro.io.parsing.Symbol$ImplicitAction(1, 0);
        com.flurry.org.apache.avro.io.parsing.Symbol.MAP_KEY_MARKER = new com.flurry.org.apache.avro.io.parsing.Symbol$Terminal("map-key-marker");
        return;
    }

    protected Symbol(com.flurry.org.apache.avro.io.parsing.Symbol$Kind p2)
    {
        this(p2, 0);
        return;
    }

    protected Symbol(com.flurry.org.apache.avro.io.parsing.Symbol$Kind p1, com.flurry.org.apache.avro.io.parsing.Symbol[] p2)
    {
        this.production = p2;
        this.kind = p1;
        return;
    }

    static com.flurry.org.apache.avro.io.parsing.Symbol alt(com.flurry.org.apache.avro.io.parsing.Symbol[] p2, String[] p3)
    {
        return new com.flurry.org.apache.avro.io.parsing.Symbol$Alternative(p2, p3, 0);
    }

    static com.flurry.org.apache.avro.io.parsing.Symbol error(String p2)
    {
        return new com.flurry.org.apache.avro.io.parsing.Symbol$ErrorAction(p2, 0);
    }

    static void flatten(com.flurry.org.apache.avro.io.parsing.Symbol[] p8, int p9, com.flurry.org.apache.avro.io.parsing.Symbol[] p10, int p11, java.util.Map p12, java.util.Map p13)
    {
        int v0 = p9;
        int v1 = p11;
        while (v0 < p8.length) {
            com.flurry.org.apache.avro.io.parsing.Symbol v5 = p8[v0].flatten(p12, p13);
            if (!(v5 instanceof com.flurry.org.apache.avro.io.parsing.Symbol$Sequence)) {
                int v2 = (v1 + 1);
                p10[v1] = v5;
                v1 = v2;
            } else {
                com.flurry.org.apache.avro.io.parsing.Symbol[] v4 = v5.production;
                java.util.List v3_1 = ((java.util.List) p13.get(v5));
                if (v3_1 != null) {
                    v3_1.add(new com.flurry.org.apache.avro.io.parsing.Symbol$Fixup(p10, v1));
                } else {
                    System.arraycopy(v4, 0, p10, v1, v4.length);
                }
                v1 += v4.length;
            }
            v0++;
        }
        return;
    }

    protected static int flattenedSize(com.flurry.org.apache.avro.io.parsing.Symbol[] p4, int p5)
    {
        int v1 = 0;
        int v0 = p5;
        while (v0 < p4.length) {
            if (!(p4[v0] instanceof com.flurry.org.apache.avro.io.parsing.Symbol$Sequence)) {
                v1++;
            } else {
                v1 += ((com.flurry.org.apache.avro.io.parsing.Symbol$Sequence) p4[v0]).flattenedSize();
            }
            v0++;
        }
        return v1;
    }

    static varargs com.flurry.org.apache.avro.io.parsing.Symbol repeat(com.flurry.org.apache.avro.io.parsing.Symbol p2, com.flurry.org.apache.avro.io.parsing.Symbol[] p3)
    {
        return new com.flurry.org.apache.avro.io.parsing.Symbol$Repeater(p2, p3, 0);
    }

    static com.flurry.org.apache.avro.io.parsing.Symbol resolve(com.flurry.org.apache.avro.io.parsing.Symbol p2, com.flurry.org.apache.avro.io.parsing.Symbol p3)
    {
        return new com.flurry.org.apache.avro.io.parsing.Symbol$ResolvingAction(p2, p3, 0);
    }

    static varargs com.flurry.org.apache.avro.io.parsing.Symbol root(com.flurry.org.apache.avro.io.parsing.Symbol[] p2)
    {
        return new com.flurry.org.apache.avro.io.parsing.Symbol$Root(p2, 0);
    }

    static varargs com.flurry.org.apache.avro.io.parsing.Symbol seq(com.flurry.org.apache.avro.io.parsing.Symbol[] p2)
    {
        return new com.flurry.org.apache.avro.io.parsing.Symbol$Sequence(p2, 0);
    }

    public com.flurry.org.apache.avro.io.parsing.Symbol flatten(java.util.Map p1, java.util.Map p2)
    {
        return this;
    }

    public int flattenedSize()
    {
        return 1;
    }
}
