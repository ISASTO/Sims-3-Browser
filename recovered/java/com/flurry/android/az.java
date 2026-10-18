package com.flurry.android;
final class az extends android.widget.VideoView {

    public az(android.content.Context p2)
    {
        super(p2);
        super.setFocusable(1);
        super.setFocusableInTouchMode(1);
        return;
    }

    public final void seekTo(int p2)
    {
        if (p2 < this.getCurrentPosition()) {
            super.seekTo(p2);
        }
        return;
    }
}
