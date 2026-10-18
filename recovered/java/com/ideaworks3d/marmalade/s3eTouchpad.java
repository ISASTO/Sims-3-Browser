package com.ideaworks3d.marmalade;
 class s3eTouchpad {
    static final int S3E_TOUCHPAD_AVAILABLE = 0;
    static final int S3E_TOUCHPAD_HEIGHT = 2;
    static final int S3E_TOUCHPAD_WIDTH = 1;
    private static int m_Height;
    private static int m_Width;
    private int inputDeviceId;
    private boolean processPositionEvents;

    static s3eTouchpad()
    {
        com.ideaworks3d.marmalade.s3eTouchpad.m_Width = 0;
        com.ideaworks3d.marmalade.s3eTouchpad.m_Height = 0;
        return;
    }

    s3eTouchpad()
    {
        this.inputDeviceId = -1;
        return;
    }

    public static native void onMotionEvent(int p0, int p1, int p2, int p3);

    public static boolean onTouchEvent(android.view.MotionEvent p9)
    {
        int v0_5;
        if (1048584 == p9.getSource()) {
            int v0_6 = p9.getAction();
            int v1_0 = ((65280 & v0_6) >> 8);
            if (v0_6 != 2) {
                if ((v0_6 != 0) && (v0_6 != 1)) {
                    int v2_1 = p9.getPointerId(v1_0);
                    int v0_0 = (v0_6 & 255);
                    if ((v0_0 == 6) || (v0_0 == 5)) {
                        com.ideaworks3d.marmalade.s3eTouchpad.onMotionEvent(v2_1, ((v0_0 - 5) + 4), ((int) p9.getX(v1_0)), (com.ideaworks3d.marmalade.s3eTouchpad.m_Height - ((int) p9.getY(v1_0))));
                    }
                } else {
                    com.ideaworks3d.marmalade.s3eTouchpad.onMotionEvent(p9.getPointerId(0), (v0_6 + 4), ((int) p9.getX()), (com.ideaworks3d.marmalade.s3eTouchpad.m_Height - ((int) p9.getY())));
                }
            } else {
                int v1_6 = p9.getPointerCount();
                int v2_4 = 0;
                while (v2_4 < v1_6) {
                    com.ideaworks3d.marmalade.s3eTouchpad.onMotionEvent(p9.getPointerId(v2_4), (v0_6 + 4), ((int) p9.getX(v2_4)), (com.ideaworks3d.marmalade.s3eTouchpad.m_Height - ((int) p9.getY(v2_4))));
                    v2_4++;
                }
            }
            v0_5 = 1;
        } else {
            v0_5 = 0;
        }
        return v0_5;
    }

    public int s3eTouchpadGetInt(int p8)
    {
        int v0_5;
        if (p8 != 0) {
            if (p8 != 1) {
                if (p8 != 2) {
                    v0_5 = 0;
                } else {
                    v0_5 = com.ideaworks3d.marmalade.s3eTouchpad.m_Height;
                }
            } else {
                v0_5 = com.ideaworks3d.marmalade.s3eTouchpad.m_Width;
            }
        } else {
            com.ideaworks3d.marmalade.LoaderAPI.trace("Touchpad GetInt S3E_TOUCHPAD_AVAILABLE");
            if (this.inputDeviceId != -1) {
                int v0_3 = com.ideaworks3d.marmalade.LoaderActivity.m_Activity.getResources().getConfiguration();
                try {
                    com.ideaworks3d.marmalade.LoaderAPI.trace(new StringBuilder().append("Android build: ").append(android.os.Build.ID).toString());
                    com.ideaworks3d.marmalade.LoaderAPI.trace(new StringBuilder().append("Checking for legacy Xperia Play build ID: ").append("3.0.A.2.").toString());
                } catch (String v1) {
                    com.ideaworks3d.marmalade.LoaderAPI.trace("Error parsing build ID");
                    if (v0_3.navigationHidden == 2) {
                        v0_5 = 0;
                    } else {
                        v0_5 = 1;
                    }
                    com.ideaworks3d.marmalade.LoaderAPI.trace(new StringBuilder().append("Touchpad available: ").append(v0_5).toString());
                }
                if ((!android.os.Build.ID.startsWith("3.0.A.2.")) || (Integer.parseInt(android.os.Build.ID.substring("3.0.A.2.".length())) > 181)) {
                } else {
                    com.ideaworks3d.marmalade.LoaderAPI.trace("Found... Using legacy Configuration enum");
                    if (v0_3.hardKeyboardHidden == 2) {
                        v0_5 = 0;
                    } else {
                        v0_5 = 1;
                    }
                }
            } else {
                v0_5 = 0;
            }
        }
        return v0_5;
    }

    public boolean s3eTouchpadInit()
    {
        int v0_0 = android.view.InputDevice.getDeviceIds();
        int v1 = v0_0.length;
        int v2 = 0;
        while (v2 < v1) {
            int v3 = v0_0[v2];
            int v4_0 = android.view.InputDevice.getDevice(v3);
            if ((v4_0.getSources() & 1048584) > 0) {
                int v5_2 = v4_0.getMotionRange(0);
                int v4_1 = v4_0.getMotionRange(1);
                if ((v5_2 != 0) && (v4_1 != 0)) {
                    com.ideaworks3d.marmalade.s3eTouchpad.m_Width = ((int) v5_2.getMax());
                    com.ideaworks3d.marmalade.s3eTouchpad.m_Height = ((int) v4_1.getMax());
                    if ((com.ideaworks3d.marmalade.s3eTouchpad.m_Width > 0) && (com.ideaworks3d.marmalade.s3eTouchpad.m_Height > 0)) {
                        if (!this.setProcessPositionEvents(1)) {
                            int v0_2 = 0;
                            return v0_2;
                        } else {
                            this.inputDeviceId = v3;
                            v0_2 = 1;
                            return v0_2;
                        }
                    }
                }
            }
            v2++;
        }
        v0_2 = 0;
        return v0_2;
    }

    public void s3eTouchpadTerminate()
    {
        if (this.processPositionEvents) {
            this.setProcessPositionEvents(0);
        }
        return;
    }

    public boolean setProcessPositionEvents(boolean p9)
    {
        Exception v0_4;
        if (Integer.parseInt(android.os.Build$VERSION.SDK) < 9) {
            v0_4 = 0;
        } else {
            try {
                Exception v0_2 = com.ideaworks3d.marmalade.LoaderActivity.m_Activity.getWindow().getDecorView().getRootView().getParent();
                reflect.Method v1_1 = Class.forName("android.view.ViewRoot");
                int v3_1 = new Class[1];
                v3_1[0] = Boolean.TYPE;
                reflect.Method v1_2 = v1_1.getMethod("setProcessPositionEvents", v3_1);
                Object[] v2_2 = new Object[1];
                v2_2[0] = Boolean.valueOf(p9);
                億.invokeHook(v1_2, v0_2, v2_2);
                v0_4 = 1;
            } catch (Exception v0) {
            }
        }
        return v0_4;
    }
}
