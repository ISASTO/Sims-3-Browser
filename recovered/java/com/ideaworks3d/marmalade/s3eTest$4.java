package com.ideaworks3d.marmalade;
 class s3eTest$4 implements java.lang.Runnable {
    final synthetic com.ideaworks3d.marmalade.s3eTest this$0;
    final synthetic boolean val$focus;

    s3eTest$4(com.ideaworks3d.marmalade.s3eTest p1, boolean p2)
    {
        this.this$0 = p1;
        this.val$focus = p2;
        return;
    }

    public void run()
    {
        com.ideaworks3d.marmalade.LoaderActivity.m_Activity.onFocusChange(com.ideaworks3d.marmalade.LoaderActivity.m_Activity.m_View, this.val$focus);
        return;
    }
}
