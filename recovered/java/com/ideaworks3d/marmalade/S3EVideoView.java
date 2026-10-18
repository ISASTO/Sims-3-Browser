package com.ideaworks3d.marmalade;
public class S3EVideoView extends android.widget.VideoView implements android.media.MediaPlayer$OnCompletionListener, android.media.MediaPlayer$OnErrorListener, android.media.MediaPlayer$OnPreparedListener {
    public static final int S3E_VIDEO_FAILED = 3;
    public static final int S3E_VIDEO_MAX_VOLUME = 256;
    public static final int S3E_VIDEO_PAUSED = 2;
    public static final int S3E_VIDEO_PLAYING = 1;
    public static final int S3E_VIDEO_STOPPED;
    private boolean m_Fullscreen;
    private int m_Height;
    private com.ideaworks3d.marmalade.LoaderActivity m_LoaderActivity;
    private android.media.MediaPlayer m_MediaPlayer;
    private String m_Path;
    private int m_Repeats;
    private android.net.Uri m_Uri;
    private float m_Volume;
    private int m_Width;

    public S3EVideoView(com.ideaworks3d.marmalade.LoaderActivity p2)
    {
        super(p2);
        super.m_Volume = 1065353216;
        super.m_LoaderActivity = p2;
        super.setOnPreparedListener(super);
        super.setOnCompletionListener(super);
        super.setOnErrorListener(super);
        return;
    }

    private static boolean requiresSeparateWindow()
    {
        int v0_2;
        if (Integer.parseInt(android.os.Build$VERSION.SDK) > 4) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public void onCompletion(android.media.MediaPlayer p3)
    {
        this.m_MediaPlayer = 0;
        this.m_Repeats = (this.m_Repeats - 1);
        if (this.m_Repeats > 0) {
            this.stopPlayback();
            if (this.m_Uri == null) {
                this.setVideoPath(this.m_Path);
            } else {
                this.setVideoURI(this.m_Uri);
            }
        } else {
            this.videoStop();
            this.m_LoaderActivity.m_View.videoStopped();
        }
        return;
    }

    public boolean onError(android.media.MediaPlayer p2, int p3, int p4)
    {
        this.m_LoaderActivity.m_View.videoStopped();
        return 1;
    }

    protected void onMeasure(int p3, int p4)
    {
        super.onMeasure(p3, p4);
        if ((this.m_Width != 0) && (this.m_Height != 0)) {
            this.setMeasuredDimension(this.m_Width, this.m_Height);
        }
        return;
    }

    public void onPrepared(android.media.MediaPlayer p4)
    {
        this.m_MediaPlayer = p4;
        this.m_MediaPlayer.setVolume(this.m_Volume, this.m_Volume);
        this.start();
        return;
    }

    public boolean onTouchEvent(android.view.MotionEvent p4)
    {
        float v0_5;
        if (this.m_LoaderActivity.LoaderThread() == null) {
            v0_5 = 0;
        } else {
            float v0_8 = new int[2];
            this.getLocationOnScreen(v0_8);
            p4.offsetLocation(((float) v0_8[0]), ((float) v0_8[1]));
            v0_5 = this.m_LoaderActivity.LoaderThread().onTouchEvent(p4);
        }
        return v0_5;
    }

    public void videoAddView(boolean p6, int p7, int p8, int p9, int p10)
    {
        this.m_Fullscreen = p6;
        this.m_Width = p9;
        this.m_Height = p10;
        if (!com.ideaworks3d.marmalade.S3EVideoView.requiresSeparateWindow()) {
            if (!p6) {
                Exception v0_0 = new android.widget.RelativeLayout$LayoutParams(p9, p10);
                v0_0.leftMargin = p7;
                v0_0.topMargin = p8;
                this.m_LoaderActivity.m_TopLevel.addView(this, v0_0);
            } else {
                Exception v0_2 = new android.widget.FrameLayout$LayoutParams(-1, -1, 17);
                this.m_Width = 0;
                this.m_Height = 0;
                this.m_LoaderActivity.m_FrameLayout.addView(this, v0_2);
            }
            try {
                Exception v0_3 = this.getClass();
                int v2_2 = new Class[1];
                v2_2[0] = Boolean.TYPE;
                Exception v0_4 = v0_3.getMethod("setZOrderOnTop", v2_2);
                Object[] v1_7 = new Object[1];
                v1_7[0] = Boolean.valueOf(1);
                億.invokeHook(v0_4, this, v1_7);
            } catch (Exception v0) {
            }
        } else {
            Exception v0_6 = new android.view.WindowManager$LayoutParams();
            v0_6.flags = (v0_6.flags | 8);
            v0_6.flags = (v0_6.flags | 512);
            v0_6.flags = (v0_6.flags | 1024);
            v0_6.gravity = 51;
            v0_6.x = p7;
            v0_6.y = p8;
            v0_6.width = p9;
            v0_6.height = p10;
            this.m_LoaderActivity.getWindow().getWindowManager().addView(this, v0_6);
        }
        return;
    }

    public int videoGetPosition()
    {
        try {
            int v0 = this.getCurrentPosition();
        } catch (int v0) {
            v0 = 0;
        }
        return v0;
    }

    public void videoPause()
    {
        this.pause();
        return;
    }

    public int videoPlay(String p4, int p5, long p6, long p8)
    {
        this.m_Repeats = p5;
        if (p8 != 0) {
            this.m_Uri = android.net.Uri.parse(new StringBuilder().append(com.ideaworks3d.marmalade.VFSProvider.ASSET_URI).append("/").append(p4).append(String v2).append(p6).append("/").append(p8).toString());
            this.setVideoURI(this.m_Uri);
        } else {
            this.m_Path = p4;
            this.setVideoPath(this.m_Path);
        }
        return 0;
    }

    public void videoRemoveView()
    {
        if (!com.ideaworks3d.marmalade.S3EVideoView.requiresSeparateWindow()) {
            if (!this.m_Fullscreen) {
                this.m_LoaderActivity.m_TopLevel.removeView(this);
            } else {
                this.m_LoaderActivity.m_FrameLayout.removeView(this);
            }
        } else {
            this.m_LoaderActivity.getWindow().getWindowManager().removeViewImmediate(this);
        }
        return;
    }

    public void videoResume()
    {
        this.start();
        return;
    }

    public void videoSetVolume(int p4)
    {
        this.m_Volume = (((float) p4) / 1132462080);
        if (this.m_MediaPlayer != null) {
            this.m_MediaPlayer.setVolume(this.m_Volume, this.m_Volume);
        }
        return;
    }

    public void videoStop()
    {
        this.m_MediaPlayer = 0;
        this.stopPlayback();
        return;
    }
}
