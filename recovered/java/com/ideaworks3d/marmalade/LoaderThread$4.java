package com.ideaworks3d.marmalade;
 class LoaderThread$4 implements java.lang.Runnable {
    final synthetic com.ideaworks3d.marmalade.LoaderThread this$0;

    LoaderThread$4(com.ideaworks3d.marmalade.LoaderThread p1)
    {
        this.this$0 = p1;
        return;
    }

    public void run()
    {
        com.ideaworks3d.marmalade.LoaderThread.access$1200(this.this$0).createView(com.ideaworks3d.marmalade.LoaderThread.access$1100(this.this$0));
        com.ideaworks3d.marmalade.LoaderThread.access$1300(this.this$0);
        try {
            com.ideaworks3d.marmalade.LoaderThread.access$1300(this.this$0).notify();
            return;
        } catch (Throwable v1_2) {
            throw v1_2;
        }
    }
}
