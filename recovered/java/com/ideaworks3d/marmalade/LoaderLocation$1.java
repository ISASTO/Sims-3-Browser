package com.ideaworks3d.marmalade;
 class LoaderLocation$1 implements java.lang.Runnable {
    final synthetic com.ideaworks3d.marmalade.LoaderLocation this$0;

    LoaderLocation$1(com.ideaworks3d.marmalade.LoaderLocation p1)
    {
        this.this$0 = p1;
        return;
    }

    public void run()
    {
        com.ideaworks3d.marmalade.LoaderLocation.access$302(this.this$0, new com.ideaworks3d.marmalade.LoaderLocation$LocationUpdateHandler(this.this$0));
        com.ideaworks3d.marmalade.LoaderLocation.access$000(this.this$0).requestLocationUpdates("gps", ((long) com.ideaworks3d.marmalade.LoaderLocation.access$400(this.this$0)), ((float) com.ideaworks3d.marmalade.LoaderLocation.access$500(this.this$0)), com.ideaworks3d.marmalade.LoaderLocation.access$300(this.this$0));
        com.ideaworks3d.marmalade.LoaderLocation.access$000(this.this$0).addGpsStatusListener(com.ideaworks3d.marmalade.LoaderLocation.access$300(this.this$0));
        return;
    }
}
