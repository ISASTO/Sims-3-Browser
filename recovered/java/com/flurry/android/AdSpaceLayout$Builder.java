package com.flurry.android;
public class AdSpaceLayout$Builder extends com.flurry.org.apache.avro.specific.SpecificRecordBuilderBase implements com.flurry.org.apache.avro.data.RecordBuilder {
    private int a;
    private int b;
    private CharSequence c;
    private CharSequence d;
    private CharSequence e;

    private AdSpaceLayout$Builder()
    {
        super(com.flurry.android.AdSpaceLayout.SCHEMA$);
        return;
    }

    public com.flurry.android.AdSpaceLayout build()
    {
        try {
            CharSequence v0_3;
            com.flurry.org.apache.avro.AvroRuntimeException v1_1 = new com.flurry.android.AdSpaceLayout();
        } catch (CharSequence v0_31) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v0_31);
        }
        if (!this.fieldSetFlags()[0]) {
            v0_3 = ((Integer) this.defaultValue(this.fields()[0])).intValue();
        } else {
            v0_3 = this.a;
        }
        CharSequence v0_11;
        v1_1.a = v0_3;
        if (!this.fieldSetFlags()[1]) {
            v0_11 = ((Integer) this.defaultValue(this.fields()[1])).intValue();
        } else {
            v0_11 = this.b;
        }
        CharSequence v0_17;
        v1_1.b = v0_11;
        if (!this.fieldSetFlags()[2]) {
            v0_17 = ((CharSequence) this.defaultValue(this.fields()[2]));
        } else {
            v0_17 = this.c;
        }
        CharSequence v0_24;
        v1_1.c = v0_17;
        if (!this.fieldSetFlags()[3]) {
            v0_24 = ((CharSequence) this.defaultValue(this.fields()[3]));
        } else {
            v0_24 = this.d;
        }
        CharSequence v0_30;
        v1_1.d = v0_24;
        if (!this.fieldSetFlags()[4]) {
            v0_30 = ((CharSequence) this.defaultValue(this.fields()[4]));
        } else {
            v0_30 = this.e;
        }
        v1_1.e = v0_30;
        return v1_1;
    }

    public bridge synthetic Object build()
    {
        return this.build();
    }

    public com.flurry.android.AdSpaceLayout$Builder clearAdHeight()
    {
        this.fieldSetFlags()[1] = 0;
        return this;
    }

    public com.flurry.android.AdSpaceLayout$Builder clearAdWidth()
    {
        this.fieldSetFlags()[0] = 0;
        return this;
    }

    public com.flurry.android.AdSpaceLayout$Builder clearAlignment()
    {
        this.e = 0;
        this.fieldSetFlags()[4] = 0;
        return this;
    }

    public com.flurry.android.AdSpaceLayout$Builder clearFix()
    {
        this.c = 0;
        this.fieldSetFlags()[2] = 0;
        return this;
    }

    public com.flurry.android.AdSpaceLayout$Builder clearFormat()
    {
        this.d = 0;
        this.fieldSetFlags()[3] = 0;
        return this;
    }

    public Integer getAdHeight()
    {
        return Integer.valueOf(this.b);
    }

    public Integer getAdWidth()
    {
        return Integer.valueOf(this.a);
    }

    public CharSequence getAlignment()
    {
        return this.e;
    }

    public CharSequence getFix()
    {
        return this.c;
    }

    public CharSequence getFormat()
    {
        return this.d;
    }

    public boolean hasAdHeight()
    {
        return this.fieldSetFlags()[1];
    }

    public boolean hasAdWidth()
    {
        return this.fieldSetFlags()[0];
    }

    public boolean hasAlignment()
    {
        return this.fieldSetFlags()[4];
    }

    public boolean hasFix()
    {
        return this.fieldSetFlags()[2];
    }

    public boolean hasFormat()
    {
        return this.fieldSetFlags()[3];
    }

    public com.flurry.android.AdSpaceLayout$Builder setAdHeight(int p4)
    {
        this.validate(this.fields()[1], Integer.valueOf(p4));
        this.b = p4;
        this.fieldSetFlags()[1] = 1;
        return this;
    }

    public com.flurry.android.AdSpaceLayout$Builder setAdWidth(int p4)
    {
        this.validate(this.fields()[0], Integer.valueOf(p4));
        this.a = p4;
        this.fieldSetFlags()[0] = 1;
        return this;
    }

    public com.flurry.android.AdSpaceLayout$Builder setAlignment(CharSequence p4)
    {
        this.validate(this.fields()[4], p4);
        this.e = p4;
        this.fieldSetFlags()[4] = 1;
        return this;
    }

    public com.flurry.android.AdSpaceLayout$Builder setFix(CharSequence p4)
    {
        this.validate(this.fields()[2], p4);
        this.c = p4;
        this.fieldSetFlags()[2] = 1;
        return this;
    }

    public com.flurry.android.AdSpaceLayout$Builder setFormat(CharSequence p4)
    {
        this.validate(this.fields()[3], p4);
        this.d = p4;
        this.fieldSetFlags()[3] = 1;
        return this;
    }
}
