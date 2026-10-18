package com.flurry.android;
public class SdkAdLog$Builder extends com.flurry.org.apache.avro.specific.SpecificRecordBuilderBase implements com.flurry.org.apache.avro.data.RecordBuilder {
    private long a;
    private CharSequence b;
    private java.util.List c;

    private SdkAdLog$Builder()
    {
        super(com.flurry.android.SdkAdLog.SCHEMA$);
        return;
    }

    public com.flurry.android.SdkAdLog build()
    {
        try {
            java.util.List v0_3;
            com.flurry.android.SdkAdLog v2_1 = new com.flurry.android.SdkAdLog();
        } catch (java.util.List v0_17) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v0_17);
        }
        if (!this.fieldSetFlags()[0]) {
            v0_3 = ((Long) this.defaultValue(this.fields()[0])).longValue();
        } else {
            v0_3 = this.a;
        }
        java.util.List v0_9;
        v2_1.a = v0_3;
        if (!this.fieldSetFlags()[1]) {
            v0_9 = ((CharSequence) this.defaultValue(this.fields()[1]));
        } else {
            v0_9 = this.b;
        }
        java.util.List v0_16;
        v2_1.b = v0_9;
        if (!this.fieldSetFlags()[2]) {
            v0_16 = ((java.util.List) this.defaultValue(this.fields()[2]));
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

    public com.flurry.android.SdkAdLog$Builder clearAdLogGUID()
    {
        this.b = 0;
        this.fieldSetFlags()[1] = 0;
        return this;
    }

    public com.flurry.android.SdkAdLog$Builder clearSdkAdEvents()
    {
        this.c = 0;
        this.fieldSetFlags()[2] = 0;
        return this;
    }

    public com.flurry.android.SdkAdLog$Builder clearSessionId()
    {
        this.fieldSetFlags()[0] = 0;
        return this;
    }

    public CharSequence getAdLogGUID()
    {
        return this.b;
    }

    public java.util.List getSdkAdEvents()
    {
        return this.c;
    }

    public Long getSessionId()
    {
        return Long.valueOf(this.a);
    }

    public boolean hasAdLogGUID()
    {
        return this.fieldSetFlags()[1];
    }

    public boolean hasSdkAdEvents()
    {
        return this.fieldSetFlags()[2];
    }

    public boolean hasSessionId()
    {
        return this.fieldSetFlags()[0];
    }

    public com.flurry.android.SdkAdLog$Builder setAdLogGUID(CharSequence p3)
    {
        this.validate(this.fields()[1], p3);
        this.b = p3;
        this.fieldSetFlags()[1] = 1;
        return this;
    }

    public com.flurry.android.SdkAdLog$Builder setSdkAdEvents(java.util.List p4)
    {
        this.validate(this.fields()[2], p4);
        this.c = p4;
        this.fieldSetFlags()[2] = 1;
        return this;
    }

    public com.flurry.android.SdkAdLog$Builder setSessionId(long p4)
    {
        this.validate(this.fields()[0], Long.valueOf(p4));
        this.a = p4;
        this.fieldSetFlags()[0] = 1;
        return this;
    }
}
