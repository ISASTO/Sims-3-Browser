package com.flurry.android;
 class SdkAdLog extends com.flurry.org.apache.avro.specific.SpecificRecordBase implements com.flurry.org.apache.avro.specific.SpecificRecord {
    public static final com.flurry.org.apache.avro.Schema SCHEMA$;
    public long a;
    public CharSequence b;
    public java.util.List c;

    static SdkAdLog()
    {
        com.flurry.android.SdkAdLog.SCHEMA$ = new com.flurry.org.apache.avro.Schema$Parser().parse("{\"type\":\"record\",\"name\":\"SdkAdLog\",\"namespace\":\"com.flurry.android\",\"fields\":[{\"name\":\"sessionId\",\"type\":\"long\"},{\"name\":\"adLogGUID\",\"type\":\"string\"},{\"name\":\"sdkAdEvents\",\"type\":{\"type\":\"array\",\"items\":{\"type\":\"record\",\"name\":\"SdkAdEvent\",\"fields\":[{\"name\":\"type\",\"type\":\"string\"},{\"name\":\"params\",\"type\":{\"type\":\"map\",\"values\":\"string\"}},{\"name\":\"timeOffset\",\"type\":\"long\"}]}}}]}");
        return;
    }

    SdkAdLog()
    {
        return;
    }

    public final void a(CharSequence p1)
    {
        this.b = p1;
        return;
    }

    public final void a(Long p3)
    {
        this.a = p3.longValue();
        return;
    }

    public final void a(java.util.List p1)
    {
        this.c = p1;
        return;
    }

    public Object get(int p3)
    {
        java.util.List v0_0;
        switch (p3) {
            case 0:
                v0_0 = Long.valueOf(this.a);
                break;
            case 1:
                v0_0 = this.b;
                break;
            case 2:
                v0_0 = this.c;
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return v0_0;
    }

    public com.flurry.org.apache.avro.Schema getSchema()
    {
        return com.flurry.android.SdkAdLog.SCHEMA$;
    }

    public void put(int p3, Object p4)
    {
        switch (p3) {
            case 0:
                this.a = ((Long) p4).longValue();
                break;
            case 1:
                this.b = ((CharSequence) p4);
                break;
            case 2:
                this.c = ((java.util.List) p4);
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return;
    }
}
