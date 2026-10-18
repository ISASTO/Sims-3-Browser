package com.flurry.android;
public class SdkLogResponse$Builder extends com.flurry.org.apache.avro.specific.SpecificRecordBuilderBase implements com.flurry.org.apache.avro.data.RecordBuilder {
    private CharSequence a;
    private java.util.List b;

    private SdkLogResponse$Builder()
    {
        super(com.flurry.android.SdkLogResponse.SCHEMA$);
        return;
    }

    public com.flurry.android.SdkLogResponse build()
    {
        try {
            java.util.List v0_2;
            com.flurry.org.apache.avro.AvroRuntimeException v1_1 = new com.flurry.android.SdkLogResponse();
        } catch (java.util.List v0_10) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v0_10);
        }
        if (!this.fieldSetFlags()[0]) {
            v0_2 = ((CharSequence) this.defaultValue(this.fields()[0]));
        } else {
            v0_2 = this.a;
        }
        java.util.List v0_8;
        v1_1.a = v0_2;
        if (!this.fieldSetFlags()[1]) {
            v0_8 = ((java.util.List) this.defaultValue(this.fields()[1]));
        } else {
            v0_8 = this.b;
        }
        v1_1.b = v0_8;
        return v1_1;
    }

    public bridge synthetic Object build()
    {
        return this.build();
    }

    public com.flurry.android.SdkLogResponse$Builder clearErrors()
    {
        this.b = 0;
        this.fieldSetFlags()[1] = 0;
        return this;
    }

    public com.flurry.android.SdkLogResponse$Builder clearResult()
    {
        this.a = 0;
        this.fieldSetFlags()[0] = 0;
        return this;
    }

    public java.util.List getErrors()
    {
        return this.b;
    }

    public CharSequence getResult()
    {
        return this.a;
    }

    public boolean hasErrors()
    {
        return this.fieldSetFlags()[1];
    }

    public boolean hasResult()
    {
        return this.fieldSetFlags()[0];
    }

    public com.flurry.android.SdkLogResponse$Builder setErrors(java.util.List p3)
    {
        this.validate(this.fields()[1], p3);
        this.b = p3;
        this.fieldSetFlags()[1] = 1;
        return this;
    }

    public com.flurry.android.SdkLogResponse$Builder setResult(CharSequence p4)
    {
        this.validate(this.fields()[0], p4);
        this.a = p4;
        this.fieldSetFlags()[0] = 1;
        return this;
    }
}
