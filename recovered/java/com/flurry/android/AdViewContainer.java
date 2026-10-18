package com.flurry.android;
 class AdViewContainer extends com.flurry.org.apache.avro.specific.SpecificRecordBase implements com.flurry.org.apache.avro.specific.SpecificRecord {
    public static final com.flurry.org.apache.avro.Schema SCHEMA$;
    public int a;
    public int b;
    public int c;
    public int d;

    static AdViewContainer()
    {
        com.flurry.android.AdViewContainer.SCHEMA$ = new com.flurry.org.apache.avro.Schema$Parser().parse("{\"type\":\"record\",\"name\":\"AdViewContainer\",\"namespace\":\"com.flurry.android\",\"fields\":[{\"name\":\"viewWidth\",\"type\":\"int\",\"default\":0},{\"name\":\"viewHeight\",\"type\":\"int\",\"default\":0},{\"name\":\"screenWidth\",\"type\":\"int\",\"default\":0},{\"name\":\"screenHeight\",\"type\":\"int\",\"default\":0}]}");
        return;
    }

    AdViewContainer()
    {
        return;
    }

    public static com.flurry.android.AdViewContainer$Builder a()
    {
        return new com.flurry.android.AdViewContainer$Builder();
    }

    public Object get(int p3)
    {
        Integer v0_2;
        switch (p3) {
            case 0:
                v0_2 = Integer.valueOf(this.a);
                break;
            case 1:
                v0_2 = Integer.valueOf(this.b);
                break;
            case 2:
                v0_2 = Integer.valueOf(this.c);
                break;
            case 3:
                v0_2 = Integer.valueOf(this.d);
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return v0_2;
    }

    public com.flurry.org.apache.avro.Schema getSchema()
    {
        return com.flurry.android.AdViewContainer.SCHEMA$;
    }

    public void put(int p3, Object p4)
    {
        switch (p3) {
            case 0:
                this.a = ((Integer) p4).intValue();
                break;
            case 1:
                this.b = ((Integer) p4).intValue();
                break;
            case 2:
                this.c = ((Integer) p4).intValue();
                break;
            case 3:
                this.d = ((Integer) p4).intValue();
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return;
    }
}
