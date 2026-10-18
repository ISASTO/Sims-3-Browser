package com.flurry.org.apache.avro;
public final enum class Schema$Type extends java.lang.Enum {
    private static final synthetic com.flurry.org.apache.avro.Schema$Type[] $VALUES;
    public static final enum com.flurry.org.apache.avro.Schema$Type ARRAY;
    public static final enum com.flurry.org.apache.avro.Schema$Type BOOLEAN;
    public static final enum com.flurry.org.apache.avro.Schema$Type BYTES;
    public static final enum com.flurry.org.apache.avro.Schema$Type DOUBLE;
    public static final enum com.flurry.org.apache.avro.Schema$Type ENUM;
    public static final enum com.flurry.org.apache.avro.Schema$Type FIXED;
    public static final enum com.flurry.org.apache.avro.Schema$Type FLOAT;
    public static final enum com.flurry.org.apache.avro.Schema$Type INT;
    public static final enum com.flurry.org.apache.avro.Schema$Type LONG;
    public static final enum com.flurry.org.apache.avro.Schema$Type MAP;
    public static final enum com.flurry.org.apache.avro.Schema$Type NULL;
    public static final enum com.flurry.org.apache.avro.Schema$Type RECORD;
    public static final enum com.flurry.org.apache.avro.Schema$Type STRING;
    public static final enum com.flurry.org.apache.avro.Schema$Type UNION;
    private String name;

    static Schema$Type()
    {
        com.flurry.org.apache.avro.Schema$Type.RECORD = new com.flurry.org.apache.avro.Schema$Type("RECORD", 0);
        com.flurry.org.apache.avro.Schema$Type.ENUM = new com.flurry.org.apache.avro.Schema$Type("ENUM", 1);
        com.flurry.org.apache.avro.Schema$Type.ARRAY = new com.flurry.org.apache.avro.Schema$Type("ARRAY", 2);
        com.flurry.org.apache.avro.Schema$Type.MAP = new com.flurry.org.apache.avro.Schema$Type("MAP", 3);
        com.flurry.org.apache.avro.Schema$Type.UNION = new com.flurry.org.apache.avro.Schema$Type("UNION", 4);
        com.flurry.org.apache.avro.Schema$Type.FIXED = new com.flurry.org.apache.avro.Schema$Type("FIXED", 5);
        com.flurry.org.apache.avro.Schema$Type.STRING = new com.flurry.org.apache.avro.Schema$Type("STRING", 6);
        com.flurry.org.apache.avro.Schema$Type.BYTES = new com.flurry.org.apache.avro.Schema$Type("BYTES", 7);
        com.flurry.org.apache.avro.Schema$Type.INT = new com.flurry.org.apache.avro.Schema$Type("INT", 8);
        com.flurry.org.apache.avro.Schema$Type.LONG = new com.flurry.org.apache.avro.Schema$Type("LONG", 9);
        com.flurry.org.apache.avro.Schema$Type.FLOAT = new com.flurry.org.apache.avro.Schema$Type("FLOAT", 10);
        com.flurry.org.apache.avro.Schema$Type.DOUBLE = new com.flurry.org.apache.avro.Schema$Type("DOUBLE", 11);
        com.flurry.org.apache.avro.Schema$Type.BOOLEAN = new com.flurry.org.apache.avro.Schema$Type("BOOLEAN", 12);
        com.flurry.org.apache.avro.Schema$Type.NULL = new com.flurry.org.apache.avro.Schema$Type("NULL", 13);
        com.flurry.org.apache.avro.Schema$Type[] v0_28 = new com.flurry.org.apache.avro.Schema$Type[14];
        v0_28[0] = com.flurry.org.apache.avro.Schema$Type.RECORD;
        v0_28[1] = com.flurry.org.apache.avro.Schema$Type.ENUM;
        v0_28[2] = com.flurry.org.apache.avro.Schema$Type.ARRAY;
        v0_28[3] = com.flurry.org.apache.avro.Schema$Type.MAP;
        v0_28[4] = com.flurry.org.apache.avro.Schema$Type.UNION;
        v0_28[5] = com.flurry.org.apache.avro.Schema$Type.FIXED;
        v0_28[6] = com.flurry.org.apache.avro.Schema$Type.STRING;
        v0_28[7] = com.flurry.org.apache.avro.Schema$Type.BYTES;
        v0_28[8] = com.flurry.org.apache.avro.Schema$Type.INT;
        v0_28[9] = com.flurry.org.apache.avro.Schema$Type.LONG;
        v0_28[10] = com.flurry.org.apache.avro.Schema$Type.FLOAT;
        v0_28[11] = com.flurry.org.apache.avro.Schema$Type.DOUBLE;
        v0_28[12] = com.flurry.org.apache.avro.Schema$Type.BOOLEAN;
        v0_28[13] = com.flurry.org.apache.avro.Schema$Type.NULL;
        com.flurry.org.apache.avro.Schema$Type.$VALUES = v0_28;
        return;
    }

    private Schema$Type(String p2, int p3)
    {
        super(p2, p3);
        super.name = super.name().toLowerCase();
        return;
    }

    static synthetic String access$000(com.flurry.org.apache.avro.Schema$Type p1)
    {
        return p1.name;
    }

    public static com.flurry.org.apache.avro.Schema$Type valueOf(String p1)
    {
        return ((com.flurry.org.apache.avro.Schema$Type) Enum.valueOf(com.flurry.org.apache.avro.Schema$Type, p1));
    }

    public static com.flurry.org.apache.avro.Schema$Type[] values()
    {
        return ((com.flurry.org.apache.avro.Schema$Type[]) com.flurry.org.apache.avro.Schema$Type.$VALUES.clone());
    }

    public String getName()
    {
        return this.name;
    }
}
