package com.ideaworks3d.marmalade;
 class LoaderKeyboard$SoftInputReceiver extends android.os.ResultReceiver {
    final synthetic com.ideaworks3d.marmalade.LoaderKeyboard this$0;

    public LoaderKeyboard$SoftInputReceiver(com.ideaworks3d.marmalade.LoaderKeyboard p1, android.os.Handler p2)
    {
        this.this$0 = p1;
        super(p2);
        return;
    }

    protected void onReceiveResult(int p4, android.os.Bundle p5)
    {
        String v0_0;
        switch (p4) {
            case 0:
            case 2:
                if ((com.ideaworks3d.marmalade.LoaderKeyboard.access$000(this.this$0) == 1) || (com.ideaworks3d.marmalade.LoaderKeyboard.access$100(this.this$0))) {
                    v0_0 = 0;
                } else {
                    v0_0 = 1;
                }
                break;
            case 1:
            case 3:
                if ((!com.ideaworks3d.marmalade.LoaderKeyboard.access$000(this.this$0)) || (com.ideaworks3d.marmalade.LoaderKeyboard.access$100(this.this$0))) {
                } else {
                    v0_0 = 1;
                }
                break;
            default:
        }
        if (v0_0 != null) {
            ((android.view.inputmethod.InputMethodManager) com.ideaworks3d.marmalade.LoaderActivity.m_Activity.getSystemService("input_method")).toggleSoftInput(0, 0);
        }
        return;
    }
}
