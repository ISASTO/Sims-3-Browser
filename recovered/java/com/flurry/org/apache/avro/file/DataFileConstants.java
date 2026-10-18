package com.flurry.org.apache.avro.file;
public class DataFileConstants {
    public static final String CODEC = "avro.codec";
    public static final int DEFAULT_SYNC_INTERVAL = 16000;
    public static final String DEFLATE_CODEC = "deflate";
    public static final long FOOTER_BLOCK = 255;
    public static final byte[] MAGIC = None;
    public static final String NULL_CODEC = "null";
    public static final String SCHEMA = "avro.schema";
    public static final String SNAPPY_CODEC = "snappy";
    public static final int SYNC_SIZE = 16;
    public static final byte VERSION = 0x1;

    static DataFileConstants()
    {
        byte[] v0_1 = new byte[4];
        v0_1 = {79, 98, 106, 1};
        com.flurry.org.apache.avro.file.DataFileConstants.MAGIC = v0_1;
        return;
    }

    private DataFileConstants()
    {
        return;
    }
}
