package com.flurry.android;
public final class FlurryFullscreenTakeoverActivity extends android.app.Activity implements android.media.MediaPlayer$OnCompletionListener, android.media.MediaPlayer$OnErrorListener, android.media.MediaPlayer$OnPreparedListener {
    private static final String a;
    private com.flurry.android.ap b;
    private com.flurry.android.bd c;
    private android.app.ProgressDialog d;
    private com.flurry.android.az e;
    private android.widget.MediaController f;
    private boolean g;

    static FlurryFullscreenTakeoverActivity()
    {
        com.flurry.android.FlurryFullscreenTakeoverActivity.a = com.flurry.android.FlurryFullscreenTakeoverActivity.getSimpleName();
        return;
    }

    public FlurryFullscreenTakeoverActivity()
    {
        return;
    }

    public final void onCompletion(android.media.MediaPlayer p1)
    {
        return;
    }

    public final void onConfigurationChanged(android.content.res.Configuration p1)
    {
        super.onConfigurationChanged(p1);
        return;
    }

    public final void onCreate(android.os.Bundle p7)
    {
        int v5 = -1;
        this.setTheme(16973831);
        super.onCreate(p7);
        com.flurry.android.ap v0_21 = this.getIntent();
        String v1_9 = v0_21.getStringExtra("url");
        if (v1_9 != null) {
            com.flurry.android.ap v0_1 = android.webkit.MimeTypeMap.getSingleton().getMimeTypeFromExtension(android.webkit.MimeTypeMap.getFileExtensionFromUrl(v1_9));
            if ((v0_1 == null) || (!v0_1.startsWith("video/"))) {
                this.c = new com.flurry.android.bd(this, v1_9);
                this.setContentView(this.c);
            } else {
                this.f = new android.widget.MediaController(this);
                this.e = new com.flurry.android.az(this);
                this.e.setOnPreparedListener(this);
                this.e.setOnCompletionListener(this);
                this.e.setOnErrorListener(this);
                this.e.setMediaController(this.f);
                this.e.setVideoURI(android.net.Uri.parse(v1_9));
                com.flurry.android.ap v0_17 = new android.widget.FrameLayout(this);
                this.setContentView(v0_17);
                this.e.setLayoutParams(new android.widget.FrameLayout$LayoutParams(-1, -1, 17));
                v0_17.addView(this.e);
                this.d = new android.app.ProgressDialog(this);
                this.d.setProgressStyle(0);
                this.d.setMessage("Loading...");
                this.d.setCancelable(1);
                this.d.show();
            }
        } else {
            if (p7 != null) {
                v5 = p7.getInt("frameIndex", -1);
            }
            if (v5 < 0) {
                v5 = v0_21.getIntExtra("frameIndex", 0);
            }
            java.util.Map v2_5 = com.flurry.android.FlurryAgent.b();
            if (v2_5.n() != null) {
                this.b = new com.flurry.android.ap(this, v2_5, v2_5.m(), v2_5.n(), v5);
                this.b.initLayout(this);
                if (v5 == 0) {
                    this.b.a("rendered", java.util.Collections.emptyMap());
                }
                this.setContentView(this.b);
            }
        }
        return;
    }

    protected final void onDestroy()
    {
        if ((this.d != null) && (this.d.isShowing())) {
            this.d.dismiss();
        }
        if ((this.e != null) && (this.e.isPlaying())) {
            this.e.stopPlayback();
        }
        super.onDestroy();
        return;
    }

    public final boolean onError(android.media.MediaPlayer p3, int p4, int p5)
    {
        if ((this.d != null) && (this.d.isShowing())) {
            this.d.dismiss();
        }
        com.flurry.android.bm.b(com.flurry.android.FlurryFullscreenTakeoverActivity.a, "error occurs during video playback");
        this.finish();
        return 1;
    }

    public final boolean onKeyDown(int p8, android.view.KeyEvent p9)
    {
        boolean v0_1;
        if (p8 != 4) {
            v0_1 = super.onKeyUp(p8, p9);
        } else {
            if (this.b == null) {
                v0_1 = super.onKeyDown(p8, p9);
            } else {
                this.b.a("adWillClose", java.util.Collections.emptyMap(), this.b.c, this.b.b, this.b.d, 0);
                v0_1 = 1;
            }
        }
        return v0_1;
    }

    protected final void onPause()
    {
        super.onPause();
        this.g = 0;
        if ((this.e != null) && (this.e.isPlaying())) {
            this.e.pause();
        }
        return;
    }

    public final void onPrepared(android.media.MediaPlayer p2)
    {
        if ((this.d != null) && (this.d.isShowing())) {
            this.d.dismiss();
        }
        if ((this.e != null) && (this.g)) {
            this.e.start();
        }
        return;
    }

    protected final void onRestart()
    {
        super.onRestart();
        return;
    }

    protected final void onResume()
    {
        super.onResume();
        this.g = 1;
        if (this.f != null) {
            this.f.show(0);
        }
        return;
    }

    public final void onSaveInstanceState(android.os.Bundle p3)
    {
        super.onSaveInstanceState(p3);
        if (this.b != null) {
            p3.putInt("frameIndex", this.b.d);
        }
        return;
    }

    public final void onStart()
    {
        super.onStart();
        if (com.flurry.android.FlurryAgent.c() == null) {
            this.finish();
        } else {
            com.flurry.android.FlurryAgent.onStartSession(this, com.flurry.android.FlurryAgent.c());
        }
        return;
    }

    public final void onStop()
    {
        super.onStop();
        if (this.b != null) {
            this.b.stop();
        }
        com.flurry.android.FlurryAgent.onEndSession(this);
        return;
    }
}
