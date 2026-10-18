package com.flurry.android;
public class AdRequest$Builder extends com.flurry.org.apache.avro.specific.SpecificRecordBuilderBase implements com.flurry.org.apache.avro.data.RecordBuilder {
    private CharSequence a;
    private CharSequence b;
    private CharSequence c;
    private long d;
    private java.util.List e;
    private com.flurry.android.Location f;
    private boolean g;
    private java.util.List h;
    private com.flurry.android.AdViewContainer i;
    private CharSequence j;
    private CharSequence k;
    private CharSequence l;
    private CharSequence m;
    private com.flurry.android.TestAds n;
    private java.util.Map o;
    private boolean p;

    synthetic AdRequest$Builder()
    {
        this(0);
        return;
    }

    private AdRequest$Builder(byte p2)
    {
        super(com.flurry.android.AdRequest.SCHEMA$);
        return;
    }

    public com.flurry.android.AdRequest build()
    {
        try {
            boolean v0_15;
            com.flurry.android.AdRequest v2_1 = new com.flurry.android.AdRequest();
        } catch (boolean v0_62) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v0_62);
        }
        if (!this.fieldSetFlags()[0]) {
            v0_15 = ((CharSequence) this.defaultValue(this.fields()[0]));
        } else {
            v0_15 = this.a;
        }
        boolean v0_65;
        v2_1.a = v0_15;
        if (!this.fieldSetFlags()[1]) {
            v0_65 = ((CharSequence) this.defaultValue(this.fields()[1]));
        } else {
            v0_65 = this.b;
        }
        boolean v0_72;
        v2_1.b = v0_65;
        if (!this.fieldSetFlags()[2]) {
            v0_72 = ((CharSequence) this.defaultValue(this.fields()[2]));
        } else {
            v0_72 = this.c;
        }
        boolean v0_80;
        v2_1.c = v0_72;
        if (!this.fieldSetFlags()[3]) {
            v0_80 = ((Long) this.defaultValue(this.fields()[3])).longValue();
        } else {
            v0_80 = this.d;
        }
        boolean v0_86;
        v2_1.d = v0_80;
        if (!this.fieldSetFlags()[4]) {
            v0_86 = ((java.util.List) this.defaultValue(this.fields()[4]));
        } else {
            v0_86 = this.e;
        }
        boolean v0_93;
        v2_1.e = v0_86;
        if (!this.fieldSetFlags()[5]) {
            v0_93 = ((com.flurry.android.Location) this.defaultValue(this.fields()[5]));
        } else {
            v0_93 = this.f;
        }
        boolean v0_1;
        v2_1.f = v0_93;
        if (!this.fieldSetFlags()[6]) {
            v0_1 = ((Boolean) this.defaultValue(this.fields()[6])).booleanValue();
        } else {
            v0_1 = this.g;
        }
        boolean v0_7;
        v2_1.g = v0_1;
        if (!this.fieldSetFlags()[7]) {
            v0_7 = ((java.util.List) this.defaultValue(this.fields()[7]));
        } else {
            v0_7 = this.h;
        }
        boolean v0_14;
        v2_1.h = v0_7;
        if (!this.fieldSetFlags()[8]) {
            v0_14 = ((com.flurry.android.AdViewContainer) this.defaultValue(this.fields()[8]));
        } else {
            v0_14 = this.i;
        }
        boolean v0_21;
        v2_1.i = v0_14;
        if (!this.fieldSetFlags()[9]) {
            v0_21 = ((CharSequence) this.defaultValue(this.fields()[9]));
        } else {
            v0_21 = this.j;
        }
        boolean v0_27;
        v2_1.j = v0_21;
        if (!this.fieldSetFlags()[10]) {
            v0_27 = ((CharSequence) this.defaultValue(this.fields()[10]));
        } else {
            v0_27 = this.k;
        }
        boolean v0_34;
        v2_1.k = v0_27;
        if (!this.fieldSetFlags()[11]) {
            v0_34 = ((CharSequence) this.defaultValue(this.fields()[11]));
        } else {
            v0_34 = this.l;
        }
        boolean v0_40;
        v2_1.l = v0_34;
        if (!this.fieldSetFlags()[12]) {
            v0_40 = ((CharSequence) this.defaultValue(this.fields()[12]));
        } else {
            v0_40 = this.m;
        }
        boolean v0_47;
        v2_1.m = v0_40;
        if (!this.fieldSetFlags()[13]) {
            v0_47 = ((com.flurry.android.TestAds) this.defaultValue(this.fields()[13]));
        } else {
            v0_47 = this.n;
        }
        boolean v0_53;
        v2_1.n = v0_47;
        if (!this.fieldSetFlags()[14]) {
            v0_53 = ((java.util.Map) this.defaultValue(this.fields()[14]));
        } else {
            v0_53 = this.o;
        }
        boolean v0_61;
        v2_1.o = v0_53;
        if (!this.fieldSetFlags()[15]) {
            v0_61 = ((Boolean) this.defaultValue(this.fields()[15])).booleanValue();
        } else {
            v0_61 = this.p;
        }
        v2_1.p = v0_61;
        return v2_1;
    }

    public bridge synthetic Object build()
    {
        return this.build();
    }

    public com.flurry.android.AdRequest$Builder clearAdReportedIds()
    {
        this.e = 0;
        this.fieldSetFlags()[4] = 0;
        return this;
    }

    public com.flurry.android.AdRequest$Builder clearAdSpaceName()
    {
        this.c = 0;
        this.fieldSetFlags()[2] = 0;
        return this;
    }

    public com.flurry.android.AdRequest$Builder clearAdViewContainer()
    {
        this.i = 0;
        this.fieldSetFlags()[8] = 0;
        return this;
    }

    public com.flurry.android.AdRequest$Builder clearAgentVersion()
    {
        this.b = 0;
        this.fieldSetFlags()[1] = 0;
        return this;
    }

    public com.flurry.android.AdRequest$Builder clearApiKey()
    {
        this.a = 0;
        this.fieldSetFlags()[0] = 0;
        return this;
    }

    public com.flurry.android.AdRequest$Builder clearBindings()
    {
        this.h = 0;
        this.fieldSetFlags()[7] = 0;
        return this;
    }

    public com.flurry.android.AdRequest$Builder clearDevicePlatform()
    {
        this.m = 0;
        this.fieldSetFlags()[12] = 0;
        return this;
    }

    public com.flurry.android.AdRequest$Builder clearKeywords()
    {
        this.o = 0;
        this.fieldSetFlags()[14] = 0;
        return this;
    }

    public com.flurry.android.AdRequest$Builder clearLocale()
    {
        this.j = 0;
        this.fieldSetFlags()[9] = 0;
        return this;
    }

    public com.flurry.android.AdRequest$Builder clearLocation()
    {
        this.f = 0;
        this.fieldSetFlags()[5] = 0;
        return this;
    }

    public com.flurry.android.AdRequest$Builder clearOsVersion()
    {
        this.l = 0;
        this.fieldSetFlags()[11] = 0;
        return this;
    }

    public com.flurry.android.AdRequest$Builder clearRefresh()
    {
        this.fieldSetFlags()[15] = 0;
        return this;
    }

    public com.flurry.android.AdRequest$Builder clearSessionId()
    {
        this.fieldSetFlags()[3] = 0;
        return this;
    }

    public com.flurry.android.AdRequest$Builder clearTestAds()
    {
        this.n = 0;
        this.fieldSetFlags()[13] = 0;
        return this;
    }

    public com.flurry.android.AdRequest$Builder clearTestDevice()
    {
        this.fieldSetFlags()[6] = 0;
        return this;
    }

    public com.flurry.android.AdRequest$Builder clearTimezone()
    {
        this.k = 0;
        this.fieldSetFlags()[10] = 0;
        return this;
    }

    public java.util.List getAdReportedIds()
    {
        return this.e;
    }

    public CharSequence getAdSpaceName()
    {
        return this.c;
    }

    public com.flurry.android.AdViewContainer getAdViewContainer()
    {
        return this.i;
    }

    public CharSequence getAgentVersion()
    {
        return this.b;
    }

    public CharSequence getApiKey()
    {
        return this.a;
    }

    public java.util.List getBindings()
    {
        return this.h;
    }

    public CharSequence getDevicePlatform()
    {
        return this.m;
    }

    public java.util.Map getKeywords()
    {
        return this.o;
    }

    public CharSequence getLocale()
    {
        return this.j;
    }

    public com.flurry.android.Location getLocation()
    {
        return this.f;
    }

    public CharSequence getOsVersion()
    {
        return this.l;
    }

    public Boolean getRefresh()
    {
        return Boolean.valueOf(this.p);
    }

    public Long getSessionId()
    {
        return Long.valueOf(this.d);
    }

    public com.flurry.android.TestAds getTestAds()
    {
        return this.n;
    }

    public Boolean getTestDevice()
    {
        return Boolean.valueOf(this.g);
    }

    public CharSequence getTimezone()
    {
        return this.k;
    }

    public boolean hasAdReportedIds()
    {
        return this.fieldSetFlags()[4];
    }

    public boolean hasAdSpaceName()
    {
        return this.fieldSetFlags()[2];
    }

    public boolean hasAdViewContainer()
    {
        return this.fieldSetFlags()[8];
    }

    public boolean hasAgentVersion()
    {
        return this.fieldSetFlags()[1];
    }

    public boolean hasApiKey()
    {
        return this.fieldSetFlags()[0];
    }

    public boolean hasBindings()
    {
        return this.fieldSetFlags()[7];
    }

    public boolean hasDevicePlatform()
    {
        return this.fieldSetFlags()[12];
    }

    public boolean hasKeywords()
    {
        return this.fieldSetFlags()[14];
    }

    public boolean hasLocale()
    {
        return this.fieldSetFlags()[9];
    }

    public boolean hasLocation()
    {
        return this.fieldSetFlags()[5];
    }

    public boolean hasOsVersion()
    {
        return this.fieldSetFlags()[11];
    }

    public boolean hasRefresh()
    {
        return this.fieldSetFlags()[15];
    }

    public boolean hasSessionId()
    {
        return this.fieldSetFlags()[3];
    }

    public boolean hasTestAds()
    {
        return this.fieldSetFlags()[13];
    }

    public boolean hasTestDevice()
    {
        return this.fieldSetFlags()[6];
    }

    public boolean hasTimezone()
    {
        return this.fieldSetFlags()[10];
    }

    public com.flurry.android.AdRequest$Builder setAdReportedIds(java.util.List p4)
    {
        this.validate(this.fields()[4], p4);
        this.e = p4;
        this.fieldSetFlags()[4] = 1;
        return this;
    }

    public com.flurry.android.AdRequest$Builder setAdSpaceName(CharSequence p4)
    {
        this.validate(this.fields()[2], p4);
        this.c = p4;
        this.fieldSetFlags()[2] = 1;
        return this;
    }

    public com.flurry.android.AdRequest$Builder setAdViewContainer(com.flurry.android.AdViewContainer p4)
    {
        this.validate(this.fields()[8], p4);
        this.i = p4;
        this.fieldSetFlags()[8] = 1;
        return this;
    }

    public com.flurry.android.AdRequest$Builder setAgentVersion(CharSequence p3)
    {
        this.validate(this.fields()[1], p3);
        this.b = p3;
        this.fieldSetFlags()[1] = 1;
        return this;
    }

    public com.flurry.android.AdRequest$Builder setApiKey(CharSequence p4)
    {
        this.validate(this.fields()[0], p4);
        this.a = p4;
        this.fieldSetFlags()[0] = 1;
        return this;
    }

    public com.flurry.android.AdRequest$Builder setBindings(java.util.List p4)
    {
        this.validate(this.fields()[7], p4);
        this.h = p4;
        this.fieldSetFlags()[7] = 1;
        return this;
    }

    public com.flurry.android.AdRequest$Builder setDevicePlatform(CharSequence p4)
    {
        this.validate(this.fields()[12], p4);
        this.m = p4;
        this.fieldSetFlags()[12] = 1;
        return this;
    }

    public com.flurry.android.AdRequest$Builder setKeywords(java.util.Map p4)
    {
        this.validate(this.fields()[14], p4);
        this.o = p4;
        this.fieldSetFlags()[14] = 1;
        return this;
    }

    public com.flurry.android.AdRequest$Builder setLocale(CharSequence p4)
    {
        this.validate(this.fields()[9], p4);
        this.j = p4;
        this.fieldSetFlags()[9] = 1;
        return this;
    }

    public com.flurry.android.AdRequest$Builder setLocation(com.flurry.android.Location p4)
    {
        this.validate(this.fields()[5], p4);
        this.f = p4;
        this.fieldSetFlags()[5] = 1;
        return this;
    }

    public com.flurry.android.AdRequest$Builder setOsVersion(CharSequence p4)
    {
        this.validate(this.fields()[11], p4);
        this.l = p4;
        this.fieldSetFlags()[11] = 1;
        return this;
    }

    public com.flurry.android.AdRequest$Builder setRefresh(boolean p4)
    {
        this.validate(this.fields()[15], Boolean.valueOf(p4));
        this.p = p4;
        this.fieldSetFlags()[15] = 1;
        return this;
    }

    public com.flurry.android.AdRequest$Builder setSessionId(long p4)
    {
        this.validate(this.fields()[3], Long.valueOf(p4));
        this.d = p4;
        this.fieldSetFlags()[3] = 1;
        return this;
    }

    public com.flurry.android.AdRequest$Builder setTestAds(com.flurry.android.TestAds p4)
    {
        this.validate(this.fields()[13], p4);
        this.n = p4;
        this.fieldSetFlags()[13] = 1;
        return this;
    }

    public com.flurry.android.AdRequest$Builder setTestDevice(boolean p4)
    {
        this.validate(this.fields()[6], Boolean.valueOf(p4));
        this.g = p4;
        this.fieldSetFlags()[6] = 1;
        return this;
    }

    public com.flurry.android.AdRequest$Builder setTimezone(CharSequence p4)
    {
        this.validate(this.fields()[10], p4);
        this.k = p4;
        this.fieldSetFlags()[10] = 1;
        return this;
    }
}
