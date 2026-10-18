package com.ideaworks3d.marmalade;
 class LoaderThread$MediaPlayerManager {
    private Boolean[] m_AudioIsPaused;
    private int[] m_AudioPlayRepeats;
    private com.ideaworks3d.marmalade.LoaderThread$AudioState[] m_AudioState;
    private int[] m_AudioVolume;
    private android.media.MediaPlayer[] m_MediaPlayer;
    private com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager$MediaPlayerListener[] m_MediaPlayerListener;
    private final int m_NumAudioChannels;
    final synthetic com.ideaworks3d.marmalade.LoaderThread this$0;

    public LoaderThread$MediaPlayerManager(com.ideaworks3d.marmalade.LoaderThread p6)
    {
        this.this$0 = p6;
        this.m_NumAudioChannels = 16;
        int v0_4 = new android.media.MediaPlayer[16];
        this.m_MediaPlayer = v0_4;
        int v0_5 = new com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager$MediaPlayerListener[16];
        this.m_MediaPlayerListener = v0_5;
        int v0_6 = new com.ideaworks3d.marmalade.LoaderThread$AudioState[16];
        this.m_AudioState = v0_6;
        int v0_0 = new Boolean[16];
        this.m_AudioIsPaused = v0_0;
        int v0_1 = new int[16];
        this.m_AudioPlayRepeats = v0_1;
        int v0_2 = new int[16];
        this.m_AudioVolume = v0_2;
        int v0_3 = 0;
        while (v0_3 < 16) {
            this.m_MediaPlayer[v0_3] = 0;
            this.m_MediaPlayerListener[v0_3] = new com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager$MediaPlayerListener(this, v0_3);
            this.m_AudioState[v0_3] = com.ideaworks3d.marmalade.LoaderThread$AudioState.None;
            this.m_AudioIsPaused[v0_3] = Boolean.valueOf(0);
            this.m_AudioPlayRepeats[v0_3] = 0;
            this.m_AudioVolume[v0_3] = 100;
            v0_3++;
        }
        return;
    }

    static synthetic void access$000(com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager p0, com.ideaworks3d.marmalade.LoaderThread$AudioState p1, int p2)
    {
        p0.audioChangeState(p1, p2);
        return;
    }

    static synthetic android.media.MediaPlayer[] access$100(com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager p1)
    {
        return p1.m_MediaPlayer;
    }

    static synthetic void access$200(com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager p0, int p1)
    {
        p0.audioStopped(p1);
        return;
    }

    static synthetic int[] access$300(com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager p1)
    {
        return p1.m_AudioPlayRepeats;
    }

    private void audioChangeState(com.ideaworks3d.marmalade.LoaderThread$AudioState p2, int p3)
    {
        this.m_AudioState[p3] = p2;
        return;
    }

    private void audioSetVolumeInternal(int p3)
    {
        if ((this.m_MediaPlayer[p3] != null) && (this.m_AudioState[p3] != com.ideaworks3d.marmalade.LoaderThread$AudioState.Error)) {
            this.m_MediaPlayer[p3].setVolume((((float) this.m_AudioVolume[p3]) / 1120403456), (((float) this.m_AudioVolume[p3]) / 1120403456));
        }
        return;
    }

    private void audioStopped(int p2)
    {
        com.ideaworks3d.marmalade.LoaderThread.access$400(this.this$0, p2);
        return;
    }

    public int audioGetDuration(int p3)
    {
        if ((this.m_MediaPlayer[p3] != null) && ((this.m_AudioState[p3] != com.ideaworks3d.marmalade.LoaderThread$AudioState.Error) && ((this.m_AudioState[p3] != com.ideaworks3d.marmalade.LoaderThread$AudioState.Idle) && (this.m_AudioState[p3] != com.ideaworks3d.marmalade.LoaderThread$AudioState.Initialized)))) {
            int v0_6 = this.m_MediaPlayer[p3].getDuration();
        } else {
            v0_6 = 0;
        }
        return v0_6;
    }

    public int audioGetNumChannels()
    {
        return 16;
    }

    public int audioGetPosition(int p3)
    {
        if ((this.m_AudioState[p3] == com.ideaworks3d.marmalade.LoaderThread$AudioState.Started) || (this.m_AudioState[p3] == com.ideaworks3d.marmalade.LoaderThread$AudioState.Paused)) {
            int v0_2 = this.m_MediaPlayer[p3].getCurrentPosition();
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    public int audioGetStatus(int p3)
    {
        int v0_1;
        switch (com.ideaworks3d.marmalade.LoaderThread$5.$SwitchMap$com$ideaworks3d$marmalade$LoaderThread$AudioState[this.m_AudioState[p3].ordinal()]) {
            case 1:
                v0_1 = 1;
                break;
            case 2:
                v0_1 = 2;
                break;
            case 3:
                v0_1 = 3;
                break;
            default:
                v0_1 = 0;
        }
        return v0_1;
    }

    public boolean audioIsPlaying(int p3)
    {
        if ((this.m_MediaPlayer[p3] == null) || (this.m_AudioState[p3] != com.ideaworks3d.marmalade.LoaderThread$AudioState.Started)) {
            int v0_4 = 0;
        } else {
            v0_4 = 1;
        }
        return v0_4;
    }

    public int audioPause(int p4)
    {
        int v0_3;
        if (this.m_AudioState[p4] == com.ideaworks3d.marmalade.LoaderThread$AudioState.Started) {
            if (this.m_MediaPlayer[p4] == null) {
                v0_3 = -1;
            } else {
                try {
                    this.m_MediaPlayer[p4].pause();
                    this.audioChangeState(com.ideaworks3d.marmalade.LoaderThread$AudioState.Paused, p4);
                    v0_3 = 0;
                } catch (int v0) {
                    v0_3 = -1;
                }
            }
        } else {
            v0_3 = -1;
        }
        return v0_3;
    }

    public int audioPlay(String p8, int p9, long p10, long p12, int p14)
    {
        this.audioStop(p14);
        if (this.m_MediaPlayer[p14] == null) {
            this.m_MediaPlayer[p14] = new android.media.MediaPlayer();
            this.m_MediaPlayer[p14].setOnErrorListener(this.m_MediaPlayerListener[p14]);
            this.m_MediaPlayer[p14].setOnCompletionListener(this.m_MediaPlayerListener[p14]);
        }
        try {
            this.m_MediaPlayer[p14].reset();
            this.audioChangeState(com.ideaworks3d.marmalade.LoaderThread$AudioState.Idle, p14);
        } catch (int v0_37) {
            this.audioChangeState(com.ideaworks3d.marmalade.LoaderThread$AudioState.Error, p14);
            v0_37.printStackTrace();
            int v0_6 = -1;
            return v0_6;
        } catch (int v0_36) {
            this.audioChangeState(com.ideaworks3d.marmalade.LoaderThread$AudioState.Error, p14);
            v0_36.printStackTrace();
            v0_6 = -2;
            return v0_6;
        }
        if (p12 <= 0) {
            if ((p8.indexOf("http://") == -1) && (p8.indexOf("https://") == -1)) {
                try {
                    this.m_MediaPlayer[p14].setDataSource(new java.io.FileInputStream(p8).getFD());
                } catch (int v0) {
                    long v4_0 = com.ideaworks3d.marmalade.LoaderThread.access$500(this.this$0).openFd(p8);
                    this.m_MediaPlayer[p14].setDataSource(v4_0.getFileDescriptor(), v4_0.getStartOffset(), v4_0.getLength());
                }
            } else {
                this.m_MediaPlayer[p14].setDataSource(p8);
            }
        } else {
            int v0_33 = new android.content.res.AssetFileDescriptor(android.os.ParcelFileDescriptor.open(new java.io.File(p8), 268435456), p10, p12);
            this.m_MediaPlayer[p14].setDataSource(v0_33.getFileDescriptor(), v0_33.getStartOffset(), v0_33.getLength());
        }
        java.io.FileDescriptor v1_3;
        this.audioChangeState(com.ideaworks3d.marmalade.LoaderThread$AudioState.Initialized, p14);
        this.m_MediaPlayer[p14].prepare();
        this.audioChangeState(com.ideaworks3d.marmalade.LoaderThread$AudioState.Prepared, p14);
        this.audioSetVolumeInternal(p14);
        this.m_AudioPlayRepeats[p14] = p9;
        if (this.m_AudioPlayRepeats[p14] != 0) {
            v1_3 = 0;
        } else {
            v1_3 = 1;
        }
        this.m_MediaPlayer[p14].setLooping(v1_3);
        try {
            this.m_MediaPlayer[p14].start();
            this.audioChangeState(com.ideaworks3d.marmalade.LoaderThread$AudioState.Started, p14);
            v0_6 = 0;
        } catch (int v0_7) {
            v0_7.printStackTrace();
            v0_6 = -2;
        }
        return v0_6;
    }

    public int audioResume(int p4)
    {
        int v0_3;
        if (this.m_AudioState[p4] == com.ideaworks3d.marmalade.LoaderThread$AudioState.Paused) {
            if (this.m_MediaPlayer[p4] == null) {
                v0_3 = -1;
            } else {
                try {
                    this.m_MediaPlayer[p4].start();
                    this.audioChangeState(com.ideaworks3d.marmalade.LoaderThread$AudioState.Started, p4);
                    v0_3 = 0;
                } catch (int v0) {
                    v0_3 = -1;
                }
            }
        } else {
            v0_3 = -1;
        }
        return v0_3;
    }

    public void audioSetPosition(int p2, int p3)
    {
        this.m_MediaPlayer[p3].seekTo(p2);
        return;
    }

    public void audioSetVolume(int p2, int p3)
    {
        this.m_AudioVolume[p3] = p2;
        this.audioSetVolumeInternal(p3);
        return;
    }

    public void audioStop(int p3)
    {
        com.ideaworks3d.marmalade.LoaderThread$AudioState v0_1 = this.m_AudioState[p3];
        if ((this.m_MediaPlayer[p3] != null) && ((v0_1 == com.ideaworks3d.marmalade.LoaderThread$AudioState.Started) || ((v0_1 == com.ideaworks3d.marmalade.LoaderThread$AudioState.Paused) || (v0_1 == com.ideaworks3d.marmalade.LoaderThread$AudioState.PlaybackCompleted)))) {
            try {
                this.m_MediaPlayer[p3].stop();
                this.audioChangeState(com.ideaworks3d.marmalade.LoaderThread$AudioState.Stopped, p3);
            } catch (com.ideaworks3d.marmalade.LoaderThread$AudioState v0) {
            }
            this.m_MediaPlayer[p3].reset();
            this.audioChangeState(com.ideaworks3d.marmalade.LoaderThread$AudioState.Idle, p3);
            this.audioStopped(p3);
        }
        return;
    }

    public void audioStopAll()
    {
        int v0 = 0;
        while (v0 < 16) {
            this.audioStop(v0);
            v0++;
        }
        return;
    }

    public void doPause()
    {
        int v0 = 0;
        while (v0 < 16) {
            Boolean v2_0;
            if (this.m_AudioState[v0] != com.ideaworks3d.marmalade.LoaderThread$AudioState.Paused) {
                v2_0 = 0;
            } else {
                v2_0 = 1;
            }
            this.m_AudioIsPaused[v0] = Boolean.valueOf(v2_0);
            if (!this.m_AudioIsPaused[v0].booleanValue()) {
                this.audioPause(v0);
            }
            v0++;
        }
        return;
    }

    public void doResume()
    {
        int v0 = 0;
        while (v0 < 16) {
            if (!this.m_AudioIsPaused[v0].booleanValue()) {
                this.audioResume(v0);
            }
            v0++;
        }
        return;
    }
}
