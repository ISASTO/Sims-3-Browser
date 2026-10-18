package com.ideaworks3d.marmalade;
 class LoaderGL$ConfigSetting {
    private int mDefault;
    private String mName;
    private int mSetting;
    private int mValue;
    final synthetic com.ideaworks3d.marmalade.LoaderGL this$0;

    public LoaderGL$ConfigSetting(com.ideaworks3d.marmalade.LoaderGL p2, String p3, int p4)
    {
        this.this$0 = p2;
        this.Construct(p3, p4, -1);
        return;
    }

    public LoaderGL$ConfigSetting(com.ideaworks3d.marmalade.LoaderGL p1, String p2, int p3, int p4)
    {
        this.this$0 = p1;
        this.Construct(p2, p3, p4);
        return;
    }

    private void Construct(String p4, int p5, int p6)
    {
        this.mName = p4;
        this.mSetting = p5;
        this.mDefault = p6;
        int v0_2 = new int[1];
        v0_2[0] = -1;
        if (com.ideaworks3d.marmalade.LoaderAPI.s3eConfigGetInt("GL", p4, v0_2) != 0) {
            this.mValue = p6;
        } else {
            this.mValue = v0_2[0];
        }
        return;
    }

    public int GetDefault()
    {
        return this.mDefault;
    }

    public String GetName()
    {
        return this.mName;
    }

    public int GetSetting()
    {
        return this.mSetting;
    }

    public int GetValue()
    {
        return this.mValue;
    }

    public boolean HasValue()
    {
        int v0_1;
        if (this.mValue == -1) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public void SetValueToDefault()
    {
        this.mValue = this.mDefault;
        return;
    }
}
