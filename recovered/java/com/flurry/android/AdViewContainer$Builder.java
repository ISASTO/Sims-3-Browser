package com.flurry.android;
public class AdViewContainer$Builder extends com.flurry.org.apache.avro.specific.SpecificRecordBuilderBase implements com.flurry.org.apache.avro.data.RecordBuilder {
    private int a;
    private int b;
    private int c;
    private int d;

    synthetic AdViewContainer$Builder()
    {
        this(0);
        return;
    }

    private AdViewContainer$Builder(byte p2)
    {
        super(com.flurry.android.AdViewContainer.SCHEMA$);
        return;
    }

    public com.flurry.android.AdViewContainer build()
    {
        try {
            int v0_3;
            com.flurry.org.apache.avro.AvroRuntimeException v1_1 = new com.flurry.android.AdViewContainer();
        } catch (int v0_27) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v0_27);
        }
        if (!this.fieldSetFlags()[0]) {
            v0_3 = ((Integer) this.defaultValue(this.fields()[0])).intValue();
        } else {
            v0_3 = this.a;
        }
        int v0_11;
        v1_1.a = v0_3;
        if (!this.fieldSetFlags()[1]) {
            v0_11 = ((Integer) this.defaultValue(this.fields()[1])).intValue();
        } else {
            v0_11 = this.b;
        }
        int v0_18;
        v1_1.b = v0_11;
        if (!this.fieldSetFlags()[2]) {
            v0_18 = ((Integer) this.defaultValue(this.fields()[2])).intValue();
        } else {
            v0_18 = this.c;
        }
        int v0_26;
        v1_1.c = v0_18;
        if (!this.fieldSetFlags()[3]) {
            v0_26 = ((Integer) this.defaultValue(this.fields()[3])).intValue();
        } else {
            v0_26 = this.d;
        }
        v1_1.d = v0_26;
        return v1_1;
    }

    public bridge synthetic Object build()
    {
        return this.build();
    }

    public com.flurry.android.AdViewContainer$Builder clearScreenHeight()
    {
        this.fieldSetFlags()[3] = 0;
        return this;
    }

    public com.flurry.android.AdViewContainer$Builder clearScreenWidth()
    {
        this.fieldSetFlags()[2] = 0;
        return this;
    }

    public com.flurry.android.AdViewContainer$Builder clearViewHeight()
    {
        this.fieldSetFlags()[1] = 0;
        return this;
    }

    public com.flurry.android.AdViewContainer$Builder clearViewWidth()
    {
        this.fieldSetFlags()[0] = 0;
        return this;
    }

    public Integer getScreenHeight()
    {
        return Integer.valueOf(this.d);
    }

    public Integer getScreenWidth()
    {
        return Integer.valueOf(this.c);
    }

    public Integer getViewHeight()
    {
        return Integer.valueOf(this.b);
    }

    public Integer getViewWidth()
    {
        return Integer.valueOf(this.a);
    }

    public boolean hasScreenHeight()
    {
        return this.fieldSetFlags()[3];
    }

    public boolean hasScreenWidth()
    {
        return this.fieldSetFlags()[2];
    }

    public boolean hasViewHeight()
    {
        return this.fieldSetFlags()[1];
    }

    public boolean hasViewWidth()
    {
        return this.fieldSetFlags()[0];
    }

    public com.flurry.android.AdViewContainer$Builder setScreenHeight(int p4)
    {
        this.validate(this.fields()[3], Integer.valueOf(p4));
        this.d = p4;
        this.fieldSetFlags()[3] = 1;
        return this;
    }

    public com.flurry.android.AdViewContainer$Builder setScreenWidth(int p4)
    {
        this.validate(this.fields()[2], Integer.valueOf(p4));
        this.c = p4;
        this.fieldSetFlags()[2] = 1;
        return this;
    }

    public com.flurry.android.AdViewContainer$Builder setViewHeight(int p4)
    {
        this.validate(this.fields()[1], Integer.valueOf(p4));
        this.b = p4;
        this.fieldSetFlags()[1] = 1;
        return this;
    }

    public com.flurry.android.AdViewContainer$Builder setViewWidth(int p4)
    {
        this.validate(this.fields()[0], Integer.valueOf(p4));
        this.a = p4;
        this.fieldSetFlags()[0] = 1;
        return this;
    }
}
