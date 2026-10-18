package com.flurry.android;
public class AdReportedId$Builder extends com.flurry.org.apache.avro.specific.SpecificRecordBuilderBase implements com.flurry.org.apache.avro.data.RecordBuilder {
    private int a;
    private java.nio.ByteBuffer b;

    synthetic AdReportedId$Builder()
    {
        this(0);
        return;
    }

    private AdReportedId$Builder(byte p2)
    {
        super(com.flurry.android.AdReportedId.SCHEMA$);
        return;
    }

    public com.flurry.android.AdReportedId build()
    {
        try {
            java.nio.ByteBuffer v0_3;
            com.flurry.org.apache.avro.AvroRuntimeException v1_1 = new com.flurry.android.AdReportedId();
        } catch (java.nio.ByteBuffer v0_11) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v0_11);
        }
        if (!this.fieldSetFlags()[0]) {
            v0_3 = ((Integer) this.defaultValue(this.fields()[0])).intValue();
        } else {
            v0_3 = this.a;
        }
        java.nio.ByteBuffer v0_9;
        v1_1.a = v0_3;
        if (!this.fieldSetFlags()[1]) {
            v0_9 = ((java.nio.ByteBuffer) this.defaultValue(this.fields()[1]));
        } else {
            v0_9 = this.b;
        }
        v1_1.b = v0_9;
        return v1_1;
    }

    public bridge synthetic Object build()
    {
        return this.build();
    }

    public com.flurry.android.AdReportedId$Builder clearId()
    {
        this.b = 0;
        this.fieldSetFlags()[1] = 0;
        return this;
    }

    public com.flurry.android.AdReportedId$Builder clearType()
    {
        this.fieldSetFlags()[0] = 0;
        return this;
    }

    public java.nio.ByteBuffer getId()
    {
        return this.b;
    }

    public Integer getType()
    {
        return Integer.valueOf(this.a);
    }

    public boolean hasId()
    {
        return this.fieldSetFlags()[1];
    }

    public boolean hasType()
    {
        return this.fieldSetFlags()[0];
    }

    public com.flurry.android.AdReportedId$Builder setId(java.nio.ByteBuffer p3)
    {
        this.validate(this.fields()[1], p3);
        this.b = p3;
        this.fieldSetFlags()[1] = 1;
        return this;
    }

    public com.flurry.android.AdReportedId$Builder setType(int p4)
    {
        this.validate(this.fields()[0], Integer.valueOf(p4));
        this.a = p4;
        this.fieldSetFlags()[0] = 1;
        return this;
    }
}
