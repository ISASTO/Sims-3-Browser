package com.flurry.android;
 class Location extends com.flurry.org.apache.avro.specific.SpecificRecordBase implements com.flurry.org.apache.avro.specific.SpecificRecord {
    public static final com.flurry.org.apache.avro.Schema SCHEMA$;
    public float a;
    public float b;

    static Location()
    {
        com.flurry.android.Location.SCHEMA$ = new com.flurry.org.apache.avro.Schema$Parser().parse("{\"type\":\"record\",\"name\":\"Location\",\"namespace\":\"com.flurry.android\",\"fields\":[{\"name\":\"lat\",\"type\":\"float\",\"default\":0.0},{\"name\":\"lon\",\"type\":\"float\",\"default\":0.0}]}");
        return;
    }

    Location()
    {
        return;
    }

    public static com.flurry.android.Location$Builder a()
    {
        return new com.flurry.android.Location$Builder();
    }

    public Object get(int p3)
    {
        Float v0_2;
        switch (p3) {
            case 0:
                v0_2 = Float.valueOf(this.a);
                break;
            case 1:
                v0_2 = Float.valueOf(this.b);
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return v0_2;
    }

    public com.flurry.org.apache.avro.Schema getSchema()
    {
        return com.flurry.android.Location.SCHEMA$;
    }

    public void put(int p3, Object p4)
    {
        switch (p3) {
            case 0:
                this.a = ((Float) p4).floatValue();
                break;
            case 1:
                this.b = ((Float) p4).floatValue();
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return;
    }
}
