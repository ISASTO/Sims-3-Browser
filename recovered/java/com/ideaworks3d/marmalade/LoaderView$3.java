package com.ideaworks3d.marmalade;
 class LoaderView$3 implements java.lang.Runnable {
    final synthetic com.ideaworks3d.marmalade.LoaderView this$0;

    LoaderView$3(com.ideaworks3d.marmalade.LoaderView p1)
    {
        this.this$0 = p1;
        return;
    }

    public void run()
    {
        ((android.os.PowerManager) this.this$0.m_LoaderActivity.getSystemService("power")).newWakeLock(26, this.getClass().getName()).acquire(3000);
        return;
    }
}
