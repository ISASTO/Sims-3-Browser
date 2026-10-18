package com.flurry.android;
 class AdReportedId extends com.flurry.org.apache.avro.specific.SpecificRecordBase implements com.flurry.org.apache.avro.specific.SpecificRecord {
    public static final com.flurry.org.apache.avro.Schema SCHEMA$;
    public int a;
    public java.nio.ByteBuffer b;

    static AdReportedId()
    {
        com.flurry.android.AdReportedId.SCHEMA$ = new com.flurry.org.apache.avro.Schema$Parser().parse("{\"type\":\"record\",\"name\":\"AdReportedId\",\"namespace\":\"com.flurry.android\",\"fields\":[{\"name\":\"type\",\"type\":\"int\"},{\"name\":\"id\",\"type\":\"bytes\"}]}");
        return;
    }

    AdReportedId()
    {
        return;
    }

    public static com.flurry.android.AdReportedId$Builder a()
    {
        return new com.flurry.android.AdReportedId$Builder();
    }

    public Object get(int p3)
    {
        java.nio.ByteBuffer v0_0;
        switch (p3) {
            case 0:
                v0_0 = Integer.valueOf(this.a);
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
        return com.flurry.android.AdReportedId.SCHEMA$;
    }

    public void put(int p3, Object p4)
    {
        switch (p3) {
            case 0:
                this.a = ((Integer) p4).intValue();
                break;
            case 1:
                this.b = ((java.nio.ByteBuffer) p4);
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return;
    }
}
