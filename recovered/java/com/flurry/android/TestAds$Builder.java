package com.flurry.android;
public class TestAds$Builder extends com.flurry.org.apache.avro.specific.SpecificRecordBuilderBase implements com.flurry.org.apache.avro.data.RecordBuilder {
    private int a;

    synthetic TestAds$Builder()
    {
        this(0);
        return;
    }

    private TestAds$Builder(byte p2)
    {
        super(com.flurry.android.TestAds.SCHEMA$);
        return;
    }

    public com.flurry.android.TestAds build()
    {
        try {
            int v0_3;
            com.flurry.org.apache.avro.AvroRuntimeException v1_1 = new com.flurry.android.TestAds();
        } catch (int v0_4) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v0_4);
        }
        if (!this.fieldSetFlags()[0]) {
            v0_3 = ((Integer) this.defaultValue(this.fields()[0])).intValue();
        } else {
            v0_3 = this.a;
        }
        v1_1.a = v0_3;
        return v1_1;
    }

    public bridge synthetic Object build()
    {
        return this.build();
    }

    public com.flurry.android.TestAds$Builder clearAdspacePlacement()
    {
        this.fieldSetFlags()[0] = 0;
        return this;
    }

    public Integer getAdspacePlacement()
    {
        return Integer.valueOf(this.a);
    }

    public boolean hasAdspacePlacement()
    {
        return this.fieldSetFlags()[0];
    }

    public com.flurry.android.TestAds$Builder setAdspacePlacement(int p4)
    {
        this.validate(this.fields()[0], Integer.valueOf(p4));
        this.a = p4;
        this.fieldSetFlags()[0] = 1;
        return this;
    }
}
