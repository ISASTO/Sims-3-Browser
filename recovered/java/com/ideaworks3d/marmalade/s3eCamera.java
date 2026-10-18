package com.ideaworks3d.marmalade;
 class s3eCamera implements android.hardware.Camera$PreviewCallback, com.ideaworks3d.marmalade.SuspendResumeListener {
    static final int S3E_CAMERA_AUTO_FOCUS = 3;
    static final int S3E_CAMERA_AVAILABLE = 0;
    static final int S3E_CAMERA_BRIGHTNESS = 4;
    static final int S3E_CAMERA_BUSY = 2;
    static final int S3E_CAMERA_CONTRAST = 5;
    static final int S3E_CAMERA_PIXEL_TYPE_NV21 = 4097;
    static final int S3E_CAMERA_PIXEL_TYPE_RGB565 = 1058;
    static final int S3E_CAMERA_QUALITY = 6;
    static final int S3E_CAMERA_STATUS = 1;
    static final int S3E_CAMERA_TYPE = 7;
    int m_AutoFocus;
    private byte[] m_Buffer;
    private android.hardware.Camera m_Camera;
    int m_Hint;
    private boolean m_NeedsRemovePreview;
    private com.ideaworks3d.marmalade.s3eCamera$Preview m_Preview;
    int m_Quality;
    private android.hardware.Camera$Size m_Size;
    int m_Type;
    private com.ideaworks3d.marmalade.LoaderView m_View;
    reflect.Method m_addCallbackBuffer;
    reflect.Method m_setPreviewCallbackWithBuffer;
    private boolean running;

    public s3eCamera()
    {
        this.m_Hint = 0;
        this.m_Type = 0;
        this.m_Quality = 0;
        this.m_AutoFocus = 0;
        this.running = 0;
        this.m_NeedsRemovePreview = 0;
        com.ideaworks3d.marmalade.LoaderAPI.addSuspendResumeListener(this);
        return;
    }

    static synthetic android.hardware.Camera access$000(com.ideaworks3d.marmalade.s3eCamera p1)
    {
        return p1.m_Camera;
    }

    static synthetic android.hardware.Camera access$002(com.ideaworks3d.marmalade.s3eCamera p0, android.hardware.Camera p1)
    {
        p0.m_Camera = p1;
        return p1;
    }

    private android.hardware.Camera$Size getOptimalPreviewSize(java.util.List p10, int p11, int p12)
    {
        java.util.Iterator v3 = p10.iterator();
        android.hardware.Camera$Size v2 = 0;
        double v0_1 = 9218868437227405311;
        while (v3.hasNext()) {
            android.hardware.Camera$Size v9_1 = ((android.hardware.Camera$Size) v3.next());
            android.util.Log.i("CameraView", new StringBuilder().append("Available size: ").append(v9_1.width).append("x").append(v9_1.height).toString());
            double v4_5 = ((double) (Math.abs((v9_1.height - p12)) + Math.abs((v9_1.width - p11))));
            if (v4_5 < v0_1) {
                v0_1 = v4_5;
                v2 = v9_1;
            }
        }
        return v2;
    }

    private native void previewCallback(byte[] p0, int p1, int p2, int p3, int p4);

    public int createPreview()
    {
        android.view.WindowManager$LayoutParams v0_1 = new android.view.WindowManager$LayoutParams();
        v0_1.flags = (v0_1.flags | 8);
        v0_1.flags = (v0_1.flags | 16);
        v0_1.flags = (v0_1.flags | 512);
        v0_1.flags = (v0_1.flags | 1024);
        v0_1.gravity = 85;
        v0_1.x = 0;
        v0_1.y = 0;
        v0_1.width = 1;
        v0_1.height = 1;
        this.m_Preview = new com.ideaworks3d.marmalade.s3eCamera$Preview(this, com.ideaworks3d.marmalade.LoaderActivity.m_Activity);
        this.m_NeedsRemovePreview = 1;
        com.ideaworks3d.marmalade.LoaderActivity.m_Activity.getWindow().getWindowManager().addView(this.m_Preview, v0_1);
        return 0;
    }

    public void onPreviewFrame(byte[] p7, android.hardware.Camera p8)
    {
        this.previewCallback(p7, p8.getParameters().getPreviewFormat(), this.m_Size.width, this.m_Size.height, com.ideaworks3d.marmalade.LoaderActivity.m_Activity.LoaderThread().getOrientation());
        if (this.m_addCallbackBuffer != null) {
            try {
                Exception v0_4 = this.m_addCallbackBuffer;
                android.hardware.Camera v1_1 = this.m_Camera;
                Object[] v2_1 = new Object[1];
                v2_1[0] = this.m_Buffer;
                億.invokeHook(v0_4, v1_1, v2_1);
            } catch (Exception v0) {
            }
        }
        return;
    }

    public void onSuspendResumeEvent(com.ideaworks3d.marmalade.SuspendResumeEvent p4)
    {
        if (this.running) {
            if (p4.eventType == com.ideaworks3d.marmalade.SuspendResumeEvent$EventType.RESUME) {
                this.s3eCameraStart(this.m_Hint, 4097, this.m_Quality);
            }
            if (p4.eventType == com.ideaworks3d.marmalade.SuspendResumeEvent$EventType.SUSPEND) {
                this.s3eCameraStop();
                this.running = 1;
            }
            if (p4.eventType == com.ideaworks3d.marmalade.SuspendResumeEvent$EventType.SHUTDOWN) {
                this.s3eCameraStop();
            }
        }
        return;
    }

    public int removePreview()
    {
        if ((this.m_Preview == null) || (!this.m_NeedsRemovePreview)) {
            int v0_3 = 1;
        } else {
            this.m_NeedsRemovePreview = 0;
            com.ideaworks3d.marmalade.LoaderActivity.m_Activity.getWindow().getWindowManager().removeViewImmediate(this.m_Preview);
            this.m_Preview = 0;
            v0_3 = 0;
        }
        return v0_3;
    }

    public int s3eCameraGetInt(int p9)
    {
        int v0_1;
        if (p9 != 1) {
            if (p9 != 0) {
                v0_1 = 0;
            } else {
                int v0_4 = com.ideaworks3d.marmalade.LoaderActivity.m_Activity.getPackageManager();
                try {
                    int v3_1 = new Class[1];
                    v3_1[0] = String;
                    reflect.Method v1_0 = android.content.pm.PackageManager.getMethod("hasSystemFeature", v3_1);
                    Object[] v2_1 = new Object[1];
                    v2_1[0] = "android.hardware.camera";
                } catch (int v0) {
                    v0_1 = 1;
                }
                if (!((Boolean) 億.invokeHook(v1_0, v0_4, v2_1)).booleanValue()) {
                    v0_1 = 0;
                } else {
                    v0_1 = 1;
                }
            }
        } else {
            if (this.m_Camera != null) {
                v0_1 = 1;
            } else {
                v0_1 = 0;
            }
        }
        return v0_1;
    }

    public boolean s3eCameraIsFormatSupported(int p9)
    {
        android.hardware.Camera v0_11;
        if (p9 != 4097) {
            if (p9 == 1058) {
                try {
                    android.hardware.Camera v1_0;
                    if (this.m_Camera != null) {
                        v1_0 = 0;
                        try {
                            android.hardware.Camera v0_3 = this.m_Camera.getParameters();
                            String v4_1 = new Class[0];
                            String v3_2 = new Object[0];
                            android.hardware.Camera v0_6 = ((java.util.List) 億.invokeHook(v0_3.getClass().getMethod("getSupportedPreviewFormats", v4_1), v0_3, v3_2));
                            android.util.Log.i("CameraView", new StringBuilder().append("Supported formats: ").append(v0_6).toString());
                        } catch (android.hardware.Camera v0) {
                            android.hardware.Camera v0_0 = v1_0;
                        } catch (android.hardware.Camera v0_9) {
                            if (v1_0 == 1) {
                                this.m_Camera.release();
                                this.m_Camera = 0;
                            }
                            throw v0_9;
                        }
                        if (!v0_6.contains(Integer.valueOf(4))) {
                            if (v1_0 == 1) {
                                this.m_Camera.release();
                                this.m_Camera = 0;
                            }
                        } else {
                            if (v1_0 == 1) {
                                this.m_Camera.release();
                                this.m_Camera = 0;
                            }
                            v0_11 = 1;
                            return v0_11;
                        }
                        v0_11 = 0;
                        return v0_11;
                    } else {
                        this.m_Camera = android.hardware.Camera.open();
                        v1_0 = 1;
                    }
                } catch (android.hardware.Camera v0) {
                    v0_0 = 0;
                } catch (android.hardware.Camera v0_9) {
                    v1_0 = 0;
                }
                if (v0_0 == 1) {
                    this.m_Camera.release();
                    this.m_Camera = 0;
                }
                v0_11 = 0;
                return v0_11;
            }
        } else {
            v0_11 = 1;
        }
        return v0_11;
    }

    public int s3eCameraSetInt(int p2, int p3)
    {
        if (p2 == 7) {
            this.m_Type = p3;
        }
        // Both branches of the condition point to the same code.
        // if ((p2 == 3) && (this.m_Camera == null)) {
            return 0;
        // }
    }

    public int s3eCameraStart(int p8, int p9, int p10)
    {
        this.m_Hint = p8;
        this.m_Quality = p10;
        this.m_View = com.ideaworks3d.marmalade.LoaderActivity.m_Activity.m_View;
        try {
            Object[] v2_1 = new Class[1];
            v2_1[0] = android.hardware.Camera$PreviewCallback;
            this.m_setPreviewCallbackWithBuffer = android.hardware.Camera.getMethod("setPreviewCallbackWithBuffer", v2_1);
            Object[] v2_3 = new Class[1];
            v2_3[0] = byte[];
            this.m_addCallbackBuffer = android.hardware.Camera.getMethod("addCallbackBuffer", v2_3);
        } catch (android.hardware.Camera v0_29) {
            com.ideaworks3d.marmalade.LoaderAPI.getStackTrace(v0_29);
            if (this.m_setPreviewCallbackWithBuffer == null) {
                com.ideaworks3d.marmalade.LoaderActivity.m_Activity.runOnUiThread(new com.ideaworks3d.marmalade.s3eCamera$2(this));
            }
            this.running = 1;
            android.hardware.Camera v0_0 = 0;
            return v0_0;
        }
        if (this.m_Type != 0) {
            try {
                Object[] v2_5 = new Class[1];
                v2_5[0] = Integer.TYPE;
                android.hardware.Camera v0_9 = android.hardware.Camera.getMethod("open", v2_5);
                Object[] v2_7 = new Object[1];
                v2_7[0] = Integer.valueOf(this.m_Type);
                this.m_Camera = ((android.hardware.Camera) 億.invokeHook(v0_9, 0, v2_7));
            } catch (android.hardware.Camera v0) {
                com.ideaworks3d.marmalade.LoaderAPI.trace("Did not find open specific camera method");
                this.m_Camera = android.hardware.Camera.open();
            }
        } else {
            this.m_Camera = android.hardware.Camera.open();
        }
        this.setCameraParameters();
        com.ideaworks3d.marmalade.LoaderAPI.trace("Creating image buffer");
        android.hardware.Camera v0_22 = new byte[((this.m_Size.width * this.m_Size.height) * 2)];
        this.m_Buffer = v0_22;
        com.ideaworks3d.marmalade.LoaderAPI.trace("Invoking preview methods");
        android.hardware.Camera v0_24 = this.m_addCallbackBuffer;
        String v1_8 = this.m_Camera;
        Object[] v2_9 = new Object[1];
        v2_9[0] = this.m_Buffer;
        億.invokeHook(v0_24, v1_8, v2_9);
        android.hardware.Camera v0_26 = this.m_setPreviewCallbackWithBuffer;
        String v1_9 = this.m_Camera;
        Object[] v2_11 = new Object[1];
        v2_11[0] = this;
        億.invokeHook(v0_26, v1_9, v2_11);
        if (android.os.Build$VERSION.SDK_INT >= 11) {
            com.ideaworks3d.marmalade.LoaderActivity.m_Activity.runOnUiThread(new com.ideaworks3d.marmalade.s3eCamera$1(this));
        }
        this.m_Camera.startPreview();
        this.running = 1;
        android.util.Log.i("CameraView", "done");
        v0_0 = 0;
        return v0_0;
    }

    public int s3eCameraStop()
    {
        this.running = 0;
        if (this.m_setPreviewCallbackWithBuffer != null) {
            this.m_Camera.setPreviewCallback(0);
            this.m_Camera.stopPreview();
            this.m_Camera.release();
            this.m_Camera = 0;
            this.m_Buffer = 0;
        }
        if (this.m_NeedsRemovePreview) {
            com.ideaworks3d.marmalade.LoaderActivity.m_Activity.runOnUiThread(new com.ideaworks3d.marmalade.s3eCamera$3(this));
        }
        return 0;
    }

    public void setCameraParameters()
    {
        com.ideaworks3d.marmalade.LoaderAPI.trace("Setting camera parameters");
        android.hardware.Camera$Parameters v2 = this.m_Camera.getParameters();
        try {
            int v3_16 = v2.getClass();
            String v4_4 = new Class[0];
            String v4_6 = new Object[0];
            String v0_19 = ((java.util.List) 億.invokeHook(v3_16.getMethod("getSupportedPreviewSizes", v4_4), v2, v4_6));
            try {
                String v4_8 = new Class[0];
                int v3_1 = new Object[0];
                int v1_12 = ((java.util.List) 億.invokeHook(v3_16.getMethod("getSupportedPreviewFormats", v4_8), v2, v3_1));
                android.util.Log.i("CameraView", new StringBuilder().append("Supported formats: ").append(v1_12).toString());
            } catch (int v1) {
                android.util.Log.i("CameraView", "Could not request alternative preview format (OS Version < 2.0?)");
                int v3_10;
                int v1_23;
                com.ideaworks3d.marmalade.LoaderAPI.trace("Setting preview size");
                if (this.m_Hint != 2) {
                    if (this.m_Hint != 1) {
                        v3_10 = (this.m_View.m_Width / 4);
                        v1_23 = (this.m_View.m_Height / 4);
                    } else {
                        v3_10 = (this.m_View.m_Width / 2);
                        v1_23 = (this.m_View.m_Height / 2);
                    }
                } else {
                    v3_10 = this.m_View.m_Width;
                    v1_23 = this.m_View.m_Height;
                }
                if (v0_19 == null) {
                    v2.setPreviewSize(v3_10, v1_23);
                } else {
                    android.util.Log.i("CameraView", new StringBuilder().append("Ideal size: ").append(v3_10).append("x").append(v1_23).toString());
                    this.m_Size = this.getOptimalPreviewSize(v0_19, v3_10, v1_23);
                    android.util.Log.i("CameraView", new StringBuilder().append("Got size: ").append(this.m_Size.width).append("x").append(this.m_Size.height).toString());
                    v2.setPreviewSize(this.m_Size.width, this.m_Size.height);
                }
                if (this.m_Type != 0) {
                    com.ideaworks3d.marmalade.LoaderAPI.trace("Setting camera ID");
                    v2.set("camera-id", (this.m_Type + 1));
                }
                this.m_Size = v2.getPreviewSize();
                try {
                    this.m_Camera.setParameters(v2);
                } catch (String v0) {
                    android.util.Log.i("CameraView", "Exception setting requested preview size");
                }
                return;
            }
            if (!v1_12.contains(Integer.valueOf(4))) {
            } else {
                v2.setPreviewFormat(4);
            }
        } catch (String v0) {
            v0_19 = 0;
        }
    }
}
