package com.flurry.android;
 class TestAds extends com.flurry.org.apache.avro.specific.SpecificRecordBase implements com.flurry.org.apache.avro.specific.SpecificRecord {
    public static final com.flurry.org.apache.avro.Schema SCHEMA$;
    public int a;

    static TestAds()
    {
        com.flurry.android.TestAds.SCHEMA$ = new com.flurry.org.apache.avro.Schema$Parser().parse("{\"type\":\"record\",\"name\":\"TestAds\",\"namespace\":\"com.flurry.android\",\"fields\":[{\"name\":\"adspacePlacement\",\"type\":\"int\",\"default\":0}]}");
        return;
    }

    TestAds()
    {
        return;
    }

    public static com.flurry.android.TestAds$Builder a()
    {
        return new com.flurry.android.TestAds$Builder();
    }

    public Object get(int p3)
    {
        switch (p3) {
            case 0:
                return Integer.valueOf(this.a);
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
    }

    public com.flurry.org.apache.avro.Schema getSchema()
    {
        return com.flurry.android.TestAds.SCHEMA$;
    }

    public void put(int p3, Object p4)
    {
        switch (p3) {
            case 0:
                this.a = ((Integer) p4).intValue();
                return;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
    }
}
