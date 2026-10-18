package com.ideaworks3d.marmalade;
 class LoaderKeyboard$1 implements java.lang.Runnable {
    final synthetic com.ideaworks3d.marmalade.LoaderKeyboard this$0;
    final synthetic android.view.inputmethod.InputMethodManager val$imm;
    final synthetic boolean val$show;

    LoaderKeyboard$1(com.ideaworks3d.marmalade.LoaderKeyboard p1, boolean p2, android.view.inputmethod.InputMethodManager p3)
    {
        this.this$0 = p1;
        this.val$show = p2;
        this.val$imm = p3;
        return;
    }

    public void run()
    {
        if (!this.val$show) {
            if (!this.val$imm.hideSoftInputFromWindow(com.ideaworks3d.marmalade.LoaderKeyboard.access$200(this.this$0).getWindowToken(), 0, com.ideaworks3d.marmalade.LoaderKeyboard.access$300(this.this$0))) {
                this.val$imm.toggleSoftInput(0, 0);
            }
        } else {
            com.ideaworks3d.marmalade.LoaderKeyboard.access$200(this.this$0).requestFocus();
            if (!this.val$imm.showSoftInput(com.ideaworks3d.marmalade.LoaderKeyboard.access$200(this.this$0), 2, com.ideaworks3d.marmalade.LoaderKeyboard.access$300(this.this$0))) {
                this.val$imm.toggleSoftInput(0, 0);
            }
        }
        return;
    }
}
