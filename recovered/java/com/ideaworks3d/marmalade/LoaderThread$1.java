package com.ideaworks3d.marmalade;
 class LoaderThread$1 extends android.content.BroadcastReceiver {
    final synthetic com.ideaworks3d.marmalade.LoaderThread this$0;

    LoaderThread$1(com.ideaworks3d.marmalade.LoaderThread p1)
    {
        this.this$0 = p1;
        return;
    }

    public void onReceive(android.content.Context p5, android.content.Intent p6)
    {
        int v2_2;
        com.ideaworks3d.marmalade.LoaderThread.access$602(this.this$0, p6.getIntExtra("level", 0));
        com.ideaworks3d.marmalade.LoaderThread v0_3 = com.ideaworks3d.marmalade.LoaderThread.access$700(this.this$0);
        if (p6.getIntExtra("plugged", 0) == 0) {
            v2_2 = 0;
        } else {
            v2_2 = 1;
        }
        com.ideaworks3d.marmalade.LoaderThread.access$702(this.this$0, v2_2);
        if (v0_3 != com.ideaworks3d.marmalade.LoaderThread.access$700(this.this$0)) {
            com.ideaworks3d.marmalade.LoaderThread.access$800(this.this$0, com.ideaworks3d.marmalade.LoaderThread.access$700(this.this$0));
        }
        return;
    }
}
