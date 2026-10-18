package com.flurry.org.apache.avro.file;
public abstract class CodecFactory {
    private static final int DEFAULT_DEFLATE_LEVEL = 255;
    private static final java.util.Map REGISTERED;

    static CodecFactory()
    {
        com.flurry.org.apache.avro.file.CodecFactory.REGISTERED = new java.util.HashMap();
        com.flurry.org.apache.avro.file.CodecFactory.addCodec("null", com.flurry.org.apache.avro.file.CodecFactory.nullCodec());
        com.flurry.org.apache.avro.file.CodecFactory.addCodec("deflate", com.flurry.org.apache.avro.file.CodecFactory.deflateCodec(-1));
        com.flurry.org.apache.avro.file.CodecFactory.addCodec("snappy", com.flurry.org.apache.avro.file.CodecFactory.snappyCodec());
        return;
    }

    public CodecFactory()
    {
        return;
    }

    public static com.flurry.org.apache.avro.file.CodecFactory addCodec(String p1, com.flurry.org.apache.avro.file.CodecFactory p2)
    {
        return ((com.flurry.org.apache.avro.file.CodecFactory) com.flurry.org.apache.avro.file.CodecFactory.REGISTERED.put(p1, p2));
    }

    public static com.flurry.org.apache.avro.file.CodecFactory deflateCodec(int p1)
    {
        return new com.flurry.org.apache.avro.file.DeflateCodec$Option(p1);
    }

    public static com.flurry.org.apache.avro.file.CodecFactory fromString(String p4)
    {
        com.flurry.org.apache.avro.file.CodecFactory v0_1 = ((com.flurry.org.apache.avro.file.CodecFactory) com.flurry.org.apache.avro.file.CodecFactory.REGISTERED.get(p4));
        if (v0_1 != null) {
            return v0_1;
        } else {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Unrecognized codec: ").append(p4).toString());
        }
    }

    public static com.flurry.org.apache.avro.file.CodecFactory nullCodec()
    {
        return com.flurry.org.apache.avro.file.NullCodec.OPTION;
    }

    public static com.flurry.org.apache.avro.file.CodecFactory snappyCodec()
    {
        return new com.flurry.org.apache.avro.file.SnappyCodec$Option();
    }

    protected abstract com.flurry.org.apache.avro.file.Codec createInstance();

    public String toString()
    {
        return this.createInstance().toString();
    }
}
