package com.flurry.android;
public class SdkAdEvent$Builder extends com.flurry.org.apache.avro.specific.SpecificRecordBuilderBase implements com.flurry.org.apache.avro.data.RecordBuilder {
    private CharSequence a;
    private java.util.Map b;
    private long c;

    private SdkAdEvent$Builder()
    {
        super(com.flurry.android.SdkAdEvent.SCHEMA$);
        return;
    }

    public com.flurry.android.SdkAdEvent build()
    {
        try {
            long v0_2;
            com.flurry.android.SdkAdEvent v2_1 = new com.flurry.android.SdkAdEvent();
        } catch (long v0_17) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v0_17);
        }
        if (!this.fieldSetFlags()[0]) {
            v0_2 = ((CharSequence) this.defaultValue(this.fields()[0]));
        } else {
            v0_2 = this.a;
        }
        long v0_8;
        v2_1.a = v0_2;
        if (!this.fieldSetFlags()[1]) {
            v0_8 = ((java.util.Map) this.defaultValue(this.fields()[1]));
        } else {
            v0_8 = this.b;
        }
        long v0_16;
        v2_1.b = v0_8;
        if (!this.fieldSetFlags()[2]) {
            v0_16 = ((Long) this.defaultValue(this.fields()[2])).longValue();
        } else {
            v0_16 = this.c;
        }
        v2_1.c = v0_16;
        return v2_1;
    }

    public bridge synthetic Object build()
    {
        return this.build();
    }

    public com.flurry.android.SdkAdEvent$Builder clearParams()
    {
        this.b = 0;
        this.fieldSetFlags()[1] = 0;
        return this;
    }

    public com.flurry.android.SdkAdEvent$Builder clearTimeOffset()
    {
        this.fieldSetFlags()[2] = 0;
        return this;
    }

    public com.flurry.android.SdkAdEvent$Builder clearType()
    {
        this.a = 0;
        this.fieldSetFlags()[0] = 0;
        return this;
    }

    public java.util.Map getParams()
    {
        return this.b;
    }

    public Long getTimeOffset()
    {
        return Long.valueOf(this.c);
    }

    public CharSequence getType()
    {
        return this.a;
    }

    public boolean hasParams()
    {
        return this.fieldSetFlags()[1];
    }

    public boolean hasTimeOffset()
    {
        return this.fieldSetFlags()[2];
    }

    public boolean hasType()
    {
        return this.fieldSetFlags()[0];
    }

    public com.flurry.android.SdkAdEvent$Builder setParams(java.util.Map p3)
    {
        this.validate(this.fields()[1], p3);
        this.b = p3;
        this.fieldSetFlags()[1] = 1;
        return this;
    }

    public com.flurry.android.SdkAdEvent$Builder setTimeOffset(long p4)
    {
        this.validate(this.fields()[2], Long.valueOf(p4));
        this.c = p4;
        this.fieldSetFlags()[2] = 1;
        return this;
    }

    public com.flurry.android.SdkAdEvent$Builder setType(CharSequence p4)
    {
        this.validate(this.fields()[0], p4);
        this.a = p4;
        this.fieldSetFlags()[0] = 1;
        return this;
    }
}
