package com.flurry.android;
 class AdFrame extends com.flurry.org.apache.avro.specific.SpecificRecordBase implements com.flurry.org.apache.avro.specific.SpecificRecord {
    public static final com.flurry.org.apache.avro.Schema SCHEMA$;
    public int a;
    public CharSequence b;
    public CharSequence c;
    public com.flurry.android.AdSpaceLayout d;
    public java.util.List e;
    public CharSequence f;

    static AdFrame()
    {
        com.flurry.android.AdFrame.SCHEMA$ = new com.flurry.org.apache.avro.Schema$Parser().parse("{\"type\":\"record\",\"name\":\"AdFrame\",\"namespace\":\"com.flurry.android\",\"fields\":[{\"name\":\"binding\",\"type\":\"int\"},{\"name\":\"display\",\"type\":\"string\"},{\"name\":\"content\",\"type\":\"string\"},{\"name\":\"adSpaceLayout\",\"type\":{\"type\":\"record\",\"name\":\"AdSpaceLayout\",\"fields\":[{\"name\":\"adWidth\",\"type\":\"int\"},{\"name\":\"adHeight\",\"type\":\"int\"},{\"name\":\"fix\",\"type\":\"string\"},{\"name\":\"format\",\"type\":\"string\"},{\"name\":\"alignment\",\"type\":\"string\"}]}},{\"name\":\"callbacks\",\"type\":{\"type\":\"array\",\"items\":{\"type\":\"record\",\"name\":\"Callback\",\"fields\":[{\"name\":\"event\",\"type\":\"string\"},{\"name\":\"actions\",\"type\":{\"type\":\"array\",\"items\":\"string\"}}]}}},{\"name\":\"adGuid\",\"type\":\"string\"}]}");
        return;
    }

    AdFrame()
    {
        return;
    }

    public final Integer a()
    {
        return Integer.valueOf(this.a);
    }

    public final CharSequence b()
    {
        return this.b;
    }

    public final CharSequence c()
    {
        return this.c;
    }

    public final com.flurry.android.AdSpaceLayout d()
    {
        return this.d;
    }

    public final java.util.List e()
    {
        return this.e;
    }

    public final CharSequence f()
    {
        return this.f;
    }

    public Object get(int p3)
    {
        CharSequence v0_0;
        switch (p3) {
            case 0:
                v0_0 = Integer.valueOf(this.a);
                break;
            case 1:
                v0_0 = this.b;
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
            case 5:
                v0_0 = this.f;
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return v0_0;
    }

    public com.flurry.org.apache.avro.Schema getSchema()
    {
        return com.flurry.android.AdFrame.SCHEMA$;
    }

    public void put(int p3, Object p4)
    {
        switch (p3) {
            case 0:
                this.a = ((Integer) p4).intValue();
                break;
            case 1:
                this.b = ((CharSequence) p4);
                break;
            case 2:
                this.c = ((CharSequence) p4);
                break;
            case 3:
                this.d = ((com.flurry.android.AdSpaceLayout) p4);
                break;
            case 4:
                this.e = ((java.util.List) p4);
                break;
            case 5:
                this.f = ((CharSequence) p4);
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return;
    }
}
