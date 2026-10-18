package com.flurry.android;
 class Callback extends com.flurry.org.apache.avro.specific.SpecificRecordBase implements com.flurry.org.apache.avro.specific.SpecificRecord {
    public static final com.flurry.org.apache.avro.Schema SCHEMA$;
    public CharSequence a;
    public java.util.List b;

    static Callback()
    {
        com.flurry.android.Callback.SCHEMA$ = new com.flurry.org.apache.avro.Schema$Parser().parse("{\"type\":\"record\",\"name\":\"Callback\",\"namespace\":\"com.flurry.android\",\"fields\":[{\"name\":\"event\",\"type\":\"string\"},{\"name\":\"actions\",\"type\":{\"type\":\"array\",\"items\":\"string\"}}]}");
        return;
    }

    Callback()
    {
        return;
    }

    public final CharSequence a()
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
        return com.flurry.android.Callback.SCHEMA$;
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
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Bad index");
        }
        return;
    }
}
