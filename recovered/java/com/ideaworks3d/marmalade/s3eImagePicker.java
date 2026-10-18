package com.ideaworks3d.marmalade;
 class s3eImagePicker {
    static final String[] CURSOR_TYPE = None;
    static final int S3E_IMAGEPICKER_FORMAT_ANY = 0;
    static final int S3E_IMAGEPICKER_FORMAT_ANYIMAGE = 6;
    static final int S3E_IMAGEPICKER_FORMAT_ANYVIDEO = 5;
    static final int S3E_IMAGEPICKER_FORMAT_BMP = 3;
    static final int S3E_IMAGEPICKER_FORMAT_GIF = 4;
    static final int S3E_IMAGEPICKER_FORMAT_JPG = 1;
    static final int S3E_IMAGEPICKER_FORMAT_PNG = 2;
    static final int S3E_IMAGEPICKER_FORMAT_UNKNOWN = 7;
    private volatile boolean waitingForFile;

    static s3eImagePicker()
    {
        String[] v0_1 = new String[2];
        v0_1[0] = "_data";
        v0_1[1] = "_id";
        com.ideaworks3d.marmalade.s3eImagePicker.CURSOR_TYPE = v0_1;
        return;
    }

    s3eImagePicker()
    {
        return;
    }

    static synthetic boolean access$002(com.ideaworks3d.marmalade.s3eImagePicker p0, boolean p1)
    {
        p0.waitingForFile = p1;
        return p1;
    }

    public native boolean ImagePicker_addResultString(String p0);

    public java.io.File convertUriToFile(android.net.Uri p6)
    {
        java.io.File v0_0 = new java.io.File[1];
        this.waitingForFile = 1;
        com.ideaworks3d.marmalade.LoaderActivity.m_Activity.getCursor(p6, com.ideaworks3d.marmalade.s3eImagePicker.CURSOR_TYPE, new com.ideaworks3d.marmalade.s3eImagePicker$1(this, v0_0, p6));
        while (this.waitingForFile) {
            com.ideaworks3d.marmalade.LoaderAPI.s3eDeviceYield(1);
        }
        return v0_0[0];
    }

    public String s3eImagePickerToFile(int p5, int p6)
    {
        int v0_8;
        int v0_0 = new android.content.Intent("android.intent.action.PICK", android.provider.MediaStore$Images$Media.EXTERNAL_CONTENT_URI);
        switch (p5) {
            case 0:
                v0_0 = new android.content.Intent("android.intent.action.PICK");
                v0_0.setType("*/*");
                int v0_3 = com.ideaworks3d.marmalade.LoaderActivity.m_Activity.ExecuteIntent(v0_0);
                if (v0_3 != 0) {
                    int v0_5 = this.convertUriToFile(v0_3.getData());
                    if (v0_5 != 0) {
                        v0_8 = new StringBuilder().append("raw://").append(v0_5.getPath()).toString();
                        if (this.ImagePicker_addResultString(v0_8)) {
                        } else {
                            v0_8 = 0;
                        }
                    } else {
                        v0_8 = 0;
                    }
                } else {
                    v0_8 = 0;
                }
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 6:
                v0_0.setType("image/*");
                break;
            case 5:
                v0_0 = new android.content.Intent("android.intent.action.PICK", android.provider.MediaStore$Video$Media.EXTERNAL_CONTENT_URI);
                v0_0.setType("video/*");
                break;
            default:
                v0_8 = 0;
        }
        return v0_8;
    }
}
