package com.flurry.android;
 class AdUnit extends com.flurry.org.apache.avro.specific.SpecificRecordBase implements com.flurry.org.apache.avro.specific.SpecificRecord {
    public static final com.flurry.org.apache.avro.Schema SCHEMA$;
    public CharSequence a;
    public long b;
    public java.util.List c;
    public int d;

    static AdUnit()
    {
        com.flurry.android.AdUnit.SCHEMA$ = new com.flurry.org.apache.avro.Schema$Parser().parse("{\"type\":\"record\",\"name\":\"AdUnit\",\"namespace\":\"com.flurry.android\",\"fields\":[{\"name\":\"adSpace\",\"type\":\"string\"},{\"name\":\"expiration\",\"type\":\"long\"},{\"name\":\"adFrames\",\"type\":{\"type\":\"array\",\"items\":{\"type\":\"record\",\"name\":\"AdFrame\",\"fields\":[{\"name\":\"binding\",\"type\":\"int\"},{\"name\":\"display\",\"type\":\"string\"},{\"name\":\"content\",\"type\":\"string\"},{\"name\":\"adSpaceLayout\",\"type\":{\"type\":\"record\",\"name\":\"AdSpaceLayout\",\"fields\":[{\"name\":\"adWidth\",\"type\":\"int\"},{\"name\":\"adHeight\",\"type\":\"int\"},{\"name\":\"fix\",\"type\":\"string\"},{\"name\":\"format\",\"type\":\"string\"},{\"name\":\"alignment\",\"type\":\"string\"}]}},{\"name\":\"callbacks\",\"type\":{\"type\":\"array\",\"items\":{\"type\":\"record\",\"name\":\"Callback\",\"fields\":[{\"name\":\"event\",\"type\":\"string\"},{\"name\":\"actions\",\"type\":{\"type\":\"array\",\"items\":\"string\"}}]}}},{\"name\":\"adGuid\",\"type\":\"string\"}]}}},{\"name\":\"combinable\",\"type\":\"int\",\"default\":0}]}");
        return;
    }

    AdUnit()
    {
        return;
    }

    public final CharSequence a()
    {
        return this.a;
    }

    public final Long b()
    {
        return Long.valueOf(this.b);
    }

    public final java.util.List c()
    {
        return this.c;
    }

    public final Integer d()
    {
        return Integer.valueOf(this.d);
    }

    public Object get(int p3)
    {
        Integer v0_3;
        switch (p3) {
            case 0:
                v0_3 = this.a;
                break;
            case 1:
                v0_3 = Long.valueOf(this.b);
                break;
            case 2:
                v0_3 = this.c;
                break;
            case 3:
                v0_3 = Integer.valueOf(this.d);
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return v0_3;
    }

    public com.flurry.org.apache.avro.Schema getSchema()
    {
        return com.flurry.android.AdUnit.SCHEMA$;
    }

    public void put(int p3, Object p4)
    {
        switch (p3) {
            case 0:
                this.a = ((CharSequence) p4);
                break;
            case 1:
                this.b = ((Long) p4).longValue();
                break;
            case 2:
                this.c = ((java.util.List) p4);
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
