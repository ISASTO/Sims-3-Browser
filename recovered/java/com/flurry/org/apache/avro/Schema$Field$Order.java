package com.flurry.org.apache.avro;
public final enum class Schema$Field$Order extends java.lang.Enum {
    private static final synthetic com.flurry.org.apache.avro.Schema$Field$Order[] $VALUES;
    public static final enum com.flurry.org.apache.avro.Schema$Field$Order ASCENDING;
    public static final enum com.flurry.org.apache.avro.Schema$Field$Order DESCENDING;
    public static final enum com.flurry.org.apache.avro.Schema$Field$Order IGNORE;
    private String name;

    static Schema$Field$Order()
    {
        com.flurry.org.apache.avro.Schema$Field$Order.ASCENDING = new com.flurry.org.apache.avro.Schema$Field$Order("ASCENDING", 0);
        com.flurry.org.apache.avro.Schema$Field$Order.DESCENDING = new com.flurry.org.apache.avro.Schema$Field$Order("DESCENDING", 1);
        com.flurry.org.apache.avro.Schema$Field$Order.IGNORE = new com.flurry.org.apache.avro.Schema$Field$Order("IGNORE", 2);
        com.flurry.org.apache.avro.Schema$Field$Order[] v0_3 = new com.flurry.org.apache.avro.Schema$Field$Order[3];
        v0_3[0] = com.flurry.org.apache.avro.Schema$Field$Order.ASCENDING;
        v0_3[1] = com.flurry.org.apache.avro.Schema$Field$Order.DESCENDING;
        v0_3[2] = com.flurry.org.apache.avro.Schema$Field$Order.IGNORE;
        com.flurry.org.apache.avro.Schema$Field$Order.$VALUES = v0_3;
        return;
    }

    private Schema$Field$Order(String p2, int p3)
    {
        super(p2, p3);
        super.name = super.name().toLowerCase();
        return;
    }

    static synthetic String access$1200(com.flurry.org.apache.avro.Schema$Field$Order p1)
    {
        return p1.name;
    }

    public static com.flurry.org.apache.avro.Schema$Field$Order valueOf(String p1)
    {
        return ((com.flurry.org.apache.avro.Schema$Field$Order) Enum.valueOf(com.flurry.org.apache.avro.Schema$Field$Order, p1));
    }

    public static com.flurry.org.apache.avro.Schema$Field$Order[] values()
    {
        return ((com.flurry.org.apache.avro.Schema$Field$Order[]) com.flurry.org.apache.avro.Schema$Field$Order.$VALUES.clone());
    }
}
