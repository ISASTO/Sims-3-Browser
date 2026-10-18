package com.flurry.android;
public class Location$Builder extends com.flurry.org.apache.avro.specific.SpecificRecordBuilderBase implements com.flurry.org.apache.avro.data.RecordBuilder {
    private float a;
    private float b;

    synthetic Location$Builder()
    {
        this(0);
        return;
    }

    private Location$Builder(byte p2)
    {
        super(com.flurry.android.Location.SCHEMA$);
        return;
    }

    public com.flurry.android.Location build()
    {
        try {
            float v0_3;
            com.flurry.org.apache.avro.AvroRuntimeException v1_1 = new com.flurry.android.Location();
        } catch (float v0_12) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v0_12);
        }
        if (!this.fieldSetFlags()[0]) {
            v0_3 = ((Float) this.defaultValue(this.fields()[0])).floatValue();
        } else {
            v0_3 = this.a;
        }
        float v0_11;
        v1_1.a = v0_3;
        if (!this.fieldSetFlags()[1]) {
            v0_11 = ((Float) this.defaultValue(this.fields()[1])).floatValue();
        } else {
            v0_11 = this.b;
        }
        v1_1.b = v0_11;
        return v1_1;
    }

    public bridge synthetic Object build()
    {
        return this.build();
    }

    public com.flurry.android.Location$Builder clearLat()
    {
        this.fieldSetFlags()[0] = 0;
        return this;
    }

    public com.flurry.android.Location$Builder clearLon()
    {
        this.fieldSetFlags()[1] = 0;
        return this;
    }

    public Float getLat()
    {
        return Float.valueOf(this.a);
    }

    public Float getLon()
    {
        return Float.valueOf(this.b);
    }

    public boolean hasLat()
    {
        return this.fieldSetFlags()[0];
    }

    public boolean hasLon()
    {
        return this.fieldSetFlags()[1];
    }

    public com.flurry.android.Location$Builder setLat(float p4)
    {
        this.validate(this.fields()[0], Float.valueOf(p4));
        this.a = p4;
        this.fieldSetFlags()[0] = 1;
        return this;
    }

    public com.flurry.android.Location$Builder setLon(float p4)
    {
        this.validate(this.fields()[1], Float.valueOf(p4));
        this.b = p4;
        this.fieldSetFlags()[1] = 1;
        return this;
    }
}
