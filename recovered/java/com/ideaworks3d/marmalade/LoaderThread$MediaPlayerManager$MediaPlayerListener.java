package com.ideaworks3d.marmalade;
 class LoaderThread$MediaPlayerManager$MediaPlayerListener implements android.media.MediaPlayer$OnCompletionListener, android.media.MediaPlayer$OnErrorListener {
    int m_channel;
    final synthetic com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager this$1;

    LoaderThread$MediaPlayerManager$MediaPlayerListener(com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager p1, int p2)
    {
        this.this$1 = p1;
        this.m_channel = p2;
        return;
    }

    public void onCompletion(android.media.MediaPlayer p5)
    {
        IllegalStateException v0_6 = com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager.access$300(this.this$1);
        com.ideaworks3d.marmalade.LoaderThread$AudioState v1_4 = this.m_channel;
        v0_6[v1_4] = (v0_6[v1_4] - 1);
        if (com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager.access$300(this.this$1)[this.m_channel] != 0) {
            try {
                com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager.access$100(this.this$1)[this.m_channel].start();
                com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager.access$000(this.this$1, com.ideaworks3d.marmalade.LoaderThread$AudioState.Started, this.m_channel);
            } catch (IllegalStateException v0_8) {
                v0_8.printStackTrace();
            }
        } else {
            com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager.access$000(this.this$1, com.ideaworks3d.marmalade.LoaderThread$AudioState.PlaybackCompleted, this.m_channel);
            this.this$1.audioStop(this.m_channel);
        }
        return;
    }

    public boolean onError(android.media.MediaPlayer p4, int p5, int p6)
    {
        com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager.access$000(this.this$1, com.ideaworks3d.marmalade.LoaderThread$AudioState.Error, this.m_channel);
        com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager.access$100(this.this$1)[this.m_channel].reset();
        com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager.access$000(this.this$1, com.ideaworks3d.marmalade.LoaderThread$AudioState.Idle, this.m_channel);
        com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager.access$200(this.this$1, this.m_channel);
        return 1;
    }
}
