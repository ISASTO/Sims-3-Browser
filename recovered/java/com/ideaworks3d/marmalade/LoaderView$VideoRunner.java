package com.ideaworks3d.marmalade;
 class LoaderView$VideoRunner implements java.lang.Runnable {
    public static final int PAUSE = 2;
    public static final int PLAY = 1;
    public static final int RESUME = 3;
    public static final int STOP = 4;
    public static final int VOLUME = 5;
    private int m_Action;
    private String m_File;
    private boolean m_Fullscreen;
    private int m_Height;
    private long m_Offset;
    private int m_Repeats;
    private int m_Return;
    private long m_Size;
    private int m_Volume;
    private int m_Width;
    private int m_X;
    private int m_Y;
    final synthetic com.ideaworks3d.marmalade.LoaderView this$0;

    private LoaderView$VideoRunner(com.ideaworks3d.marmalade.LoaderView p1)
    {
        this.this$0 = p1;
        return;
    }

    synthetic LoaderView$VideoRunner(com.ideaworks3d.marmalade.LoaderView p1, com.ideaworks3d.marmalade.LoaderView$1 p2)
    {
        this(p1);
        return;
    }

    void play(String p2, int p3, int p4, int p5, int p6, int p7, int p8, boolean p9, long p10, long p12)
    {
        this.m_Action = 1;
        this.m_File = p2;
        this.m_Volume = p3;
        this.m_Repeats = p4;
        this.m_X = p5;
        this.m_Y = p6;
        this.m_Width = p7;
        this.m_Height = p8;
        this.m_Fullscreen = p9;
        this.m_Offset = p10;
        this.m_Size = p12;
        return;
    }

    public declared_synchronized void run()
    {
        try {
            if (this.m_Action != 1) {
                if (com.ideaworks3d.marmalade.LoaderView.access$300(this.this$0) != null) {
                    switch (this.m_Action) {
                        case 2:
                            com.ideaworks3d.marmalade.LoaderView.access$300(this.this$0).videoPause();
                            break;
                        case 3:
                            com.ideaworks3d.marmalade.LoaderView.access$300(this.this$0).videoResume();
                            break;
                        case 4:
                            com.ideaworks3d.marmalade.LoaderView.access$300(this.this$0).videoStop();
                            com.ideaworks3d.marmalade.LoaderView.access$300(this.this$0).videoRemoveView();
                            com.ideaworks3d.marmalade.LoaderView.access$302(this.this$0, 0);
                            break;
                        case 5:
                            com.ideaworks3d.marmalade.LoaderView.access$300(this.this$0).videoSetVolume(this.m_Volume);
                            break;
                    }
                    this.m_Return = 0;
                }
            } else {
                if (com.ideaworks3d.marmalade.LoaderView.access$300(this.this$0) != null) {
                    com.ideaworks3d.marmalade.LoaderView.access$300(this.this$0).videoStop();
                    com.ideaworks3d.marmalade.LoaderView.access$300(this.this$0).videoRemoveView();
                    com.ideaworks3d.marmalade.LoaderView.access$302(this.this$0, 0);
                }
                com.ideaworks3d.marmalade.LoaderView.access$302(this.this$0, new com.ideaworks3d.marmalade.S3EVideoView(this.this$0.m_LoaderActivity));
                com.ideaworks3d.marmalade.LoaderView.access$300(this.this$0).videoAddView(this.m_Fullscreen, this.m_X, this.m_Y, this.m_Width, this.m_Height);
                com.ideaworks3d.marmalade.LoaderView.access$300(this.this$0).videoSetVolume(this.m_Volume);
                this.m_Return = com.ideaworks3d.marmalade.LoaderView.access$300(this.this$0).videoPlay(this.m_File, this.m_Repeats, this.m_Offset, this.m_Size);
            }
        } catch (com.ideaworks3d.marmalade.S3EVideoView v0_30) {
            throw v0_30;
        }
        this.notify();
        return;
    }

    public declared_synchronized int runOnUiThread(boolean p3)
    {
        try {
            if (Thread.currentThread() != this.this$0.m_LoaderActivity.getMainLooper().getThread()) {
                this.this$0.m_Handler.post(this);
                if (!p3) {
                    int v0_2;
                    if (!p3) {
                        v0_2 = 0;
                    } else {
                        v0_2 = this.m_Return;
                    }
                } else {
                    this.wait();
                }
            } else {
                this.run();
            }
        } catch (int v0) {
            v0_2 = -1;
        } catch (int v0_3) {
            throw v0_3;
        }
        return v0_2;
    }

    void setState(int p2)
    {
        switch (p2) {
            case 0:
                this.m_Action = 4;
                break;
            case 1:
                this.m_Action = 3;
                break;
            case 2:
                this.m_Action = 2;
                break;
        }
        return;
    }

    void setVolume(int p2)
    {
        this.m_Action = 5;
        this.m_Volume = p2;
        return;
    }
}
