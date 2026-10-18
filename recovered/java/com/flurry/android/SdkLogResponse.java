package com.flurry.android;
 class SdkLogResponse extends com.flurry.org.apache.avro.specific.SpecificRecordBase implements com.flurry.org.apache.avro.specific.SpecificRecord {
    public static final com.flurry.org.apache.avro.Schema SCHEMA$;
    public CharSequence a;
    public java.util.List b;

    static SdkLogResponse()
    {
        com.flurry.android.SdkLogResponse.SCHEMA$ = new com.flurry.org.apache.avro.Schema$Parser().parse("{\"type\":\"record\",\"name\":\"SdkLogResponse\",\"namespace\":\"com.flurry.android\",\"fields\":[{\"name\":\"result\",\"type\":\"string\"},{\"name\":\"errors\",\"type\":{\"type\":\"array\",\"items\":\"string\"}}]}");
        return;
    }

    SdkLogResponse()
    {
        return;
    }

    public final CharSequence a()
    {
        return this.a;
    }

    public final java.util.List b()
    {
        return this.b;
    }

    public Object get(int p3)
    {
        java.util.List v0_0;
        switch (p3) {
            case 0:
                v0_0 = this.a;
                break;
            case 1:
                v0_0 = this.b;
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return v0_0;
    }

    public com.flurry.org.apache.avro.Schema getSchema()
    {
        return com.flurry.android.SdkLogResponse.SCHEMA$;
    }

    public void put(int p3, Object p4)
    {
        switch (p3) {
            case 0:
                this.a = ((CharSequence) p4);
                break;
            case 1:
                this.b = ((java.util.List) p4);
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return;
    }
}
