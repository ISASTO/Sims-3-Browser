package com.flurry.android;
 class AdResponse extends com.flurry.org.apache.avro.specific.SpecificRecordBase implements com.flurry.org.apache.avro.specific.SpecificRecord {
    public static final com.flurry.org.apache.avro.Schema SCHEMA$;
    public java.util.List a;
    public java.util.List b;

    static AdResponse()
    {
        com.flurry.android.AdResponse.SCHEMA$ = new com.flurry.org.apache.avro.Schema$Parser().parse("{\"type\":\"record\",\"name\":\"AdResponse\",\"namespace\":\"com.flurry.android\",\"fields\":[{\"name\":\"adUnits\",\"type\":{\"type\":\"array\",\"items\":{\"type\":\"record\",\"name\":\"AdUnit\",\"fields\":[{\"name\":\"adSpace\",\"type\":\"string\"},{\"name\":\"expiration\",\"type\":\"long\"},{\"name\":\"adFrames\",\"type\":{\"type\":\"array\",\"items\":{\"type\":\"record\",\"name\":\"AdFrame\",\"fields\":[{\"name\":\"binding\",\"type\":\"int\"},{\"name\":\"display\",\"type\":\"string\"},{\"name\":\"content\",\"type\":\"string\"},{\"name\":\"adSpaceLayout\",\"type\":{\"type\":\"record\",\"name\":\"AdSpaceLayout\",\"fields\":[{\"name\":\"adWidth\",\"type\":\"int\"},{\"name\":\"adHeight\",\"type\":\"int\"},{\"name\":\"fix\",\"type\":\"string\"},{\"name\":\"format\",\"type\":\"string\"},{\"name\":\"alignment\",\"type\":\"string\"}]}},{\"name\":\"callbacks\",\"type\":{\"type\":\"array\",\"items\":{\"type\":\"record\",\"name\":\"Callback\",\"fields\":[{\"name\":\"event\",\"type\":\"string\"},{\"name\":\"actions\",\"type\":{\"type\":\"array\",\"items\":\"string\"}}]}}},{\"name\":\"adGuid\",\"type\":\"string\"}]}}},{\"name\":\"combinable\",\"type\":\"int\",\"default\":0}]}}},{\"name\":\"errors\",\"type\":{\"type\":\"array\",\"items\":\"string\"},\"default\":[]}]}");
        return;
    }

    AdResponse()
    {
        return;
    }

    public final java.util.List a()
    {
        return this.a;
    }

    public final java.util.List b()
    {
        return this.b;
    }

    public Object get(int p3)
    {
        java.util.List v0_0;
        switch (p3) {
            case 0:
                v0_0 = this.a;
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
        return com.flurry.android.AdResponse.SCHEMA$;
    }

    public void put(int p3, Object p4)
    {
        switch (p3) {
            case 0:
                this.a = ((java.util.List) p4);
                break;
            case 1:
                this.b = ((java.util.List) p4);
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return;
    }
}
