package com.ideaworks3d.marmalade;
 class CameraCapture {
    static final int S3E_CAMERACAPTURE_BMP = 3;
    static final int S3E_CAMERACAPTURE_JPG = 1;
    static final int S3E_CAMERACAPTURE_PNG = 2;
    static final int S3E_CAMERACAPTURE_VIDEO = 4;
    private static int images;
    private static volatile boolean m_WaitingForFile;
    private static int videos;

    static CameraCapture()
    {
        com.ideaworks3d.marmalade.CameraCapture.images = 0;
        com.ideaworks3d.marmalade.CameraCapture.videos = 0;
        return;
    }

    CameraCapture()
    {
        return;
    }

    static synthetic boolean access$002(boolean p0)
    {
        com.ideaworks3d.marmalade.CameraCapture.m_WaitingForFile = p0;
        return p0;
    }

    public static java.io.File convertUriToFile(android.net.Uri p4, String[] p5)
    {
        java.io.File v0_0 = new java.io.File[1];
        com.ideaworks3d.marmalade.CameraCapture.m_WaitingForFile = 1;
        com.ideaworks3d.marmalade.LoaderActivity.m_Activity.getCursor(p4, p5, new com.ideaworks3d.marmalade.CameraCapture$1(v0_0));
        while (com.ideaworks3d.marmalade.CameraCapture.m_WaitingForFile) {
            com.ideaworks3d.marmalade.LoaderAPI.s3eDeviceYield(1);
        }
        return v0_0[0];
    }

    private java.io.File startCaptureImage()
    {
        java.io.File v0_1 = new android.content.ContentValues();
        String[] v1_1 = new android.content.Intent("android.media.action.IMAGE_CAPTURE");
        String v3_0 = new StringBuilder().append("New image ");
        int v4_0 = com.ideaworks3d.marmalade.CameraCapture.videos;
        com.ideaworks3d.marmalade.CameraCapture.videos = (v4_0 + 1);
        v0_1.put("title", v3_0.append(v4_0).toString());
        v0_1.put("description", "Image captured by s3eCamera");
        try {
            java.io.File v0_2 = com.ideaworks3d.marmalade.LoaderActivity.m_Activity.getContentResolver().insert(android.provider.MediaStore$Images$Media.EXTERNAL_CONTENT_URI, v0_1);
        } catch (java.io.File v0) {
            String v2_5 = new StringBuilder().append("/sdcard/image");
            String v3_6 = com.ideaworks3d.marmalade.CameraCapture.images;
            com.ideaworks3d.marmalade.CameraCapture.images = (v3_6 + 1);
            v0_2 = android.net.Uri.fromFile(new java.io.File(v2_5.append(v3_6).toString()));
        }
        java.io.File v0_5;
        v1_1.putExtra("output", v0_2);
        v1_1.putExtra("android.intent.extra.videoQuality", 1);
        com.ideaworks3d.marmalade.LoaderAPI.trace("Executing Camera Capture intent");
        if (com.ideaworks3d.marmalade.LoaderActivity.m_Activity.ExecuteIntent(v1_1) != null) {
            com.ideaworks3d.marmalade.LoaderAPI.trace("Retrieving image url");
            String[] v1_5 = new String[2];
            v1_5[0] = "_data";
            v1_5[1] = "_id";
            v0_5 = com.ideaworks3d.marmalade.CameraCapture.convertUriToFile(v0_2, v1_5);
        } else {
            com.ideaworks3d.marmalade.LoaderAPI.trace("Activity returned null, assuming cancelled");
            v0_5 = 0;
        }
        return v0_5;
    }

    private java.io.File startCaptureVideo()
    {
        java.io.File v0_2;
        java.io.File v0_3 = new android.content.Intent("android.media.action.VIDEO_CAPTURE");
        v0_3.putExtra("android.intent.extra.videoQuality", 1);
        java.io.File v0_4 = com.ideaworks3d.marmalade.LoaderActivity.m_Activity.ExecuteIntent(v0_3);
        if ((v0_4 != null) && (v0_4.getData() != null)) {
            String[] v1_2 = new String[2];
            v1_2[0] = "_data";
            v1_2[1] = "_id";
            v0_2 = com.ideaworks3d.marmalade.CameraCapture.convertUriToFile(v0_4.getData(), v1_2);
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    public int s3eCameraCaptureGetInt(int p3)
    {
        if ((1 != p3) && (4 != p3)) {
            RuntimeException v0_2 = -1;
        } else {
            try {
                android.hardware.Camera.open().release();
                v0_2 = 1;
            } catch (RuntimeException v0) {
            }
        }
        return v0_2;
    }

    public String s3eCameraCaptureToFile(int p4)
    {
        String v0_5;
        if (p4 != 4) {
            if (p4 != 1) {
                v0_5 = 0;
            } else {
                v0_5 = this.startCaptureImage();
            }
        } else {
            v0_5 = this.startCaptureVideo();
        }
        String v0_3;
        if (v0_5 != null) {
            v0_3 = new StringBuilder().append("raw://").append(v0_5.getPath()).toString();
        } else {
            v0_3 = 0;
        }
        return v0_3;
    }
}
