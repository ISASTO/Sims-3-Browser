package com.ideaworks3d.marmalade;
public class LoaderActivity extends android.app.Activity implements android.view.View$OnFocusChangeListener {
    private static final int INTENT_CODE = 123456;
    public static com.ideaworks3d.marmalade.LoaderActivity m_Activity;
    public boolean m_ActivityPaused;
    private android.content.Intent m_Data;
    public android.widget.FrameLayout m_FrameLayout;
    public boolean m_IgnoreFocusLoss;
    private volatile boolean m_IntentBlocking;
    private com.ideaworks3d.marmalade.LoaderThread m_LoaderThread;
    public android.widget.RelativeLayout m_TopLevel;
    private reflect.Method m_TouchpadEvent;
    public com.ideaworks3d.marmalade.LoaderView m_View;

    public LoaderActivity()
    {
        this.m_ActivityPaused = 0;
        this.m_IgnoreFocusLoss = 0;
        this.m_TouchpadEvent = 0;
        return;
    }

    private boolean onKeyEvent(int p3, int p4, android.view.KeyEvent p5)
    {
        boolean v0_0 = 0;
        if (this.m_View != null) {
            v0_0 = this.m_View.onKeyEvent(p3, p4, p5);
        }
        return v0_0;
    }

    private void startLoader()
    {
        this.m_LoaderThread = com.ideaworks3d.marmalade.LoaderThread.getInstance(this, this.getAssets(), this.getFilesDir(), this.m_View);
        return;
    }

    public android.content.Intent ExecuteIntent(android.content.Intent p3)
    {
        android.content.Intent v0_1;
        this.m_Data = 0;
        this.m_IntentBlocking = 1;
        if (this.m_LoaderThread == null) {
            v0_1 = 0;
        } else {
            this.LoaderThread().runOnOSThread(new com.ideaworks3d.marmalade.LoaderActivity$1(this, p3));
            while (this.m_IntentBlocking) {
                com.ideaworks3d.marmalade.LoaderAPI.s3eDeviceYield(20);
            }
            v0_1 = this.m_Data;
        }
        return v0_1;
    }

    public com.ideaworks3d.marmalade.LoaderThread LoaderThread()
    {
        return this.m_LoaderThread;
    }

    public void createView(boolean p4)
    {
        if (this.m_View != null) {
            this.m_FrameLayout.removeView(this.m_View);
            this.m_View = 0;
            System.gc();
        }
        this.m_View = new com.ideaworks3d.marmalade.LoaderView(this, p4);
        this.m_FrameLayout.addView(this.m_View, 0);
        if (this.m_LoaderThread != null) {
            this.m_LoaderThread.setView(this.m_View);
        }
        return;
    }

    public boolean dispatchTouchEvent(android.view.MotionEvent p6)
    {
        int v0_4;
        if (this.m_TouchpadEvent == null) {
            v0_4 = super.dispatchTouchEvent(p6);
        } else {
            try {
                int v0_5 = this.m_TouchpadEvent;
                Object[] v2_1 = new Object[1];
                v2_1[0] = p6;
            } catch (int v0) {
            }
            if (!((Boolean) 億.invokeHook(v0_5, 0, v2_1)).booleanValue()) {
            } else {
                v0_4 = 1;
            }
        }
        return v0_4;
    }

    public void getCursor(android.net.Uri p3, String[] p4, com.ideaworks3d.marmalade.LoaderActivity$CursorCompleteListener p5)
    {
        this.LoaderThread().runOnOSThread(new com.ideaworks3d.marmalade.LoaderActivity$2(this, p3, p4, p5));
        return;
    }

    public boolean getIgnoreFocusLoss()
    {
        return this.m_IgnoreFocusLoss;
    }

    protected void onActivityResult(int p2, int p3, android.content.Intent p4)
    {
        super.onActivityResult(p2, p3, p4);
        if (p2 == 123456) {
            if (p3 == -1) {
                android.content.Intent v0_5;
                if (p4 != null) {
                    v0_5 = p4;
                } else {
                    v0_5 = new android.content.Intent();
                }
                this.m_Data = v0_5;
            } else {
                com.ideaworks3d.marmalade.LoaderAPI.trace("Intent cancelled");
                this.m_Data = 0;
            }
            this.m_IntentBlocking = 0;
        }
        return;
    }

    public void onConfigurationChanged(android.content.res.Configuration p3)
    {
        super.onConfigurationChanged(p3);
        if (p3.hardKeyboardHidden != 1) {
            if (p3.hardKeyboardHidden == 2) {
                this.m_View.m_LoaderKeyboard.hardKeyboardConfigurationChanged(0);
            }
        } else {
            this.m_View.m_LoaderKeyboard.hardKeyboardConfigurationChanged(1);
        }
        return;
    }

    protected void onCreate(android.os.Bundle p10)
    {
        super.onCreate(p10);
        // Both branches of the condition point to the same code.
        // if (com.ideaworks3d.marmalade.LoaderActivity.m_Activity == null) {
            android.widget.RelativeLayout v0_0 = this.getPackageName();
            android.widget.FrameLayout v1_9 = v0_0.lastIndexOf(46);
            if (v1_9 >= null) {
                v0_0 = v0_0.substring((v1_9 + 1));
            }
            System.loadLibrary(v0_0);
            com.ideaworks3d.marmalade.LoaderActivity.m_Activity = this;
            android.widget.RelativeLayout v0_2 = Integer.parseInt(android.os.Build$VERSION.SDK);
            if (v0_2 >= 9) {
                try {
                    android.widget.FrameLayout v1_3 = Class.forName("com.ideaworks3d.marmalade.s3eTouchpad");
                    Class[] v3_1 = new Class[1];
                    v3_1[0] = android.view.MotionEvent;
                    this.m_TouchpadEvent = v1_3.getMethod("onTouchEvent", v3_1);
                } catch (android.widget.FrameLayout v1) {
                    this.m_TouchpadEvent = 0;
                }
            }
            if (v0_2 >= 11) {
                this.m_IgnoreFocusLoss = 1;
            }
            this.m_TopLevel = new android.widget.RelativeLayout(this);
            this.m_FrameLayout = new android.widget.FrameLayout(this);
            this.m_TopLevel.addView(this.m_FrameLayout);
            this.createView(0);
            this.setContentView(this.m_TopLevel);
            return;
        // }
    }

    protected void onDestroy()
    {
        if (com.ideaworks3d.marmalade.LoaderActivity.m_Activity == this) {
            if ((this.isFinishing()) && (this.m_LoaderThread != null)) {
                this.m_LoaderThread.soundStop();
                this.m_LoaderThread.audioStopAll();
                this.m_LoaderThread.onDestroy();
                this.m_LoaderThread = 0;
                com.ideaworks3d.marmalade.LoaderActivity.m_Activity = 0;
            }
            super.onDestroy();
        } else {
            super.onDestroy();
        }
        return;
    }

    public void onFocusChange(android.view.View p1, boolean p2)
    {
        return;
    }

    public boolean onKeyDown(int p3, android.view.KeyEvent p4)
    {
        boolean v0_1;
        if (!this.onKeyEvent(p3, 1, p4)) {
            v0_1 = super.onKeyDown(p3, p4);
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean onKeyUp(int p2, android.view.KeyEvent p3)
    {
        boolean v0_2;
        if (!this.onKeyEvent(p2, 0, p3)) {
            v0_2 = super.onKeyUp(p2, p3);
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    protected void onPause()
    {
        if (this.m_LoaderThread != null) {
            this.m_LoaderThread.onPause();
        }
        this.m_ActivityPaused = 1;
        super.onPause();
        return;
    }

    protected void onRestart()
    {
        super.onRestart();
        return;
    }

    protected void onResume()
    {
        super.onResume();
        this.m_ActivityPaused = 0;
        if (this.m_LoaderThread != null) {
            this.m_LoaderThread.onResume();
        }
        return;
    }

    protected void onStart()
    {
        super.onStart();
        this.startLoader();
        return;
    }

    protected void onStop()
    {
        super.onStop();
        return;
    }

    public void setIgnoreFocusLoss(boolean p1)
    {
        this.m_IgnoreFocusLoss = p1;
        return;
    }
}
