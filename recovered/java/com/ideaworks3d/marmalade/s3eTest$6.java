package com.ideaworks3d.marmalade;
 class s3eTest$6 implements java.lang.Runnable {
    final synthetic com.ideaworks3d.marmalade.s3eTest this$0;
    final synthetic int val$h;
    final synthetic int val$w;

    s3eTest$6(com.ideaworks3d.marmalade.s3eTest p1, int p2, int p3)
    {
        this.this$0 = p1;
        this.val$w = p2;
        this.val$h = p3;
        return;
    }

    public void run()
    {
        com.ideaworks3d.marmalade.LoaderActivity.m_Activity.m_View.surfaceChanged(0, 0, this.val$w, this.val$h);
        return;
    }
}
