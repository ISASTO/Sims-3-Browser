package com.flurry.org.apache.avro.generic;
public final enum class GenericData$StringType extends java.lang.Enum {
    private static final synthetic com.flurry.org.apache.avro.generic.GenericData$StringType[] $VALUES;
    public static final enum com.flurry.org.apache.avro.generic.GenericData$StringType CharSequence;
    public static final enum com.flurry.org.apache.avro.generic.GenericData$StringType String;
    public static final enum com.flurry.org.apache.avro.generic.GenericData$StringType Utf8;

    static GenericData$StringType()
    {
        com.flurry.org.apache.avro.generic.GenericData$StringType.CharSequence = new com.flurry.org.apache.avro.generic.GenericData$StringType("CharSequence", 0);
        com.flurry.org.apache.avro.generic.GenericData$StringType.String = new com.flurry.org.apache.avro.generic.GenericData$StringType("String", 1);
        com.flurry.org.apache.avro.generic.GenericData$StringType.Utf8 = new com.flurry.org.apache.avro.generic.GenericData$StringType("Utf8", 2);
        com.flurry.org.apache.avro.generic.GenericData$StringType[] v0_3 = new com.flurry.org.apache.avro.generic.GenericData$StringType[3];
        v0_3[0] = com.flurry.org.apache.avro.generic.GenericData$StringType.CharSequence;
        v0_3[1] = com.flurry.org.apache.avro.generic.GenericData$StringType.String;
        v0_3[2] = com.flurry.org.apache.avro.generic.GenericData$StringType.Utf8;
        com.flurry.org.apache.avro.generic.GenericData$StringType.$VALUES = v0_3;
        return;
    }

    private GenericData$StringType(String p1, int p2)
    {
        super(p1, p2);
        return;
    }

    public static com.flurry.org.apache.avro.generic.GenericData$StringType valueOf(String p1)
    {
        return ((com.flurry.org.apache.avro.generic.GenericData$StringType) Enum.valueOf(com.flurry.org.apache.avro.generic.GenericData$StringType, p1));
    }

    public static com.flurry.org.apache.avro.generic.GenericData$StringType[] values()
    {
        return ((com.flurry.org.apache.avro.generic.GenericData$StringType[]) com.flurry.org.apache.avro.generic.GenericData$StringType.$VALUES.clone());
    }
}
