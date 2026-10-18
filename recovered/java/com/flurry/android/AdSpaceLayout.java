package com.flurry.android;
 class AdSpaceLayout extends com.flurry.org.apache.avro.specific.SpecificRecordBase implements com.flurry.org.apache.avro.specific.SpecificRecord {
    public static final com.flurry.org.apache.avro.Schema SCHEMA$;
    public int a;
    public int b;
    public CharSequence c;
    public CharSequence d;
    public CharSequence e;

    static AdSpaceLayout()
    {
        com.flurry.android.AdSpaceLayout.SCHEMA$ = new com.flurry.org.apache.avro.Schema$Parser().parse("{\"type\":\"record\",\"name\":\"AdSpaceLayout\",\"namespace\":\"com.flurry.android\",\"fields\":[{\"name\":\"adWidth\",\"type\":\"int\"},{\"name\":\"adHeight\",\"type\":\"int\"},{\"name\":\"fix\",\"type\":\"string\"},{\"name\":\"format\",\"type\":\"string\"},{\"name\":\"alignment\",\"type\":\"string\"}]}");
        return;
    }

    AdSpaceLayout()
    {
        return;
    }

    public final Integer a()
    {
        return Integer.valueOf(this.a);
    }

    public final Integer b()
    {
        return Integer.valueOf(this.b);
    }

    public final CharSequence c()
    {
        return this.c;
    }

    public final CharSequence d()
    {
        return this.d;
    }

    public final CharSequence e()
    {
        return this.e;
    }

    public Object get(int p3)
    {
        CharSequence v0_0;
        switch (p3) {
            case 0:
                v0_0 = Integer.valueOf(this.a);
                break;
            case 1:
                v0_0 = Integer.valueOf(this.b);
                break;
            case 2:
                v0_0 = this.c;
                break;
            case 3:
                v0_0 = this.d;
                break;
            case 4:
                v0_0 = this.e;
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return v0_0;
    }

    public com.flurry.org.apache.avro.Schema getSchema()
    {
        return com.flurry.android.AdSpaceLayout.SCHEMA$;
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
                this.c = ((CharSequence) p4);
                break;
            case 3:
                this.d = ((CharSequence) p4);
                break;
            case 4:
                this.e = ((CharSequence) p4);
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return;
    }
}
