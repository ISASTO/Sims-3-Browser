package com.flurry.android;
 class AdRequest extends com.flurry.org.apache.avro.specific.SpecificRecordBase implements com.flurry.org.apache.avro.specific.SpecificRecord {
    public static final com.flurry.org.apache.avro.Schema SCHEMA$;
    public CharSequence a;
    public CharSequence b;
    public CharSequence c;
    public long d;
    public java.util.List e;
    public com.flurry.android.Location f;
    public boolean g;
    public java.util.List h;
    public com.flurry.android.AdViewContainer i;
    public CharSequence j;
    public CharSequence k;
    public CharSequence l;
    public CharSequence m;
    public com.flurry.android.TestAds n;
    public java.util.Map o;
    public boolean p;

    static AdRequest()
    {
        com.flurry.android.AdRequest.SCHEMA$ = new com.flurry.org.apache.avro.Schema$Parser().parse("{\"type\":\"record\",\"name\":\"AdRequest\",\"namespace\":\"com.flurry.android\",\"fields\":[{\"name\":\"apiKey\",\"type\":\"string\"},{\"name\":\"agentVersion\",\"type\":\"string\",\"default\":\"null\"},{\"name\":\"adSpaceName\",\"type\":\"string\"},{\"name\":\"sessionId\",\"type\":\"long\"},{\"name\":\"adReportedIds\",\"type\":{\"type\":\"array\",\"items\":{\"type\":\"record\",\"name\":\"AdReportedId\",\"fields\":[{\"name\":\"type\",\"type\":\"int\"},{\"name\":\"id\",\"type\":\"bytes\"}]}}},{\"name\":\"location\",\"type\":{\"type\":\"record\",\"name\":\"Location\",\"fields\":[{\"name\":\"lat\",\"type\":\"float\",\"default\":0.0},{\"name\":\"lon\",\"type\":\"float\",\"default\":0.0}]},\"default\":\"null\"},{\"name\":\"testDevice\",\"type\":\"boolean\",\"default\":false},{\"name\":\"bindings\",\"type\":{\"type\":\"array\",\"items\":\"int\"}},{\"name\":\"adViewContainer\",\"type\":{\"type\":\"record\",\"name\":\"AdViewContainer\",\"fields\":[{\"name\":\"viewWidth\",\"type\":\"int\",\"default\":0},{\"name\":\"viewHeight\",\"type\":\"int\",\"default\":0},{\"name\":\"screenWidth\",\"type\":\"int\",\"default\":0},{\"name\":\"screenHeight\",\"type\":\"int\",\"default\":0}]},\"default\":\"null\"},{\"name\":\"locale\",\"type\":\"string\",\"default\":\"null\"},{\"name\":\"timezone\",\"type\":\"string\",\"default\":\"null\"},{\"name\":\"osVersion\",\"type\":\"string\",\"default\":\"null\"},{\"name\":\"devicePlatform\",\"type\":\"string\",\"default\":\"null\"},{\"name\":\"testAds\",\"type\":{\"type\":\"record\",\"name\":\"TestAds\",\"fields\":[{\"name\":\"adspacePlacement\",\"type\":\"int\",\"default\":0}]},\"default\":\"null\"},{\"name\":\"keywords\",\"type\":{\"type\":\"map\",\"values\":\"string\"},\"default\":[]},{\"name\":\"refresh\",\"type\":\"boolean\",\"default\":false}]}");
        return;
    }

    AdRequest()
    {
        return;
    }

    public static com.flurry.android.AdRequest$Builder a()
    {
        return new com.flurry.android.AdRequest$Builder();
    }

    public final void a(com.flurry.android.TestAds p1)
    {
        this.n = p1;
        return;
    }

    public final void a(Boolean p2)
    {
        this.p = p2.booleanValue();
        return;
    }

    public final void a(CharSequence p1)
    {
        this.c = p1;
        return;
    }

    public final void a(java.util.Map p1)
    {
        this.o = p1;
        return;
    }

    public Object get(int p3)
    {
        Boolean v0_1;
        switch (p3) {
            case 0:
                v0_1 = this.a;
                break;
            case 1:
                v0_1 = this.b;
                break;
            case 2:
                v0_1 = this.c;
                break;
            case 3:
                v0_1 = Long.valueOf(this.d);
                break;
            case 4:
                v0_1 = this.e;
                break;
            case 5:
                v0_1 = this.f;
                break;
            case 6:
                v0_1 = Boolean.valueOf(this.g);
                break;
            case 7:
                v0_1 = this.h;
                break;
            case 8:
                v0_1 = this.i;
                break;
            case 9:
                v0_1 = this.j;
                break;
            case 10:
                v0_1 = this.k;
                break;
            case 11:
                v0_1 = this.l;
                break;
            case 12:
                v0_1 = this.m;
                break;
            case 13:
                v0_1 = this.n;
                break;
            case 14:
                v0_1 = this.o;
                break;
            case 15:
                v0_1 = Boolean.valueOf(this.p);
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return v0_1;
    }

    public com.flurry.org.apache.avro.Schema getSchema()
    {
        return com.flurry.android.AdRequest.SCHEMA$;
    }

    public void put(int p3, Object p4)
    {
        switch (p3) {
            case 0:
                this.a = ((CharSequence) p4);
                break;
            case 1:
                this.b = ((CharSequence) p4);
                break;
            case 2:
                this.c = ((CharSequence) p4);
                break;
            case 3:
                this.d = ((Long) p4).longValue();
                break;
            case 4:
                this.e = ((java.util.List) p4);
                break;
            case 5:
                this.f = ((com.flurry.android.Location) p4);
                break;
            case 6:
                this.g = ((Boolean) p4).booleanValue();
                break;
            case 7:
                this.h = ((java.util.List) p4);
                break;
            case 8:
                this.i = ((com.flurry.android.AdViewContainer) p4);
                break;
            case 9:
                this.j = ((CharSequence) p4);
                break;
            case 10:
                this.k = ((CharSequence) p4);
                break;
            case 11:
                this.l = ((CharSequence) p4);
                break;
            case 12:
                this.m = ((CharSequence) p4);
                break;
            case 13:
                this.n = ((com.flurry.android.TestAds) p4);
                break;
            case 14:
                this.o = ((java.util.Map) p4);
                break;
            case 15:
                this.p = ((Boolean) p4).booleanValue();
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return;
    }
}
