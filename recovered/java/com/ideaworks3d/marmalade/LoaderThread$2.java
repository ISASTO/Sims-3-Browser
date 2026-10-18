package com.ideaworks3d.marmalade;
 class LoaderThread$2 extends android.content.BroadcastReceiver {
    final synthetic com.ideaworks3d.marmalade.LoaderThread this$0;

    LoaderThread$2(com.ideaworks3d.marmalade.LoaderThread p1)
    {
        this.this$0 = p1;
        return;
    }

    public void onReceive(android.content.Context p3, android.content.Intent p4)
    {
        com.ideaworks3d.marmalade.LoaderThread v0_6 = ((android.net.ConnectivityManager) p3.getSystemService("connectivity")).getActiveNetworkInfo();
        if ((v0_6 == null) || ((!v0_6.isAvailable()) || (!v0_6.isConnected()))) {
            com.ideaworks3d.marmalade.LoaderThread.access$900(this.this$0, 0);
        } else {
            com.ideaworks3d.marmalade.LoaderThread.access$900(this.this$0, 1);
        }
        return;
    }
}
