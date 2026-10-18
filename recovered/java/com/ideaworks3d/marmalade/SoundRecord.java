package com.ideaworks3d.marmalade;
public class SoundRecord implements android.media.AudioRecord$OnRecordPositionUpdateListener {
    private android.media.AudioRecord m_AudioRecord;
    private int m_BufSize;
    private short[] m_Buffer;
    private int m_Frequency;
    private int m_Period;

    public SoundRecord()
    {
        this.m_AudioRecord = 0;
        return;
    }

    private native void recordAudio(short[] p0, int p1, int p2);

    public void onMarkerReached(android.media.AudioRecord p1)
    {
        return;
    }

    public void onPeriodicNotification(android.media.AudioRecord p5)
    {
        this.recordAudio(this.m_Buffer, this.m_AudioRecord.read(this.m_Buffer, 0, this.m_Period), this.m_Frequency);
        return;
    }

    public int start(int p8)
    {
        int v0_22;
        if (this.m_AudioRecord == null) {
            if (p8 != -1) {
                this.m_Frequency = p8;
            }
            this.m_BufSize = android.media.AudioRecord.getMinBufferSize(this.m_Frequency, 2, 2);
            if (this.m_BufSize == -2) {
                this.m_Frequency = 8000;
                this.m_BufSize = android.media.AudioRecord.getMinBufferSize(this.m_Frequency, 2, 2);
                if (this.m_BufSize == -2) {
                    v0_22 = 0;
                    return v0_22;
                }
            }
            if (this.m_BufSize <= 4096) {
                this.m_BufSize = (this.m_BufSize * 2);
            }
            this.m_Period = (this.m_BufSize / 4);
            int v0_13 = new short[this.m_BufSize];
            this.m_Buffer = v0_13;
            this.m_AudioRecord = new android.media.AudioRecord(1, this.m_Frequency, 2, 2, this.m_BufSize);
            this.m_AudioRecord.setRecordPositionUpdateListener(this);
            this.m_AudioRecord.setPositionNotificationPeriod(this.m_Period);
            try {
                this.m_AudioRecord.startRecording();
                this.recordAudio(this.m_Buffer, this.m_AudioRecord.read(this.m_Buffer, 0, this.m_Period), this.m_Frequency);
                v0_22 = this.m_Frequency;
            } catch (int v0) {
                v0_22 = 0;
            }
        } else {
            v0_22 = 0;
        }
        return v0_22;
    }

    public int stop()
    {
        int v0_1;
        if (this.m_AudioRecord != null) {
            this.m_AudioRecord.setRecordPositionUpdateListener(0);
            this.m_AudioRecord.stop();
            this.m_AudioRecord.release();
            this.m_AudioRecord = 0;
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }
}
