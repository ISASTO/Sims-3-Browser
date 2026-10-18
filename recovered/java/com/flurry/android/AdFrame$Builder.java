package com.flurry.android;
public class AdFrame$Builder extends com.flurry.org.apache.avro.specific.SpecificRecordBuilderBase implements com.flurry.org.apache.avro.data.RecordBuilder {
    private int a;
    private CharSequence b;
    private CharSequence c;
    private com.flurry.android.AdSpaceLayout d;
    private java.util.List e;
    private CharSequence f;

    private AdFrame$Builder()
    {
        super(com.flurry.android.AdFrame.SCHEMA$);
        return;
    }

    public com.flurry.android.AdFrame build()
    {
        try {
            CharSequence v0_3;
            com.flurry.org.apache.avro.AvroRuntimeException v1_1 = new com.flurry.android.AdFrame();
        } catch (CharSequence v0_37) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v0_37);
        }
        if (!this.fieldSetFlags()[0]) {
            v0_3 = ((Integer) this.defaultValue(this.fields()[0])).intValue();
        } else {
            v0_3 = this.a;
        }
        CharSequence v0_9;
        v1_1.a = v0_3;
        if (!this.fieldSetFlags()[1]) {
            v0_9 = ((CharSequence) this.defaultValue(this.fields()[1]));
        } else {
            v0_9 = this.b;
        }
        CharSequence v0_16;
        v1_1.b = v0_9;
        if (!this.fieldSetFlags()[2]) {
            v0_16 = ((CharSequence) this.defaultValue(this.fields()[2]));
        } else {
            v0_16 = this.c;
        }
        CharSequence v0_23;
        v1_1.c = v0_16;
        if (!this.fieldSetFlags()[3]) {
            v0_23 = ((com.flurry.android.AdSpaceLayout) this.defaultValue(this.fields()[3]));
        } else {
            v0_23 = this.d;
        }
        CharSequence v0_29;
        v1_1.d = v0_23;
        if (!this.fieldSetFlags()[4]) {
            v0_29 = ((java.util.List) this.defaultValue(this.fields()[4]));
        } else {
            v0_29 = this.e;
        }
        CharSequence v0_36;
        v1_1.e = v0_29;
        if (!this.fieldSetFlags()[5]) {
            v0_36 = ((CharSequence) this.defaultValue(this.fields()[5]));
        } else {
            v0_36 = this.f;
        }
        v1_1.f = v0_36;
        return v1_1;
    }

    public bridge synthetic Object build()
    {
        return this.build();
    }

    public com.flurry.android.AdFrame$Builder clearAdGuid()
    {
        this.f = 0;
        this.fieldSetFlags()[5] = 0;
        return this;
    }

    public com.flurry.android.AdFrame$Builder clearAdSpaceLayout()
    {
        this.d = 0;
        this.fieldSetFlags()[3] = 0;
        return this;
    }

    public com.flurry.android.AdFrame$Builder clearBinding()
    {
        this.fieldSetFlags()[0] = 0;
        return this;
    }

    public com.flurry.android.AdFrame$Builder clearCallbacks()
    {
        this.e = 0;
        this.fieldSetFlags()[4] = 0;
        return this;
    }

    public com.flurry.android.AdFrame$Builder clearContent()
    {
        this.c = 0;
        this.fieldSetFlags()[2] = 0;
        return this;
    }

    public com.flurry.android.AdFrame$Builder clearDisplay()
    {
        this.b = 0;
        this.fieldSetFlags()[1] = 0;
        return this;
    }

    public CharSequence getAdGuid()
    {
        return this.f;
    }

    public com.flurry.android.AdSpaceLayout getAdSpaceLayout()
    {
        return this.d;
    }

    public Integer getBinding()
    {
        return Integer.valueOf(this.a);
    }

    public java.util.List getCallbacks()
    {
        return this.e;
    }

    public CharSequence getContent()
    {
        return this.c;
    }

    public CharSequence getDisplay()
    {
        return this.b;
    }

    public boolean hasAdGuid()
    {
        return this.fieldSetFlags()[5];
    }

    public boolean hasAdSpaceLayout()
    {
        return this.fieldSetFlags()[3];
    }

    public boolean hasBinding()
    {
        return this.fieldSetFlags()[0];
    }

    public boolean hasCallbacks()
    {
        return this.fieldSetFlags()[4];
    }

    public boolean hasContent()
    {
        return this.fieldSetFlags()[2];
    }

    public boolean hasDisplay()
    {
        return this.fieldSetFlags()[1];
    }

    public com.flurry.android.AdFrame$Builder setAdGuid(CharSequence p4)
    {
        this.validate(this.fields()[5], p4);
        this.f = p4;
        this.fieldSetFlags()[5] = 1;
        return this;
    }

    public com.flurry.android.AdFrame$Builder setAdSpaceLayout(com.flurry.android.AdSpaceLayout p4)
    {
        this.validate(this.fields()[3], p4);
        this.d = p4;
        this.fieldSetFlags()[3] = 1;
        return this;
    }

    public com.flurry.android.AdFrame$Builder setBinding(int p4)
    {
        this.validate(this.fields()[0], Integer.valueOf(p4));
        this.a = p4;
        this.fieldSetFlags()[0] = 1;
        return this;
    }

    public com.flurry.android.AdFrame$Builder setCallbacks(java.util.List p4)
    {
        this.validate(this.fields()[4], p4);
        this.e = p4;
        this.fieldSetFlags()[4] = 1;
        return this;
    }

    public com.flurry.android.AdFrame$Builder setContent(CharSequence p4)
    {
        this.validate(this.fields()[2], p4);
        this.c = p4;
        this.fieldSetFlags()[2] = 1;
        return this;
    }

    public com.flurry.android.AdFrame$Builder setDisplay(CharSequence p3)
    {
        this.validate(this.fields()[1], p3);
        this.b = p3;
        this.fieldSetFlags()[1] = 1;
        return this;
    }
}
