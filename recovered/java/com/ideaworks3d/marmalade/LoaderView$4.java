package com.ideaworks3d.marmalade;
 class LoaderView$4 implements java.lang.Runnable {
    final synthetic com.ideaworks3d.marmalade.LoaderView this$0;

    LoaderView$4(com.ideaworks3d.marmalade.LoaderView p1)
    {
        this.this$0 = p1;
        return;
    }

    public void run()
    {
        com.ideaworks3d.marmalade.LoaderView.access$100(this.this$0);
        try {
            com.ideaworks3d.marmalade.LoaderView.access$200(this.this$0);
            com.ideaworks3d.marmalade.LoaderView.access$100(this.this$0).notify();
            return;
        } catch (Throwable v1_0) {
            throw v1_0;
        }
    }
}
