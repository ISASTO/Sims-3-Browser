package com.ideaworks3d.marmalade;
public class LoaderView extends android.view.SurfaceView implements android.content.DialogInterface$OnClickListener, android.content.DialogInterface$OnDismissListener, android.view.SurfaceHolder$Callback {
    private static int[] g_PixelsLast;
    private static com.ideaworks3d.marmalade.LoaderGL m_LoaderGL;
    private final Runnable m_BacklightOn;
    private android.widget.EditText m_EditText;
    private String m_ErrorBody;
    private android.app.Dialog m_ErrorDialog;
    private int m_ErrorRtn;
    public boolean m_ErrorRunning;
    private String m_ErrorTitle;
    private int m_ErrorType;
    private android.graphics.Bitmap m_FullScreenBitmap;
    public javax.microedition.khronos.opengles.GL m_GL;
    android.os.Handler m_Handler;
    public int m_Height;
    private android.app.Dialog m_InputDialog;
    private String m_InputTextDefault;
    private int m_InputTextFlags;
    private String m_InputTextResult;
    public boolean m_InputTextRunning;
    private String m_InputTextTitle;
    public com.ideaworks3d.marmalade.LoaderActivity m_LoaderActivity;
    public com.ideaworks3d.marmalade.LoaderKeyboard m_LoaderKeyboard;
    private android.graphics.Paint m_Paint;
    private int[] m_Pixels;
    private final Runnable m_RunOnOSThread;
    private final Runnable m_ShowError;
    private final Runnable m_ShowInputText;
    private android.view.SurfaceHolder m_SurfaceHolder;
    private boolean m_UseGL;
    private android.os.Vibrator m_Vibrator;
    private int m_VideoState;
    private com.ideaworks3d.marmalade.S3EVideoView m_VideoView;
    public int m_Width;

    static LoaderView()
    {
        com.ideaworks3d.marmalade.LoaderView.m_LoaderGL = new com.ideaworks3d.marmalade.LoaderGL();
        return;
    }

    public LoaderView(com.ideaworks3d.marmalade.LoaderActivity p6, boolean p7)
    {
        super(p6);
        super.m_Paint = new android.graphics.Paint();
        super.m_Handler = new android.os.Handler();
        super.m_ErrorDialog = 0;
        super.m_ErrorRunning = 0;
        super.m_InputDialog = 0;
        super.m_UseGL = 0;
        super.m_InputTextResult = 0;
        super.m_InputTextRunning = 0;
        super.m_VideoView = 0;
        super.m_VideoState = 0;
        super.m_ShowError = new com.ideaworks3d.marmalade.LoaderView$1(super);
        super.m_ShowInputText = new com.ideaworks3d.marmalade.LoaderView$2(super);
        super.m_BacklightOn = new com.ideaworks3d.marmalade.LoaderView$3(super);
        super.m_RunOnOSThread = new com.ideaworks3d.marmalade.LoaderView$4(super);
        super.m_UseGL = p7;
        super.m_LoaderActivity = p6;
        super.m_Vibrator = ((android.os.Vibrator) super.m_LoaderActivity.getSystemService("vibrator"));
        super.m_SurfaceHolder = super.getHolder();
        super.m_SurfaceHolder.addCallback(super);
        super.m_LoaderKeyboard = new com.ideaworks3d.marmalade.LoaderKeyboard(super);
        if (!p7) {
            super.m_SurfaceHolder.setType(1);
        } else {
            super.m_SurfaceHolder.setType(2);
            int v0_19 = new int[1];
            if (com.ideaworks3d.marmalade.LoaderAPI.s3eConfigGetInt("GL", "AndroidSurfaceHolder", v0_19) == 0) {
                super.m_SurfaceHolder.setFormat(v0_19[0]);
            }
        }
        super.setFocusable(1);
        super.setFocusableInTouchMode(1);
        super.setId(1983274);
        return;
    }

    static synthetic void access$000(com.ideaworks3d.marmalade.LoaderView p0)
    {
        p0.showErrorReal();
        return;
    }

    static synthetic Runnable access$100(com.ideaworks3d.marmalade.LoaderView p1)
    {
        return p1.m_RunOnOSThread;
    }

    static synthetic void access$200(com.ideaworks3d.marmalade.LoaderView p0)
    {
        p0.runOnOSThreadNative();
        return;
    }

    static synthetic com.ideaworks3d.marmalade.S3EVideoView access$300(com.ideaworks3d.marmalade.LoaderView p1)
    {
        return p1.m_VideoView;
    }

    static synthetic com.ideaworks3d.marmalade.S3EVideoView access$302(com.ideaworks3d.marmalade.LoaderView p0, com.ideaworks3d.marmalade.S3EVideoView p1)
    {
        p0.m_VideoView = p1;
        return p1;
    }

    private void backlightOn()
    {
        this.m_Handler.post(this.m_BacklightOn);
        return;
    }

    private native void runOnOSThreadNative();

    private native void setInputText(String p0);

    private native void setPixelsNative(int p0, int p1, int[] p2);

    private void showErrorReal()
    {
        android.app.Dialog v0_1 = new android.app.AlertDialog$Builder(this.m_LoaderActivity);
        this.m_ErrorRtn = 0;
        v0_1.setTitle(this.m_ErrorTitle);
        v0_1.setMessage(this.m_ErrorBody);
        v0_1.setPositiveButton("Continue", this);
        if (this.m_ErrorType > 0) {
            v0_1.setNegativeButton("Stop", this);
        }
        if (this.m_ErrorType > 1) {
            v0_1.setNeutralButton("Ignore", this);
        }
        this.m_ErrorDialog = v0_1.create();
        this.m_ErrorDialog.setOnDismissListener(this);
        this.m_ErrorDialog.show();
        return;
    }

    private boolean videoIsPlaying()
    {
        int v0_1;
        if (this.videoGetStatus() != 1) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    private native void videoStoppedNotify();

    public void doDraw()
    {
        try {
            if (this.m_FullScreenBitmap != null) {
                if (!this.m_UseGL) {
                    this.m_FullScreenBitmap.setPixels(this.m_Pixels, 0, this.m_Width, 0, 0, this.m_Width, this.m_Height);
                    Throwable v0_2 = this.m_SurfaceHolder.lockCanvas();
                    if (v0_2 != null) {
                        try {
                            v0_2.drawBitmap(this.m_FullScreenBitmap, 0, 0, this.m_Paint);
                        } catch (android.view.SurfaceHolder v1_2) {
                            android.view.SurfaceHolder v1_0 = v0_2;
                            Throwable v0_3 = v1_2;
                            if (v1_0 != null) {
                                this.m_SurfaceHolder.unlockCanvasAndPost(v1_0);
                            }
                            throw v0_3;
                        }
                        if (v0_2 != null) {
                            this.m_SurfaceHolder.unlockCanvasAndPost(v0_2);
                        }
                    } else {
                        if (v0_2 != null) {
                            this.m_SurfaceHolder.unlockCanvasAndPost(v0_2);
                        }
                    }
                } else {
                    if (0 != 0) {
                        this.m_SurfaceHolder.unlockCanvasAndPost(0);
                    }
                }
            } else {
                if (0 != 0) {
                    this.m_SurfaceHolder.unlockCanvasAndPost(0);
                }
            }
        } catch (Throwable v0_3) {
            v1_0 = 0;
        }
        return;
    }

    public void doneInputText(android.content.DialogInterface p1, int p2)
    {
        return;
    }

    public void getInputString(String p3, String p4, int p5)
    {
        this.m_InputTextTitle = p3;
        this.m_InputTextDefault = p4;
        this.m_InputTextFlags = p5;
        this.m_Handler.post(this.m_ShowInputText);
        return;
    }

    public String getLocale()
    {
        return java.util.Locale.getDefault().toString();
    }

    public boolean glInit(int p3)
    {
        if ((this.m_UseGL) && (!com.ideaworks3d.marmalade.LoaderView.m_LoaderGL.started())) {
            this.m_GL = com.ideaworks3d.marmalade.LoaderView.m_LoaderGL.startGL(this.m_SurfaceHolder, p3);
        }
        return this.m_UseGL;
    }

    public void glReInit()
    {
        if ((this.m_UseGL) && (com.ideaworks3d.marmalade.LoaderView.m_LoaderGL.started())) {
            this.m_GL = com.ideaworks3d.marmalade.LoaderView.m_LoaderGL.restartGL(this.m_SurfaceHolder);
        }
        return;
    }

    public void glSwapBuffers()
    {
        if (com.ideaworks3d.marmalade.LoaderView.m_LoaderGL.started()) {
            com.ideaworks3d.marmalade.LoaderView.m_LoaderGL.swap();
        }
        return;
    }

    public void glTerm()
    {
        if ((this.m_UseGL) && (com.ideaworks3d.marmalade.LoaderView.m_LoaderGL.started())) {
            com.ideaworks3d.marmalade.LoaderView.m_LoaderGL.stopGL();
            this.m_GL = 0;
        }
        return;
    }

    public void onClick(android.content.DialogInterface p2, int p3)
    {
        if (p2 != this.m_InputDialog) {
            if (p2 == this.m_ErrorDialog) {
                switch (p3) {
                    case -3:
                        this.m_ErrorRtn = 2;
                        break;
                    case -2:
                        this.m_ErrorRtn = 1;
                        break;
                    case -1:
                        this.m_ErrorRtn = 0;
                        break;
                }
                p2.dismiss();
            }
        } else {
            if (p3 == -1) {
                this.m_InputTextResult = this.m_EditText.getText().toString();
            }
            p2.dismiss();
        }
        return;
    }

    protected void onDetachedFromWindow()
    {
        return;
    }

    public void onDismiss(android.content.DialogInterface p4)
    {
        if (p4 != this.m_InputDialog) {
            if (p4 == this.m_ErrorDialog) {
                this.m_ErrorDialog = 0;
                this.m_ErrorRunning = 0;
            }
        } else {
            this.setInputText(this.m_InputTextResult);
            this.m_InputTextRunning = 0;
            this.m_InputDialog = 0;
        }
        return;
    }

    protected void onDraw(android.graphics.Canvas p1)
    {
        super.onDraw(p1);
        return;
    }

    public boolean onKeyEvent(int p3, int p4, android.view.KeyEvent p5)
    {
        if ((!this.m_InputTextRunning) || (p3 != 4)) {
            if (!this.dispatchKeyEvent(p5)) {
                boolean v0_1 = this.m_LoaderKeyboard.onKeyEvent(p3, p4, p5);
            } else {
                v0_1 = 1;
            }
        } else {
            this.m_InputTextRunning = 0;
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean onKeyPreIme(int p2, android.view.KeyEvent p3)
    {
        return this.m_LoaderKeyboard.onKeyPreIme(p2, p3);
    }

    public boolean onTouchEvent(android.view.MotionEvent p2)
    {
        int v0_2;
        if (this.m_LoaderActivity.LoaderThread() == null) {
            v0_2 = 0;
        } else {
            v0_2 = this.m_LoaderActivity.LoaderThread().onTouchEvent(p2);
        }
        return v0_2;
    }

    public void onWindowFocusChanged(boolean p2)
    {
        if (this.m_LoaderActivity.LoaderThread() != null) {
            this.m_LoaderActivity.LoaderThread().onFocusChanged(p2);
        }
        super.onWindowFocusChanged(p2);
        return;
    }

    public void runOnOSThread()
    {
        try {
            this.m_Handler.post(this.m_RunOnOSThread);
            try {
                this.m_RunOnOSThread.wait();
            } catch (InterruptedException v1) {
            }
            return;
        } catch (InterruptedException v1_2) {
            throw v1_2;
        }
    }

    public int showError(String p4, String p5, int p6)
    {
        int v0_1;
        if (!this.m_LoaderActivity.isFinishing()) {
            try {
                this.m_ErrorTitle = p4;
                this.m_ErrorBody = p5;
                this.m_ErrorType = p6;
                this.m_ErrorRtn = 0;
                this.m_ErrorRunning = 1;
                this.m_Handler.post(this.m_ShowError);
            } catch (int v1_6) {
                throw v1_6;
            }
            while (this.m_ErrorRunning) {
                com.ideaworks3d.marmalade.LoaderAPI.s3eDeviceYield(20);
            }
            v0_1 = this.m_ErrorRtn;
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    public void showInputTextReal()
    {
        this.m_EditText = new android.widget.EditText(this.m_LoaderActivity);
        this.m_EditText.setText(this.m_InputTextDefault);
        if ((this.m_InputTextFlags & 1) != 0) {
            this.m_EditText.setInputType(128);
            this.m_EditText.setTransformationMethod(new android.text.method.PasswordTransformationMethod());
        }
        android.app.Dialog v0_4 = new android.app.AlertDialog$Builder(this.m_LoaderActivity);
        v0_4.setTitle(this.m_InputTextTitle);
        v0_4.setView(this.m_EditText);
        v0_4.setPositiveButton("OK", this);
        v0_4.setNegativeButton("Cancel", this);
        this.m_InputDialog = v0_4.create();
        this.m_InputTextRunning = 1;
        this.m_InputTextResult = "";
        this.m_InputDialog.setOnDismissListener(this);
        this.m_InputDialog.show();
        return;
    }

    public declared_synchronized void surfaceChanged(android.view.SurfaceHolder p5, int p6, int p7, int p8)
    {
        try {
            Throwable v0_1 = this.m_LoaderActivity.LoaderThread();
        } catch (Throwable v0_2) {
            throw v0_2;
        }
        if ((this.m_Pixels == null) || (!v0_1.skipSurfaceChange())) {
            v0_1.suspendAppThreads();
            this.m_Width = p7;
            this.m_Height = p8;
            if (this.m_FullScreenBitmap != null) {
                this.m_FullScreenBitmap.recycle();
                this.m_FullScreenBitmap = 0;
            }
            this.m_FullScreenBitmap = android.graphics.Bitmap.createBitmap(this.m_Width, this.m_Height, android.graphics.Bitmap$Config.RGB_565);
            if ((this.m_Pixels == null) || (this.m_Pixels.length != (this.m_Width * this.m_Height))) {
                if ((com.ideaworks3d.marmalade.LoaderView.g_PixelsLast == null) || (com.ideaworks3d.marmalade.LoaderView.g_PixelsLast.length < (this.m_Width * this.m_Height))) {
                    int[] v1_14 = new int[(this.m_Width * this.m_Height)];
                    this.m_Pixels = v1_14;
                    com.ideaworks3d.marmalade.LoaderView.g_PixelsLast = this.m_Pixels;
                } else {
                    this.m_Pixels = com.ideaworks3d.marmalade.LoaderView.g_PixelsLast;
                }
            }
            this.setPixelsNative(this.m_Width, this.m_Height, this.m_Pixels);
            v0_1.resumeAppThreads();
            this.notify();
        } else {
            this.notify();
        }
        return;
    }

    public void surfaceCreated(android.view.SurfaceHolder p1)
    {
        return;
    }

    public declared_synchronized void surfaceDestroyed(android.view.SurfaceHolder p5)
    {
        try {
            Throwable v0_2 = this.m_LoaderActivity.LoaderThread();
        } catch (Throwable v0_1) {
            throw v0_1;
        }
        if (v0_2 != null) {
            v0_2.suspendAppThreads();
            this.m_Width = 0;
            this.m_Height = 0;
            if (com.ideaworks3d.marmalade.LoaderView.m_LoaderGL.started()) {
                com.ideaworks3d.marmalade.LoaderView.m_LoaderGL.stopGL();
                this.m_GL = 0;
            }
            this.m_FullScreenBitmap = 0;
            this.setPixelsNative(0, 0, 0);
            this.m_Pixels = 0;
            v0_2.resumeAppThreads();
            this.notify();
        }
        return;
    }

    public boolean vibrateAvailable()
    {
        try {
            Object[] v2_2 = new Class[0];
            Object[] v2_0 = new Object[0];
            int v0_1 = ((Boolean) 億.invokeHook(this.m_Vibrator.getClass().getMethod("hasVibrator", v2_2), this.m_Vibrator, v2_0)).booleanValue();
        } catch (int v0) {
            v0_1 = 1;
        }
        return v0_1;
    }

    public void vibrateStart(long p2)
    {
        this.m_Vibrator.vibrate(p2);
        return;
    }

    public void vibrateStop()
    {
        this.m_Vibrator.cancel();
        return;
    }

    public int videoGetPosition()
    {
        int v0_1;
        if (this.m_VideoView == null) {
            v0_1 = 0;
        } else {
            v0_1 = this.m_VideoView.videoGetPosition();
        }
        return v0_1;
    }

    public int videoGetStatus()
    {
        return this.m_VideoState;
    }

    public int videoPause()
    {
        int v0_1;
        if (this.m_VideoState != 1) {
            v0_1 = -1;
        } else {
            this.m_VideoState = 2;
            int v0_3 = new com.ideaworks3d.marmalade.LoaderView$VideoRunner(this, 0);
            v0_3.setState(2);
            v0_1 = v0_3.runOnUiThread(0);
        }
        return v0_1;
    }

    public int videoPlay(String p14, int p15, int p16, int p17, int p18, int p19, int p20, boolean p21, long p22, long p24)
    {
        this.m_VideoState = 1;
        int v0_3 = new com.ideaworks3d.marmalade.LoaderView$VideoRunner(this, 0);
        v0_3.play(p14, p15, p16, p17, p18, p19, p20, p21, p22, p24);
        return v0_3.runOnUiThread(1);
    }

    public int videoResume()
    {
        int v0_1;
        if (this.m_VideoState != 2) {
            v0_1 = -1;
        } else {
            this.m_VideoState = 1;
            int v0_3 = new com.ideaworks3d.marmalade.LoaderView$VideoRunner(this, 0);
            v0_3.setState(1);
            v0_1 = v0_3.runOnUiThread(0);
        }
        return v0_1;
    }

    public void videoSetVolume(int p3)
    {
        com.ideaworks3d.marmalade.LoaderView$VideoRunner v0_1 = new com.ideaworks3d.marmalade.LoaderView$VideoRunner(this, 0);
        v0_1.setVolume(p3);
        v0_1.runOnUiThread(0);
        return;
    }

    public void videoStop()
    {
        boolean v0_1;
        if (this.m_VideoState == 0) {
            v0_1 = 0;
        } else {
            boolean v0_4 = new com.ideaworks3d.marmalade.LoaderView$VideoRunner(this, 0);
            v0_4.setState(0);
            v0_4.runOnUiThread(1);
            v0_1 = this.videoIsPlaying();
            this.m_VideoState = 0;
        }
        if ((v0_1) && (!this.videoIsPlaying())) {
            this.videoStopped();
        }
        return;
    }

    public void videoStopped()
    {
        if (this.m_VideoView != null) {
            this.m_VideoView.videoRemoveView();
            this.m_VideoView = 0;
        }
        this.m_VideoState = 0;
        this.videoStoppedNotify();
        return;
    }

    public boolean waitForSurface()
    {
        try {
            if (this.m_Pixels != null) {
                int v0_2;
                if (this.m_Pixels != null) {
                    v0_2 = 1;
                } else {
                    v0_2 = 0;
                }
            } else {
                this.wait();
            }
        } catch (int v0_1) {
            throw v0_1;
        }
        return v0_2;
    }
}
