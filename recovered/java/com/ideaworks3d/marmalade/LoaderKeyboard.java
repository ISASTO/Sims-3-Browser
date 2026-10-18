package com.ideaworks3d.marmalade;
public class LoaderKeyboard implements com.ideaworks3d.marmalade.SuspendResumeListener {
    private com.ideaworks3d.marmalade.LoaderKeyboard$SoftInputReceiver m_Receiver;
    private com.ideaworks3d.marmalade.LoaderView m_View;
    private boolean m_onScreenKeyboard;
    private boolean m_pausing;

    public LoaderKeyboard(com.ideaworks3d.marmalade.LoaderView p3)
    {
        this.m_onScreenKeyboard = 0;
        this.m_pausing = 0;
        this.m_View = p3;
        this.m_Receiver = new com.ideaworks3d.marmalade.LoaderKeyboard$SoftInputReceiver(this, this.m_View.m_Handler);
        com.ideaworks3d.marmalade.LoaderAPI.addSuspendResumeListener(this);
        return;
    }

    static synthetic boolean access$000(com.ideaworks3d.marmalade.LoaderKeyboard p1)
    {
        return p1.m_onScreenKeyboard;
    }

    static synthetic boolean access$100(com.ideaworks3d.marmalade.LoaderKeyboard p1)
    {
        return p1.m_pausing;
    }

    static synthetic com.ideaworks3d.marmalade.LoaderView access$200(com.ideaworks3d.marmalade.LoaderKeyboard p1)
    {
        return p1.m_View;
    }

    static synthetic com.ideaworks3d.marmalade.LoaderKeyboard$SoftInputReceiver access$300(com.ideaworks3d.marmalade.LoaderKeyboard p1)
    {
        return p1.m_Receiver;
    }

    private native boolean onKeyEventNative(int p0, int p1, int p2);

    private native void setCharInputEnabledNative(boolean p0);

    public int getKeyboardInfo()
    {
        int v0_4 = this.m_View.getResources().getConfiguration();
        int v1 = 0;
        if ((v0_4.keyboard == 2) && (v0_4.hardKeyboardHidden != 2)) {
            v1 = (0 | 1);
        }
        if ((v0_4.keyboard == 3) && (v0_4.hardKeyboardHidden != 2)) {
            v1 |= 2;
        }
        int v0_3;
        if (v0_4.navigation < 2) {
            v0_3 = v1;
        } else {
            try {
                if (((Integer) v0_4.getClass().getField("navigationHidden").get(v0_4)).intValue() != 2) {
                    if ((android.os.Build.MODEL.equals("Zeus")) && (v0_4.hardKeyboardHidden == 2)) {
                    } else {
                        v0_3 = (v1 | 4);
                    }
                } else {
                    v0_3 = v1;
                }
            } catch (boolean v2) {
            }
        }
        return v0_3;
    }

    public boolean getShowOnScreenKeyboard()
    {
        return this.m_onScreenKeyboard;
    }

    public void hardKeyboardConfigurationChanged(boolean p2)
    {
        if ((!p2) && (this.m_onScreenKeyboard)) {
            this.setShowOnScreenKeyboard(1);
        }
        return;
    }

    public boolean onKeyEvent(int p2, int p3, android.view.KeyEvent p4)
    {
        return this.onKeyEventNative(p2, p4.getUnicodeChar(), p3);
    }

    public boolean onKeyPreIme(int p3, android.view.KeyEvent p4)
    {
        if ((p3 != 4) || (!this.m_onScreenKeyboard)) {
            int v0_2 = 0;
        } else {
            this.setCharInputEnabledNative(0);
            this.setShowOnScreenKeyboard(0);
            v0_2 = 1;
        }
        return v0_2;
    }

    public void onSuspendResumeEvent(com.ideaworks3d.marmalade.SuspendResumeEvent p5)
    {
        if ((p5.eventType == com.ideaworks3d.marmalade.SuspendResumeEvent$EventType.SUSPEND) && (this.m_onScreenKeyboard)) {
            this.m_pausing = 1;
            this.setShowOnScreenKeyboard(0);
            this.m_onScreenKeyboard = 1;
        }
        if (p5.eventType == com.ideaworks3d.marmalade.SuspendResumeEvent$EventType.RESUME) {
            this.m_pausing = 0;
            if (this.m_onScreenKeyboard) {
                this.setShowOnScreenKeyboard(this.m_onScreenKeyboard);
            }
        }
        return;
    }

    public void setShowOnScreenKeyboard(boolean p4)
    {
        this.m_onScreenKeyboard = p4;
        com.ideaworks3d.marmalade.LoaderActivity.m_Activity.LoaderThread().runOnOSThread(new com.ideaworks3d.marmalade.LoaderKeyboard$1(this, p4, ((android.view.inputmethod.InputMethodManager) com.ideaworks3d.marmalade.LoaderActivity.m_Activity.getSystemService("input_method"))));
        return;
    }
}
