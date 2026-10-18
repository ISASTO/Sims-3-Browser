package com.flurry.android;
public class AdUnit$Builder extends com.flurry.org.apache.avro.specific.SpecificRecordBuilderBase implements com.flurry.org.apache.avro.data.RecordBuilder {
    private CharSequence a;
    private long b;
    private java.util.List c;
    private int d;

    private AdUnit$Builder()
    {
        super(com.flurry.android.AdUnit.SCHEMA$);
        return;
    }

    public com.flurry.android.AdUnit build()
    {
        try {
            int v0_2;
            com.flurry.android.AdUnit v2_1 = new com.flurry.android.AdUnit();
        } catch (int v0_25) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v0_25);
        }
        if (!this.fieldSetFlags()[0]) {
            v0_2 = ((CharSequence) this.defaultValue(this.fields()[0]));
        } else {
            v0_2 = this.a;
        }
        int v0_9;
        v2_1.a = v0_2;
        if (!this.fieldSetFlags()[1]) {
            v0_9 = ((Long) this.defaultValue(this.fields()[1])).longValue();
        } else {
            v0_9 = this.b;
        }
        int v0_16;
        v2_1.b = v0_9;
        if (!this.fieldSetFlags()[2]) {
            v0_16 = ((java.util.List) this.defaultValue(this.fields()[2]));
        } else {
            v0_16 = this.c;
        }
        int v0_24;
        v2_1.c = v0_16;
        if (!this.fieldSetFlags()[3]) {
            v0_24 = ((Integer) this.defaultValue(this.fields()[3])).intValue();
        } else {
            v0_24 = this.d;
        }
        v2_1.d = v0_24;
        return v2_1;
    }

    public bridge synthetic Object build()
    {
        return this.build();
    }

    public com.flurry.android.AdUnit$Builder clearAdFrames()
    {
        this.c = 0;
        this.fieldSetFlags()[2] = 0;
        return this;
    }

    public com.flurry.android.AdUnit$Builder clearAdSpace()
    {
        this.a = 0;
        this.fieldSetFlags()[0] = 0;
        return this;
    }

    public com.flurry.android.AdUnit$Builder clearCombinable()
    {
        this.fieldSetFlags()[3] = 0;
        return this;
    }

    public com.flurry.android.AdUnit$Builder clearExpiration()
    {
        this.fieldSetFlags()[1] = 0;
        return this;
    }

    public java.util.List getAdFrames()
    {
        return this.c;
    }

    public CharSequence getAdSpace()
    {
        return this.a;
    }

    public Integer getCombinable()
    {
        return Integer.valueOf(this.d);
    }

    public Long getExpiration()
    {
        return Long.valueOf(this.b);
    }

    public boolean hasAdFrames()
    {
        return this.fieldSetFlags()[2];
    }

    public boolean hasAdSpace()
    {
        return this.fieldSetFlags()[0];
    }

    public boolean hasCombinable()
    {
        return this.fieldSetFlags()[3];
    }

    public boolean hasExpiration()
    {
        return this.fieldSetFlags()[1];
    }

    public com.flurry.android.AdUnit$Builder setAdFrames(java.util.List p4)
    {
        this.validate(this.fields()[2], p4);
        this.c = p4;
        this.fieldSetFlags()[2] = 1;
        return this;
    }

    public com.flurry.android.AdUnit$Builder setAdSpace(CharSequence p4)
    {
        this.validate(this.fields()[0], p4);
        this.a = p4;
        this.fieldSetFlags()[0] = 1;
        return this;
    }

    public com.flurry.android.AdUnit$Builder setCombinable(int p4)
    {
        this.validate(this.fields()[3], Integer.valueOf(p4));
        this.d = p4;
        this.fieldSetFlags()[3] = 1;
        return this;
    }

    public com.flurry.android.AdUnit$Builder setExpiration(long p4)
    {
        this.validate(this.fields()[1], Long.valueOf(p4));
        this.b = p4;
        this.fieldSetFlags()[1] = 1;
        return this;
    }
}
