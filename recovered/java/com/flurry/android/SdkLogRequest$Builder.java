package com.flurry.android;
public class SdkLogRequest$Builder extends com.flurry.org.apache.avro.specific.SpecificRecordBuilderBase implements com.flurry.org.apache.avro.data.RecordBuilder {
    private CharSequence a;
    private java.util.List b;
    private java.util.List c;
    private long d;
    private boolean e;

    synthetic SdkLogRequest$Builder()
    {
        this(0);
        return;
    }

    private SdkLogRequest$Builder(byte p2)
    {
        super(com.flurry.android.SdkLogRequest.SCHEMA$);
        return;
    }

    public com.flurry.android.SdkLogRequest build()
    {
        try {
            boolean v0_2;
            com.flurry.android.SdkLogRequest v2_1 = new com.flurry.android.SdkLogRequest();
        } catch (boolean v0_31) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v0_31);
        }
        if (!this.fieldSetFlags()[0]) {
            v0_2 = ((CharSequence) this.defaultValue(this.fields()[0]));
        } else {
            v0_2 = this.a;
        }
        boolean v0_8;
        v2_1.a = v0_2;
        if (!this.fieldSetFlags()[1]) {
            v0_8 = ((java.util.List) this.defaultValue(this.fields()[1]));
        } else {
            v0_8 = this.b;
        }
        boolean v0_15;
        v2_1.b = v0_8;
        if (!this.fieldSetFlags()[2]) {
            v0_15 = ((java.util.List) this.defaultValue(this.fields()[2]));
        } else {
            v0_15 = this.c;
        }
        boolean v0_23;
        v2_1.c = v0_15;
        if (!this.fieldSetFlags()[3]) {
            v0_23 = ((Long) this.defaultValue(this.fields()[3])).longValue();
        } else {
            v0_23 = this.d;
        }
        boolean v0_30;
        v2_1.d = v0_23;
        if (!this.fieldSetFlags()[4]) {
            v0_30 = ((Boolean) this.defaultValue(this.fields()[4])).booleanValue();
        } else {
            v0_30 = this.e;
        }
        v2_1.e = v0_30;
        return v2_1;
    }

    public bridge synthetic Object build()
    {
        return this.build();
    }

    public com.flurry.android.SdkLogRequest$Builder clearAdReportedIds()
    {
        this.b = 0;
        this.fieldSetFlags()[1] = 0;
        return this;
    }

    public com.flurry.android.SdkLogRequest$Builder clearAgentTimestamp()
    {
        this.fieldSetFlags()[3] = 0;
        return this;
    }

    public com.flurry.android.SdkLogRequest$Builder clearApiKey()
    {
        this.a = 0;
        this.fieldSetFlags()[0] = 0;
        return this;
    }

    public com.flurry.android.SdkLogRequest$Builder clearSdkAdLogs()
    {
        this.c = 0;
        this.fieldSetFlags()[2] = 0;
        return this;
    }

    public com.flurry.android.SdkLogRequest$Builder clearTestDevice()
    {
        this.fieldSetFlags()[4] = 0;
        return this;
    }

    public java.util.List getAdReportedIds()
    {
        return this.b;
    }

    public Long getAgentTimestamp()
    {
        return Long.valueOf(this.d);
    }

    public CharSequence getApiKey()
    {
        return this.a;
    }

    public java.util.List getSdkAdLogs()
    {
        return this.c;
    }

    public Boolean getTestDevice()
    {
        return Boolean.valueOf(this.e);
    }

    public boolean hasAdReportedIds()
    {
        return this.fieldSetFlags()[1];
    }

    public boolean hasAgentTimestamp()
    {
        return this.fieldSetFlags()[3];
    }

    public boolean hasApiKey()
    {
        return this.fieldSetFlags()[0];
    }

    public boolean hasSdkAdLogs()
    {
        return this.fieldSetFlags()[2];
    }

    public boolean hasTestDevice()
    {
        return this.fieldSetFlags()[4];
    }

    public com.flurry.android.SdkLogRequest$Builder setAdReportedIds(java.util.List p3)
    {
        this.validate(this.fields()[1], p3);
        this.b = p3;
        this.fieldSetFlags()[1] = 1;
        return this;
    }

    public com.flurry.android.SdkLogRequest$Builder setAgentTimestamp(long p4)
    {
        this.validate(this.fields()[3], Long.valueOf(p4));
        this.d = p4;
        this.fieldSetFlags()[3] = 1;
        return this;
    }

    public com.flurry.android.SdkLogRequest$Builder setApiKey(CharSequence p4)
    {
        this.validate(this.fields()[0], p4);
        this.a = p4;
        this.fieldSetFlags()[0] = 1;
        return this;
    }

    public com.flurry.android.SdkLogRequest$Builder setSdkAdLogs(java.util.List p4)
    {
        this.validate(this.fields()[2], p4);
        this.c = p4;
        this.fieldSetFlags()[2] = 1;
        return this;
    }

    public com.flurry.android.SdkLogRequest$Builder setTestDevice(boolean p4)
    {
        this.validate(this.fields()[4], Boolean.valueOf(p4));
        this.e = p4;
        this.fieldSetFlags()[4] = 1;
        return this;
    }
}
