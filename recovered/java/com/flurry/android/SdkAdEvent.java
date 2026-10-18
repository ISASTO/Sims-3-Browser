package com.flurry.android;
 class SdkAdEvent extends com.flurry.org.apache.avro.specific.SpecificRecordBase implements com.flurry.org.apache.avro.specific.SpecificRecord {
    public static final com.flurry.org.apache.avro.Schema SCHEMA$;
    public CharSequence a;
    public java.util.Map b;
    public long c;

    static SdkAdEvent()
    {
        com.flurry.android.SdkAdEvent.SCHEMA$ = new com.flurry.org.apache.avro.Schema$Parser().parse("{\"type\":\"record\",\"name\":\"SdkAdEvent\",\"namespace\":\"com.flurry.android\",\"fields\":[{\"name\":\"type\",\"type\":\"string\"},{\"name\":\"params\",\"type\":{\"type\":\"map\",\"values\":\"string\"}},{\"name\":\"timeOffset\",\"type\":\"long\"}]}");
        return;
    }

    SdkAdEvent()
    {
        return;
    }

    public final void a(CharSequence p1)
    {
        this.a = p1;
        return;
    }

    public final void a(Long p3)
    {
        this.c = p3.longValue();
        return;
    }

    public final void a(java.util.Map p1)
    {
        this.b = p1;
        return;
    }

    public Object get(int p3)
    {
        Long v0_1;
        switch (p3) {
            case 0:
                v0_1 = this.a;
                break;
            case 1:
                v0_1 = this.b;
                break;
            case 2:
                v0_1 = Long.valueOf(this.c);
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return v0_1;
    }

    public com.flurry.org.apache.avro.Schema getSchema()
    {
        return com.flurry.android.SdkAdEvent.SCHEMA$;
    }

    public void put(int p3, Object p4)
    {
        switch (p3) {
            case 0:
                this.a = ((CharSequence) p4);
                break;
            case 1:
                this.b = ((java.util.Map) p4);
                break;
            case 2:
                this.c = ((Long) p4).longValue();
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return;
    }
}
