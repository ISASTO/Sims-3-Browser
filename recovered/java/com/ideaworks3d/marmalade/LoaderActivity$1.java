package com.ideaworks3d.marmalade;
 class LoaderActivity$1 implements java.lang.Runnable {
    final synthetic com.ideaworks3d.marmalade.LoaderActivity this$0;
    final synthetic android.content.Intent val$i;

    LoaderActivity$1(com.ideaworks3d.marmalade.LoaderActivity p1, android.content.Intent p2)
    {
        this.this$0 = p1;
        this.val$i = p2;
        return;
    }

    public void run()
    {
        try {
            this.this$0.startActivityForResult(this.val$i, 123456);
        } catch (String v0_4) {
            com.ideaworks3d.marmalade.LoaderAPI.trace(new StringBuilder().append("Could not start activity: ").append(v0_4.getMessage()).toString());
        }
        return;
    }
}
