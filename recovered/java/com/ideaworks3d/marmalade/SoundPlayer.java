package com.ideaworks3d.marmalade;
public class SoundPlayer implements android.media.AudioTrack$OnPlaybackPositionUpdateListener {
    private static final int PERIODS_IN_BUFFER = 4;
    private int m_BufSize;
    private int m_FrameSize;
    private boolean m_NeedsPrime;
    private int m_Period;
    private short[] m_SampleData;
    private int m_SampleRate;
    private boolean m_Stereo;
    private android.media.AudioTrack m_Track;

    public SoundPlayer()
    {
        this.m_Stereo = 0;
        this.m_NeedsPrime = 0;
        this.m_SampleRate = 0;
        return;
    }

    private native void generateAudio(short[] p0, int p1);

    private boolean writeSamples(int p7)
    {
        if ((this.m_Track != null) && (this.m_SampleData != null)) {
            int v0_1;
            this.generateAudio(this.m_SampleData, p7);
            if (!this.m_Stereo) {
                v0_1 = p7;
            } else {
                v0_1 = (p7 * 2);
            }
            if ((this.m_Track != null) && (this.m_SampleData != null)) {
                long v1_2 = android.os.SystemClock.uptimeMillis();
                this.m_Track.write(this.m_SampleData, 0, v0_1);
                // Both branches of the condition point to the same code.
                // if ((android.os.SystemClock.uptimeMillis() - v1_2) <= 1) {
                    int v0_4 = 1;
                // }
            } else {
                v0_4 = 0;
            }
        } else {
            v0_4 = 0;
        }
        return v0_4;
    }

    int init(boolean p10, int p11)
    {
        this.m_SampleRate = p11;
        this.m_Stereo = p10;
        if (this.m_SampleRate == 0) {
            this.m_SampleRate = android.media.AudioTrack.getNativeOutputSampleRate(3);
        }
        int v3;
        if (!this.m_Stereo) {
            v3 = 2;
        } else {
            v3 = 3;
        }
        this.m_FrameSize = 2;
        if (this.m_Stereo) {
            this.m_FrameSize = (this.m_FrameSize * 2);
        }
        this.m_BufSize = android.media.AudioTrack.getMinBufferSize(this.m_SampleRate, v3, 2);
        this.m_Period = ((this.m_BufSize / this.m_FrameSize) / 4);
        try {
            int v0_13;
            this.m_Track = new android.media.AudioTrack(3, this.m_SampleRate, v3, 2, this.m_BufSize, 1);
        } catch (int v0) {
            v0_13 = 0;
            return v0_13;
        }
        if (this.m_Track.getState() == 1) {
            int v0_15 = new short[this.m_BufSize];
            this.m_SampleData = v0_15;
            this.m_Track.setPlaybackPositionUpdateListener(this);
            this.m_Track.setPositionNotificationPeriod(this.m_Period);
            this.m_NeedsPrime = 1;
            v0_13 = this.m_SampleRate;
            return v0_13;
        } else {
            v0_13 = 0;
            return v0_13;
        }
    }

    public void onMarkerReached(android.media.AudioTrack p1)
    {
        return;
    }

    public declared_synchronized void onPeriodicNotification(android.media.AudioTrack p2)
    {
        try {
            // Both branches of the condition point to the same code.
            // if (this.writeSamples(this.m_Period)) {
                return;
            // }
        } catch (Throwable v0_2) {
            throw v0_2;
        }
    }

    declared_synchronized void pause()
    {
        try {
            if ((this.m_Track != null) && (this.m_Track.getPlayState() == 3)) {
                this.m_Track.pause();
            }
        } catch (android.media.AudioTrack v0_3) {
            throw v0_3;
        }
        return;
    }

    declared_synchronized void resume()
    {
        try {
            if ((this.m_Track != null) && (this.m_Track.getPlayState() == 2)) {
                this.start();
                this.writeSamples(((this.m_Period * 4) / 2));
            }
        } catch (int v0_6) {
            throw v0_6;
        }
        return;
    }

    declared_synchronized void setVolume(int p3)
    {
        try {
            if (this.m_Track != null) {
                this.m_Track.setStereoVolume(((((float) p3) * android.media.AudioTrack.getMaxVolume()) / 1120403456), ((((float) p3) * android.media.AudioTrack.getMaxVolume()) / 1120403456));
            }
        } catch (float v0_1) {
            throw v0_1;
        }
        return;
    }

    void start()
    {
        if (this.m_Track == null) {
            this.init(this.m_Stereo, this.m_SampleRate);
        }
        this.m_Track.play();
        if (this.m_NeedsPrime) {
            this.m_NeedsPrime = 0;
            this.writeSamples((this.m_Period * 4));
        }
        return;
    }

    declared_synchronized void stop()
    {
        try {
            if (this.m_Track != null) {
                this.m_Track.setPlaybackPositionUpdateListener(0);
                this.m_Track.stop();
                this.m_Track.flush();
                this.m_Track.release();
                this.m_Track = 0;
            }
        } catch (int v0_2) {
            throw v0_2;
        }
        return;
    }
}
