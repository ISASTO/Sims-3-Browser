package com.flurry.android;
 class SdkLogRequest extends com.flurry.org.apache.avro.specific.SpecificRecordBase implements com.flurry.org.apache.avro.specific.SpecificRecord {
    public static final com.flurry.org.apache.avro.Schema SCHEMA$;
    public CharSequence a;
    public java.util.List b;
    public java.util.List c;
    public long d;
    public boolean e;

    static SdkLogRequest()
    {
        com.flurry.android.SdkLogRequest.SCHEMA$ = new com.flurry.org.apache.avro.Schema$Parser().parse("{\"type\":\"record\",\"name\":\"SdkLogRequest\",\"namespace\":\"com.flurry.android\",\"fields\":[{\"name\":\"apiKey\",\"type\":\"string\"},{\"name\":\"adReportedIds\",\"type\":{\"type\":\"array\",\"items\":{\"type\":\"record\",\"name\":\"AdReportedId\",\"fields\":[{\"name\":\"type\",\"type\":\"int\"},{\"name\":\"id\",\"type\":\"bytes\"}]}}},{\"name\":\"sdkAdLogs\",\"type\":{\"type\":\"array\",\"items\":{\"type\":\"record\",\"name\":\"SdkAdLog\",\"fields\":[{\"name\":\"sessionId\",\"type\":\"long\"},{\"name\":\"adLogGUID\",\"type\":\"string\"},{\"name\":\"sdkAdEvents\",\"type\":{\"type\":\"array\",\"items\":{\"type\":\"record\",\"name\":\"SdkAdEvent\",\"fields\":[{\"name\":\"type\",\"type\":\"string\"},{\"name\":\"params\",\"type\":{\"type\":\"map\",\"values\":\"string\"}},{\"name\":\"timeOffset\",\"type\":\"long\"}]}}}]}}},{\"name\":\"agentTimestamp\",\"type\":\"long\"},{\"name\":\"testDevice\",\"type\":\"boolean\",\"default\":false}]}");
        return;
    }

    SdkLogRequest()
    {
        return;
    }

    public static com.flurry.android.SdkLogRequest$Builder a()
    {
        return new com.flurry.android.SdkLogRequest$Builder();
    }

    public Object get(int p3)
    {
        Boolean v0_3;
        switch (p3) {
            case 0:
                v0_3 = this.a;
                break;
            case 1:
                v0_3 = this.b;
                break;
            case 2:
                v0_3 = this.c;
                break;
            case 3:
                v0_3 = Long.valueOf(this.d);
                break;
            case 4:
                v0_3 = Boolean.valueOf(this.e);
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return v0_3;
    }

    public com.flurry.org.apache.avro.Schema getSchema()
    {
        return com.flurry.android.SdkLogRequest.SCHEMA$;
    }

    public void put(int p3, Object p4)
    {
        switch (p3) {
            case 0:
                this.a = ((CharSequence) p4);
                break;
            case 1:
                this.b = ((java.util.List) p4);
                break;
            case 2:
                this.c = ((java.util.List) p4);
                break;
            case 3:
                this.d = ((Long) p4).longValue();
                break;
            case 4:
                this.e = ((Boolean) p4).booleanValue();
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return;
    }
}
